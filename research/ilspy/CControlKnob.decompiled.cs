using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Windows.Forms;

[assembly: AssemblyTitle("CControlKnob")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyProduct("CControlKnob")]
[assembly: AssemblyCopyright("Copyright © Microsoft 2011")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("d5cfd72b-2e1a-4e69-82fa-444b2fd59e56")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.Default | DebuggableAttribute.DebuggingModes.DisableOptimizations | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints | DebuggableAttribute.DebuggingModes.EnableEditAndContinue)]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("1.0.0.0")]
namespace CControlKnob;

public class ControlKnob : UserControl
{
	public delegate void onKnobRotate(object sender, double RotateAngle);

	public delegate void onActivate(object sender);

	public delegate void onDeactivate(object sender);

	public enum E_Channel
	{
		eMaster,
		eLeft,
		eRight
	}

	private TraceSource TrcSource = new TraceSource("Trace Source");

	private SourceSwitch TrcSwitch = new SourceSwitch("Trace Switch");

	private E_Channel mChannel;

	private int mAVCFeatureFunctionBlockId;

	private int mUSBFunctionBlockId;

	private Bitmap mKnobImage;

	private Bitmap mBkgImg;

	private int mAngle = 0;

	private string mTransparentColorRGB;

	private Color mTransparentColor;

	private int XPosStart;

	private int YPosStart;

	private int mStartAngle;

	private int mMinRotate = -100;

	private int mMaxRotate = 100;

	private int mMinValue = -100;

	private int mMaxValue = 100;

	private int maxMoveDist = 360;

	private int mValue = 0;

	private bool mActive = false;

	private bool mMouseDown = false;

	private IContainer components = null;

	public Bitmap KnobImage
	{
		get
		{
			return mKnobImage;
		}
		set
		{
			mKnobImage = value;
			if (value != null)
			{
				drawKnob();
			}
		}
	}

	public Bitmap BkgImg
	{
		get
		{
			return mBkgImg;
		}
		set
		{
			mBkgImg = value;
			((Control)this).Width = ((Image)mBkgImg).Width;
			((Control)this).Height = ((Image)mBkgImg).Height;
		}
	}

	public int Angle
	{
		get
		{
			return mAngle;
		}
		set
		{
			mAngle = value;
			drawKnob();
			if (this.OnRotate != null)
			{
				this.OnRotate(this, value);
			}
		}
	}

	public int Value
	{
		get
		{
			return mValue;
		}
		set
		{
			mValue = value;
		}
	}

	public string TransparentColorRGB
	{
		get
		{
			return mTransparentColorRGB;
		}
		set
		{
			mTransparentColorRGB = value;
			if (value != null)
			{
				mTransparentColor = HexStringToColor(value);
			}
		}
	}

	public int MinRotate
	{
		get
		{
			return mMinRotate;
		}
		set
		{
			mMinRotate = value;
		}
	}

	public int MaxRotate
	{
		get
		{
			return mMaxRotate;
		}
		set
		{
			mMaxRotate = value;
		}
	}

	public int MinValue
	{
		get
		{
			return mMinValue;
		}
		set
		{
			mMinValue = value;
		}
	}

