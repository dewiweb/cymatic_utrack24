using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Windows.Forms;

[assembly: AssemblyTitle("Fader")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyProduct("Fader")]
[assembly: AssemblyCopyright("Copyright © Microsoft 2011")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("28f99975-aa1c-4e41-b618-e8135fab5617")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("1.0.0.0")]
namespace Fader;

public class fader : UserControl
{
	public delegate void FaderMove(object sender, SliderMoveEventArgs moveEventArgs);

	public delegate void Activate(object sender, SliderMoveEventArgs moveEventArgs);

	public delegate void Deactivate(object sender, SliderMoveEventArgs moveEventArgs);

	public enum E_ChannelIOType
	{
		Standard,
		CoaxSpdif,
		OpticalSpdif,
		Adat,
		Smux
	}

	public enum E_Channel
	{
		eMaster,
		eLeft,
		eRight
	}

	private IContainer components;

	private FaderButton mFaderButton = new FaderButton();

	private Bitmap mSliderImg;

	private Bitmap mSliderBkgImg;

	private int mFaderAbsMaxTopPosition;

	private int mFaderAbsMinBottomPosition;

	private int mFaderAbsMaxRightPosition;

	private int mFaderAbsMaxLeftPosition;

	private int mMaxDBValue;

	private int mMinDBValue = -63;

	private double mCurrentValue;

	private int mouseY;

	private int mouseX;

	private bool isMouseDown;

	private int mFaderLinearToRelPixelPos = 60;

	private int mFaderLinearToDBPos = -6;

	private E_Channel mChannel;

	private E_ChannelIOType mChannelIOType;

	private int mAVCFeatureFunctionBlockId;

	private int mUSBFunctionBlockId;

	private bool mVertical = true;

	private bool mValueLinear;

	private double mFaderMovedByDB;

	private int mPollingTime;

	private double mStep = 1.0;

	private double mClickStep = 1.0;

	private double? mLastValue = null;

	public Bitmap SliderBackgroundImage
	{
		get
		{
			return mSliderBkgImg;
		}
		set
		{
			mSliderBkgImg = value;
			((Control)this).BackgroundImage = (Image)(object)value;
			if (mSliderBkgImg != null)
			{
				((Control)this).Size = new Size(((Image)mSliderBkgImg).Width, ((Image)mSliderBkgImg).Height);
			}
		}
	}

	public Bitmap SliderImage
	{
		get
		{
			return mSliderImg;
		}
		set
		{
			mSliderImg = value;
		}
	}

	public int FaderMaxTopPosition
	{
		get
		{
			return mFaderAbsMaxTopPosition;
		}
		set
		{
			mFaderAbsMaxTopPosition = value;
		}
	}

	public int FaderMinBottomPosition
	{
		get
		{
			return mFaderAbsMinBottomPosition;
		}
		set
		{
			mFaderAbsMinBottomPosition = value;
		}
	}

	public int FaderMaxLeftPosition
	{
		get
		{
			return mFaderAbsMaxLeftPosition;
		}
		set
		{
			mFaderAbsMaxLeftPosition = value;
		}
	}

	public int FaderMaxRightPosition
	{
		get
		{
			return mFaderAbsMaxRightPosition;
		}
		set
		{
			mFaderAbsMaxRightPosition = value;
		}
	}

	public int MaxDBValue
	{
		get
		{
			return mMaxDBValue;
		}
		set
		{
			mMaxDBValue = value;
		}
	}

	public int MinDBValue
	{
		get
		{
			return mMinDBValue;
		}
		set
		{
			mMinDBValue = value;
		}
	}

	public double CurrentValue
	{
		get
		{
			return mCurrentValue;
		}
		set
		{
			mCurrentValue = value;
		}
	}

	public int FaderLinearToRelPixelPos
	{
		get
		{
			return mFaderLinearToRelPixelPos;
		}
		set
		{
			mFaderLinearToRelPixelPos = value;
		}
	}

	public int FaderLinearDBPos
	{
		get
		{
			return mFaderLinearToDBPos;
		}
		set
		{
			mFaderLinearToDBPos = value;
		}
	}

	public double FaderMovedByDB
	{
		get
		{
			return mFaderMovedByDB;
		}
		set
		{
			mFaderMovedByDB = value;
		}
	}

	public E_Channel Channel
	{
		get
		{
			return mChannel;
		}
		set
		{
			mChannel = value;
		}
	}

	public E_ChannelIOType ChannelIOMode
	{
		get
		{
			return mChannelIOType;
		}
		set
		{
			mChannelIOType = value;
		}
	}

