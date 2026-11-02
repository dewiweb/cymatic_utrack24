using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Windows.Forms;

[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: AssemblyTitle("")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("")]
[assembly: AssemblyProduct("")]
[assembly: AssemblyCopyright("")]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyDelaySign(false)]
[assembly: AssemblyKeyFile("")]
[assembly: AssemblyKeyName("")]
[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: AssemblyVersion("1.0.6158.23340")]
namespace MatrixLib;

public enum ScrollDirection
{
	Left,
	Right,
	Up,
	Down
}
public class MatrixControl : Control
{
	public enum MatrixSize
	{
		Small,
		Large,
		Tiny
	}

	private static int CHARWIDTH = 19;

	private static int CHARHEIGHT = 27;

	private static int XSPACING = 3;

	private static int YSPACING = 3;

	private static int CHARWIDTHSMALL = 14;

	private static int CHARHEIGHTSMALL = 20;

	private static int XSPACINGSMALL = 2;

	private static int YSPACINGSMALL = 2;

	private static int CHARWIDTHTINY = 5;

	private static int CHARHEIGHTINY = 8;

	private static int XSPACINGTINY = 1;

	private static int YSPACINGTINY = 1;

	private char m_cPadChar;

	private string m_StrText;

	private bool m_bTimer;

	private bool m_bAutoPad;

	private Color m_OffColor;

	private Color m_crOnColor;

	private Color m_crBackColor;

	private Timer m_Timer;

	private Bitmap m_ImageMatrix;

	private int m_CharWidth;

	private int m_CharHeight;

	private int m_XSpacing;

	private int m_YSpacing;

	private int m_MaxYChars;

	private int m_MaxXChars;

	private MatrixSize m_Size;

	private ScrollDirection m_Direction;

	private Color[] SEGM_COLORS;

	private MatrixTextLine[] mTextLines;

	private ResourceManager rm;

	private bool IsModified;

	public Color BkColor
	{
		set
		{
			m_crBackColor = Color.FromArgb(value.R, value.G, value.B);
		}
	}

	public Color OnColor
	{
		set
		{
			m_crOnColor = Color.FromArgb(value.R, value.G, value.B);
		}
	}

	public Color OffColor
	{
		set
		{
			m_OffColor = Color.FromArgb(value.R, value.G, value.B);
		}
	}

	public ScrollDirection Direction
	{
		get
		{
			return m_Direction;
		}
		set
		{
			m_Direction = value;
		}
	}

	public MatrixSize Matrixsize
	{
		get
		{
			return m_Size;
		}
		set
		{
			m_Size = value;
			SetMatrixSize(value);
		}
	}

	public string ScreenText
	{
		set
		{
			if (m_StrText != value)
			{
				m_StrText = value;
				if (m_MaxXChars * m_MaxYChars > m_StrText.Length)
				{
					string text = new string(' ', m_MaxXChars * m_MaxYChars - m_StrText.Length);
					m_StrText += text;
				}
				if (m_MaxXChars == 0)
				{
					SetXCharsPerLine(0);
				}
				if (m_MaxYChars == 0)
				{
					SetNumberOfLines(0);
				}
				((Control)this).Invalidate();
			}
		}
	}

	public override string Text
	{
		get
		{
			return m_StrText;
		}
		set
		{
			m_StrText = value;
		}
	}

	public int maxCharactersPerLine
	{
		get
		{
			return m_MaxXChars;
		}
		set
		{
			m_MaxXChars = value;
		}
	}

