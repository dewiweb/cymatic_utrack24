using System;
using System.ComponentModel;
using System.ComponentModel.Design;
using System.Drawing;
using System.Drawing.Design;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Windows.Forms;

[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("0.0.0.0")]
namespace FlatTabControl;

internal class Win32
{
	public struct RECT
	{
		public int Left;

		public int Top;

		public int Right;

		public int Bottom;
	}

	public struct WINDOWPOS
	{
		public IntPtr hwnd;

		public IntPtr hwndAfter;

		public int x;

		public int y;

		public int cx;

		public int cy;

		public uint flags;
	}

	public struct NCCALCSIZE_PARAMS
	{
		public RECT rgc;

		public WINDOWPOS wndpos;
	}

	public const int GW_HWNDFIRST = 0;

	public const int GW_HWNDLAST = 1;

	public const int GW_HWNDNEXT = 2;

	public const int GW_HWNDPREV = 3;

	public const int GW_OWNER = 4;

	public const int GW_CHILD = 5;

	public const int WM_NCCALCSIZE = 131;

	public const int WM_WINDOWPOSCHANGING = 70;

	public const int WM_PAINT = 15;

	public const int WM_CREATE = 1;

	public const int WM_NCCREATE = 129;

	public const int WM_NCPAINT = 133;

	public const int WM_PRINT = 791;

	public const int WM_DESTROY = 2;

	public const int WM_SHOWWINDOW = 24;

	public const int WM_SHARED_MENU = 482;

	public const int HC_ACTION = 0;

	public const int WH_CALLWNDPROC = 4;

	public const int GWL_WNDPROC = -4;

	[DllImport("User32.dll", CharSet = CharSet.Auto)]
	public static extern IntPtr GetWindowDC(IntPtr handle);

	[DllImport("User32.dll", CharSet = CharSet.Auto)]
	public static extern IntPtr ReleaseDC(IntPtr handle, IntPtr hDC);

	[DllImport("Gdi32.dll", CharSet = CharSet.Auto)]
	public static extern IntPtr CreateCompatibleDC(IntPtr hdc);

	[DllImport("User32.dll", CharSet = CharSet.Auto)]
	public static extern int GetClassName(IntPtr hwnd, char[] className, int maxCount);

	[DllImport("User32.dll", CharSet = CharSet.Auto)]
	public static extern IntPtr GetWindow(IntPtr hwnd, int uCmd);

	[DllImport("User32.dll", CharSet = CharSet.Auto)]
	public static extern bool IsWindowVisible(IntPtr hwnd);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern int GetClientRect(IntPtr hwnd, ref RECT lpRect);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern int GetClientRect(IntPtr hwnd, [In][Out] ref Rectangle rect);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern bool MoveWindow(IntPtr hwnd, int X, int Y, int nWidth, int nHeight, bool bRepaint);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern bool UpdateWindow(IntPtr hwnd);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern bool InvalidateRect(IntPtr hwnd, ref Rectangle rect, bool bErase);

	[DllImport("user32", CharSet = CharSet.Auto)]
	public static extern bool ValidateRect(IntPtr hwnd, ref Rectangle rect);

	[DllImport("user32.dll", CharSet = CharSet.Auto)]
	internal static extern bool GetWindowRect(IntPtr hWnd, [In][Out] ref Rectangle rect);
}
internal class SubClass : NativeWindow
{
	public delegate int SubClassWndProcEventHandler(ref Message m);

	private bool IsSubClassed;

	public bool SubClassed
	{
		get
		{
			return IsSubClassed;
		}
		set
		{
			IsSubClassed = value;
		}
	}

	public event SubClassWndProcEventHandler SubClassedWndProc;

	public SubClass(IntPtr Handle, bool _SubClass)
	{
		((NativeWindow)this).AssignHandle(Handle);
		IsSubClassed = _SubClass;
	}