	public int AVCFeatureFunctionBlockId
	{
		get
		{
			return mAVCFeatureFunctionBlockId;
		}
		set
		{
			mAVCFeatureFunctionBlockId = value;
		}
	}

	public int USBFunctionBlockId
	{
		get
		{
			return mUSBFunctionBlockId;
		}
		set
		{
			mUSBFunctionBlockId = value;
		}
	}

	public bool Vertical
	{
		get
		{
			return mVertical;
		}
		set
		{
			mVertical = value;
		}
	}

	public bool ValueLinear
	{
		get
		{
			return mValueLinear;
		}
		set
		{
			mValueLinear = value;
		}
	}

	public int PollingTime
	{
		get
		{
			return mPollingTime;
		}
		set
		{
			mPollingTime = value;
		}
	}

	public double Step
	{
		get
		{
			return mStep;
		}
		set
		{
			mStep = value;
		}
	}

	public double ClickStep
	{
		get
		{
			return mClickStep;
		}
		set
		{
			mClickStep = value;
		}
	}

	public event FaderMove OnFaderMove;

	public event Activate OnActivate;

	public event Deactivate OnDeactivate;

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
		((Control)this).Name = "fader";
		((Control)this).Size = new Size(30, 205);
		((UserControl)this).Load += fader_Load;
		((Control)this).DoubleClick += fader_DoubleClick;
		((Control)this).ResumeLayout(false);
	}

	public fader()
	{
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
		InitializeComponent();
		((Control)this).SetStyle((ControlStyles)73730, true);
	}

	private void fader_Load(object sender, EventArgs e)
	{
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Expected O, but got Unknown
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Expected O, but got Unknown
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Expected O, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Expected O, but got Unknown
		//IL_009c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Expected O, but got Unknown
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0124: Unknown result type (might be due to invalid IL or missing references)
		//IL_0129: Unknown result type (might be due to invalid IL or missing references)
		((Control)mFaderButton).Size = new Size(24, 50);
		((Control)mFaderButton).Left = 3;
		((ButtonBase)mFaderButton).FlatStyle = (FlatStyle)0;
		mFaderButton.ButtonBkgImage = SliderImage;
		((Control)mFaderButton).MouseDown += new MouseEventHandler(mSlider_onMouseDown);
		((Control)mFaderButton).MouseUp += new MouseEventHandler(mSlider_onMouseUp);
		((Control)mFaderButton).MouseMove += new MouseEventHandler(mSlider_onMouseMove);
		((Control)this).MouseDown += new MouseEventHandler(mFader_onMouseDown);
		((Control)this).MouseUp += new MouseEventHandler(mfader_MouseUp);
		if (mVertical)
		{
			((Control)mFaderButton).Top = ((Control)this).Height - ((Control)mFaderButton).Height - mFaderAbsMinBottomPosition;
			((Control)mFaderButton).Left = ((Control)this).Width / 2 - ((Control)mFaderButton).Width / 2;
		}
		else
		{
			((Control)mFaderButton).Top = ((Control)this).Height / 2 - ((Control)mFaderButton).Height / 2;
		}
		((Control)this).Margin = Padding.Add(new Padding(1, 1, 1, 1), new Padding(1, 1, 1, 1));
		((Control)this).Controls.Add((Control)(object)mFaderButton);
		setFader(mCurrentValue);
	}

	public SliderMoveEventArgs getCurrentValue()
	{
		double num = mCurrentValue;
		int num2 = (mVertical ? mFaderAbsMaxTopPosition : mFaderAbsMaxLeftPosition);
		int num3 = (mVertical ? mFaderAbsMinBottomPosition : mFaderAbsMaxRightPosition);
		int num4 = (mVertical ? (((Control)mFaderButton).Top - mFaderAbsMinBottomPosition) : (((Control)mFaderButton).Left - mFaderAbsMaxLeftPosition + ((Control)mFaderButton).Width / 2));
		if (mValueLinear)
		{
			double num5 = mMaxDBValue - mMinDBValue;
			double num6 = ((Control)this).Width - num2 - num3;
			double num7 = (double)num4 / num6;
			mCurrentValue = (double)mMinDBValue + num5 * num7;
		}
		else if (num4 <= mFaderLinearToRelPixelPos)
		{
			int num8 = mFaderLinearToDBPos - mMaxDBValue;
			double num9 = (double)num4 / (double)mFaderLinearToRelPixelPos;
			mCurrentValue = (double)num8 * num9;
		}
		else
		{
			num4 = ((Control)mFaderButton).Top - mFaderAbsMinBottomPosition - mFaderLinearToRelPixelPos;
			int num10 = ((Control)this).Height - (mFaderAbsMaxTopPosition + mFaderAbsMinBottomPosition) - ((Control)mFaderButton).Height - mFaderLinearToRelPixelPos;
			double x = (double)num4 / (double)num10;
			double num11 = Math.Pow(x, 2.0);
			double num12 = (double)mFaderLinearToDBPos - num11 * (double)(mFaderLinearToDBPos - mMinDBValue);
			if (num12 < -16.0)
			{
				mCurrentValue = Math.Round(num12, 0);
			}
			else if (num12 < -8.5)
			{
				mCurrentValue = Math.Round(num12 * 2.0, 0) / 2.0;
			}
			else if (num12 < -6.8)
			{
				mCurrentValue = Math.Round(num12 * 5.0, 0) / 5.0;
			}
			else
			{
				mCurrentValue = num12;
			}
		}
		mCurrentValue = stepCurrentValue(mCurrentValue);
		return new SliderMoveEventArgs(mCurrentValue, mCurrentValue - num);
	}

	public void setFader(double dVolume)
	{
		dVolume = stepCurrentValue(dVolume);
		CurrentValue = dVolume;
		int num = (mVertical ? mFaderAbsMaxTopPosition : mFaderAbsMaxLeftPosition);
		int num2 = (mVertical ? mFaderAbsMinBottomPosition : mFaderAbsMaxRightPosition);
		if (mValueLinear)
		{
			double num3 = mMaxDBValue - mMinDBValue;
			double num4 = ((Control)this).Width - num - num2;
			double num5 = num3 - ((double)mMaxDBValue - dVolume);
			double num6 = num5 / num3;
			double num7 = num4 * num6;
			if (Vertical)
			{
				((Control)mFaderButton).Top = num + (int)num7 - ((Control)mFaderButton).Height / 2;
			}
			else
			{
				((Control)mFaderButton).Left = num + (int)num7 - ((Control)mFaderButton).Width / 2;
			}
		}
		else if (dVolume > (double)mFaderLinearToDBPos)
		{
			double num8 = dVolume / (double)(mFaderLinearToDBPos - mMaxDBValue) * (double)mFaderLinearToRelPixelPos;
			((Control)mFaderButton).Top = num + (int)num8;
		}
		else
		{
			int num9 = ((Control)this).Height - (num + num2) - ((Control)mFaderButton).Height - mFaderLinearToRelPixelPos;
			double num10 = (double)num9 * Math.Sqrt(-1.0 * ((dVolume - (double)mFaderLinearToDBPos) / (double)(mFaderLinearToDBPos - mMinDBValue))) + (double)num2 + (double)mFaderLinearToRelPixelPos;
			((Control)mFaderButton).Top = (int)num10;
		}
	}

	private void mSlider_onMouseDown(object sender, MouseEventArgs e)
	{
		isMouseDown = true;
		mouseY = e.Y;
		mouseX = e.X;
		if (this.OnActivate != null)
		{
			this.OnActivate(this, null);
		}
	}

	private void mSlider_onMouseUp(object sender, MouseEventArgs e)
	{
		isMouseDown = false;
		if (this.OnDeactivate != null)
		{
			this.OnDeactivate(this, null);
		}
	}

	private void mSlider_onMouseMove(object sender, MouseEventArgs e)
	{
		if (mVertical)
		{
			if (!isMouseDown)
			{
				return;
			}
			int y = e.Y;
			int num = ((Control)mFaderButton).Top - (mouseY - y);
			if (num > mFaderAbsMaxTopPosition && num < ((Control)this).Height - mFaderAbsMinBottomPosition - ((Control)mFaderButton).Height)
			{
				((Control)mFaderButton).Top = num;
			}
			else if (num < mFaderAbsMaxTopPosition)
			{
				((Control)mFaderButton).Top = mFaderAbsMaxTopPosition;
			}
			else if (num > ((Control)this).Height - mFaderAbsMinBottomPosition - ((Control)mFaderButton).Height)
			{
				((Control)mFaderButton).Top = ((Control)this).Height - mFaderAbsMinBottomPosition - ((Control)mFaderButton).Height;
			}
		}
		else
		{
			if (!isMouseDown)
			{
				return;
			}
			int x = e.X;
			int num2 = ((Control)mFaderButton).Left - (mouseX - x);
			if (num2 + ((Control)mFaderButton).Width / 2 > mFaderAbsMaxLeftPosition && num2 < ((Control)this).Width - mFaderAbsMaxRightPosition - ((Control)mFaderButton).Width / 2)
			{
				((Control)mFaderButton).Left = num2;
			}
			else if (num2 + ((Control)mFaderButton).Width / 2 < mFaderAbsMaxLeftPosition)
			{
				((Control)mFaderButton).Left = mFaderAbsMaxLeftPosition - ((Control)mFaderButton).Width / 2;
			}
			else if (num2 > ((Control)this).Width - mFaderAbsMaxRightPosition - ((Control)mFaderButton).Width)
			{
				((Control)mFaderButton).Left = ((Control)this).Width - mFaderAbsMaxRightPosition - ((Control)mFaderButton).Width / 2;
			}
		}
		if (this.OnFaderMove != null)
		{
			SliderMoveEventArgs currentValue = getCurrentValue();
			if (currentValue.currentValue != mLastValue)
			{
				mLastValue = currentValue.currentValue;
				this.OnFaderMove(this, currentValue);
			}
		}
	}

	private void mFader_onMouseDown(object sender, MouseEventArgs e)
	{
		int y = e.Y;
		int x = e.X;
		double num = 0.0;
		num = ((!Vertical) ? ((x < ((Control)mFaderButton).Left) ? (mCurrentValue + 2.0 * mStep) : (mCurrentValue - mClickStep)) : ((y < ((Control)mFaderButton).Top) ? (mCurrentValue + 2.0 * mStep) : (num = mCurrentValue - mClickStep)));
		if (num != mLastValue)
		{
			setFader(num);
			SliderMoveEventArgs moveEventArgs = new SliderMoveEventArgs(num, mClickStep);
			if (this.OnActivate != null)
			{
				this.OnActivate(this, null);
			}
			if (this.OnFaderMove != null)
			{
				this.OnFaderMove(this, moveEventArgs);
			}
		}
	}

	private void mfader_MouseUp(object sender, MouseEventArgs e)
	{
		if (this.OnDeactivate != null)
		{
			this.OnDeactivate(this, null);
		}
	}

	private void fader_DoubleClick(object sender, EventArgs e)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		int y = ((MouseEventArgs)e).Y;
		int x = ((MouseEventArgs)e).X;
		if (Vertical)
		{
			int num = ((Control)mFaderButton).Top + (y - ((Control)mFaderButton).Top) - ((Control)mFaderButton).Height / 2;
			num = ((num < mFaderAbsMinBottomPosition) ? mFaderAbsMinBottomPosition : num);
			num = ((num > ((Control)this).Height - mFaderAbsMaxTopPosition) ? (((Control)this).Height - mFaderAbsMaxTopPosition) : num);
			((Control)mFaderButton).Top = num;
		}
		else
		{
			int num2 = ((Control)mFaderButton).Left + (x - ((Control)mFaderButton).Left) - ((Control)mFaderButton).Width / 2;
			num2 = ((num2 + ((Control)mFaderButton).Width / 2 < mFaderAbsMaxLeftPosition) ? (mFaderAbsMaxLeftPosition - ((Control)mFaderButton).Width / 2) : num2);
			num2 = ((num2 > ((Control)this).Width - mFaderAbsMaxRightPosition - ((Control)mFaderButton).Width / 2) ? (((Control)this).Width - ((Control)mFaderButton).Width) : num2);
			((Control)mFaderButton).Left = num2;
		}
		if (this.OnFaderMove != null)
		{
			this.OnFaderMove(this, getCurrentValue());
		}
	}

	public double stepCurrentValue(double val)
	{
		int num = (int)(val / mStep);
		return (double)num * mStep;
	}
}
public class FaderButton : Button
{
	public Bitmap mButtonBkgImage;

	public Bitmap ButtonBkgImage
	{
		get
		{
			return mButtonBkgImage;
		}
		set
		{
			mButtonBkgImage = value;
			if (mButtonBkgImage != null)
			{
				((ButtonBase)this).FlatAppearance.BorderSize = 0;
				((Control)this).Size = new Size(((Image)mButtonBkgImage).Width - 2, ((Image)mButtonBkgImage).Height - 2);
			}
		}
	}

	protected override void OnPaint(PaintEventArgs pevent)
	{
		if (mButtonBkgImage != null)
		{
			((ButtonBase)this).Image = (Image)(object)mButtonBkgImage;
		}
		((ButtonBase)this).OnPaint(pevent);
	}
}
public class SliderMoveEventArgs : EventArgs
{
	public double currentValue;

	public double movedBy;

	public SliderMoveEventArgs(double currentValue, double movedBy)
	{
		this.currentValue = currentValue;
		this.movedBy = movedBy;
	}
}