	public MatrixControl()
	{
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0026: Expected O, but got Unknown
		m_Direction = ScrollDirection.Left;
		m_bTimer = false;
		m_bAutoPad = false;
		m_Timer = new Timer();
		m_Timer.Tick += OnTimer;
		rm = new ResourceManager("MatrixLib.Resource1", Assembly.GetAssembly(((object)this).GetType()));
		SEGM_COLORS = new Color[3]
		{
			Color.FromArgb(0, 255, 255),
			Color.FromArgb(0, 0, 128),
			Color.FromArgb(0, 0, 0)
		};
		SetMatrixSize(m_Size);
		SetDisplayColors(Color.FromArgb(0, 0, 50), Color.FromArgb(63, 181, 255), Color.FromArgb(23, 64, 103));
		((Control)this).SetStyle((ControlStyles)65536, true);
		((Control)this).SetStyle((ControlStyles)8192, true);
		((Control)this).SetStyle((ControlStyles)2, true);
	}

	public MatrixControl(MatrixSize size)
	{
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0026: Expected O, but got Unknown
		m_Direction = ScrollDirection.Left;
		m_bTimer = false;
		m_bAutoPad = false;
		m_Timer = new Timer();
		m_Timer.Tick += OnTimer;
		rm = new ResourceManager("MatrixLib.Resource1", Assembly.GetAssembly(((object)this).GetType()));
		SEGM_COLORS = new Color[3]
		{
			Color.FromArgb(0, 255, 255),
			Color.FromArgb(23, 64, 103),
			Color.FromArgb(0, 0, 0)
		};
		m_Size = size;
		SetMatrixSize(size);
		SetDisplayColors(Color.FromArgb(0, 0, 50), Color.FromArgb(63, 181, 255), Color.FromArgb(23, 64, 103));
		((Control)this).SetStyle((ControlStyles)65536, true);
		((Control)this).SetStyle((ControlStyles)8192, true);
		((Control)this).SetStyle((ControlStyles)2, true);
	}

	public Rectangle GetCharBmpOffset(char ch)
	{
		if (ch >= '\u007f' || ch <= '\u001f')
		{
			ch = ' ';
		}
		int num = ch;
		int num2 = num - 32;
		num2 = ((num2 < 32) ? (num2 * (m_CharWidth + m_XSpacing)) : ((num2 >= 64) ? ((num2 - 64) * (m_CharWidth + m_XSpacing)) : ((num2 - 32) * (m_CharWidth + m_XSpacing))));
		int y = (num - 32) / 32 * (m_CharHeight + m_YSpacing);
		return new Rectangle(num2, y, m_CharWidth, m_CharHeight);
	}

	public void GetCharBmpOffset(char ch, ref Rectangle rc)
	{
		if (ch >= '\u007f' || ch <= '\u001f')
		{
			ch = ' ';
		}
		int num = ch;
		int num2 = num - 32;
		num2 = ((num2 < 32) ? (num2 * (m_CharWidth + m_XSpacing)) : ((num2 >= 64) ? ((num2 - 64) * (m_CharWidth + m_XSpacing)) : ((num2 - 32) * (m_CharWidth + m_XSpacing))));
		int y = (num - 32) / 32 * (m_CharHeight + m_YSpacing);
		rc = new Rectangle(num2, y, m_CharWidth, m_CharHeight);
	}

	public void SetText(string text)
	{
		if (m_StrText != text)
		{
			m_StrText = text;
			if (m_MaxXChars * m_MaxYChars > m_StrText.Length)
			{
				string text2 = new string(' ', m_MaxXChars * m_MaxYChars - m_StrText.Length);
				m_StrText += text2;
			}
			if (m_MaxXChars == 0)
			{
				SetXCharsPerLine(0);
			}
			if (m_MaxYChars == 0)
			{
				SetNumberOfLines(0);
			}
			((Control)this).Invalidate();
		}
	}

