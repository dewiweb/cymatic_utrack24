using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Threading;
using System.Windows.Forms;

[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: AssemblyTitle("VUMeter")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyProduct("VUMeter")]
[assembly: AssemblyCopyright("Copyright © Microsoft 2011")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("118d86fb-12e9-431e-9939-0d5fb2766edf")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("1.0.0.0")]
namespace VUMeter;

public class VUMeter : UserControl
{
	private Bitmap mVUMeterImageOn;

	private Bitmap mVUMeterImageOff;

	private Bitmap mPeakHoldImage;

	private int mSegmentHeight = 3;

	private int mDecayTime = 25;

	private int mPeakHoldTime = 2000;

	private int mCurrentValue;

	private int mNewValue;

	private Timer mPeakHoldTimer;

	private int mMaxValue = 63;

	private int mMaxValueInternal;

	private int mPeakValue;

	private bool mHoldPeak = true;

	private bool mPeakHoldForever;

	private bool mPeakHoldFastRelease = true;

	private bool mHasContextMenu = true;

	private object oLock = new object();

	private RectangleF rect;

	private Thread LevelMeterDecayThread;

	private ManualResetEvent mlevelMeterDecayThreadPauseEvent;

	private MenuItem miPH;

	private MenuItem miHF;

	private MenuItem miFR;

	private Graphics graphics;

	private BufferedGraphics myBuffer;

	private bool mRunning = true;

	private IContainer components;

	public Bitmap VUMeterImageOff
	{
		get
		{
			return mVUMeterImageOff;
		}
		set
		{
			if (value != null)
			{
				mVUMeterImageOff = value;
				((Control)this).Height = ((Image)value).Height;
				((Control)this).Width = ((Image)value).Width;
			}
			else
			{
				mVUMeterImageOff = null;
			}
		}
	}

	public Bitmap VUMeterImageOn
	{
		get
		{
			return mVUMeterImageOn;
		}
		set
		{
			if (value != null)
			{
				mVUMeterImageOn = value;
			}
			else
			{
				mVUMeterImageOn = null;
			}
		}
	}

	public Bitmap PeakHoldImage
	{
		get
		{
			return mPeakHoldImage;
		}
		set
		{
			if (value != null)
			{
				mPeakHoldImage = value;
			}
			else
			{
				mPeakHoldImage = null;
			}
		}
	}

	public int CurrentValue
	{
		get
		{
			return mCurrentValue;
		}
		set
		{
			mCurrentValue = ((value > mMaxValue) ? mMaxValue : value);
		}
	}

	public int NewValue
	{
		get
		{
			return mNewValue;
		}
		set
		{
			lock (oLock)
			{
				mCurrentValue = ((value > mCurrentValue) ? value : mCurrentValue);
				mNewValue = value;
			}
		}
	}

	public bool HoldPeak
	{
		get
		{
			return mHoldPeak;
		}
		set
		{
			mHoldPeak = value;
		}
	}

	public int PeakHoldTime
	{
		get
		{
			return mPeakHoldTime;
		}
		set
		{
			mPeakHoldTime = value;
		}
	}

	public int DecayTime
	{
		get
		{
			return mDecayTime;
		}
		set
		{
			mDecayTime = value;
		}
	}

	public bool HasContextMenu
	{
		get
		{
			return mHasContextMenu;
		}
		set
		{
			mHasContextMenu = value;
			((Control)this).ContextMenu = (value ? ((Control)this).ContextMenu : null);
		}
	}

	public bool PeakHoldForever
	{
		get
		{
			return mPeakHoldForever;
		}
		set
		{
			mPeakHoldForever = value;
		}
	}

	public bool PeakHoldFastRelease
	{
		get
		{
			return mPeakHoldFastRelease;
		}
		set
		{
			mPeakHoldFastRelease = value;
		}
	}

	public VUMeter()
	{
		//IL_0063: Unknown result type (might be due to invalid IL or missing references)
		//IL_0069: Expected O, but got Unknown
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0079: Expected O, but got Unknown
		//IL_007f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Expected O, but got Unknown
		//IL_008f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0099: Expected O, but got Unknown
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
		InitializeComponent();
		((Control)this).DoubleBuffered = true;
		ContextMenu val = new ContextMenu();
		miPH = new MenuItem("Peak Hold");
		miHF = new MenuItem("Hold Forever");
		miFR = new MenuItem("Fast Release");
		miPH.Click += ContextMenuItem_Click;
		miHF.Click += ContextMenuItem_Click;
		miFR.Click += ContextMenuItem_Click;
		((Menu)miPH).Tag = "PH";
		((Menu)miHF).Tag = "HF";
		((Menu)miFR).Tag = "FR";
		((Menu)val).MenuItems.Add(miPH);
		((Menu)val).MenuItems.Add(miHF);
		((Menu)val).MenuItems.Add(miFR);
		miPH.Checked = mHoldPeak;
		miHF.Checked = mPeakHoldForever;
		miFR.Checked = mPeakHoldFastRelease;
		((Control)this).ContextMenu = val;
		((Control)this).SetStyle((ControlStyles)139266, true);
		new RectangleF(0f, 0f, 0f, 0f);
	}