	protected override void WndProc(ref Message m)
	{
		if (!IsSubClassed || OnSubClassedWndProc(ref m) == 0)
		{
			((NativeWindow)this).WndProc(ref m);
		}
	}

	public void CallDefaultWndProc(ref Message m)
	{
		((NativeWindow)this).WndProc(ref m);
	}

	public int HiWord(int Number)
	{
		return (Number >> 16) & 0xFFFF;
	}

	public int LoWord(int Number)
	{
		return Number & 0xFFFF;
	}

	public int MakeLong(int LoWord, int HiWord)
	{
		return (HiWord << 16) | (LoWord & 0xFFFF);
	}

	public IntPtr MakeLParam(int LoWord, int HiWord)
	{
		return (IntPtr)((HiWord << 16) | (LoWord & 0xFFFF));
	}

	private int OnSubClassedWndProc(ref Message m)
	{
		if (this.SubClassedWndProc != null)
		{
			return this.SubClassedWndProc(ref m);
		}
		return 0;
	}
}
[ToolboxBitmap(typeof(TabControl))]
public class FlatTabControl : TabControl
{
	internal class TabpageExCollectionEditor : CollectionEditor
	{
		public TabpageExCollectionEditor(Type type)
			: base(type)
		{
		}

		protected override Type CreateCollectionItemType()
		{
			return typeof(TabPage);
		}
	}

	private const int nMargin = 5;

	private Container components;

	private SubClass scUpDown;

	private bool bUpDown;

	private ImageList leftRightImages;

	private Color mBackColor = SystemColors.Control;

	[Editor(typeof(TabpageExCollectionEditor), typeof(UITypeEditor))]
	public TabPageCollection TabPages => ((TabControl)this).TabPages;