	private void SetMatrixSize(MatrixSize size)
	{
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Expected O, but got Unknown
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e3: Expected O, but got Unknown
		//IL_0090: Unknown result type (might be due to invalid IL or missing references)
		//IL_009a: Expected O, but got Unknown
		try
		{
			switch (size)
			{
			case MatrixSize.Small:
				m_CharWidth = CHARWIDTHSMALL;
				m_CharHeight = CHARHEIGHTSMALL;
				m_XSpacing = XSPACINGSMALL;
				m_YSpacing = YSPACINGSMALL;
				m_ImageMatrix = (Bitmap)rm.GetObject("MATRIXSMALL");
				break;
			case MatrixSize.Tiny:
				m_CharWidth = CHARWIDTHTINY;
				m_CharHeight = CHARHEIGHTINY;
				m_XSpacing = XSPACINGTINY;
				m_YSpacing = YSPACINGTINY;
				m_ImageMatrix = (Bitmap)rm.GetObject("MATRIXTINY");
				break;
			default:
				m_CharWidth = CHARWIDTH;
				m_CharHeight = CHARHEIGHT;
				m_XSpacing = XSPACING;
				m_YSpacing = YSPACING;
				m_ImageMatrix = (Bitmap)rm.GetObject("MATRIXLARGE");
				break;
			}
		}
		catch
		{
			MessageBox.Show("can not load resource picture");
		}
		((Control)this).Invalidate();
	}

	private void SetBitmapResource(Bitmap _bitmap)
	{
		m_ImageMatrix = _bitmap;
	}

	private void OnTimer(object sender, EventArgs e)
	{
		int maxYChars = m_MaxYChars;
		if (maxYChars == 1)
		{
			if (m_bAutoPad && m_StrText.Length < m_MaxXChars)
			{
				for (int num = m_MaxXChars - m_StrText.Length; num > 0; num--)
				{
					m_StrText += m_cPadChar;
				}
			}
			if (m_Direction == ScrollDirection.Left)
			{
				m_StrText = m_StrText.Substring(1) + m_StrText[0];
			}
			else
			{
				int length = m_StrText.Length;
				string text = m_StrText[length - 1].ToString();
				string text2 = m_StrText.Substring(0, length - 1);
				m_StrText = text + text2;
			}
		}
		else
		{
			if (m_bAutoPad && m_StrText.Length < m_MaxXChars * m_MaxYChars)
			{
				for (int num2 = m_MaxXChars * m_MaxYChars - m_StrText.Length; num2 > 0; num2--)
				{
					m_StrText += m_cPadChar;
				}
			}
			switch (m_Direction)
			{
			case ScrollDirection.Down:
			{
				string text4 = m_StrText.Substring(m_StrText.Length - m_MaxXChars);
				m_StrText = text4 + m_StrText.Substring(0, m_StrText.Length - m_MaxXChars);
				break;
			}
			case ScrollDirection.Up:
			{
				string text3 = m_StrText.Substring(0, m_MaxXChars);
				m_StrText = m_StrText.Substring(m_MaxXChars) + text3;
				break;
			}
			case ScrollDirection.Left:
			{
				int num5 = m_StrText.Length / m_MaxXChars;
				if (num5 == 0 || m_StrText.Length < m_MaxXChars)
				{
					num5 = 1;
				}
				int num6 = 0;
				while (num5 > 0)
				{
					m_StrText = m_StrText.Insert(num6 + m_MaxXChars, m_StrText[num6].ToString());
					m_StrText = m_StrText.Remove(num6, 1);
					num6 += m_MaxXChars;
					num5--;
				}
				break;
			}
			case ScrollDirection.Right:
			{
				int num3 = m_StrText.Length / m_MaxXChars;
				if (num3 == 0 || m_StrText.Length < m_MaxXChars)
				{
					return;
				}
				int num4 = 0;
				while (num3 > 0)
				{
					m_StrText = m_StrText.Insert(num4, m_StrText[num4 + (m_MaxXChars - 1)].ToString());
					try
					{
						m_StrText = m_StrText.Remove(num4 + m_MaxXChars, 1);
					}
					catch (Exception)
					{
					}
					num4 += m_MaxXChars;
					num3--;
				}
				break;
			}
			}
		}
		((Control)this).Invalidate(false);
	}

	public void DoScroll(int speed, ScrollDirection dir)
	{
		if (!m_bTimer)
		{
			m_bTimer = true;
			m_Direction = dir;
			m_Timer.Interval = speed;
			m_Timer.Start();
		}
	}