	private void VUMeter_Load(object sender, EventArgs e)
	{
		mMaxValueInternal = ((Control)this).Height / mSegmentHeight;
		mPeakHoldTimer = new Timer(peakHoldTimer_callback, null, mPeakHoldTime, mPeakHoldTime);
		mCurrentValue = 1;
		LevelMeterDecayThread = new Thread(levelMeterDecayThread);
		mlevelMeterDecayThreadPauseEvent = new ManualResetEvent(initialState: false);
		if (!((Component)this).DesignMode && VUMeterImageOff != null)
		{
			LevelMeterDecayThread.Start();
		}
	}

	private void ContextMenuItem_Click(object sender, EventArgs args)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Expected O, but got Unknown
		MenuItem val = (MenuItem)sender;
		val.Checked = !val.Checked;
		switch (((Menu)val).Tag.ToString())
		{
		case "PH":
			mHoldPeak = val.Checked;
			if (!mHoldPeak)
			{
				miHF.Checked = false;
				miFR.Checked = false;
			}
			else
			{
				miHF.Checked = mPeakHoldForever;
				miFR.Checked = mPeakHoldFastRelease;
			}
			break;
		case "HF":
			miPH.Checked = true;
			miFR.Checked = !miHF.Checked;
			mHoldPeak = true;
			mPeakHoldForever = true;
			mPeakHoldFastRelease = false;
			mPeakHoldTimer.Change(-1, -1);
			break;
		case "FR":
			mHoldPeak = true;
			miHF.Checked = !miFR.Checked;
			mPeakHoldForever = false;
			mPeakHoldFastRelease = true;
			mPeakHoldTimer.Change(PeakHoldTime, 0);
			break;
		}
	}

	public void Stop()
	{
		mRunning = false;
		if (mlevelMeterDecayThreadPauseEvent != null)
		{
			mlevelMeterDecayThreadPauseEvent.Set();
		}
		if (mPeakHoldTimer != null)
		{
			mPeakHoldTimer.Change(-1, -1);
		}
		mPeakHoldTimer = null;
	}

	protected override void OnPaint(PaintEventArgs e)
	{
		drawVUMeter();
	}

	private void levelMeterDecayThread(object threadState)
	{
		graphics = ((Control)this).CreateGraphics();
		myBuffer = BufferedGraphicsManager.Current.Allocate(graphics, ((Control)this).DisplayRectangle);
		while (mRunning)
		{
			mlevelMeterDecayThreadPauseEvent.WaitOne(mDecayTime);
			if (!mRunning)
			{
				break;
			}
			mPeakValue = ((mPeakValue < mCurrentValue) ? mCurrentValue : mPeakValue);
			mCurrentValue = ((mCurrentValue > 0) ? (mCurrentValue - 2) : 0);
			mCurrentValue = ((mCurrentValue > 0) ? mCurrentValue : 0);
			drawVUMeter();
		}
		myBuffer.Dispose();
		graphics.Dispose();
	}

	private void drawVUMeter()
	{
		if (myBuffer == null)
		{
			return;
		}
		try
		{
			if (!mRunning)
			{
				return;
			}
			float num = ((Control)this).Height / mSegmentHeight;
			if (mVUMeterImageOff != null)
			{
				lock (oLock)
				{
					myBuffer.Graphics.DrawImage((Image)(object)mVUMeterImageOff, 0, 0);
				}
			}
			if (mVUMeterImageOn != null && mCurrentValue > 0)
			{
				float num2 = (float)mCurrentValue / (float)mMaxValue;
				int num3 = ((Control)this).Height - (int)(num * num2) * 3;
				rect.Height = ((Control)this).Height - num3;
				rect.Width = ((Control)this).Width;
				rect.X = 0f;
				rect.Y = num3;
				lock (oLock)
				{
					myBuffer.Graphics.DrawImage((Image)(object)mVUMeterImageOn, 0f, (float)num3, rect, (GraphicsUnit)2);
				}
			}
			if (PeakHoldImage != null && mPeakValue != 0 && mHoldPeak)
			{
				float num4 = (float)mPeakValue / (float)mMaxValue;
				int num5 = ((Control)this).Height - (int)(num * num4) * 3;
				lock (oLock)
				{
					myBuffer.Graphics.DrawImage((Image)(object)mPeakHoldImage, 0, num5);
				}
			}
			lock (oLock)
			{
				myBuffer.Render(graphics);
			}
		}
		catch
		{
			mCurrentValue = 0;
		}
	}

	private void peakHoldTimer_callback(object state)
	{
		if (!mPeakHoldForever)
		{
			mPeakValue = 0;
		}
	}

	private void VUMeter_Click(object sender, EventArgs e)
	{
		mPeakValue = 0;
	}

	public void setValue(int value)
	{
		mCurrentValue = ((value > mCurrentValue) ? value : mCurrentValue);
		mNewValue = value;
	}

	protected override void Dispose(bool disposing)
	{
		if (disposing && components != null)
		{
			components.Dispose();
		}
		((ContainerControl)this).Dispose(disposing);
	}

	private void InitializeComponent()
	{
		((Control)this).SuspendLayout();
		((ContainerControl)this).AutoScaleDimensions = new SizeF(6f, 13f);
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)1;
		((Control)this).Name = "VUMeter";
		((Control)this).Size = new Size(20, 200);
		((UserControl)this).Load += VUMeter_Load;
		((Control)this).Click += VUMeter_Click;
		((Control)this).ResumeLayout(false);
	}
}