	public int MaxValue
	{
		get
		{
			return mMaxValue;
		}
		set
		{
			mMaxValue = value;
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

	public bool Active => mActive;

	public event onKnobRotate OnRotate;

	public event onActivate OnActivate;

	public event onDeactivate OnDeactivate;

	public ControlKnob()
	{
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
		InitializeComponent();
	}

	public void init(int value)
	{
		mAngle = value;
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
		drawKnob();
	}

	public void rotateTo(int angle)
	{
		Angle = angle;
		float num = MaxRotate - MinRotate;
		float num2 = MaxValue - MinValue;
		float num3 = Angle - MinRotate;
		float num4 = num3 / num;
		mValue = Convert.ToInt16(num2 * num4);
	}

	public void upDateKnobPosition(int angle)
	{
		mAngle = angle;
		drawKnob();
	}

	protected override void OnPaint(PaintEventArgs e)
	{
		drawKnob();
	}

	private void drawKnob()
	{
		BufferedGraphicsContext current = BufferedGraphicsManager.Current;
		BufferedGraphics val = current.Allocate(((Control)this).CreateGraphics(), ((Control)this).DisplayRectangle);
		if (mBkgImg != null)
		{
			Bitmap val2 = ResizeImage(mBkgImg, new Size(((Image)mBkgImg).Width, ((Image)mBkgImg).Height));
			RectangleF rectangleF = new RectangleF(0f, 0f, ((Image)mBkgImg).Width, ((Image)mBkgImg).Height);
			val.Graphics.DrawImage((Image)(object)val2, 0f, 0f, rectangleF, (GraphicsUnit)2);
		}
		if (mKnobImage != null)
		{
			RectangleF rectangleF = new RectangleF(0f, 0f, ((Image)mBkgImg).Width, ((Image)mBkgImg).Height);
			int num = ((Control)this).Height / 2 - ((Image)mKnobImage).Height / 2;
			int num2 = ((Control)this).Width / 2 - ((Image)mKnobImage).Width / 2;
			bool flag = 1 == 0;
			mKnobImage.MakeTransparent(mTransparentColor);
			int num3 = ((mAngle < 0) ? (360 + mAngle) : mAngle);
			Bitmap val3 = RotateImage((Image)(object)mKnobImage, new PointF(((Image)mKnobImage).Width / 2, ((Image)mKnobImage).Height / 2), num3);
			val.Graphics.DrawImage((Image)(object)val3, (float)num2, (float)num, rectangleF, (GraphicsUnit)2);
		}
		if (mKnobImage != null || mBkgImg != null)
		{
			val.Render();
			val.Render(((Control)this).CreateGraphics());
		}
		val.Dispose();
	}

	private Bitmap RotateImage(Image image, PointF offset, float angle)
	{
		//IL_0023: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Expected O, but got Unknown
		if (image == null)
		{
			throw new ArgumentNullException("image");
		}
		Bitmap val = new Bitmap(image.Width, image.Height);
		val.SetResolution(image.HorizontalResolution, image.VerticalResolution);
		Graphics val2 = Graphics.FromImage((Image)(object)val);
		val2.TranslateTransform(offset.X, offset.Y);
		val2.RotateTransform(angle);
		val2.TranslateTransform(0f - offset.X, 0f - offset.Y);
		val2.DrawImage(image, new PointF(0f, 0f));
		return val;
	}

	public static Color HexStringToColor(string hexColor)
	{
		Color empty = Color.Empty;
		int num = Convert.ToInt32(hexColor, 16);
		int blue = num & 0xFF;
		int green = num & 0xFF00;
		int red = num & 0xFF0000;
		return Color.FromArgb(red, green, blue);
	}

	private Bitmap ResizeImage(Bitmap imgToResize, Size size)
	{
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0015: Expected O, but got Unknown
		Bitmap val = new Bitmap(size.Width, size.Height);
		Graphics val2 = Graphics.FromImage((Image)(object)val);
		try
		{
			val2.InterpolationMode = (InterpolationMode)7;
			val2.DrawImage((Image)(object)imgToResize, 0, 0, size.Width, size.Height);
		}
		finally
		{
			((IDisposable)val2)?.Dispose();
		}
		return val;
	}

	private void ControlKnob_MouseDown(object sender, MouseEventArgs e)
	{
		if (!mMouseDown)
		{
			mMouseDown = true;
			XPosStart = e.X;
			YPosStart = e.Y;
			mStartAngle = Angle;
		}
	}

	private void ControlKnob_MouseUp(object sender, MouseEventArgs e)
	{
		mActive = true;
		mMouseDown = false;
		if (this.OnActivate != null)
		{
			this.OnActivate(this);
		}
	}

	private void ControlKnob_MouseMove(object sender, MouseEventArgs e)
	{
		if (mMouseDown && (e.X != XPosStart || e.Y != YPosStart))
		{
			mActive = true;
			int num = 0;
			double num2 = 0.0;
			int num3 = ((e.X < XPosStart) ? (XPosStart - e.X) : (e.X - XPosStart));
			int num4 = ((e.Y < YPosStart) ? (YPosStart - e.Y) : (e.Y - YPosStart));
			num2 = Math.Sqrt(Math.Pow(num3, 2.0) + Math.Pow(num4, 2.0));
			double num5 = num2 / (double)maxMoveDist;
			num5 = ((num5 > 1.0) ? 1.0 : num5);
			num5 = Math.Pow(num5, 1.0);
			num = mStartAngle;
			float num6 = e.X - XPosStart;
			float num7 = e.Y - YPosStart;
			double num8 = Math.Atan2(num7, num6) * 180.0 / Math.PI;
			double num9 = 0.0;
			if ((num8 >= -90.0 && num8 <= 90.0) || (num8 < -90.0 && num8 >= -180.0))
			{
				num9 = num8 + 90.0;
			}
			else if (num8 > 90.0 && num8 <= 180.0)
			{
				num9 = num8 - 270.0;
			}
			int num10 = Math.Sign(num9);
			num10 = ((num10 == 0) ? 1 : num10);
			int num11 = 0;
			num11 = (((mStartAngle > 0 || !(num9 <= 0.0)) && (mStartAngle < 0 || !(num9 >= 0.0))) ? (Math.Abs(mStartAngle) + Math.Abs((int)num9)) : (((double)mStartAngle > num9) ? (mStartAngle - (int)num9) : ((int)num9 - mStartAngle)));
			if (num2 <= 50.0)
			{
				int num12 = (int)((double)num11 / 50.0 * (double)(int)num2) * Math.Sign(num9);
				num9 = mStartAngle + num12;
			}
			num9 = ((num9 < (double)MinRotate) ? ((double)MinRotate) : num9);
			num9 = ((num9 > (double)MaxRotate) ? ((double)MaxRotate) : num9);
			Angle = (int)num9;
			float num13 = MaxRotate - MinRotate;
			float num14 = MaxValue - MinValue;
			float num15 = Angle - MinRotate;
			float num16 = num15 / num13;
			mValue = Convert.ToInt16(num14 * num16);
		}
	}

	private void ControlKnob_MouseEnter(object sender, EventArgs e)
	{
		mActive = true;
		if (this.OnActivate != null)
		{
			this.OnActivate(this);
		}
	}

	private void ControlKnob_MouseLeave(object sender, EventArgs e)
	{
		if (!mMouseDown)
		{
			mActive = false;
			if (this.OnDeactivate != null)
			{
				this.OnDeactivate(this);
			}
		}
	}

	private void ControlKnob_DblClick(object sender, MouseEventArgs e)
	{
		Angle = 0;
		mValue = 0;
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
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Expected O, but got Unknown
		//IL_006a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0074: Expected O, but got Unknown
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ad: Expected O, but got Unknown
		//IL_00b6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c0: Expected O, but got Unknown
		((Control)this).SuspendLayout();
		((ContainerControl)this).AutoScaleDimensions = new SizeF(8f, 16f);
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)1;
		((Control)this).Margin = new Padding(0);
		((Control)this).Name = "ControlKnob";
		((Control)this).Size = new Size(50, 50);
		((Control)this).MouseDoubleClick += new MouseEventHandler(ControlKnob_DblClick);
		((Control)this).MouseDown += new MouseEventHandler(ControlKnob_MouseDown);
		((Control)this).MouseEnter += ControlKnob_MouseEnter;
		((Control)this).MouseLeave += ControlKnob_MouseLeave;
		((Control)this).MouseMove += new MouseEventHandler(ControlKnob_MouseMove);
		((Control)this).MouseUp += new MouseEventHandler(ControlKnob_MouseUp);
		((Control)this).ResumeLayout(false);
	}
}