	public void StopScroll()
	{
		if (m_bTimer)
		{
			m_Timer.Stop();
			m_bTimer = false;
		}
	}

	protected override void OnPaint(PaintEventArgs pea)
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_001b: Expected O, but got Unknown
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Expected O, but got Unknown
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Expected O, but got Unknown
		//IL_0056: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Expected O, but got Unknown
		//IL_00d7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00de: Expected O, but got Unknown
		//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ff: Expected O, but got Unknown
		Rectangle displayRectangle = ((Control)this).DisplayRectangle;
		Bitmap val = new Bitmap(displayRectangle.Width, displayRectangle.Height);
		Graphics val2 = Graphics.FromImage((Image)(object)val);
		int num = 0;
		int num2 = 0;
		int length = m_StrText.Length;
		if (length == 0)
		{
			return;
		}
		ColorMap[] array = (ColorMap[])(object)new ColorMap[3]
		{
			new ColorMap(),
			new ColorMap(),
			new ColorMap()
		};
		array[0].OldColor = SEGM_COLORS[0];
		array[0].NewColor = m_crOnColor;
		array[1].OldColor = SEGM_COLORS[1];
		array[1].NewColor = m_OffColor;
		array[2].OldColor = SEGM_COLORS[2];
		array[2].NewColor = m_crBackColor;
		ImageAttributes val3 = new ImageAttributes();
		try
		{
			val3.SetRemapTable(array);
		}
		catch (Exception)
		{
		}
		int num3 = 0;
		int num4 = 1;
		SolidBrush val4 = new SolidBrush(m_crBackColor);
		val2.FillRectangle((Brush)(object)val4, displayRectangle);
		Rectangle empty = Rectangle.Empty;
		Rectangle rc = Rectangle.Empty;
		for (int i = 0; i < length; i++)
		{
			GetCharBmpOffset(m_StrText[i], ref rc);
			empty = new Rectangle(num, num2, rc.Width, rc.Height);
			val2.DrawImage((Image)(object)m_ImageMatrix, empty, rc.X, rc.Y, rc.Width, rc.Height, (GraphicsUnit)2, val3);
			num += m_CharWidth + m_XSpacing;
			num3++;
			if (num3 == m_MaxXChars && m_MaxYChars == 1)
			{
				break;
			}
			if (num3 == m_MaxXChars && m_MaxYChars > 1)
			{
				if (num4 == m_MaxYChars)
				{
					break;
				}
				num = (num3 = 0);
				num2 += m_CharHeight + m_YSpacing;
				num4++;
			}
		}
		pea.Graphics.DrawImage((Image)(object)val, 0, 0);
		((Brush)val4).Dispose();
		val4 = null;
		val3.Dispose();
		val3 = null;
		val2.Dispose();
		val2 = null;
		((Image)val).Dispose();
		val = null;
	}

	public void SetCustomCharSizes(int width, int height, int xspace, int yspace)
	{
		m_CharWidth = width;
		m_CharHeight = height;
		m_XSpacing = xspace;
		m_YSpacing = yspace;
	}

	public void SetXCharsPerLine(int max)
	{
		if (max == 0)
		{
			m_MaxXChars = m_StrText.Length;
		}
		else
		{
			m_MaxXChars = max;
		}
	}

	public void SetNumberOfLines(int max)
	{
		if (max == 0)
		{
			if (m_MaxXChars != 0)
			{
				m_MaxYChars = m_StrText.Length / m_MaxXChars;
			}
			else
			{
				m_MaxYChars = 1;
			}
		}
		m_MaxYChars = max;
		mTextLines = new MatrixTextLine[m_MaxYChars];
	}

	private void AdjustToClientRectangle()
	{
		int num = ((Control)this).Size.Height / m_CharHeight;
		int width = m_MaxXChars * m_CharWidth + m_XSpacing * m_MaxXChars;
		int height = num * m_CharHeight + m_YSpacing * num;
		m_StrText = new string(' ', num * m_MaxXChars);
		SetNumberOfLines(num);
		SetXCharsPerLine(m_MaxXChars);
		((Control)this).Size = new Size(width, height);
	}

	public void SetDisplayColors(Color bk, Color on, Color off)
	{
		SetBkColor(bk);
		SetColor(off, on);
	}

	public void SetBkColor(Color bk)
	{
		m_crBackColor = bk;
		((Control)this).Invalidate();
	}

	public void SetColor(Color off, Color on)
	{
		m_OffColor = off;
		m_crOnColor = on;
		((Control)this).Invalidate();
	}

	public void SetAutoPadding(bool pad, char ch)
	{
		m_bAutoPad = pad;
		m_cPadChar = ch;
	}

	protected override void OnSizeChanged(EventArgs e)
	{
		if (!IsModified)
		{
			IsModified = true;
			AdjustToClientRectangle();
			((Control)this).OnSizeChanged(e);
		}
	}

	public void setTextLine(int lineIndex, string text, MatrixTextLine.Enum_Align align)
	{
		if (lineIndex <= mTextLines.Length - 1)
		{
			if (mTextLines[lineIndex] == null)
			{
				mTextLines[lineIndex] = new MatrixTextLine(text, maxCharactersPerLine, align);
			}
			else
			{
				mTextLines[lineIndex].Align = align;
				mTextLines[lineIndex].Text = text;
				mTextLines[lineIndex].NumberOfCharacters = maxCharactersPerLine;
			}
			if (lineIndex == 0)
			{
				m_StrText = mTextLines[0].Text;
			}
			showTextLines();
		}
	}

	public void showTextLine(int lineIndex, MatrixTextLine textLineObj)
	{
		mTextLines[lineIndex] = textLineObj;
		showTextLines();
	}

	public void showTextLines()
	{
		string text = "";
		MatrixTextLine[] array = mTextLines;
		foreach (MatrixTextLine matrixTextLine in array)
		{
			text = ((matrixTextLine != null) ? (text + matrixTextLine.Text) : (text + "".PadLeft(maxCharactersPerLine)));
			SetText(text);
		}
		((Control)this).Invalidate();
	}

	[DllImport("gdi32.dll")]
	private static extern bool BitBlt(IntPtr hdcDest, int nXDest, int nYDest, int nWidth, int nHeight, IntPtr hdcSrc, int nXSrc, int nYSrc, int dwRop);
}
public class MatrixTextLine
{
	public enum Enum_Align
	{
		left,
		center,
		right
	}

