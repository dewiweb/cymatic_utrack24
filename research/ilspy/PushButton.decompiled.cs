using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Windows.Forms;

[assembly: AssemblyTitle("PushButton")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyProduct("PushButton")]
[assembly: AssemblyCopyright("Copyright © Microsoft 2011")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("6ef94f59-bf2a-4e75-9023-57bfa9d0bfbe")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.Default | DebuggableAttribute.DebuggingModes.DisableOptimizations | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints | DebuggableAttribute.DebuggingModes.EnableEditAndContinue)]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("1.0.0.0")]
namespace PushButton;

public class CPushButton : UserControl
{
	public delegate void onPush(object sender, bool state);

	public enum E_Channel
	{
		eMaster,
		eLeft,
		eRight
	}

	private Bitmap mImageOn;

	private Bitmap mImageOff;

	private Bitmap mImageMouseDown;

	private Bitmap mBkgImage;

	private E_Channel mChannel;

	private bool mDisabled = false;

	private int mAVCFeatureFunctionBlockId;

	private int mUSBFunctionBlockId;

	private bool mState = false;

	private IContainer components = null;

	private PictureBox pictureBox1;

	public Bitmap ImageOn
	{
		get
		{
			return mImageOn;
		}
		set
		{
			mImageOn = value;
			if (value != null)
			{
				pictureBox1.Image = (Image)(object)mImageOn;
				((Control)pictureBox1).Width = ((Image)mImageOn).Width;
				((Control)pictureBox1).Height = ((Image)mImageOn).Height;
				((Control)pictureBox1).Top = ((Control)this).Height / 2 - ((Image)mImageOn).Height / 2;
				((Control)pictureBox1).Left = ((Control)this).Width / 2 - ((Image)mImageOn).Width / 2;
			}
		}
	}

	public Bitmap ImageOff
	{
		get
		{
			return mImageOff;
		}
		set
		{
			mImageOff = value;
			if (value != null)
			{
				pictureBox1.Image = (Image)(object)mImageOff;
				((Control)pictureBox1).Width = ((Image)mImageOff).Width;
				((Control)pictureBox1).Height = ((Image)mImageOff).Height;
				((Control)pictureBox1).Top = ((Control)this).Height / 2 - ((Image)mImageOff).Height / 2;
				((Control)pictureBox1).Left = ((Control)this).Width / 2 - ((Image)mImageOff).Width / 2;
			}
		}
	}

	public Bitmap ImageMouseDown
	{
		get
		{
			return mImageMouseDown;
		}
		set
		{
			mImageMouseDown = value;
		}
	}

	public Bitmap BkgImage
	{
		get
		{
			return mBkgImage;
		}
		set
		{
			mBkgImage = value;
			((Control)this).BackgroundImage = (Image)(object)mBkgImage;
		}
	}

	public bool State
	{
		get
		{
			return mState;
		}
		set
		{
			mState = value;
			pictureBox1.Image = (Image)(object)(mState ? mImageOn : mImageOff);
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

	public bool Disabled
	{
		get
		{
			return mDisabled;
		}
		set
		{
			mDisabled = value;
		}
	}

	public event onPush OnPush;

	public CPushButton()
	{
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
		InitializeComponent();
	}

	public void setState(bool bState)
	{
		State = bState;
	}

	private void CPushButton_Load(object sender, EventArgs e)
	{
	}

	private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
	{
		if (!mDisabled)
		{
			mState = !mState;
			if (this.OnPush != null)
			{
				this.OnPush(this, mState);
			}
			pictureBox1.Image = (Image)(object)(mState ? mImageOn : mImageOff);
		}
	}

	private void CPushButton_Resize(object sender, EventArgs e)
	{
		if (mImageOff != null)
		{
			((Control)pictureBox1).Top = ((Control)this).Height / 2 - ((Image)mImageOff).Height / 2;
			((Control)pictureBox1).Left = ((Control)this).Width / 2 - ((Image)mImageOff).Width / 2;
		}
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
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_000c: Expected O, but got Unknown
		//IL_007f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Expected O, but got Unknown
		pictureBox1 = new PictureBox();
		((ISupportInitialize)pictureBox1).BeginInit();
		((Control)this).SuspendLayout();
		((Control)pictureBox1).Location = new Point(7, 7);
		((Control)pictureBox1).Name = "pictureBox1";
		((Control)pictureBox1).Size = new Size(61, 40);
		pictureBox1.TabIndex = 0;
		pictureBox1.TabStop = false;
		((Control)pictureBox1).MouseUp += new MouseEventHandler(pictureBox1_MouseUp);
		((ContainerControl)this).AutoScaleDimensions = new SizeF(6f, 13f);
		((ContainerControl)this).AutoScaleMode = (AutoScaleMode)1;
		((Control)this).Controls.Add((Control)(object)pictureBox1);
		((Control)this).Name = "CPushButton";
		((Control)this).Size = new Size(77, 54);
		((UserControl)this).Load += CPushButton_Load;
		((Control)this).Resize += CPushButton_Resize;
		((ISupportInitialize)pictureBox1).EndInit();
		((Control)this).ResumeLayout(false);
	}
}