	public TabAlignment Alignment
	{
		get
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			return ((TabControl)this).Alignment;
		}
		set
		{
			//IL_0000: Unknown result type (might be due to invalid IL or missing references)
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_000c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0005: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Invalid comparison between Unknown and I4
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			TabAlignment val = value;
			if ((int)val != 0 && (int)val != 1)
			{
				val = (TabAlignment)0;
			}
			((TabControl)this).Alignment = val;
		}
	}

	[Browsable(false)]
	public bool Multiline
	{
		get
		{
			return ((TabControl)this).Multiline;
		}
		set
		{
			((TabControl)this).Multiline = false;
		}
	}

	[Browsable(true)]
	public Color myBackColor
	{
		get
		{
			return mBackColor;
		}
		set
		{
			mBackColor = value;
			((Control)this).Invalidate();
		}
	}

	public FlatTabControl()
	{
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Expected O, but got Unknown
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Expected O, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Expected O, but got Unknown
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Expected O, but got Unknown
		InitializeComponent();
		((Control)this).SetStyle((ControlStyles)2, true);
		((Control)this).SetStyle((ControlStyles)8192, true);
		((Control)this).SetStyle((ControlStyles)65536, true);
		((Control)this).SetStyle((ControlStyles)16, true);
		((Control)this).SetStyle((ControlStyles)2048, true);
		bUpDown = false;
		((Control)this).ControlAdded += new ControlEventHandler(FlatTabControl_ControlAdded);
		((Control)this).ControlRemoved += new ControlEventHandler(FlatTabControl_ControlRemoved);
		((TabControl)this).SelectedIndexChanged += FlatTabControl_SelectedIndexChanged;
		leftRightImages = new ImageList();
		ResourceManager resourceManager = new ResourceManager(typeof(FlatTabControl));
		Bitmap val = (Bitmap)resourceManager.GetObject("TabIcons.bmp");
		if (val != null)
		{
			val.MakeTransparent(Color.White);
			leftRightImages.Images.AddStrip((Image)(object)val);
		}
	}

	protected override void Dispose(bool disposing)
	{
		if (disposing)
		{
			if (components != null)
			{
				components.Dispose();
			}
			((Component)(object)leftRightImages).Dispose();
		}
		((TabControl)this).Dispose(disposing);
	}

	protected override void OnPaint(PaintEventArgs e)
	{
		((Control)this).OnPaint(e);
		DrawControl(e.Graphics);
	}

	internal void DrawControl(Graphics g)
	{
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0023: Expected O, but got Unknown
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Expected O, but got Unknown
		//IL_0136: Unknown result type (might be due to invalid IL or missing references)
		//IL_013d: Expected O, but got Unknown
		if (((Control)this).Visible)
		{
			Rectangle clientRectangle = ((Control)this).ClientRectangle;
			Rectangle displayRectangle = ((Control)this).DisplayRectangle;
			Brush val = (Brush)new SolidBrush(mBackColor);
			g.FillRectangle(val, clientRectangle);
			val.Dispose();
			int width = SystemInformation.Border3DSize.Width;
			Pen val2 = new Pen(SystemColors.ControlDark);
			displayRectangle.Inflate(width, width);
			g.DrawRectangle(val2, displayRectangle);
			val2.Dispose();
			Region clip = g.Clip;
			int num = displayRectangle.Width + 5;
			if (bUpDown && Win32.IsWindowVisible(((NativeWindow)scUpDown).Handle))
			{
				Rectangle rect = default(Rectangle);
				Win32.GetWindowRect(((NativeWindow)scUpDown).Handle, ref rect);
				num = ((Control)this).RectangleToClient(rect).X;
			}
			Rectangle clip2 = new Rectangle(displayRectangle.Left, clientRectangle.Top, num - 5, clientRectangle.Height);
			g.SetClip(clip2);
			for (int i = 0; i < ((TabControl)this).TabCount; i++)
			{
				DrawTab(g, TabPages[i], i);
			}
			g.Clip = clip;
			if (((TabControl)this).SelectedTab != null)
			{
				TabPage selectedTab = ((TabControl)this).SelectedTab;
				Color backColor = ((Control)selectedTab).BackColor;
				val2 = new Pen(backColor);
				displayRectangle.Offset(1, 1);
				displayRectangle.Width -= 2;
				displayRectangle.Height -= 2;
				g.DrawRectangle(val2, displayRectangle);
				displayRectangle.Width--;
				displayRectangle.Height--;
				g.DrawRectangle(val2, displayRectangle);
				val2.Dispose();
			}
		}
	}

	internal void DrawTab(Graphics g, TabPage tabPage, int nIndex)
	{
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fe: Unknown result type (might be due to invalid IL or missing references)
		//IL_0205: Expected O, but got Unknown
		//IL_022d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0234: Expected O, but got Unknown
		//IL_0235: Unknown result type (might be due to invalid IL or missing references)
		//IL_023a: Unknown result type (might be due to invalid IL or missing references)
		//IL_023c: Unknown result type (might be due to invalid IL or missing references)
		//IL_024b: Expected I4, but got Unknown
		//IL_0401: Unknown result type (might be due to invalid IL or missing references)
		//IL_0408: Expected O, but got Unknown
		//IL_041e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0425: Expected O, but got Unknown
		Rectangle tabRect = ((TabControl)this).GetTabRect(nIndex);
		RectangleF rectangleF = ((TabControl)this).GetTabRect(nIndex);
		bool flag = ((TabControl)this).SelectedIndex == nIndex;
		Point[] array = new Point[7];
		if ((int)Alignment == 0)
		{
			ref Point reference = ref array[0];
			reference = new Point(tabRect.Left, tabRect.Bottom);
			ref Point reference2 = ref array[1];
			reference2 = new Point(tabRect.Left, tabRect.Top + 3);
			ref Point reference3 = ref array[2];
			reference3 = new Point(tabRect.Left + 3, tabRect.Top);
			ref Point reference4 = ref array[3];
			reference4 = new Point(tabRect.Right - 3, tabRect.Top);
			ref Point reference5 = ref array[4];
			reference5 = new Point(tabRect.Right, tabRect.Top + 3);
			ref Point reference6 = ref array[5];
			reference6 = new Point(tabRect.Right, tabRect.Bottom);
			ref Point reference7 = ref array[6];
			reference7 = new Point(tabRect.Left, tabRect.Bottom);
		}
		else
		{
			ref Point reference8 = ref array[0];
			reference8 = new Point(tabRect.Left, tabRect.Top);
			ref Point reference9 = ref array[1];
			reference9 = new Point(tabRect.Right, tabRect.Top);
			ref Point reference10 = ref array[2];
			reference10 = new Point(tabRect.Right, tabRect.Bottom - 3);
			ref Point reference11 = ref array[3];
			reference11 = new Point(tabRect.Right - 3, tabRect.Bottom);
			ref Point reference12 = ref array[4];
			reference12 = new Point(tabRect.Left + 3, tabRect.Bottom);
			ref Point reference13 = ref array[5];
			reference13 = new Point(tabRect.Left, tabRect.Bottom - 3);
			ref Point reference14 = ref array[6];
			reference14 = new Point(tabRect.Left, tabRect.Top);
		}
		Brush val = (Brush)new SolidBrush(((Control)tabPage).BackColor);
		g.FillPolygon(val, array);
		val.Dispose();
		g.DrawPolygon(SystemPens.ControlDark, array);
		if (flag)
		{
			Pen val2 = new Pen(((Control)tabPage).BackColor);
			TabAlignment alignment = Alignment;
			switch ((int)alignment)
			{
			case 0:
				g.DrawLine(val2, tabRect.Left + 1, tabRect.Bottom, tabRect.Right - 1, tabRect.Bottom);
				g.DrawLine(val2, tabRect.Left + 1, tabRect.Bottom + 1, tabRect.Right - 1, tabRect.Bottom + 1);
				break;
			case 1:
				g.DrawLine(val2, tabRect.Left + 1, tabRect.Top, tabRect.Right - 1, tabRect.Top);
				g.DrawLine(val2, tabRect.Left + 1, tabRect.Top - 1, tabRect.Right - 1, tabRect.Top - 1);
				g.DrawLine(val2, tabRect.Left + 1, tabRect.Top - 2, tabRect.Right - 1, tabRect.Top - 2);
				break;
			}
			val2.Dispose();
		}
		if (tabPage.ImageIndex >= 0 && ((TabControl)this).ImageList != null && ((TabControl)this).ImageList.Images[tabPage.ImageIndex] != null)
		{
			int num = 8;
			int num2 = 2;
			Image val3 = ((TabControl)this).ImageList.Images[tabPage.ImageIndex];
			Rectangle rectangle = new Rectangle(tabRect.X + num, tabRect.Y + 1, val3.Width, val3.Height);
			float num3 = num + val3.Width + num2;
			rectangle.Y += (tabRect.Height - val3.Height) / 2;
			rectangleF.X += num3;
			rectangleF.Width -= num3;
			g.DrawImage(val3, rectangle);
		}
		StringFormat val4 = new StringFormat();
		val4.Alignment = (StringAlignment)1;
		val4.LineAlignment = (StringAlignment)1;
		val = (Brush)new SolidBrush(((Control)tabPage).ForeColor);
		g.DrawString(((Control)tabPage).Text, ((Control)this).Font, val, rectangleF, val4);
	}

	internal void DrawIcons(Graphics g)
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Expected O, but got Unknown
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Expected O, but got Unknown
		if (leftRightImages == null || leftRightImages.Images.Count != 4)
		{
			return;
		}
		Rectangle clientRectangle = ((Control)this).ClientRectangle;
		Rectangle rect = default(Rectangle);
		Win32.GetClientRect(((NativeWindow)scUpDown).Handle, ref rect);
		Brush val = (Brush)new SolidBrush(SystemColors.Control);
		g.FillRectangle(val, rect);
		val.Dispose();
		Pen val2 = new Pen(SystemColors.ControlDark);
		Rectangle rectangle = rect;
		rectangle.Inflate(-1, -1);
		g.DrawRectangle(val2, rectangle);
		val2.Dispose();
		int num = rect.Width / 2;
		int y = (rect.Height - 16) / 2;
		int num2 = (num - 16) / 2;
		Rectangle rectangle2 = new Rectangle(num2, y, 16, 16);
		Rectangle rectangle3 = new Rectangle(num + num2, y, 16, 16);
		Image val3 = leftRightImages.Images[1];
		if (val3 != null && ((TabControl)this).TabCount > 0)
		{
			if (((TabControl)this).GetTabRect(0).Left < clientRectangle.Left)
			{
				g.DrawImage(val3, rectangle2);
			}
			else
			{
				val3 = leftRightImages.Images[3];
				if (val3 != null)
				{
					g.DrawImage(val3, rectangle2);
				}
			}
		}
		val3 = leftRightImages.Images[0];
		if (val3 == null || ((TabControl)this).TabCount <= 0)
		{
			return;
		}
		if (((TabControl)this).GetTabRect(((TabControl)this).TabCount - 1).Right > clientRectangle.Width - rect.Width)
		{
			g.DrawImage(val3, rectangle3);
			return;
		}
		val3 = leftRightImages.Images[2];
		if (val3 != null)
		{
			g.DrawImage(val3, rectangle3);
		}
	}

	protected override void OnCreateControl()
	{
		((Control)this).OnCreateControl();
		FindUpDown();
	}

	private void FlatTabControl_ControlAdded(object sender, ControlEventArgs e)
	{
		FindUpDown();
		UpdateUpDown();
	}

	private void FlatTabControl_ControlRemoved(object sender, ControlEventArgs e)
	{
		FindUpDown();
		UpdateUpDown();
	}

	private void FlatTabControl_SelectedIndexChanged(object sender, EventArgs e)
	{
		UpdateUpDown();
		((Control)this).Invalidate();
	}

	private void FindUpDown()
	{
		bool flag = false;
		IntPtr window = Win32.GetWindow(((Control)this).Handle, 5);
		while (window != IntPtr.Zero)
		{
			char[] array = new char[33];
			int className = Win32.GetClassName(window, array, 32);
			string text = new string(array, 0, className);
			if (text == "msctls_updown32")
			{
				flag = true;
				if (!bUpDown)
				{
					scUpDown = new SubClass(window, _SubClass: true);
					scUpDown.SubClassedWndProc += scUpDown_SubClassedWndProc;
					bUpDown = true;
				}
				break;
			}
			window = Win32.GetWindow(window, 2);
		}
		if (!flag && bUpDown)
		{
			bUpDown = false;
		}
	}

	private void UpdateUpDown()
	{
		if (bUpDown && Win32.IsWindowVisible(((NativeWindow)scUpDown).Handle))
		{
			Rectangle rect = default(Rectangle);
			Win32.GetClientRect(((NativeWindow)scUpDown).Handle, ref rect);
			Win32.InvalidateRect(((NativeWindow)scUpDown).Handle, ref rect, bErase: true);
		}
	}

	private int scUpDown_SubClassedWndProc(ref Message m)
	{
		int msg = ((Message)(ref m)).Msg;
		if (msg == 15)
		{
			IntPtr windowDC = Win32.GetWindowDC(((NativeWindow)scUpDown).Handle);
			Graphics val = Graphics.FromHdc(windowDC);
			DrawIcons(val);
			val.Dispose();
			Win32.ReleaseDC(((NativeWindow)scUpDown).Handle, windowDC);
			((Message)(ref m)).Result = IntPtr.Zero;
			Rectangle rect = default(Rectangle);
			Win32.GetClientRect(((NativeWindow)scUpDown).Handle, ref rect);
			Win32.ValidateRect(((NativeWindow)scUpDown).Handle, ref rect);
			return 1;
		}
		return 0;
	}

	private void InitializeComponent()
	{
		components = new Container();
	}
}