	private Enum_Align mAlign;

	private string mText;

	private string mPersistantText;

	private int mNumberOfCharacters;

	public int NumberOfCharacters
	{
		get
		{
			return mNumberOfCharacters;
		}
		set
		{
			mNumberOfCharacters = value;
		}
	}

	public Enum_Align Align
	{
		get
		{
			return mAlign;
		}
		set
		{
			mAlign = value;
			switch (value)
			{
			case Enum_Align.left:
				mText = mPersistantText.PadRight(mNumberOfCharacters);
				break;
			case Enum_Align.center:
			{
				int num = (mNumberOfCharacters - mPersistantText.Length) / 2;
				mText = mPersistantText.PadLeft(num + mPersistantText.Length);
				mText = mText.PadRight(mNumberOfCharacters);
				break;
			}
			case Enum_Align.right:
				mText = mPersistantText.PadLeft(mNumberOfCharacters);
				break;
			}
		}
	}

	public string Text
	{
		get
		{
			return mText;
		}
		set
		{
			mPersistantText = value;
			Align = mAlign;
		}
	}

	public MatrixTextLine(string text, int numberOfCharacters, Enum_Align align)
	{
		mText = text;
		mPersistantText = text;
		mNumberOfCharacters = numberOfCharacters;
		Align = align;
	}
}
