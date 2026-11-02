using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text;
using System.Threading;
using System.Timers;
using System.Windows.Forms;
using System.Windows.Forms.Layout;
using Bebob_Mixerpanel.Properties;
using CControlKnob;
using Fader;
using FlatTabControl;
using HardwareHelperLib;
using MatrixLib;
using Microsoft.Win32;
using PushButton;
using VUMeter;

[assembly: Debuggable(DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: CompilationRelaxations(8)]
[assembly: AssemblyTitle("uTrack24 Mixerpanel")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("Cymatic Audio")]
[assembly: AssemblyProduct("uTrack24 Mixerpanel")]
[assembly: AssemblyCopyright("Copyright © Cymatic Audio 2013")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(true)]
[assembly: Guid("e79c005a-0ab1-40be-bdd4-fca46eb76f02")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.0", FrameworkDisplayName = ".NET Framework 4")]
[assembly: AssemblyVersion("1.0.0.0")]
namespace Bebob_Mixerpanel
{
	internal static class Program
	{
		private const int HWND_BROADCAST = 65535;

		private static Assembly assembly = typeof(Program).Assembly;

		private static GuidAttribute attribute = (GuidAttribute)assembly.GetCustomAttributes(typeof(GuidAttribute), inherit: true)[0];

		private static string sGuid = attribute.Value;

		private static Mutex _single = new Mutex(initiallyOwned: true, sGuid);

		[DllImport("user32.dll")]
		public static extern int PostMessage(IntPtr hwnd, int msg, IntPtr wparam, IntPtr lparam);

		[STAThread]
		private static void Main(string[] startParams)
		{
			bool bMinimized = false;
			bool openAsio = false;
			try
			{
				if (startParams.Length > 0)
				{
					for (int i = 0; i < startParams.Length; i++)
					{
						if (startParams[i].Trim().ToLower().IndexOf("exit") != -1)
						{
							PostMessage((IntPtr)65535, MixerPanel.WM_RESTORE_INSTANCE, new IntPtr(61937), new IntPtr(7967));
							Application.Exit();
							return;
						}
						if (startParams[i].Trim().ToLower().IndexOf("hide") != -1)
						{
							bMinimized = true;
						}
						else if (startParams[i].Trim().ToLower().IndexOf("asio") != -1)
						{
							openAsio = true;
						}
					}
				}
				if (_single.WaitOne(TimeSpan.Zero, exitContext: true))
				{
					Application.EnableVisualStyles();
					Application.SetCompatibleTextRenderingDefault(false);
					try
					{
						Application.Run((Form)(object)new MixerPanel(bMinimized, openAsio));
						return;
					}
					catch
					{
						return;
					}
					finally
					{
						_single.ReleaseMutex();
					}
				}
				PostMessage((IntPtr)65535, MixerPanel.WM_RESTORE_INSTANCE, new IntPtr(52685), new IntPtr(61423));
				Application.Exit();
			}
			catch
			{
				Application.Exit();
			}
		}
	}
}
namespace Bebob_Mixerpanel.Properties
{
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "10.0.0.0")]
	[CompilerGenerated]
	internal sealed class Settings : ApplicationSettingsBase
	{
		private static Settings defaultInstance = (Settings)(object)SettingsBase.Synchronized((SettingsBase)(object)new Settings());

		public static Settings Default => defaultInstance;

		private void SettingChangingEventHandler(object sender, SettingChangingEventArgs e)
		{
		}

		private void SettingsSavingEventHandler(object sender, CancelEventArgs e)
		{
		}
	}
}
namespace Bebob_Mixerpanel
{
	internal class VersionInfo
	{
		private int mSOFTWARE_VERSION_MJ = 1;

		private int mSOFTWARE_VERSION_MN = 1;

		private int mSOFTWARE_VERSION_SUB;

		private int mDRIVER_VERSION_MJ;

		private int mDRIVER_VERSION_MN;

		private int mDRIVER_VERSION_SUB;

		private string mFirmware_VERSION = "# firmware version #";

		private int mFirmware_VERSION_int;

		public string DriverVersion => mDRIVER_VERSION_MJ + "." + mDRIVER_VERSION_MN + "." + mDRIVER_VERSION_SUB;

		public string SoftwareVersion => mSOFTWARE_VERSION_MJ + "." + mSOFTWARE_VERSION_MN + "." + mSOFTWARE_VERSION_SUB;

		public string FirmwareVersion => mFirmware_VERSION;

		public int FirmwareVersionInt => mFirmware_VERSION_int;

		public string RevisionNumber => SVNRevision.Revision;

		public void setDriverVersion(int MJ, int MN, int SUB)
		{
			mDRIVER_VERSION_MJ = MJ;
			mDRIVER_VERSION_MN = MN;
			mDRIVER_VERSION_SUB = SUB;
		}

		public void setFirmwareVersion(int iVersion)
		{
			mFirmware_VERSION_int = 0;
			switch (iVersion)
			{
			case -1:
				mFirmware_VERSION = "@";
				break;
			case 0:
				mFirmware_VERSION = "private build";
				break;
			default:
				mFirmware_VERSION = iVersion.ToString();
				mFirmware_VERSION_int = iVersion;
				break;
			}
		}
	}
	public static class RegistryAccess
	{
		public static string ReadRegistry(string companyName, string appName, string setting)
		{
			try
			{
				RegistryKey currentUser = Registry.CurrentUser;
				return currentUser.OpenSubKey(companyName)?.OpenSubKey(appName)?.OpenSubKey(setting)?.GetValue(setting.ToUpper()).ToString();
			}
			catch
			{
				return null;
			}
		}

		public static bool WriteRegistry(string companyName, string appName, string setting, object Value)
		{
			try
			{
				RegistryKey currentUser = Registry.CurrentUser;
				RegistryKey registryKey = currentUser.CreateSubKey(companyName);
				RegistryKey registryKey2 = registryKey.CreateSubKey(appName);
				RegistryKey registryKey3 = registryKey2.CreateSubKey(setting);
				registryKey3.SetValue(setting.ToUpper(), Value);
				return true;
			}
			catch
			{
				return false;
			}
		}
	}
	internal class CDriverInterface : IDisposable
	{
		public delegate void CallbackDelegate(int count);

		[UnmanagedFunctionPointer(CallingConvention.StdCall)]
		public delegate void UsbNotificationCallback(int value);

		public delegate void onLevelsUpdate();

		public delegate void onUsbNotification(int msg);

		private double[] mLevelMeterData;

		private long mDeviceStatusNew;

		private readonly object lockObjectLevelMeters = new object();

		private readonly object lockObjectDeviceStatus = new object();

		private IntPtr m_pNativeObject;

		private UsbNotificationCallback callBack;

		public double[] LevelMeterData
		{
			get
			{
				lock (lockObjectLevelMeters)
				{
					return mLevelMeterData;
				}
			}
			set
			{
				mLevelMeterData = value;
			}
		}

		public long DeviceStatus
		{
			get
			{
				lock (lockObjectLevelMeters)
				{
					return mDeviceStatusNew;
				}
			}
			set
			{
				mDeviceStatusNew = value;
			}
		}

		public event onLevelsUpdate OnLevelsUpdate;

		public event onUsbNotification OnUsbNotification;

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern IntPtr CreateDriverInterfaceClass(string gUSBInterfaceGuid);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void DisposeDriverInterfaceClass(IntPtr pTestClassObject);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern int CallGetNumberOfConnectedDevices(IntPtr pTestClassObject);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetDeviceProps(IntPtr pTestClassObject, [In][Out] CDeviceProperties devProps, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetDriverInfo(IntPtr pTestClassObject, [In][Out] CDriverInfo driverInfo);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		public static extern uint CallGetFirmwareVersion(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetAsioBufferConfiguration(IntPtr pTestClassObject, [In][Out] CAsioBufferSettings audioBufferSettings);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetStreamBufferConfiguration(IntPtr pTestClassObject, [In][Out] CStreamBufferSettings audioBufferSettings);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetStreamBufferConfiguration(IntPtr pTestClassObject, int bufferValue);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetAsioBufferConfiguration(IntPtr pTestClassObject, int bufferValue);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern int CallGetSampleRateSelectionMode(IntPtr pTestClassObject);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetSampleRateSelectionMode(IntPtr pTestClassObject, int mode);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern int CallGetAsioDropouts(IntPtr pTestClassObject);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetDeviceNickName(IntPtr pTestClassObject, [MarshalAs(UnmanagedType.BStr)] string sDeviceNickName, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetSampleRateInfo(IntPtr pTestClassObject, [In][Out] CSampleRateInfo sampleRateInfo, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetSyncModeInfo(IntPtr pTestClassObject, [In][Out] CSyncSource syncSource, int iDeviceArrayIndex, int syncSourceIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetChannelProperties(IntPtr pTestClassObject, [In][Out] CChannelProperties chProps, int iDeviceArrayIndex, E_DIRECTION eDirection, int chNumber);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetChannelNickName(IntPtr pTestClassObject, int iDeviceArrayIndex, [MarshalAs(UnmanagedType.BStr)] string ChannelName, int ChannelID, E_DIRECTION eDirection, int DeviceID);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallPrependDeviceNameToDisplayName(IntPtr pTestClassObject, int iDeviceArrayIndex, bool bPrependDeviceNameToDisplayName);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern bool CallGetPrependDeviceNameToDisplayName(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallPollDeviceStatus(IntPtr pTestClassObject, [In][Out] CDeviceStatus deviceStatus, int deviceIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetCurrentSpdifInputDetectionStatus(IntPtr pTestClassObject, [In][Out] CDigitalInputState ioState, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern E_SelectorPosAudioMode CallGetCurrentAudioMode(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallGetCurrentOpticalInputDetectionStatus(IntPtr pTestClassObject, [In][Out] CDigitalInputState ioState, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern bool CallGetLevelMeterData(IntPtr pTestClassObject, IntPtr pLevelMeterArray, int iNumberOfChannels, int iDeviceArrayIndex, IntPtr pDeviceStatus);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern bool CallConnectDevice(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetChannelInputMonitorVol(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, double dVolume);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern double CallGetChannelInputMonitorVol(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetChannelInputMonitorPan(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, long iPan);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern long CallGetChannelInputMonitorPan(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetChannelInputMonitorMute(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, bool bMute);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern bool CallGetChannelInputMonitorMute(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern ulong CallGetSampleRate(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetSampleRate(IntPtr pTestClassObject, int iDeviceArrayIndex, int iSampleRate);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetSyncSource(IntPtr pTestClassObject, int iDeviceArrayIndex, int deviceID, int syncSourceID, DEVICE_SYNC_MODE eSyncMode);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern int CallGetCurrentSyncSource(IntPtr pTestClassObject, int iDeviceArrayIndex);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		private static extern void CallSetCrossFader(IntPtr pTestClassObject, int iDeviceArrayIndex, int iFeatureID, E_Channel eChannel, int Pos);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		public static extern void SetCallback(MulticastDelegate callback);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		public static extern void CallSetUsbNotificationCallback(IntPtr pTestClassObject, [MarshalAs(UnmanagedType.FunctionPtr)] UsbNotificationCallback callbackPointer);

		[DllImport("BebobDriverInterface.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Unicode)]
		public static extern void CallRemoveUsbNotificationCallback(IntPtr pTestClassObject);

		public CDriverInterface(Guid gUSBInterfaceGuid)
		{
			string gUSBInterfaceGuid2 = "{" + gUSBInterfaceGuid.ToString() + "}";
			m_pNativeObject = CreateDriverInterfaceClass(gUSBInterfaceGuid2);
		}

		public void Dispose()
		{
			Dispose(bDisposing: true);
		}

		protected virtual void Dispose(bool bDisposing)
		{
			if (m_pNativeObject != IntPtr.Zero)
			{
				DisposeDriverInterfaceClass(m_pNativeObject);
				m_pNativeObject = IntPtr.Zero;
			}
			if (bDisposing)
			{
				GC.SuppressFinalize(this);
			}
		}

		~CDriverInterface()
		{
			Dispose(bDisposing: false);
		}

		public void declareCallback()
		{
			CallbackDelegate callback = Callback;
			SetCallback(callback);
		}

		private static void Callback(int count)
		{
			Console.WriteLine("Callback invoked for " + count + " time");
		}

		public int GetNumberOfConnectedDevices()
		{
			return CallGetNumberOfConnectedDevices(m_pNativeObject);
		}

		public CDeviceProperties GetDeviceProps(int iDeviceIndex)
		{
			CDeviceProperties cDeviceProperties = new CDeviceProperties();
			cDeviceProperties.CDevicePropertiesSize = Marshal.SizeOf((object)cDeviceProperties);
			CallGetDeviceProps(m_pNativeObject, cDeviceProperties, iDeviceIndex);
			return cDeviceProperties;
		}

		public VersionInfo getVersionInfo(int iDeviceIndex)
		{
			CDriverInfo cDriverInfo = new CDriverInfo();
			cDriverInfo.CDriverInfoSize = Marshal.SizeOf((object)cDriverInfo);
			CallGetDriverInfo(m_pNativeObject, cDriverInfo);
			VersionInfo versionInfo = new VersionInfo();
			versionInfo.setDriverVersion(cDriverInfo.DriverVersionMajor, cDriverInfo.DriverVersionMinor, cDriverInfo.DriverVersionSub);
			uint firmwareVersion = CallGetFirmwareVersion(m_pNativeObject, iDeviceIndex);
			versionInfo.setFirmwareVersion((int)firmwareVersion);
			return versionInfo;
		}

		public CAsioBufferSettings GetAsioBufferConfiguration(int iDeviceIndex)
		{
			CAsioBufferSettings cAsioBufferSettings = new CAsioBufferSettings();
			cAsioBufferSettings.CAudioBufferSettingsSize = Marshal.SizeOf((object)cAsioBufferSettings);
			CallGetAsioBufferConfiguration(m_pNativeObject, cAsioBufferSettings);
			return cAsioBufferSettings;
		}

		public CStreamBufferSettings GetStreamBufferConfiguration(int iDeviceIndex)
		{
			CStreamBufferSettings cStreamBufferSettings = new CStreamBufferSettings();
			cStreamBufferSettings.CStreamBufferSettingsSize = Marshal.SizeOf((object)cStreamBufferSettings);
			CallGetStreamBufferConfiguration(m_pNativeObject, cStreamBufferSettings);
			return cStreamBufferSettings;
		}

		public void SetStreamBufferConfiguration(int bufferValue)
		{
			CallSetStreamBufferConfiguration(m_pNativeObject, bufferValue);
		}

		public void SetAsioBufferConfiguration(int bufferValue)
		{
			CallSetAsioBufferConfiguration(m_pNativeObject, bufferValue);
		}

		public int getAsioDropouts()
		{
			return CallGetAsioDropouts(m_pNativeObject);
		}

		public void SetSampleRateSelectionMode(E_SampleRateSelectionMode eMode)
		{
			CallSetSampleRateSelectionMode(m_pNativeObject, (int)eMode);
		}

		public E_SampleRateSelectionMode GetSampleRateSelectionMode()
		{
			return (E_SampleRateSelectionMode)CallGetSampleRateSelectionMode(m_pNativeObject);
		}

		public void setDeviceNickName(string sDevicName, int iDeviceIndex)
		{
			CallSetDeviceNickName(m_pNativeObject, sDevicName, iDeviceIndex);
		}

		public List<int> GetSampleRateInfo(int iDeviceIndex)
		{
			CSampleRateInfo cSampleRateInfo = new CSampleRateInfo();
			int num = 8;
			int[] array = new int[8];
			IntPtr intPtr = Marshal.AllocHGlobal(Marshal.SizeOf((object)0) * num);
			Marshal.Copy(array, 0, intPtr, num);
			cSampleRateInfo.pSampleRates = intPtr;
			cSampleRateInfo.CSampleRateInfoSize = Marshal.SizeOf((object)cSampleRateInfo);
			CallGetSampleRateInfo(m_pNativeObject, cSampleRateInfo, iDeviceIndex);
			Marshal.Copy(intPtr, array, 0, 8);
			Marshal.FreeHGlobal(intPtr);
			List<int> list = new List<int>();
			return array.Where((int sr) => sr != 0).ToList();
		}

		public List<SyncSource> GetSyncSourceInfo(int iDeviceIndex)
		{
			int num = 10;
			List<SyncSource> list = new List<SyncSource>();
			for (int i = 0; i < num; i++)
			{
				CSyncSource cSyncSource = new CSyncSource();
				cSyncSource.CSyncSourceSize = Marshal.SizeOf((object)cSyncSource);
				CallGetSyncModeInfo(m_pNativeObject, cSyncSource, iDeviceIndex, i);
				if (cSyncSource.SyncSourceID == -1)
				{
					break;
				}
				list.Add(new SyncSource(cSyncSource));
			}
			return list;
		}

		public List<ChannelProperties> getChannelProperties(int iDeviceArrayIndex, E_DIRECTION eDirection, string sDeviceName, int numberOfChannels, bool bIncludeDeviceNameInAsioName)
		{
			List<ChannelProperties> list = new List<ChannelProperties>();
			int num = 0;
			while (num < numberOfChannels)
			{
				CChannelProperties cChannelProperties = new CChannelProperties();
				cChannelProperties.CChannelPropertiesSize = Marshal.SizeOf((object)cChannelProperties);
				CallGetChannelProperties(m_pNativeObject, cChannelProperties, iDeviceArrayIndex, eDirection, num);
				if (cChannelProperties.HardwareName.ToLower().IndexOf("midi") != -1)
				{
					num++;
					continue;
				}
				list.Add(new ChannelProperties(cChannelProperties, sDeviceName, bIncludeDeviceNameInAsioName));
				num++;
			}
			return list;
		}

		public void SetChannelNickName(int iDeviceArrayIndex, string ChannelName, int ChannelID, E_DIRECTION eDirection, int DeviceID)
		{
			CallSetChannelNickName(m_pNativeObject, iDeviceArrayIndex, ChannelName, ChannelID, eDirection, DeviceID);
		}

		public void PrependDeviceNameToDisplayName(int iDeviceArrayIndex, bool bPrependDeviceNameToDisplayName)
		{
			CallPrependDeviceNameToDisplayName(m_pNativeObject, iDeviceArrayIndex, bPrependDeviceNameToDisplayName);
		}

		public bool GetPrependDeviceNameToDisplayName(int iDeviceArrayIndex)
		{
			return CallGetPrependDeviceNameToDisplayName(m_pNativeObject, iDeviceArrayIndex);
		}

		public CDeviceStatus pollDeviceStatus(int iDeviceArrayIndex)
		{
			lock (lockObjectDeviceStatus)
			{
				CDeviceStatus cDeviceStatus = new CDeviceStatus();
				cDeviceStatus.iCDeviceStatusSize = Marshal.SizeOf((object)cDeviceStatus);
				CallPollDeviceStatus(m_pNativeObject, cDeviceStatus, iDeviceArrayIndex);
				return cDeviceStatus;
			}
		}

		public bool UpdateLevelMeterData(int deviceIndex, int iNumberOfChannels)
		{
			lock (lockObjectLevelMeters)
			{
				if (mLevelMeterData == null)
				{
					mLevelMeterData = new double[iNumberOfChannels];
				}
				IntPtr intPtr = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(double)) * iNumberOfChannels);
				IntPtr intPtr2 = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(int)));
				Marshal.Copy(mLevelMeterData, 0, intPtr, iNumberOfChannels);
				if (!CallGetLevelMeterData(m_pNativeObject, intPtr, iNumberOfChannels, deviceIndex, intPtr2))
				{
					return false;
				}
				if (iNumberOfChannels > 0)
				{
					Marshal.Copy(intPtr, mLevelMeterData, 0, iNumberOfChannels);
					mDeviceStatusNew = Marshal.ReadInt32(intPtr2);
					Marshal.FreeHGlobal(intPtr);
					Marshal.FreeHGlobal(intPtr2);
				}
			}
			if (this.OnLevelsUpdate != null)
			{
				this.OnLevelsUpdate();
			}
			return true;
		}

		public bool connectDevice(int deviceIndex)
		{
			return CallConnectDevice(m_pNativeObject, deviceIndex);
		}

		public void SetChannelInputMonitorVol(int deviceIndex, int iFeatureID, E_Channel eChannel, double dVolume)
		{
			CallSetChannelInputMonitorVol(m_pNativeObject, deviceIndex, iFeatureID, eChannel, dVolume);
		}

		public double GetChannelInputMonitorVol(int deviceIndex, int iFeatureID, E_Channel eChannel)
		{
			return CallGetChannelInputMonitorVol(m_pNativeObject, deviceIndex, iFeatureID, eChannel);
		}

		public void setCrossFader(int deviceIndex, int iFeatureID, E_Channel eChannel, int Pos)
		{
			CallSetCrossFader(m_pNativeObject, deviceIndex, iFeatureID, eChannel, Pos);
		}

		public void setChannelInputMonitorPan(int deviceIndex, int iFeatureID, E_Channel eChannel, long iPan)
		{
			CallSetChannelInputMonitorPan(m_pNativeObject, deviceIndex, iFeatureID, eChannel, iPan);
		}

		public long getChannelInputMonitorPan(int deviceIndex, int iFeatureID, E_Channel eChannel)
		{
			return CallGetChannelInputMonitorPan(m_pNativeObject, deviceIndex, iFeatureID, eChannel);
		}

		public void setChannelInputMonitorMute(int deviceIndex, int iFeatureID, E_Channel eChannel, bool bMute)
		{
			CallSetChannelInputMonitorMute(m_pNativeObject, deviceIndex, iFeatureID, eChannel, bMute);
		}

		public bool getChannelInputMonitorMute(int deviceIndex, int iFeatureID, E_Channel eChannel)
		{
			return CallGetChannelInputMonitorMute(m_pNativeObject, deviceIndex, iFeatureID, eChannel);
		}

		public int getSampleRate(int deviceIndex)
		{
			return (int)CallGetSampleRate(m_pNativeObject, deviceIndex);
		}

		public void setSampleRate(int deviceIndex, int iSampleRate)
		{
			CallSetSampleRate(m_pNativeObject, deviceIndex, iSampleRate);
		}

		public void setSyncSource(int deviceArrayIndex, int deviceID, int syncSourceID, DEVICE_SYNC_MODE eSyncMode)
		{
			CallSetSyncSource(m_pNativeObject, deviceArrayIndex, deviceID, syncSourceID, eSyncMode);
		}

		public int getCurrentSyncSource(int deviceIndex)
		{
			return CallGetCurrentSyncSource(m_pNativeObject, deviceIndex);
		}

		public CDigitalInputState getCurrentOpticalInputDetectionStatus(int deviceIndex)
		{
			CDigitalInputState cDigitalInputState = new CDigitalInputState();
			cDigitalInputState.CDevicePropertiesSize = Marshal.SizeOf((object)cDigitalInputState);
			CallGetCurrentOpticalInputDetectionStatus(m_pNativeObject, cDigitalInputState, deviceIndex);
			return cDigitalInputState;
		}

		public CDigitalInputState getCurrentSpdifInputDetectionStatus(int deviceIndex)
		{
			CDigitalInputState cDigitalInputState = new CDigitalInputState();
			cDigitalInputState.CDevicePropertiesSize = Marshal.SizeOf((object)cDigitalInputState);
			CallGetCurrentSpdifInputDetectionStatus(m_pNativeObject, cDigitalInputState, deviceIndex);
			return cDigitalInputState;
		}

		public E_SelectorPosAudioMode getCurrentAudioMode(int deviceIndex)
		{
			return CallGetCurrentAudioMode(m_pNativeObject, deviceIndex);
		}

		public void SetUsbNotificationCallback()
		{
			callBack = HandleUsbNotification;
			CallSetUsbNotificationCallback(m_pNativeObject, callBack);
		}

		public void RemoveUsbNotificationCallback()
		{
			CallRemoveUsbNotificationCallback(m_pNativeObject);
		}

		private void HandleUsbNotification(int val)
		{
			if (this.OnUsbNotification != null)
			{
				this.OnUsbNotification(val);
			}
		}
	}
	public enum E_Channel
	{
		eMaster,
		eLeft,
		eRight
	}
	internal class ChannelProperties
	{
		public int ChannelID;

		public int DeviceID;

		public E_DIRECTION Direction;

		public string HardwareName;

		public string DeviceName { get; set; }

		public string Nickname { get; set; }

		public string AsioDisplayName { get; set; }

		public ChannelProperties(CChannelProperties ChanProps, string sDeviceName, bool bIncludeDeviceNameInAsioName)
		{
			ChannelID = ChanProps.ChannelID;
			DeviceID = ChanProps.DeviceID;
			Direction = ChanProps.Direction;
			HardwareName = ChanProps.HardwareName;
			Nickname = ChanProps.Nickname;
			AsioDisplayName = (bIncludeDeviceNameInAsioName ? (sDeviceName + " - " + ChanProps.Nickname) : ChanProps.Nickname);
			DeviceName = sDeviceName;
		}
	}
	internal class SyncSource
	{
		public DEVICE_SYNC_MODE DeviceSyncMode { get; set; }

		public int SyncSourceID { get; set; }

		public string Name { get; set; }

		private SyncSource()
		{
		}

		public SyncSource(CSyncSource syncSource)
		{
			DeviceSyncMode = syncSource.DeviceSyncMode;
			SyncSourceID = syncSource.SyncSourceID;
			Name = syncSource.Name;
		}
	}
	public class MixerPanel : Form
	{
		public delegate void functionCallerDbl(int deviceIndex, int iFeatureID, E_Channel eChannel, double value);

		public delegate void functionCallerLng(int deviceIndex, int iFeatureID, E_Channel eChannel, long value);

		public delegate void functionCallerInt(int deviceIndex, int iFeatureID, E_Channel eChannel, int value);

		public delegate void functionCallerBool(int deviceIndex, int iFeatureID, E_Channel eChannel, bool value);

		private enum E_DEVICE_MESSAGE_ID
		{
			eMsgErr_Unknown,
			eMsgErr_AVSpdifInNoError,
			eMsgErr_AVOpticalInNoError,
			eMsgErr_StreamBlocked,
			eMsgErr_SpdifInputOutOfPhase,
			eMsgErr_OpticalInOutOfPhase,
			eMsgErr_SystemInLock,
			eMsgErr_SystemOutOfLock
		}

		private enum E_WINDOW_MODE
		{
			eMixer,
			eSettings
		}

		private enum E_WINDOW_STATE
		{
			eMinimized,
			eMaximized
		}

		private enum E_MIXER_STATE
		{
			eMini,
			eMaxi
		}

		private IContainer components;

		private Label label32;

		private Label label31;

		private Label label21;

		private Button btnSetDeviceNickname;

		private TextBox txtDeviceNickname;

		private ComboBox cbSamplerate;

		private ComboBox cbSyncSource;

		private DataGridView dgInputChannels;

		private DataGridView dgOutputChannels;

		private Button btn_setSyncSource;

		private Button btnSetSampleRate;

		private CheckBox cbxAsioDisplayName1;

		private CheckBox cbxAsioDisplayName2;

		private Label label20;

		private Label label27;

		private GroupBox groupBox3;

		private Label label37;

		private Label lblAsioDropOuts;

		private Label label38;

		private Label lblStrFirmwareVersion;

		private Label lblDeviceSerialNumber;

		private Label label44;

		private Label label45;

		private Label lblDeviceFirmwareVersion;

		private Label label46;

		private Label lblDeviceStatus;

		private Label lblDriverVersion;

		private Label label41;

		private PictureBox pictureBox16;

		private LinkLabel linkLabel1;

		private global::FlatTabControl.FlatTabControl settingsTab;

		private TabPage tabPage4;

		private Label label43;

		private TabPage tabPage5;

		private TabPage tabPage6;

		private TabPage tabPage7;

		private TabPage tabPage8;

		private Label label47;

		private Panel panel13;

		private Label label28;

		private CPushButton mainMute;

		private Label label42;

		private PictureBox pictureBox26;

		private Label label30;

		private Button btnSettings;

		private CPushButton USBModeLight;

		private Panel channel_1_2;

		private CPushButton link0_1;

		private CPushButton muteButton0;

		private CPushButton soloButton1;

		private CPushButton muteButton1;

		private CPushButton soloButton0;

		private Label label22;

		private ControlKnob Pan1;

		private ControlKnob Pan0;

		private PictureBox pictureBox1;

		private PictureBox pictureBox2;

		private Panel pInfoDisplay;

		private Panel panel16;

		private CPushButton muteDAW;

		private CPushButton muteLine;

		private Label label12;

		private PictureBox pictureBox17;

		private Panel pMixerPanel;

		private Panel channel_23_24;

		private CPushButton link22_23;

		private CPushButton muteButton22;

		private CPushButton soloButton23;

		private CPushButton muteButton23;

		private CPushButton soloButton22;

		private Label label11;

		private ControlKnob Pan23;

		private ControlKnob Pan22;

		private PictureBox pictureBox25;

		private PictureBox pictureBox27;

		private Panel channel_21_22;

		private CPushButton link20_21;

		private CPushButton muteButton20;

		private CPushButton soloButton21;

		private CPushButton muteButton21;

		private CPushButton soloButton20;

		private Label label10;

		private ControlKnob Pan21;

		private ControlKnob Pan20;

		private PictureBox pictureBox23;

		private PictureBox pictureBox24;

		private Panel channel_19_20;

		private CPushButton link18_19;

		private CPushButton muteButton18;

		private CPushButton soloButton19;

		private CPushButton muteButton19;

		private CPushButton soloButton18;

		private Label label9;

		private ControlKnob Pan19;

		private ControlKnob Pan18;

		private PictureBox pictureBox21;

		private PictureBox pictureBox22;

		private Panel channel_17_18;

		private CPushButton link16_17;

		private CPushButton muteButton16;

		private CPushButton soloButton17;

		private CPushButton muteButton17;

		private CPushButton soloButton16;

		private Label label8;

		private ControlKnob Pan17;

		private ControlKnob Pan16;

		private PictureBox pictureBox19;

		private PictureBox pictureBox20;

		private Panel channel_15_16;

		private CPushButton link14_15;

		private CPushButton muteButton14;

		private CPushButton soloButton15;

		private CPushButton muteButton15;

		private CPushButton soloButton14;

		private Label label7;

		private ControlKnob Pan15;

		private ControlKnob Pan14;

		private PictureBox pictureBox15;

		private PictureBox pictureBox18;

		private Panel channel__13_14;

		private CPushButton link12_13;

		private CPushButton muteButton12;

		private CPushButton soloButton13;

		private CPushButton muteButton13;

		private CPushButton soloButton12;

		private Label label6;

		private ControlKnob Pan13;

		private ControlKnob Pan12;

		private PictureBox pictureBox13;

		private PictureBox pictureBox14;

		private Panel channel_7_8;

		private CPushButton link6_7;

		private CPushButton muteButton6;

		private CPushButton soloButton7;

		private CPushButton muteButton7;

		private CPushButton soloButton6;

		private Label label5;

		private ControlKnob Pan7;

		private ControlKnob Pan6;

		private PictureBox pictureBox11;

		private PictureBox pictureBox12;

		private Panel channel_9_10;

		private CPushButton link8_9;

		private CPushButton muteButton8;

		private CPushButton soloButton9;

		private CPushButton muteButton9;

		private CPushButton soloButton8;

		private Label label4;

		private ControlKnob Pan9;

		private ControlKnob Pan8;

		private PictureBox pictureBox9;

		private PictureBox pictureBox10;

		private Panel channel__11_12;

		private CPushButton link10_11;

		private CPushButton muteButton10;

		private CPushButton soloButton11;

		private CPushButton muteButton11;

		private CPushButton soloButton10;

		private Label label3;

		private ControlKnob Pan11;

		private ControlKnob Pan10;

		private PictureBox pictureBox7;

		private PictureBox pictureBox8;

		private Panel channel_3_4;

		private CPushButton link2_3;

		private CPushButton muteButton2;

		private CPushButton soloButton3;

		private CPushButton muteButton3;

		private CPushButton soloButton2;

		private Label label2;

		private ControlKnob Pan3;

		private ControlKnob Pan2;

		private PictureBox pictureBox5;

		private PictureBox pictureBox6;

		private Panel channel_5_6;

		private CPushButton link4_5;

		private CPushButton muteButton4;

		private CPushButton soloButton5;

		private CPushButton muteButton5;

		private CPushButton soloButton4;

		private Label label1;

		private ControlKnob Pan5;

		private ControlKnob Pan4;

		private PictureBox pictureBox3;

		private PictureBox pictureBox4;

		private Panel pTopPanel;

		private fader fader1;

		private MatrixControl matrixControl1;

		private MatrixControl matrixControl2;

		private global::VUMeter.VUMeter vuMeter16;

		private fader fader2;

		private global::VUMeter.VUMeter vuMeter15;

		private fader fader13;

		private MatrixControl matrixControl13;

		private MatrixControl matrixControl14;

		private global::VUMeter.VUMeter vuMeter11;

		private fader fader14;

		private global::VUMeter.VUMeter vuMeter12;

		private fader fader7;

		private MatrixControl matrixControl7;

		private MatrixControl matrixControl8;

		private global::VUMeter.VUMeter vuMeter5;

		private fader fader8;

		private global::VUMeter.VUMeter vuMeter6;

		private fader fader9;

		private MatrixControl matrixControl9;

		private MatrixControl matrixControl10;

		private global::VUMeter.VUMeter vuMeter7;

		private fader fader10;

		private global::VUMeter.VUMeter vuMeter8;

		private fader fader11;

		private MatrixControl matrixControl11;

		private MatrixControl matrixControl12;

		private global::VUMeter.VUMeter vuMeter9;

		private fader fader12;

		private global::VUMeter.VUMeter vuMeter10;

		private fader fader3;

		private MatrixControl matrixControl3;

		private MatrixControl matrixControl4;

		private global::VUMeter.VUMeter vuMeter1;

		private fader fader4;

		private global::VUMeter.VUMeter vuMeter2;

		private fader fader5;

		private MatrixControl matrixControl5;

		private MatrixControl matrixControl6;

		private global::VUMeter.VUMeter vuMeter3;

		private fader fader6;

		private global::VUMeter.VUMeter vuMeter4;

		private global::VUMeter.VUMeter vuMeter26;

		private global::VUMeter.VUMeter vuMeter25;

		private fader fader26;

		private fader fader25;

		private fader fader23;

		private MatrixControl matrixControl23;

		private MatrixControl matrixControl24;

		private global::VUMeter.VUMeter vuMeter23;

		private fader fader24;

		private global::VUMeter.VUMeter vuMeter24;

		private fader fader21;

		private MatrixControl matrixControl21;

		private MatrixControl matrixControl22;

		private global::VUMeter.VUMeter vuMeter21;

		private fader fader22;

		private global::VUMeter.VUMeter vuMeter22;

		private fader fader19;

		private MatrixControl matrixControl19;

		private MatrixControl matrixControl20;

		private global::VUMeter.VUMeter vuMeter19;

		private fader fader20;

		private global::VUMeter.VUMeter vuMeter20;

		private fader fader17;

		private MatrixControl matrixControl17;

		private MatrixControl matrixControl18;

		private global::VUMeter.VUMeter vuMeter17;

		private fader fader18;

		private global::VUMeter.VUMeter vuMeter18;

		private fader fader15;

		private MatrixControl matrixControl15;

		private MatrixControl matrixControl16;

		private global::VUMeter.VUMeter vuMeter13;

		private fader fader16;

		private global::VUMeter.VUMeter vuMeter14;

		private MatrixControl MainInfoDisplay;

		private ComboBox cbxAsioBufferDepth;

		private ComboBox cbxStreamBufferDepth;

		private Button btnSetAsioBufferSize;

		private Guid gUSBInterfaceGuid;

		private HH_Lib hwh = new HH_Lib();

		private CDriverInterface DInterface;

		private MenuItem miPH;

		private MenuItem miHF;

		private MenuItem miFR;

		private CDeviceProperties mProps;

		private VersionInfo mVersionInfo;

		private CPushButton[] mMuteButtonArray;

		private CPushButton[] mSoloButtonArray;

		private fader[] mFaderArray;

		private Dictionary<string, LinkedChannels> mLinkedChannels;

		private bool[] muteButtonStateArray = new bool[25];

		private Dictionary<string, Dictionary<string, Control>> ControlsDictionary;

		private Dictionary<string, double> cacheFadervalues = new Dictionary<string, double>();

		private bool mHoldPeak = true;

		private bool mPeakHoldForever;

		private bool mPeakHoldFastRelease = true;

		private bool mConnected;

		private bool mDeviceAttached;

		private bool mBlinkOn;

		private long mDeviceStatusNew;

		private E_CONN_TYPE mConnectionType = E_CONN_TYPE.eNoConnection;

		private E_SelectorPosAudioMode mAudioMode;

		private int mCurrentSampleRate;

		private int mCurrentSyncSource;

		private Timer mBlinkTimer;

		private Timer mConnectionTimer;

		private Timer mVUMeterPollingTimer;

		private Timer mMoveFadersDownTimer;

		private Timer mMoveFadersUpTimer;

		private bool mPauseSettingsPolling;

		private functionCallBuffer CallBuffer = new functionCallBuffer();

		private CDeviceStatus mDeviceStatus;

		private E_WINDOW_MODE m_eWindowMode;

		private E_MIXER_STATE m_eMixerState = E_MIXER_STATE.eMaxi;

		private bool m_MinimizedToSysTray;

		private CStreamBufferSettings m_StreamBuffer;

		private CAsioBufferSettings m_AsioBuffer;

		private bool m_bIncludeDeviceNameInAsioName;

		private int mFormWidth;

		private Point mLocation;

		private NotifyIcon trayIcon;

		private ContextMenu trayMenu;

		private int mMaxChannels;

		private List<SyncSource> mSyncSourcesList;

		private List<Control> FeedbackControlList = new List<Control>();

		private bool bControlsInitialized;

		private bool bufferSettingsDirty;

		private bool mOpenAsio;

		public static readonly int WM_RESTORE_INSTANCE = RegisterWindowMessage("WM_MY_MSG");

		public static readonly int WM_OPEN_ASIO = RegisterWindowMessage("WM_OPEN_ASIO");

		public static readonly int WM_DEVICECHANGE = 537;

		private SystemMenu mSystemMenu;

		private Dictionary<string, E_StreamingMode> mStreamBufferSettingValues;

		private Dictionary<string, uint> mAsioBufferSettingValues;

		private Thread mAsioDropoutsPollingThread;

		private ManualResetEvent mAsioDropoutsPollingThreadResetEvent;

		private Thread mGetCurrentSettingsThread;

		private ManualResetEvent mGetCurrentSettingsThreadPauseEvent;

		private int activeChannelNumber = -1;

		protected override void Dispose(bool disposing)
		{
			if (disposing && components != null)
			{
				components.Dispose();
			}
			((Form)this).Dispose(disposing);
		}

		private void InitializeComponent()
		{
			//IL_0011: Unknown result type (might be due to invalid IL or missing references)
			//IL_001b: Expected O, but got Unknown
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_003c: Expected O, but got Unknown
			//IL_0048: Unknown result type (might be due to invalid IL or missing references)
			//IL_0052: Expected O, but got Unknown
			//IL_0053: Unknown result type (might be due to invalid IL or missing references)
			//IL_005d: Expected O, but got Unknown
			//IL_005e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Expected O, but got Unknown
			//IL_0069: Unknown result type (might be due to invalid IL or missing references)
			//IL_0073: Expected O, but got Unknown
			//IL_0074: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Expected O, but got Unknown
			//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
			//IL_0102: Expected O, but got Unknown
			//IL_0119: Unknown result type (might be due to invalid IL or missing references)
			//IL_0123: Expected O, but got Unknown
			//IL_0124: Unknown result type (might be due to invalid IL or missing references)
			//IL_012e: Expected O, but got Unknown
			//IL_012f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0139: Expected O, but got Unknown
			//IL_0145: Unknown result type (might be due to invalid IL or missing references)
			//IL_014f: Expected O, but got Unknown
			//IL_017c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0186: Expected O, but got Unknown
			//IL_0187: Unknown result type (might be due to invalid IL or missing references)
			//IL_0191: Expected O, but got Unknown
			//IL_0192: Unknown result type (might be due to invalid IL or missing references)
			//IL_019c: Expected O, but got Unknown
			//IL_019d: Unknown result type (might be due to invalid IL or missing references)
			//IL_01a7: Expected O, but got Unknown
			//IL_0221: Unknown result type (might be due to invalid IL or missing references)
			//IL_022b: Expected O, but got Unknown
			//IL_0242: Unknown result type (might be due to invalid IL or missing references)
			//IL_024c: Expected O, but got Unknown
			//IL_024d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0257: Expected O, but got Unknown
			//IL_0258: Unknown result type (might be due to invalid IL or missing references)
			//IL_0262: Expected O, but got Unknown
			//IL_02dc: Unknown result type (might be due to invalid IL or missing references)
			//IL_02e6: Expected O, but got Unknown
			//IL_02fd: Unknown result type (might be due to invalid IL or missing references)
			//IL_0307: Expected O, but got Unknown
			//IL_0308: Unknown result type (might be due to invalid IL or missing references)
			//IL_0312: Expected O, but got Unknown
			//IL_0313: Unknown result type (might be due to invalid IL or missing references)
			//IL_031d: Expected O, but got Unknown
			//IL_0397: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a1: Expected O, but got Unknown
			//IL_03b8: Unknown result type (might be due to invalid IL or missing references)
			//IL_03c2: Expected O, but got Unknown
			//IL_03c3: Unknown result type (might be due to invalid IL or missing references)
			//IL_03cd: Expected O, but got Unknown
			//IL_03ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_03d8: Expected O, but got Unknown
			//IL_0452: Unknown result type (might be due to invalid IL or missing references)
			//IL_045c: Expected O, but got Unknown
			//IL_0473: Unknown result type (might be due to invalid IL or missing references)
			//IL_047d: Expected O, but got Unknown
			//IL_047e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0488: Expected O, but got Unknown
			//IL_0489: Unknown result type (might be due to invalid IL or missing references)
			//IL_0493: Expected O, but got Unknown
			//IL_050d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0517: Expected O, but got Unknown
			//IL_052e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0538: Expected O, but got Unknown
			//IL_0539: Unknown result type (might be due to invalid IL or missing references)
			//IL_0543: Expected O, but got Unknown
			//IL_0544: Unknown result type (might be due to invalid IL or missing references)
			//IL_054e: Expected O, but got Unknown
			//IL_05c8: Unknown result type (might be due to invalid IL or missing references)
			//IL_05d2: Expected O, but got Unknown
			//IL_05e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_05f3: Expected O, but got Unknown
			//IL_05f4: Unknown result type (might be due to invalid IL or missing references)
			//IL_05fe: Expected O, but got Unknown
			//IL_05ff: Unknown result type (might be due to invalid IL or missing references)
			//IL_0609: Expected O, but got Unknown
			//IL_0683: Unknown result type (might be due to invalid IL or missing references)
			//IL_068d: Expected O, but got Unknown
			//IL_06a4: Unknown result type (might be due to invalid IL or missing references)
			//IL_06ae: Expected O, but got Unknown
			//IL_06af: Unknown result type (might be due to invalid IL or missing references)
			//IL_06b9: Expected O, but got Unknown
			//IL_06ba: Unknown result type (might be due to invalid IL or missing references)
			//IL_06c4: Expected O, but got Unknown
			//IL_073e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0748: Expected O, but got Unknown
			//IL_075f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0769: Expected O, but got Unknown
			//IL_076a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0774: Expected O, but got Unknown
			//IL_0775: Unknown result type (might be due to invalid IL or missing references)
			//IL_077f: Expected O, but got Unknown
			//IL_07f9: Unknown result type (might be due to invalid IL or missing references)
			//IL_0803: Expected O, but got Unknown
			//IL_081a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0824: Expected O, but got Unknown
			//IL_0825: Unknown result type (might be due to invalid IL or missing references)
			//IL_082f: Expected O, but got Unknown
			//IL_0830: Unknown result type (might be due to invalid IL or missing references)
			//IL_083a: Expected O, but got Unknown
			//IL_08b4: Unknown result type (might be due to invalid IL or missing references)
			//IL_08be: Expected O, but got Unknown
			//IL_08d5: Unknown result type (might be due to invalid IL or missing references)
			//IL_08df: Expected O, but got Unknown
			//IL_08e0: Unknown result type (might be due to invalid IL or missing references)
			//IL_08ea: Expected O, but got Unknown
			//IL_08eb: Unknown result type (might be due to invalid IL or missing references)
			//IL_08f5: Expected O, but got Unknown
			//IL_096f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0979: Expected O, but got Unknown
			//IL_0990: Unknown result type (might be due to invalid IL or missing references)
			//IL_099a: Expected O, but got Unknown
			//IL_099b: Unknown result type (might be due to invalid IL or missing references)
			//IL_09a5: Expected O, but got Unknown
			//IL_09a6: Unknown result type (might be due to invalid IL or missing references)
			//IL_09b0: Expected O, but got Unknown
			//IL_09c7: Unknown result type (might be due to invalid IL or missing references)
			//IL_09d1: Expected O, but got Unknown
			//IL_09d2: Unknown result type (might be due to invalid IL or missing references)
			//IL_09dc: Expected O, but got Unknown
			//IL_09dd: Unknown result type (might be due to invalid IL or missing references)
			//IL_09e7: Expected O, but got Unknown
			//IL_09e8: Unknown result type (might be due to invalid IL or missing references)
			//IL_09f2: Expected O, but got Unknown
			//IL_09f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_09fd: Expected O, but got Unknown
			//IL_09fe: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a08: Expected O, but got Unknown
			//IL_0a09: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a13: Expected O, but got Unknown
			//IL_0a14: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a1e: Expected O, but got Unknown
			//IL_0a1f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a29: Expected O, but got Unknown
			//IL_0a2a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a34: Expected O, but got Unknown
			//IL_0a35: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a3f: Expected O, but got Unknown
			//IL_0a40: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a4a: Expected O, but got Unknown
			//IL_0a4b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a55: Expected O, but got Unknown
			//IL_0a56: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a60: Expected O, but got Unknown
			//IL_0a61: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a6b: Expected O, but got Unknown
			//IL_0a6c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a76: Expected O, but got Unknown
			//IL_0a77: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a81: Expected O, but got Unknown
			//IL_0a82: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a8c: Expected O, but got Unknown
			//IL_0a8d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0a97: Expected O, but got Unknown
			//IL_0a98: Unknown result type (might be due to invalid IL or missing references)
			//IL_0aa2: Expected O, but got Unknown
			//IL_0aa3: Unknown result type (might be due to invalid IL or missing references)
			//IL_0aad: Expected O, but got Unknown
			//IL_0aae: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ab8: Expected O, but got Unknown
			//IL_0ab9: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ac3: Expected O, but got Unknown
			//IL_0ac4: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ace: Expected O, but got Unknown
			//IL_0acf: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ad9: Expected O, but got Unknown
			//IL_0ada: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ae4: Expected O, but got Unknown
			//IL_0ae5: Unknown result type (might be due to invalid IL or missing references)
			//IL_0aef: Expected O, but got Unknown
			//IL_0af0: Unknown result type (might be due to invalid IL or missing references)
			//IL_0afa: Expected O, but got Unknown
			//IL_0afb: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b05: Expected O, but got Unknown
			//IL_0b06: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b10: Expected O, but got Unknown
			//IL_0b11: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b1b: Expected O, but got Unknown
			//IL_0b1c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b26: Expected O, but got Unknown
			//IL_0b27: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b31: Expected O, but got Unknown
			//IL_0b32: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b3c: Expected O, but got Unknown
			//IL_0b3d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b47: Expected O, but got Unknown
			//IL_0b48: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b52: Expected O, but got Unknown
			//IL_0b53: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b5d: Expected O, but got Unknown
			//IL_0b5e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b68: Expected O, but got Unknown
			//IL_0b69: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b73: Expected O, but got Unknown
			//IL_0b74: Unknown result type (might be due to invalid IL or missing references)
			//IL_0b7e: Expected O, but got Unknown
			//IL_0ebd: Unknown result type (might be due to invalid IL or missing references)
			//IL_0ec7: Expected O, but got Unknown
			//IL_0f13: Unknown result type (might be due to invalid IL or missing references)
			//IL_0f62: Unknown result type (might be due to invalid IL or missing references)
			//IL_0f6c: Expected O, but got Unknown
			//IL_0fc3: Unknown result type (might be due to invalid IL or missing references)
			//IL_0fcd: Expected O, but got Unknown
			//IL_0fde: Unknown result type (might be due to invalid IL or missing references)
			//IL_0fe8: Expected O, but got Unknown
			//IL_0ff9: Unknown result type (might be due to invalid IL or missing references)
			//IL_1003: Expected O, but got Unknown
			//IL_104f: Unknown result type (might be due to invalid IL or missing references)
			//IL_109e: Unknown result type (might be due to invalid IL or missing references)
			//IL_10a8: Expected O, but got Unknown
			//IL_10ff: Unknown result type (might be due to invalid IL or missing references)
			//IL_1109: Expected O, but got Unknown
			//IL_111a: Unknown result type (might be due to invalid IL or missing references)
			//IL_1124: Expected O, but got Unknown
			//IL_1144: Unknown result type (might be due to invalid IL or missing references)
			//IL_114e: Expected O, but got Unknown
			//IL_124d: Unknown result type (might be due to invalid IL or missing references)
			//IL_12f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_12fb: Expected O, but got Unknown
			//IL_13f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_13fc: Expected O, but got Unknown
			//IL_14ac: Unknown result type (might be due to invalid IL or missing references)
			//IL_14b6: Expected O, but got Unknown
			//IL_1735: Unknown result type (might be due to invalid IL or missing references)
			//IL_173f: Expected O, but got Unknown
			//IL_17f8: Unknown result type (might be due to invalid IL or missing references)
			//IL_1860: Unknown result type (might be due to invalid IL or missing references)
			//IL_186a: Expected O, but got Unknown
			//IL_1a61: Unknown result type (might be due to invalid IL or missing references)
			//IL_1a6b: Expected O, but got Unknown
			//IL_1ab7: Unknown result type (might be due to invalid IL or missing references)
			//IL_1b06: Unknown result type (might be due to invalid IL or missing references)
			//IL_1b10: Expected O, but got Unknown
			//IL_1b67: Unknown result type (might be due to invalid IL or missing references)
			//IL_1b71: Expected O, but got Unknown
			//IL_1b82: Unknown result type (might be due to invalid IL or missing references)
			//IL_1b8c: Expected O, but got Unknown
			//IL_1ba9: Unknown result type (might be due to invalid IL or missing references)
			//IL_1bb3: Expected O, but got Unknown
			//IL_1c6c: Unknown result type (might be due to invalid IL or missing references)
			//IL_1cd4: Unknown result type (might be due to invalid IL or missing references)
			//IL_1cde: Expected O, but got Unknown
			//IL_1da0: Unknown result type (might be due to invalid IL or missing references)
			//IL_1daa: Expected O, but got Unknown
			//IL_1df6: Unknown result type (might be due to invalid IL or missing references)
			//IL_1e45: Unknown result type (might be due to invalid IL or missing references)
			//IL_1e4f: Expected O, but got Unknown
			//IL_1ea6: Unknown result type (might be due to invalid IL or missing references)
			//IL_1eb0: Expected O, but got Unknown
			//IL_1ec1: Unknown result type (might be due to invalid IL or missing references)
			//IL_1ecb: Expected O, but got Unknown
			//IL_1f18: Unknown result type (might be due to invalid IL or missing references)
			//IL_1f22: Expected O, but got Unknown
			//IL_1f33: Unknown result type (might be due to invalid IL or missing references)
			//IL_1f3d: Expected O, but got Unknown
			//IL_1f57: Unknown result type (might be due to invalid IL or missing references)
			//IL_2021: Unknown result type (might be due to invalid IL or missing references)
			//IL_202b: Expected O, but got Unknown
			//IL_203c: Unknown result type (might be due to invalid IL or missing references)
			//IL_2046: Expected O, but got Unknown
			//IL_2060: Unknown result type (might be due to invalid IL or missing references)
			//IL_212e: Unknown result type (might be due to invalid IL or missing references)
			//IL_2138: Expected O, but got Unknown
			//IL_2149: Unknown result type (might be due to invalid IL or missing references)
			//IL_2153: Expected O, but got Unknown
			//IL_216e: Unknown result type (might be due to invalid IL or missing references)
			//IL_223c: Unknown result type (might be due to invalid IL or missing references)
			//IL_2246: Expected O, but got Unknown
			//IL_2257: Unknown result type (might be due to invalid IL or missing references)
			//IL_2261: Expected O, but got Unknown
			//IL_227c: Unknown result type (might be due to invalid IL or missing references)
			//IL_234a: Unknown result type (might be due to invalid IL or missing references)
			//IL_2354: Expected O, but got Unknown
			//IL_2365: Unknown result type (might be due to invalid IL or missing references)
			//IL_236f: Expected O, but got Unknown
			//IL_2389: Unknown result type (might be due to invalid IL or missing references)
			//IL_242d: Unknown result type (might be due to invalid IL or missing references)
			//IL_2437: Expected O, but got Unknown
			//IL_2506: Unknown result type (might be due to invalid IL or missing references)
			//IL_2657: Unknown result type (might be due to invalid IL or missing references)
			//IL_275b: Unknown result type (might be due to invalid IL or missing references)
			//IL_2765: Expected O, but got Unknown
			//IL_27ca: Unknown result type (might be due to invalid IL or missing references)
			//IL_27d4: Expected O, but got Unknown
			//IL_2a1e: Unknown result type (might be due to invalid IL or missing references)
			//IL_2a28: Expected O, but got Unknown
			//IL_2ae1: Unknown result type (might be due to invalid IL or missing references)
			//IL_2b49: Unknown result type (might be due to invalid IL or missing references)
			//IL_2b53: Expected O, but got Unknown
			//IL_2c21: Unknown result type (might be due to invalid IL or missing references)
			//IL_2c2b: Expected O, but got Unknown
			//IL_2ce4: Unknown result type (might be due to invalid IL or missing references)
			//IL_2d4c: Unknown result type (might be due to invalid IL or missing references)
			//IL_2d56: Expected O, but got Unknown
			//IL_2e54: Unknown result type (might be due to invalid IL or missing references)
			//IL_2e5e: Expected O, but got Unknown
			//IL_2e6f: Unknown result type (might be due to invalid IL or missing references)
			//IL_2e79: Expected O, but got Unknown
			//IL_2e93: Unknown result type (might be due to invalid IL or missing references)
			//IL_2f61: Unknown result type (might be due to invalid IL or missing references)
			//IL_2f6b: Expected O, but got Unknown
			//IL_2f7c: Unknown result type (might be due to invalid IL or missing references)
			//IL_2f86: Expected O, but got Unknown
			//IL_2fa1: Unknown result type (might be due to invalid IL or missing references)
			//IL_3045: Unknown result type (might be due to invalid IL or missing references)
			//IL_304f: Expected O, but got Unknown
			//IL_34b6: Unknown result type (might be due to invalid IL or missing references)
			//IL_34c0: Expected O, but got Unknown
			//IL_3579: Unknown result type (might be due to invalid IL or missing references)
			//IL_35e1: Unknown result type (might be due to invalid IL or missing references)
			//IL_35eb: Expected O, but got Unknown
			//IL_37e2: Unknown result type (might be due to invalid IL or missing references)
			//IL_37ec: Expected O, but got Unknown
			//IL_3838: Unknown result type (might be due to invalid IL or missing references)
			//IL_3887: Unknown result type (might be due to invalid IL or missing references)
			//IL_3891: Expected O, but got Unknown
			//IL_38e8: Unknown result type (might be due to invalid IL or missing references)
			//IL_38f2: Expected O, but got Unknown
			//IL_3903: Unknown result type (might be due to invalid IL or missing references)
			//IL_390d: Expected O, but got Unknown
			//IL_392a: Unknown result type (might be due to invalid IL or missing references)
			//IL_3934: Expected O, but got Unknown
			//IL_39ed: Unknown result type (might be due to invalid IL or missing references)
			//IL_3a55: Unknown result type (might be due to invalid IL or missing references)
			//IL_3a5f: Expected O, but got Unknown
			//IL_3b21: Unknown result type (might be due to invalid IL or missing references)
			//IL_3b2b: Expected O, but got Unknown
			//IL_3b77: Unknown result type (might be due to invalid IL or missing references)
			//IL_3bc6: Unknown result type (might be due to invalid IL or missing references)
			//IL_3bd0: Expected O, but got Unknown
			//IL_3c27: Unknown result type (might be due to invalid IL or missing references)
			//IL_3c31: Expected O, but got Unknown
			//IL_3c42: Unknown result type (might be due to invalid IL or missing references)
			//IL_3c4c: Expected O, but got Unknown
			//IL_3c99: Unknown result type (might be due to invalid IL or missing references)
			//IL_3ca3: Expected O, but got Unknown
			//IL_3cb4: Unknown result type (might be due to invalid IL or missing references)
			//IL_3cbe: Expected O, but got Unknown
			//IL_3cd8: Unknown result type (might be due to invalid IL or missing references)
			//IL_3da2: Unknown result type (might be due to invalid IL or missing references)
			//IL_3dac: Expected O, but got Unknown
			//IL_3dbd: Unknown result type (might be due to invalid IL or missing references)
			//IL_3dc7: Expected O, but got Unknown
			//IL_3de1: Unknown result type (might be due to invalid IL or missing references)
			//IL_3eaf: Unknown result type (might be due to invalid IL or missing references)
			//IL_3eb9: Expected O, but got Unknown
			//IL_3eca: Unknown result type (might be due to invalid IL or missing references)
			//IL_3ed4: Expected O, but got Unknown
			//IL_3eef: Unknown result type (might be due to invalid IL or missing references)
			//IL_3fbd: Unknown result type (might be due to invalid IL or missing references)
			//IL_3fc7: Expected O, but got Unknown
			//IL_3fd8: Unknown result type (might be due to invalid IL or missing references)
			//IL_3fe2: Expected O, but got Unknown
			//IL_3ffd: Unknown result type (might be due to invalid IL or missing references)
			//IL_40cb: Unknown result type (might be due to invalid IL or missing references)
			//IL_40d5: Expected O, but got Unknown
			//IL_40e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_40f0: Expected O, but got Unknown
			//IL_410a: Unknown result type (might be due to invalid IL or missing references)
			//IL_41ae: Unknown result type (might be due to invalid IL or missing references)
			//IL_41b8: Expected O, but got Unknown
			//IL_4287: Unknown result type (might be due to invalid IL or missing references)
			//IL_43d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_44dc: Unknown result type (might be due to invalid IL or missing references)
			//IL_44e6: Expected O, but got Unknown
			//IL_454b: Unknown result type (might be due to invalid IL or missing references)
			//IL_4555: Expected O, but got Unknown
			//IL_479e: Unknown result type (might be due to invalid IL or missing references)
			//IL_47a8: Expected O, but got Unknown
			//IL_4861: Unknown result type (might be due to invalid IL or missing references)
			//IL_48c9: Unknown result type (might be due to invalid IL or missing references)
			//IL_48d3: Expected O, but got Unknown
			//IL_4aca: Unknown result type (might be due to invalid IL or missing references)
			//IL_4ad4: Expected O, but got Unknown
			//IL_4b20: Unknown result type (might be due to invalid IL or missing references)
			//IL_4b6f: Unknown result type (might be due to invalid IL or missing references)
			//IL_4b79: Expected O, but got Unknown
			//IL_4bd0: Unknown result type (might be due to invalid IL or missing references)
			//IL_4bda: Expected O, but got Unknown
			//IL_4beb: Unknown result type (might be due to invalid IL or missing references)
			//IL_4bf5: Expected O, but got Unknown
			//IL_4c12: Unknown result type (might be due to invalid IL or missing references)
			//IL_4c1c: Expected O, but got Unknown
			//IL_4cd5: Unknown result type (might be due to invalid IL or missing references)
			//IL_4d3d: Unknown result type (might be due to invalid IL or missing references)
			//IL_4d47: Expected O, but got Unknown
			//IL_4e09: Unknown result type (might be due to invalid IL or missing references)
			//IL_4e13: Expected O, but got Unknown
			//IL_4e5f: Unknown result type (might be due to invalid IL or missing references)
			//IL_4eae: Unknown result type (might be due to invalid IL or missing references)
			//IL_4eb8: Expected O, but got Unknown
			//IL_4f0f: Unknown result type (might be due to invalid IL or missing references)
			//IL_4f19: Expected O, but got Unknown
			//IL_4f2a: Unknown result type (might be due to invalid IL or missing references)
			//IL_4f34: Expected O, but got Unknown
			//IL_4f81: Unknown result type (might be due to invalid IL or missing references)
			//IL_4f8b: Expected O, but got Unknown
			//IL_4f9c: Unknown result type (might be due to invalid IL or missing references)
			//IL_4fa6: Expected O, but got Unknown
			//IL_4fc0: Unknown result type (might be due to invalid IL or missing references)
			//IL_508a: Unknown result type (might be due to invalid IL or missing references)
			//IL_5094: Expected O, but got Unknown
			//IL_50a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_50af: Expected O, but got Unknown
			//IL_50c9: Unknown result type (might be due to invalid IL or missing references)
			//IL_5197: Unknown result type (might be due to invalid IL or missing references)
			//IL_51a1: Expected O, but got Unknown
			//IL_51b2: Unknown result type (might be due to invalid IL or missing references)
			//IL_51bc: Expected O, but got Unknown
			//IL_51d7: Unknown result type (might be due to invalid IL or missing references)
			//IL_52a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_52af: Expected O, but got Unknown
			//IL_52c0: Unknown result type (might be due to invalid IL or missing references)
			//IL_52ca: Expected O, but got Unknown
			//IL_52e5: Unknown result type (might be due to invalid IL or missing references)
			//IL_53b3: Unknown result type (might be due to invalid IL or missing references)
			//IL_53bd: Expected O, but got Unknown
			//IL_53ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_53d8: Expected O, but got Unknown
			//IL_53f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_5496: Unknown result type (might be due to invalid IL or missing references)
			//IL_54a0: Expected O, but got Unknown
			//IL_556f: Unknown result type (might be due to invalid IL or missing references)
			//IL_56c0: Unknown result type (might be due to invalid IL or missing references)
			//IL_57c4: Unknown result type (might be due to invalid IL or missing references)
			//IL_57ce: Expected O, but got Unknown
			//IL_5833: Unknown result type (might be due to invalid IL or missing references)
			//IL_583d: Expected O, but got Unknown
			//IL_5a86: Unknown result type (might be due to invalid IL or missing references)
			//IL_5a90: Expected O, but got Unknown
			//IL_5b49: Unknown result type (might be due to invalid IL or missing references)
			//IL_5bb1: Unknown result type (might be due to invalid IL or missing references)
			//IL_5bbb: Expected O, but got Unknown
			//IL_5db2: Unknown result type (might be due to invalid IL or missing references)
			//IL_5dbc: Expected O, but got Unknown
			//IL_5e08: Unknown result type (might be due to invalid IL or missing references)
			//IL_5e57: Unknown result type (might be due to invalid IL or missing references)
			//IL_5e61: Expected O, but got Unknown
			//IL_5eb8: Unknown result type (might be due to invalid IL or missing references)
			//IL_5ec2: Expected O, but got Unknown
			//IL_5ed3: Unknown result type (might be due to invalid IL or missing references)
			//IL_5edd: Expected O, but got Unknown
			//IL_5efa: Unknown result type (might be due to invalid IL or missing references)
			//IL_5f04: Expected O, but got Unknown
			//IL_5fbd: Unknown result type (might be due to invalid IL or missing references)
			//IL_6025: Unknown result type (might be due to invalid IL or missing references)
			//IL_602f: Expected O, but got Unknown
			//IL_60f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_60fb: Expected O, but got Unknown
			//IL_6147: Unknown result type (might be due to invalid IL or missing references)
			//IL_6196: Unknown result type (might be due to invalid IL or missing references)
			//IL_61a0: Expected O, but got Unknown
			//IL_61f7: Unknown result type (might be due to invalid IL or missing references)
			//IL_6201: Expected O, but got Unknown
			//IL_6212: Unknown result type (might be due to invalid IL or missing references)
			//IL_621c: Expected O, but got Unknown
			//IL_6269: Unknown result type (might be due to invalid IL or missing references)
			//IL_6273: Expected O, but got Unknown
			//IL_6284: Unknown result type (might be due to invalid IL or missing references)
			//IL_628e: Expected O, but got Unknown
			//IL_62a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_6372: Unknown result type (might be due to invalid IL or missing references)
			//IL_637c: Expected O, but got Unknown
			//IL_638d: Unknown result type (might be due to invalid IL or missing references)
			//IL_6397: Expected O, but got Unknown
			//IL_63b1: Unknown result type (might be due to invalid IL or missing references)
			//IL_647f: Unknown result type (might be due to invalid IL or missing references)
			//IL_6489: Expected O, but got Unknown
			//IL_649a: Unknown result type (might be due to invalid IL or missing references)
			//IL_64a4: Expected O, but got Unknown
			//IL_64bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_658d: Unknown result type (might be due to invalid IL or missing references)
			//IL_6597: Expected O, but got Unknown
			//IL_65a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_65b2: Expected O, but got Unknown
			//IL_65cd: Unknown result type (might be due to invalid IL or missing references)
			//IL_669b: Unknown result type (might be due to invalid IL or missing references)
			//IL_66a5: Expected O, but got Unknown
			//IL_66b6: Unknown result type (might be due to invalid IL or missing references)
			//IL_66c0: Expected O, but got Unknown
			//IL_66da: Unknown result type (might be due to invalid IL or missing references)
			//IL_677e: Unknown result type (might be due to invalid IL or missing references)
			//IL_6788: Expected O, but got Unknown
			//IL_6857: Unknown result type (might be due to invalid IL or missing references)
			//IL_69a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_6aac: Unknown result type (might be due to invalid IL or missing references)
			//IL_6ab6: Expected O, but got Unknown
			//IL_6b1b: Unknown result type (might be due to invalid IL or missing references)
			//IL_6b25: Expected O, but got Unknown
			//IL_6d6e: Unknown result type (might be due to invalid IL or missing references)
			//IL_6d78: Expected O, but got Unknown
			//IL_6e31: Unknown result type (might be due to invalid IL or missing references)
			//IL_6e99: Unknown result type (might be due to invalid IL or missing references)
			//IL_6ea3: Expected O, but got Unknown
			//IL_709a: Unknown result type (might be due to invalid IL or missing references)
			//IL_70a4: Expected O, but got Unknown
			//IL_70f0: Unknown result type (might be due to invalid IL or missing references)
			//IL_713f: Unknown result type (might be due to invalid IL or missing references)
			//IL_7149: Expected O, but got Unknown
			//IL_71a0: Unknown result type (might be due to invalid IL or missing references)
			//IL_71aa: Expected O, but got Unknown
			//IL_71bb: Unknown result type (might be due to invalid IL or missing references)
			//IL_71c5: Expected O, but got Unknown
			//IL_71e2: Unknown result type (might be due to invalid IL or missing references)
			//IL_71ec: Expected O, but got Unknown
			//IL_72a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_730d: Unknown result type (might be due to invalid IL or missing references)
			//IL_7317: Expected O, but got Unknown
			//IL_73d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_73e3: Expected O, but got Unknown
			//IL_742f: Unknown result type (might be due to invalid IL or missing references)
			//IL_747e: Unknown result type (might be due to invalid IL or missing references)
			//IL_7488: Expected O, but got Unknown
			//IL_74df: Unknown result type (might be due to invalid IL or missing references)
			//IL_74e9: Expected O, but got Unknown
			//IL_74fa: Unknown result type (might be due to invalid IL or missing references)
			//IL_7504: Expected O, but got Unknown
			//IL_7551: Unknown result type (might be due to invalid IL or missing references)
			//IL_755b: Expected O, but got Unknown
			//IL_756c: Unknown result type (might be due to invalid IL or missing references)
			//IL_7576: Expected O, but got Unknown
			//IL_7590: Unknown result type (might be due to invalid IL or missing references)
			//IL_765a: Unknown result type (might be due to invalid IL or missing references)
			//IL_7664: Expected O, but got Unknown
			//IL_7675: Unknown result type (might be due to invalid IL or missing references)
			//IL_767f: Expected O, but got Unknown
			//IL_7699: Unknown result type (might be due to invalid IL or missing references)
			//IL_7767: Unknown result type (might be due to invalid IL or missing references)
			//IL_7771: Expected O, but got Unknown
			//IL_7782: Unknown result type (might be due to invalid IL or missing references)
			//IL_778c: Expected O, but got Unknown
			//IL_77a7: Unknown result type (might be due to invalid IL or missing references)
			//IL_7875: Unknown result type (might be due to invalid IL or missing references)
			//IL_787f: Expected O, but got Unknown
			//IL_7890: Unknown result type (might be due to invalid IL or missing references)
			//IL_789a: Expected O, but got Unknown
			//IL_78b5: Unknown result type (might be due to invalid IL or missing references)
			//IL_7983: Unknown result type (might be due to invalid IL or missing references)
			//IL_798d: Expected O, but got Unknown
			//IL_799e: Unknown result type (might be due to invalid IL or missing references)
			//IL_79a8: Expected O, but got Unknown
			//IL_79c2: Unknown result type (might be due to invalid IL or missing references)
			//IL_7a66: Unknown result type (might be due to invalid IL or missing references)
			//IL_7a70: Expected O, but got Unknown
			//IL_7b3f: Unknown result type (might be due to invalid IL or missing references)
			//IL_7c90: Unknown result type (might be due to invalid IL or missing references)
			//IL_7d94: Unknown result type (might be due to invalid IL or missing references)
			//IL_7d9e: Expected O, but got Unknown
			//IL_7e03: Unknown result type (might be due to invalid IL or missing references)
			//IL_7e0d: Expected O, but got Unknown
			//IL_8056: Unknown result type (might be due to invalid IL or missing references)
			//IL_8060: Expected O, but got Unknown
			//IL_8119: Unknown result type (might be due to invalid IL or missing references)
			//IL_8181: Unknown result type (might be due to invalid IL or missing references)
			//IL_818b: Expected O, but got Unknown
			//IL_8382: Unknown result type (might be due to invalid IL or missing references)
			//IL_838c: Expected O, but got Unknown
			//IL_83d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_8427: Unknown result type (might be due to invalid IL or missing references)
			//IL_8431: Expected O, but got Unknown
			//IL_8488: Unknown result type (might be due to invalid IL or missing references)
			//IL_8492: Expected O, but got Unknown
			//IL_84a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_84ad: Expected O, but got Unknown
			//IL_84ca: Unknown result type (might be due to invalid IL or missing references)
			//IL_84d4: Expected O, but got Unknown
			//IL_858d: Unknown result type (might be due to invalid IL or missing references)
			//IL_85f5: Unknown result type (might be due to invalid IL or missing references)
			//IL_85ff: Expected O, but got Unknown
			//IL_86c1: Unknown result type (might be due to invalid IL or missing references)
			//IL_86cb: Expected O, but got Unknown
			//IL_8717: Unknown result type (might be due to invalid IL or missing references)
			//IL_8766: Unknown result type (might be due to invalid IL or missing references)
			//IL_8770: Expected O, but got Unknown
			//IL_87c7: Unknown result type (might be due to invalid IL or missing references)
			//IL_87d1: Expected O, but got Unknown
			//IL_87e2: Unknown result type (might be due to invalid IL or missing references)
			//IL_87ec: Expected O, but got Unknown
			//IL_8839: Unknown result type (might be due to invalid IL or missing references)
			//IL_8843: Expected O, but got Unknown
			//IL_8854: Unknown result type (might be due to invalid IL or missing references)
			//IL_885e: Expected O, but got Unknown
			//IL_8878: Unknown result type (might be due to invalid IL or missing references)
			//IL_8942: Unknown result type (might be due to invalid IL or missing references)
			//IL_894c: Expected O, but got Unknown
			//IL_895d: Unknown result type (might be due to invalid IL or missing references)
			//IL_8967: Expected O, but got Unknown
			//IL_8981: Unknown result type (might be due to invalid IL or missing references)
			//IL_8a4f: Unknown result type (might be due to invalid IL or missing references)
			//IL_8a59: Expected O, but got Unknown
			//IL_8a6a: Unknown result type (might be due to invalid IL or missing references)
			//IL_8a74: Expected O, but got Unknown
			//IL_8a8f: Unknown result type (might be due to invalid IL or missing references)
			//IL_8b5d: Unknown result type (might be due to invalid IL or missing references)
			//IL_8b67: Expected O, but got Unknown
			//IL_8b78: Unknown result type (might be due to invalid IL or missing references)
			//IL_8b82: Expected O, but got Unknown
			//IL_8b9d: Unknown result type (might be due to invalid IL or missing references)
			//IL_8c6b: Unknown result type (might be due to invalid IL or missing references)
			//IL_8c75: Expected O, but got Unknown
			//IL_8c86: Unknown result type (might be due to invalid IL or missing references)
			//IL_8c90: Expected O, but got Unknown
			//IL_8caa: Unknown result type (might be due to invalid IL or missing references)
			//IL_8d4e: Unknown result type (might be due to invalid IL or missing references)
			//IL_8d58: Expected O, but got Unknown
			//IL_8e27: Unknown result type (might be due to invalid IL or missing references)
			//IL_8f78: Unknown result type (might be due to invalid IL or missing references)
			//IL_907c: Unknown result type (might be due to invalid IL or missing references)
			//IL_9086: Expected O, but got Unknown
			//IL_90eb: Unknown result type (might be due to invalid IL or missing references)
			//IL_90f5: Expected O, but got Unknown
			//IL_933e: Unknown result type (might be due to invalid IL or missing references)
			//IL_9348: Expected O, but got Unknown
			//IL_9401: Unknown result type (might be due to invalid IL or missing references)
			//IL_9469: Unknown result type (might be due to invalid IL or missing references)
			//IL_9473: Expected O, but got Unknown
			//IL_966a: Unknown result type (might be due to invalid IL or missing references)
			//IL_9674: Expected O, but got Unknown
			//IL_96c0: Unknown result type (might be due to invalid IL or missing references)
			//IL_970f: Unknown result type (might be due to invalid IL or missing references)
			//IL_9719: Expected O, but got Unknown
			//IL_9770: Unknown result type (might be due to invalid IL or missing references)
			//IL_977a: Expected O, but got Unknown
			//IL_978b: Unknown result type (might be due to invalid IL or missing references)
			//IL_9795: Expected O, but got Unknown
			//IL_97b2: Unknown result type (might be due to invalid IL or missing references)
			//IL_97bc: Expected O, but got Unknown
			//IL_9875: Unknown result type (might be due to invalid IL or missing references)
			//IL_98dd: Unknown result type (might be due to invalid IL or missing references)
			//IL_98e7: Expected O, but got Unknown
			//IL_99a9: Unknown result type (might be due to invalid IL or missing references)
			//IL_99b3: Expected O, but got Unknown
			//IL_99ff: Unknown result type (might be due to invalid IL or missing references)
			//IL_9a4e: Unknown result type (might be due to invalid IL or missing references)
			//IL_9a58: Expected O, but got Unknown
			//IL_9aaf: Unknown result type (might be due to invalid IL or missing references)
			//IL_9ab9: Expected O, but got Unknown
			//IL_9aca: Unknown result type (might be due to invalid IL or missing references)
			//IL_9ad4: Expected O, but got Unknown
			//IL_9b21: Unknown result type (might be due to invalid IL or missing references)
			//IL_9b2b: Expected O, but got Unknown
			//IL_9b3c: Unknown result type (might be due to invalid IL or missing references)
			//IL_9b46: Expected O, but got Unknown
			//IL_9b60: Unknown result type (might be due to invalid IL or missing references)
			//IL_9c2a: Unknown result type (might be due to invalid IL or missing references)
			//IL_9c34: Expected O, but got Unknown
			//IL_9c45: Unknown result type (might be due to invalid IL or missing references)
			//IL_9c4f: Expected O, but got Unknown
			//IL_9c69: Unknown result type (might be due to invalid IL or missing references)
			//IL_9d37: Unknown result type (might be due to invalid IL or missing references)
			//IL_9d41: Expected O, but got Unknown
			//IL_9d52: Unknown result type (might be due to invalid IL or missing references)
			//IL_9d5c: Expected O, but got Unknown
			//IL_9d77: Unknown result type (might be due to invalid IL or missing references)
			//IL_9e45: Unknown result type (might be due to invalid IL or missing references)
			//IL_9e4f: Expected O, but got Unknown
			//IL_9e60: Unknown result type (might be due to invalid IL or missing references)
			//IL_9e6a: Expected O, but got Unknown
			//IL_9e85: Unknown result type (might be due to invalid IL or missing references)
			//IL_9f53: Unknown result type (might be due to invalid IL or missing references)
			//IL_9f5d: Expected O, but got Unknown
			//IL_9f6e: Unknown result type (might be due to invalid IL or missing references)
			//IL_9f78: Expected O, but got Unknown
			//IL_9f92: Unknown result type (might be due to invalid IL or missing references)
			//IL_a036: Unknown result type (might be due to invalid IL or missing references)
			//IL_a040: Expected O, but got Unknown
			//IL_a10f: Unknown result type (might be due to invalid IL or missing references)
			//IL_a260: Unknown result type (might be due to invalid IL or missing references)
			//IL_a364: Unknown result type (might be due to invalid IL or missing references)
			//IL_a36e: Expected O, but got Unknown
			//IL_a3d3: Unknown result type (might be due to invalid IL or missing references)
			//IL_a3dd: Expected O, but got Unknown
			//IL_a626: Unknown result type (might be due to invalid IL or missing references)
			//IL_a630: Expected O, but got Unknown
			//IL_a6e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_a751: Unknown result type (might be due to invalid IL or missing references)
			//IL_a75b: Expected O, but got Unknown
			//IL_a952: Unknown result type (might be due to invalid IL or missing references)
			//IL_a95c: Expected O, but got Unknown
			//IL_a9a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_a9f7: Unknown result type (might be due to invalid IL or missing references)
			//IL_aa01: Expected O, but got Unknown
			//IL_aa58: Unknown result type (might be due to invalid IL or missing references)
			//IL_aa62: Expected O, but got Unknown
			//IL_aa73: Unknown result type (might be due to invalid IL or missing references)
			//IL_aa7d: Expected O, but got Unknown
			//IL_aa9a: Unknown result type (might be due to invalid IL or missing references)
			//IL_aaa4: Expected O, but got Unknown
			//IL_ab5d: Unknown result type (might be due to invalid IL or missing references)
			//IL_abc5: Unknown result type (might be due to invalid IL or missing references)
			//IL_abcf: Expected O, but got Unknown
			//IL_ac91: Unknown result type (might be due to invalid IL or missing references)
			//IL_ac9b: Expected O, but got Unknown
			//IL_ace7: Unknown result type (might be due to invalid IL or missing references)
			//IL_ad36: Unknown result type (might be due to invalid IL or missing references)
			//IL_ad40: Expected O, but got Unknown
			//IL_ad97: Unknown result type (might be due to invalid IL or missing references)
			//IL_ada1: Expected O, but got Unknown
			//IL_adb2: Unknown result type (might be due to invalid IL or missing references)
			//IL_adbc: Expected O, but got Unknown
			//IL_ae09: Unknown result type (might be due to invalid IL or missing references)
			//IL_ae13: Expected O, but got Unknown
			//IL_ae24: Unknown result type (might be due to invalid IL or missing references)
			//IL_ae2e: Expected O, but got Unknown
			//IL_ae48: Unknown result type (might be due to invalid IL or missing references)
			//IL_af12: Unknown result type (might be due to invalid IL or missing references)
			//IL_af1c: Expected O, but got Unknown
			//IL_af2d: Unknown result type (might be due to invalid IL or missing references)
			//IL_af37: Expected O, but got Unknown
			//IL_af51: Unknown result type (might be due to invalid IL or missing references)
			//IL_b01f: Unknown result type (might be due to invalid IL or missing references)
			//IL_b029: Expected O, but got Unknown
			//IL_b03a: Unknown result type (might be due to invalid IL or missing references)
			//IL_b044: Expected O, but got Unknown
			//IL_b05f: Unknown result type (might be due to invalid IL or missing references)
			//IL_b12d: Unknown result type (might be due to invalid IL or missing references)
			//IL_b137: Expected O, but got Unknown
			//IL_b148: Unknown result type (might be due to invalid IL or missing references)
			//IL_b152: Expected O, but got Unknown
			//IL_b16d: Unknown result type (might be due to invalid IL or missing references)
			//IL_b23b: Unknown result type (might be due to invalid IL or missing references)
			//IL_b245: Expected O, but got Unknown
			//IL_b256: Unknown result type (might be due to invalid IL or missing references)
			//IL_b260: Expected O, but got Unknown
			//IL_b27a: Unknown result type (might be due to invalid IL or missing references)
			//IL_b31e: Unknown result type (might be due to invalid IL or missing references)
			//IL_b328: Expected O, but got Unknown
			//IL_b3f7: Unknown result type (might be due to invalid IL or missing references)
			//IL_b548: Unknown result type (might be due to invalid IL or missing references)
			//IL_b64c: Unknown result type (might be due to invalid IL or missing references)
			//IL_b656: Expected O, but got Unknown
			//IL_b6bb: Unknown result type (might be due to invalid IL or missing references)
			//IL_b6c5: Expected O, but got Unknown
			//IL_b90e: Unknown result type (might be due to invalid IL or missing references)
			//IL_b918: Expected O, but got Unknown
			//IL_b9d1: Unknown result type (might be due to invalid IL or missing references)
			//IL_ba39: Unknown result type (might be due to invalid IL or missing references)
			//IL_ba43: Expected O, but got Unknown
			//IL_bc3a: Unknown result type (might be due to invalid IL or missing references)
			//IL_bc44: Expected O, but got Unknown
			//IL_bc90: Unknown result type (might be due to invalid IL or missing references)
			//IL_bcdf: Unknown result type (might be due to invalid IL or missing references)
			//IL_bce9: Expected O, but got Unknown
			//IL_bd40: Unknown result type (might be due to invalid IL or missing references)
			//IL_bd4a: Expected O, but got Unknown
			//IL_bd5b: Unknown result type (might be due to invalid IL or missing references)
			//IL_bd65: Expected O, but got Unknown
			//IL_bd82: Unknown result type (might be due to invalid IL or missing references)
			//IL_bd8c: Expected O, but got Unknown
			//IL_be45: Unknown result type (might be due to invalid IL or missing references)
			//IL_bead: Unknown result type (might be due to invalid IL or missing references)
			//IL_beb7: Expected O, but got Unknown
			//IL_bf79: Unknown result type (might be due to invalid IL or missing references)
			//IL_bf83: Expected O, but got Unknown
			//IL_bfcf: Unknown result type (might be due to invalid IL or missing references)
			//IL_c01e: Unknown result type (might be due to invalid IL or missing references)
			//IL_c028: Expected O, but got Unknown
			//IL_c07f: Unknown result type (might be due to invalid IL or missing references)
			//IL_c089: Expected O, but got Unknown
			//IL_c09a: Unknown result type (might be due to invalid IL or missing references)
			//IL_c0a4: Expected O, but got Unknown
			//IL_c0f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_c0fb: Expected O, but got Unknown
			//IL_c10c: Unknown result type (might be due to invalid IL or missing references)
			//IL_c116: Expected O, but got Unknown
			//IL_c130: Unknown result type (might be due to invalid IL or missing references)
			//IL_c1fa: Unknown result type (might be due to invalid IL or missing references)
			//IL_c204: Expected O, but got Unknown
			//IL_c215: Unknown result type (might be due to invalid IL or missing references)
			//IL_c21f: Expected O, but got Unknown
			//IL_c239: Unknown result type (might be due to invalid IL or missing references)
			//IL_c307: Unknown result type (might be due to invalid IL or missing references)
			//IL_c311: Expected O, but got Unknown
			//IL_c322: Unknown result type (might be due to invalid IL or missing references)
			//IL_c32c: Expected O, but got Unknown
			//IL_c347: Unknown result type (might be due to invalid IL or missing references)
			//IL_c415: Unknown result type (might be due to invalid IL or missing references)
			//IL_c41f: Expected O, but got Unknown
			//IL_c430: Unknown result type (might be due to invalid IL or missing references)
			//IL_c43a: Expected O, but got Unknown
			//IL_c455: Unknown result type (might be due to invalid IL or missing references)
			//IL_c523: Unknown result type (might be due to invalid IL or missing references)
			//IL_c52d: Expected O, but got Unknown
			//IL_c53e: Unknown result type (might be due to invalid IL or missing references)
			//IL_c548: Expected O, but got Unknown
			//IL_c562: Unknown result type (might be due to invalid IL or missing references)
			//IL_c606: Unknown result type (might be due to invalid IL or missing references)
			//IL_c610: Expected O, but got Unknown
			//IL_c6df: Unknown result type (might be due to invalid IL or missing references)
			//IL_c830: Unknown result type (might be due to invalid IL or missing references)
			//IL_c934: Unknown result type (might be due to invalid IL or missing references)
			//IL_c93e: Expected O, but got Unknown
			//IL_c9a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_c9ad: Expected O, but got Unknown
			//IL_cbf6: Unknown result type (might be due to invalid IL or missing references)
			//IL_cc00: Expected O, but got Unknown
			//IL_ccb9: Unknown result type (might be due to invalid IL or missing references)
			//IL_cd21: Unknown result type (might be due to invalid IL or missing references)
			//IL_cd2b: Expected O, but got Unknown
			//IL_cf22: Unknown result type (might be due to invalid IL or missing references)
			//IL_cf2c: Expected O, but got Unknown
			//IL_cf78: Unknown result type (might be due to invalid IL or missing references)
			//IL_cfc7: Unknown result type (might be due to invalid IL or missing references)
			//IL_cfd1: Expected O, but got Unknown
			//IL_d028: Unknown result type (might be due to invalid IL or missing references)
			//IL_d032: Expected O, but got Unknown
			//IL_d043: Unknown result type (might be due to invalid IL or missing references)
			//IL_d04d: Expected O, but got Unknown
			//IL_d06a: Unknown result type (might be due to invalid IL or missing references)
			//IL_d074: Expected O, but got Unknown
			//IL_d12d: Unknown result type (might be due to invalid IL or missing references)
			//IL_d195: Unknown result type (might be due to invalid IL or missing references)
			//IL_d19f: Expected O, but got Unknown
			//IL_d261: Unknown result type (might be due to invalid IL or missing references)
			//IL_d26b: Expected O, but got Unknown
			//IL_d2b7: Unknown result type (might be due to invalid IL or missing references)
			//IL_d306: Unknown result type (might be due to invalid IL or missing references)
			//IL_d310: Expected O, but got Unknown
			//IL_d367: Unknown result type (might be due to invalid IL or missing references)
			//IL_d371: Expected O, but got Unknown
			//IL_d382: Unknown result type (might be due to invalid IL or missing references)
			//IL_d38c: Expected O, but got Unknown
			//IL_d3d9: Unknown result type (might be due to invalid IL or missing references)
			//IL_d3e3: Expected O, but got Unknown
			//IL_d3f4: Unknown result type (might be due to invalid IL or missing references)
			//IL_d3fe: Expected O, but got Unknown
			//IL_d418: Unknown result type (might be due to invalid IL or missing references)
			//IL_d4e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_d4f0: Expected O, but got Unknown
			//IL_d501: Unknown result type (might be due to invalid IL or missing references)
			//IL_d50b: Expected O, but got Unknown
			//IL_d525: Unknown result type (might be due to invalid IL or missing references)
			//IL_d5f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_d5fd: Expected O, but got Unknown
			//IL_d60e: Unknown result type (might be due to invalid IL or missing references)
			//IL_d618: Expected O, but got Unknown
			//IL_d633: Unknown result type (might be due to invalid IL or missing references)
			//IL_d701: Unknown result type (might be due to invalid IL or missing references)
			//IL_d70b: Expected O, but got Unknown
			//IL_d71c: Unknown result type (might be due to invalid IL or missing references)
			//IL_d726: Expected O, but got Unknown
			//IL_d741: Unknown result type (might be due to invalid IL or missing references)
			//IL_d80f: Unknown result type (might be due to invalid IL or missing references)
			//IL_d819: Expected O, but got Unknown
			//IL_d82a: Unknown result type (might be due to invalid IL or missing references)
			//IL_d834: Expected O, but got Unknown
			//IL_d84e: Unknown result type (might be due to invalid IL or missing references)
			//IL_d8f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_d8fc: Expected O, but got Unknown
			//IL_d9cb: Unknown result type (might be due to invalid IL or missing references)
			//IL_db1c: Unknown result type (might be due to invalid IL or missing references)
			//IL_dc20: Unknown result type (might be due to invalid IL or missing references)
			//IL_dc2a: Expected O, but got Unknown
			//IL_dc8f: Unknown result type (might be due to invalid IL or missing references)
			//IL_dc99: Expected O, but got Unknown
			//IL_dedf: Unknown result type (might be due to invalid IL or missing references)
			//IL_dee9: Expected O, but got Unknown
			//IL_dfa2: Unknown result type (might be due to invalid IL or missing references)
			//IL_e00a: Unknown result type (might be due to invalid IL or missing references)
			//IL_e014: Expected O, but got Unknown
			//IL_e20b: Unknown result type (might be due to invalid IL or missing references)
			//IL_e215: Expected O, but got Unknown
			//IL_e261: Unknown result type (might be due to invalid IL or missing references)
			//IL_e2b0: Unknown result type (might be due to invalid IL or missing references)
			//IL_e2ba: Expected O, but got Unknown
			//IL_e311: Unknown result type (might be due to invalid IL or missing references)
			//IL_e31b: Expected O, but got Unknown
			//IL_e32c: Unknown result type (might be due to invalid IL or missing references)
			//IL_e336: Expected O, but got Unknown
			//IL_e353: Unknown result type (might be due to invalid IL or missing references)
			//IL_e35d: Expected O, but got Unknown
			//IL_e416: Unknown result type (might be due to invalid IL or missing references)
			//IL_e47e: Unknown result type (might be due to invalid IL or missing references)
			//IL_e488: Expected O, but got Unknown
			//IL_e54a: Unknown result type (might be due to invalid IL or missing references)
			//IL_e554: Expected O, but got Unknown
			//IL_e5a0: Unknown result type (might be due to invalid IL or missing references)
			//IL_e5ef: Unknown result type (might be due to invalid IL or missing references)
			//IL_e5f9: Expected O, but got Unknown
			//IL_e650: Unknown result type (might be due to invalid IL or missing references)
			//IL_e65a: Expected O, but got Unknown
			//IL_e66b: Unknown result type (might be due to invalid IL or missing references)
			//IL_e675: Expected O, but got Unknown
			//IL_e6c2: Unknown result type (might be due to invalid IL or missing references)
			//IL_e6cc: Expected O, but got Unknown
			//IL_e6dd: Unknown result type (might be due to invalid IL or missing references)
			//IL_e6e7: Expected O, but got Unknown
			//IL_e701: Unknown result type (might be due to invalid IL or missing references)
			//IL_e7cb: Unknown result type (might be due to invalid IL or missing references)
			//IL_e7d5: Expected O, but got Unknown
			//IL_e7e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_e7f0: Expected O, but got Unknown
			//IL_e80a: Unknown result type (might be due to invalid IL or missing references)
			//IL_e8d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_e8e2: Expected O, but got Unknown
			//IL_e8f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_e8fd: Expected O, but got Unknown
			//IL_e918: Unknown result type (might be due to invalid IL or missing references)
			//IL_e9e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_e9f0: Expected O, but got Unknown
			//IL_ea01: Unknown result type (might be due to invalid IL or missing references)
			//IL_ea0b: Expected O, but got Unknown
			//IL_ea26: Unknown result type (might be due to invalid IL or missing references)
			//IL_eaf4: Unknown result type (might be due to invalid IL or missing references)
			//IL_eafe: Expected O, but got Unknown
			//IL_eb0f: Unknown result type (might be due to invalid IL or missing references)
			//IL_eb19: Expected O, but got Unknown
			//IL_eb33: Unknown result type (might be due to invalid IL or missing references)
			//IL_ebd7: Unknown result type (might be due to invalid IL or missing references)
			//IL_ebe1: Expected O, but got Unknown
			//IL_ecb0: Unknown result type (might be due to invalid IL or missing references)
			//IL_ee01: Unknown result type (might be due to invalid IL or missing references)
			//IL_ef05: Unknown result type (might be due to invalid IL or missing references)
			//IL_ef0f: Expected O, but got Unknown
			//IL_ef74: Unknown result type (might be due to invalid IL or missing references)
			//IL_ef7e: Expected O, but got Unknown
			//IL_f1c7: Unknown result type (might be due to invalid IL or missing references)
			//IL_f1d1: Expected O, but got Unknown
			//IL_f28a: Unknown result type (might be due to invalid IL or missing references)
			//IL_f2f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_f2fc: Expected O, but got Unknown
			//IL_f4f3: Unknown result type (might be due to invalid IL or missing references)
			//IL_f4fd: Expected O, but got Unknown
			//IL_f549: Unknown result type (might be due to invalid IL or missing references)
			//IL_f598: Unknown result type (might be due to invalid IL or missing references)
			//IL_f5a2: Expected O, but got Unknown
			//IL_f5f9: Unknown result type (might be due to invalid IL or missing references)
			//IL_f603: Expected O, but got Unknown
			//IL_f614: Unknown result type (might be due to invalid IL or missing references)
			//IL_f61e: Expected O, but got Unknown
			//IL_f63b: Unknown result type (might be due to invalid IL or missing references)
			//IL_f645: Expected O, but got Unknown
			//IL_f6fe: Unknown result type (might be due to invalid IL or missing references)
			//IL_f766: Unknown result type (might be due to invalid IL or missing references)
			//IL_f770: Expected O, but got Unknown
			//IL_f832: Unknown result type (might be due to invalid IL or missing references)
			//IL_f83c: Expected O, but got Unknown
			//IL_f888: Unknown result type (might be due to invalid IL or missing references)
			//IL_f8d7: Unknown result type (might be due to invalid IL or missing references)
			//IL_f8e1: Expected O, but got Unknown
			//IL_f938: Unknown result type (might be due to invalid IL or missing references)
			//IL_f942: Expected O, but got Unknown
			//IL_f953: Unknown result type (might be due to invalid IL or missing references)
			//IL_f95d: Expected O, but got Unknown
			//IL_f9aa: Unknown result type (might be due to invalid IL or missing references)
			//IL_f9b4: Expected O, but got Unknown
			//IL_f9c5: Unknown result type (might be due to invalid IL or missing references)
			//IL_f9cf: Expected O, but got Unknown
			//IL_f9e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_fab3: Unknown result type (might be due to invalid IL or missing references)
			//IL_fabd: Expected O, but got Unknown
			//IL_face: Unknown result type (might be due to invalid IL or missing references)
			//IL_fad8: Expected O, but got Unknown
			//IL_faf2: Unknown result type (might be due to invalid IL or missing references)
			//IL_fbc0: Unknown result type (might be due to invalid IL or missing references)
			//IL_fbca: Expected O, but got Unknown
			//IL_fbdb: Unknown result type (might be due to invalid IL or missing references)
			//IL_fbe5: Expected O, but got Unknown
			//IL_fc00: Unknown result type (might be due to invalid IL or missing references)
			//IL_fcce: Unknown result type (might be due to invalid IL or missing references)
			//IL_fcd8: Expected O, but got Unknown
			//IL_fce9: Unknown result type (might be due to invalid IL or missing references)
			//IL_fcf3: Expected O, but got Unknown
			//IL_fd0e: Unknown result type (might be due to invalid IL or missing references)
			//IL_fddc: Unknown result type (might be due to invalid IL or missing references)
			//IL_fde6: Expected O, but got Unknown
			//IL_fdf7: Unknown result type (might be due to invalid IL or missing references)
			//IL_fe01: Expected O, but got Unknown
			//IL_fe1b: Unknown result type (might be due to invalid IL or missing references)
			//IL_febf: Unknown result type (might be due to invalid IL or missing references)
			//IL_fec9: Expected O, but got Unknown
			//IL_ff98: Unknown result type (might be due to invalid IL or missing references)
			//IL_100e9: Unknown result type (might be due to invalid IL or missing references)
			//IL_101ed: Unknown result type (might be due to invalid IL or missing references)
			//IL_101f7: Expected O, but got Unknown
			//IL_1025c: Unknown result type (might be due to invalid IL or missing references)
			//IL_10266: Expected O, but got Unknown
			//IL_103f0: Unknown result type (might be due to invalid IL or missing references)
			//IL_10669: Unknown result type (might be due to invalid IL or missing references)
			//IL_106c6: Unknown result type (might be due to invalid IL or missing references)
			//IL_106d0: Expected O, but got Unknown
			//IL_10770: Unknown result type (might be due to invalid IL or missing references)
			//IL_1077a: Expected O, but got Unknown
			//IL_10834: Unknown result type (might be due to invalid IL or missing references)
			//IL_1083e: Expected O, but got Unknown
			//IL_108ea: Unknown result type (might be due to invalid IL or missing references)
			//IL_108f4: Expected O, but got Unknown
			//IL_1099b: Unknown result type (might be due to invalid IL or missing references)
			//IL_109a5: Expected O, but got Unknown
			//IL_10a54: Unknown result type (might be due to invalid IL or missing references)
			//IL_10a5e: Expected O, but got Unknown
			//IL_10b05: Unknown result type (might be due to invalid IL or missing references)
			//IL_10b0f: Expected O, but got Unknown
			//IL_10b90: Unknown result type (might be due to invalid IL or missing references)
			//IL_10b9a: Expected O, but got Unknown
			//IL_10c1e: Unknown result type (might be due to invalid IL or missing references)
			//IL_10c28: Expected O, but got Unknown
			//IL_10caa: Unknown result type (might be due to invalid IL or missing references)
			//IL_10cb4: Expected O, but got Unknown
			//IL_10df4: Unknown result type (might be due to invalid IL or missing references)
			//IL_10e88: Unknown result type (might be due to invalid IL or missing references)
			//IL_10e92: Expected O, but got Unknown
			//IL_11107: Unknown result type (might be due to invalid IL or missing references)
			//IL_11111: Expected O, but got Unknown
			//IL_111a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_111b2: Expected O, but got Unknown
			//IL_11236: Unknown result type (might be due to invalid IL or missing references)
			//IL_11240: Expected O, but got Unknown
			//IL_112c4: Unknown result type (might be due to invalid IL or missing references)
			//IL_112ce: Expected O, but got Unknown
			//IL_11362: Unknown result type (might be due to invalid IL or missing references)
			//IL_1136c: Expected O, but got Unknown
			//IL_11450: Unknown result type (might be due to invalid IL or missing references)
			//IL_115bd: Unknown result type (might be due to invalid IL or missing references)
			//IL_115c7: Expected O, but got Unknown
			//IL_11643: Unknown result type (might be due to invalid IL or missing references)
			//IL_117d4: Unknown result type (might be due to invalid IL or missing references)
			//IL_117de: Expected O, but got Unknown
			//IL_11936: Unknown result type (might be due to invalid IL or missing references)
			//IL_119b2: Unknown result type (might be due to invalid IL or missing references)
			//IL_119bc: Expected O, but got Unknown
			//IL_11a61: Unknown result type (might be due to invalid IL or missing references)
			//IL_11a6b: Expected O, but got Unknown
			//IL_11a9a: Unknown result type (might be due to invalid IL or missing references)
			//IL_11aa4: Expected O, but got Unknown
			//IL_11bcb: Unknown result type (might be due to invalid IL or missing references)
			//IL_11bd5: Expected O, but got Unknown
			//IL_11c72: Unknown result type (might be due to invalid IL or missing references)
			//IL_11c7c: Expected O, but got Unknown
			//IL_11d19: Unknown result type (might be due to invalid IL or missing references)
			//IL_11d23: Expected O, but got Unknown
			//IL_11dbd: Unknown result type (might be due to invalid IL or missing references)
			//IL_11dc7: Expected O, but got Unknown
			//IL_11e61: Unknown result type (might be due to invalid IL or missing references)
			//IL_11e6b: Expected O, but got Unknown
			//IL_11f05: Unknown result type (might be due to invalid IL or missing references)
			//IL_11f0f: Expected O, but got Unknown
			//IL_11fb5: Unknown result type (might be due to invalid IL or missing references)
			//IL_11fbf: Expected O, but got Unknown
			//IL_12065: Unknown result type (might be due to invalid IL or missing references)
			//IL_1206f: Expected O, but got Unknown
			//IL_1210f: Unknown result type (might be due to invalid IL or missing references)
			//IL_12119: Expected O, but got Unknown
			//IL_12211: Unknown result type (might be due to invalid IL or missing references)
			//IL_1221b: Expected O, but got Unknown
			ComponentResourceManager componentResourceManager = new ComponentResourceManager(typeof(MixerPanel));
			panel13 = new Panel();
			vuMeter26 = new global::VUMeter.VUMeter();
			vuMeter25 = new global::VUMeter.VUMeter();
			label28 = new Label();
			mainMute = new CPushButton();
			label42 = new Label();
			pictureBox26 = new PictureBox();
			label30 = new Label();
			btnSettings = new Button();
			channel_1_2 = new Panel();
			fader1 = new fader();
			matrixControl1 = new MatrixControl();
			matrixControl2 = new MatrixControl();
			vuMeter16 = new global::VUMeter.VUMeter();
			fader2 = new fader();
			vuMeter15 = new global::VUMeter.VUMeter();
			link0_1 = new CPushButton();
			muteButton0 = new CPushButton();
			soloButton1 = new CPushButton();
			muteButton1 = new CPushButton();
			soloButton0 = new CPushButton();
			label22 = new Label();
			Pan1 = new ControlKnob();
			Pan0 = new ControlKnob();
			pictureBox1 = new PictureBox();
			pictureBox2 = new PictureBox();
			pInfoDisplay = new Panel();
			MainInfoDisplay = new MatrixControl();
			panel16 = new Panel();
			fader26 = new fader();
			fader25 = new fader();
			muteDAW = new CPushButton();
			muteLine = new CPushButton();
			label12 = new Label();
			pictureBox17 = new PictureBox();
			pMixerPanel = new Panel();
			channel_23_24 = new Panel();
			fader23 = new fader();
			matrixControl23 = new MatrixControl();
			matrixControl24 = new MatrixControl();
			vuMeter23 = new global::VUMeter.VUMeter();
			fader24 = new fader();
			vuMeter24 = new global::VUMeter.VUMeter();
			link22_23 = new CPushButton();
			muteButton22 = new CPushButton();
			soloButton23 = new CPushButton();
			muteButton23 = new CPushButton();
			soloButton22 = new CPushButton();
			label11 = new Label();
			Pan23 = new ControlKnob();
			Pan22 = new ControlKnob();
			pictureBox25 = new PictureBox();
			pictureBox27 = new PictureBox();
			channel_21_22 = new Panel();
			fader21 = new fader();
			matrixControl21 = new MatrixControl();
			matrixControl22 = new MatrixControl();
			vuMeter21 = new global::VUMeter.VUMeter();
			fader22 = new fader();
			vuMeter22 = new global::VUMeter.VUMeter();
			link20_21 = new CPushButton();
			muteButton20 = new CPushButton();
			soloButton21 = new CPushButton();
			muteButton21 = new CPushButton();
			soloButton20 = new CPushButton();
			label10 = new Label();
			Pan21 = new ControlKnob();
			Pan20 = new ControlKnob();
			pictureBox23 = new PictureBox();
			pictureBox24 = new PictureBox();
			channel_19_20 = new Panel();
			fader19 = new fader();
			matrixControl19 = new MatrixControl();
			matrixControl20 = new MatrixControl();
			vuMeter19 = new global::VUMeter.VUMeter();
			fader20 = new fader();
			vuMeter20 = new global::VUMeter.VUMeter();
			link18_19 = new CPushButton();
			muteButton18 = new CPushButton();
			soloButton19 = new CPushButton();
			muteButton19 = new CPushButton();
			soloButton18 = new CPushButton();
			label9 = new Label();
			Pan19 = new ControlKnob();
			Pan18 = new ControlKnob();
			pictureBox21 = new PictureBox();
			pictureBox22 = new PictureBox();
			channel_17_18 = new Panel();
			fader17 = new fader();
			matrixControl17 = new MatrixControl();
			matrixControl18 = new MatrixControl();
			vuMeter17 = new global::VUMeter.VUMeter();
			fader18 = new fader();
			vuMeter18 = new global::VUMeter.VUMeter();
			link16_17 = new CPushButton();
			muteButton16 = new CPushButton();
			soloButton17 = new CPushButton();
			muteButton17 = new CPushButton();
			soloButton16 = new CPushButton();
			label8 = new Label();
			Pan17 = new ControlKnob();
			Pan16 = new ControlKnob();
			pictureBox19 = new PictureBox();
			pictureBox20 = new PictureBox();
			channel_15_16 = new Panel();
			fader15 = new fader();
			matrixControl15 = new MatrixControl();
			matrixControl16 = new MatrixControl();
			vuMeter13 = new global::VUMeter.VUMeter();
			fader16 = new fader();
			vuMeter14 = new global::VUMeter.VUMeter();
			link14_15 = new CPushButton();
			muteButton14 = new CPushButton();
			soloButton15 = new CPushButton();
			muteButton15 = new CPushButton();
			soloButton14 = new CPushButton();
			label7 = new Label();
			Pan15 = new ControlKnob();
			Pan14 = new ControlKnob();
			pictureBox15 = new PictureBox();
			pictureBox18 = new PictureBox();
			channel__13_14 = new Panel();
			fader13 = new fader();
			matrixControl13 = new MatrixControl();
			matrixControl14 = new MatrixControl();
			vuMeter11 = new global::VUMeter.VUMeter();
			fader14 = new fader();
			vuMeter12 = new global::VUMeter.VUMeter();
			link12_13 = new CPushButton();
			muteButton12 = new CPushButton();
			soloButton13 = new CPushButton();
			muteButton13 = new CPushButton();
			soloButton12 = new CPushButton();
			label6 = new Label();
			Pan13 = new ControlKnob();
			Pan12 = new ControlKnob();
			pictureBox13 = new PictureBox();
			pictureBox14 = new PictureBox();
			channel_7_8 = new Panel();
			fader7 = new fader();
			matrixControl7 = new MatrixControl();
			matrixControl8 = new MatrixControl();
			vuMeter5 = new global::VUMeter.VUMeter();
			fader8 = new fader();
			vuMeter6 = new global::VUMeter.VUMeter();
			link6_7 = new CPushButton();
			muteButton6 = new CPushButton();
			soloButton7 = new CPushButton();
			muteButton7 = new CPushButton();
			soloButton6 = new CPushButton();
			label5 = new Label();
			Pan7 = new ControlKnob();
			Pan6 = new ControlKnob();
			pictureBox11 = new PictureBox();
			pictureBox12 = new PictureBox();
			channel_9_10 = new Panel();
			fader9 = new fader();
			matrixControl9 = new MatrixControl();
			matrixControl10 = new MatrixControl();
			vuMeter7 = new global::VUMeter.VUMeter();
			fader10 = new fader();
			vuMeter8 = new global::VUMeter.VUMeter();
			link8_9 = new CPushButton();
			muteButton8 = new CPushButton();
			soloButton9 = new CPushButton();
			muteButton9 = new CPushButton();
			soloButton8 = new CPushButton();
			label4 = new Label();
			Pan9 = new ControlKnob();
			Pan8 = new ControlKnob();
			pictureBox9 = new PictureBox();
			pictureBox10 = new PictureBox();
			channel__11_12 = new Panel();
			fader11 = new fader();
			matrixControl11 = new MatrixControl();
			matrixControl12 = new MatrixControl();
			vuMeter9 = new global::VUMeter.VUMeter();
			fader12 = new fader();
			vuMeter10 = new global::VUMeter.VUMeter();
			link10_11 = new CPushButton();
			muteButton10 = new CPushButton();
			soloButton11 = new CPushButton();
			muteButton11 = new CPushButton();
			soloButton10 = new CPushButton();
			label3 = new Label();
			Pan11 = new ControlKnob();
			Pan10 = new ControlKnob();
			pictureBox7 = new PictureBox();
			pictureBox8 = new PictureBox();
			channel_3_4 = new Panel();
			fader3 = new fader();
			matrixControl3 = new MatrixControl();
			matrixControl4 = new MatrixControl();
			vuMeter1 = new global::VUMeter.VUMeter();
			fader4 = new fader();
			vuMeter2 = new global::VUMeter.VUMeter();
			link2_3 = new CPushButton();
			muteButton2 = new CPushButton();
			soloButton3 = new CPushButton();
			muteButton3 = new CPushButton();
			soloButton2 = new CPushButton();
			label2 = new Label();
			Pan3 = new ControlKnob();
			Pan2 = new ControlKnob();
			pictureBox5 = new PictureBox();
			pictureBox6 = new PictureBox();
			channel_5_6 = new Panel();
			fader5 = new fader();
			matrixControl5 = new MatrixControl();
			matrixControl6 = new MatrixControl();
			vuMeter3 = new global::VUMeter.VUMeter();
			fader6 = new fader();
			vuMeter4 = new global::VUMeter.VUMeter();
			link4_5 = new CPushButton();
			muteButton4 = new CPushButton();
			soloButton5 = new CPushButton();
			muteButton5 = new CPushButton();
			soloButton4 = new CPushButton();
			label1 = new Label();
			Pan5 = new ControlKnob();
			Pan4 = new ControlKnob();
			pictureBox3 = new PictureBox();
			pictureBox4 = new PictureBox();
			pTopPanel = new Panel();
			USBModeLight = new CPushButton();
			settingsTab = new global::FlatTabControl.FlatTabControl();
			tabPage4 = new TabPage();
			label43 = new Label();
			btn_setSyncSource = new Button();
			label31 = new Label();
			btnSetSampleRate = new Button();
			label21 = new Label();
			btnSetDeviceNickname = new Button();
			label32 = new Label();
			txtDeviceNickname = new TextBox();
			cbSyncSource = new ComboBox();
			cbSamplerate = new ComboBox();
			tabPage5 = new TabPage();
			btnSetAsioBufferSize = new Button();
			cbxAsioBufferDepth = new ComboBox();
			cbxStreamBufferDepth = new ComboBox();
			groupBox3 = new GroupBox();
			lblAsioDropOuts = new Label();
			label37 = new Label();
			label47 = new Label();
			label27 = new Label();
			label20 = new Label();
			tabPage6 = new TabPage();
			cbxAsioDisplayName1 = new CheckBox();
			dgInputChannels = new DataGridView();
			tabPage7 = new TabPage();
			cbxAsioDisplayName2 = new CheckBox();
			dgOutputChannels = new DataGridView();
			tabPage8 = new TabPage();
			linkLabel1 = new LinkLabel();
			label38 = new Label();
			pictureBox16 = new PictureBox();
			lblDriverVersion = new Label();
			label41 = new Label();
			label45 = new Label();
			lblDeviceStatus = new Label();
			label44 = new Label();
			lblDeviceFirmwareVersion = new Label();
			lblDeviceSerialNumber = new Label();
			label46 = new Label();
			lblStrFirmwareVersion = new Label();
			((Control)panel13).SuspendLayout();
			((ISupportInitialize)pictureBox26).BeginInit();
			((Control)channel_1_2).SuspendLayout();
			((ISupportInitialize)pictureBox1).BeginInit();
			((ISupportInitialize)pictureBox2).BeginInit();
			((Control)pInfoDisplay).SuspendLayout();
			((Control)panel16).SuspendLayout();
			((ISupportInitialize)pictureBox17).BeginInit();
			((Control)pMixerPanel).SuspendLayout();
			((Control)channel_23_24).SuspendLayout();
			((ISupportInitialize)pictureBox25).BeginInit();
			((ISupportInitialize)pictureBox27).BeginInit();
			((Control)channel_21_22).SuspendLayout();
			((ISupportInitialize)pictureBox23).BeginInit();
			((ISupportInitialize)pictureBox24).BeginInit();
			((Control)channel_19_20).SuspendLayout();
			((ISupportInitialize)pictureBox21).BeginInit();
			((ISupportInitialize)pictureBox22).BeginInit();
			((Control)channel_17_18).SuspendLayout();
			((ISupportInitialize)pictureBox19).BeginInit();
			((ISupportInitialize)pictureBox20).BeginInit();
			((Control)channel_15_16).SuspendLayout();
			((ISupportInitialize)pictureBox15).BeginInit();
			((ISupportInitialize)pictureBox18).BeginInit();
			((Control)channel__13_14).SuspendLayout();
			((ISupportInitialize)pictureBox13).BeginInit();
			((ISupportInitialize)pictureBox14).BeginInit();
			((Control)channel_7_8).SuspendLayout();
			((ISupportInitialize)pictureBox11).BeginInit();
			((ISupportInitialize)pictureBox12).BeginInit();
			((Control)channel_9_10).SuspendLayout();
			((ISupportInitialize)pictureBox9).BeginInit();
			((ISupportInitialize)pictureBox10).BeginInit();
			((Control)channel__11_12).SuspendLayout();
			((ISupportInitialize)pictureBox7).BeginInit();
			((ISupportInitialize)pictureBox8).BeginInit();
			((Control)channel_3_4).SuspendLayout();
			((ISupportInitialize)pictureBox5).BeginInit();
			((ISupportInitialize)pictureBox6).BeginInit();
			((Control)channel_5_6).SuspendLayout();
			((ISupportInitialize)pictureBox3).BeginInit();
			((ISupportInitialize)pictureBox4).BeginInit();
			((Control)pTopPanel).SuspendLayout();
			((Control)settingsTab).SuspendLayout();
			((Control)tabPage4).SuspendLayout();
			((Control)tabPage5).SuspendLayout();
			((Control)groupBox3).SuspendLayout();
			((Control)tabPage6).SuspendLayout();
			((ISupportInitialize)dgInputChannels).BeginInit();
			((Control)tabPage7).SuspendLayout();
			((ISupportInitialize)dgOutputChannels).BeginInit();
			((Control)tabPage8).SuspendLayout();
			((ISupportInitialize)pictureBox16).BeginInit();
			((Control)this).SuspendLayout();
			((Control)panel13).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_narrow;
			((Control)panel13).Controls.Add((Control)(object)vuMeter26);
			((Control)panel13).Controls.Add((Control)(object)vuMeter25);
			((Control)panel13).Controls.Add((Control)(object)label28);
			((Control)panel13).Controls.Add((Control)(object)mainMute);
			((Control)panel13).Controls.Add((Control)(object)label42);
			((Control)panel13).Controls.Add((Control)(object)pictureBox26);
			((Control)panel13).Location = new Point(871, 1);
			((Control)panel13).Name = "panel13";
			((Control)panel13).Size = new Size(50, 350);
			((Control)panel13).TabIndex = 201;
			((Control)vuMeter26).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter26.BackgroundImage");
			vuMeter26.CurrentValue = 1;
			vuMeter26.DecayTime = 50;
			vuMeter26.HasContextMenu = true;
			vuMeter26.HoldPeak = true;
			((Control)vuMeter26).Location = new Point(10, 119);
			((Control)vuMeter26).Margin = new Padding(4);
			((Control)vuMeter26).Name = "vuMeter26";
			vuMeter26.NewValue = 0;
			vuMeter26.PeakHoldFastRelease = true;
			vuMeter26.PeakHoldForever = false;
			vuMeter26.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter26.PeakHoldImage");
			vuMeter26.PeakHoldTime = 2000;
			((Control)vuMeter26).Size = new Size(4, 200);
			((Control)vuMeter26).TabIndex = 192;
			((Control)vuMeter26).Tag = "24";
			vuMeter26.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter26.VUMeterImageOff");
			vuMeter26.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter26.VUMeterImageOn");
			((Control)vuMeter25).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter25.BackgroundImage");
			vuMeter25.CurrentValue = 1;
			vuMeter25.DecayTime = 50;
			vuMeter25.HasContextMenu = true;
			vuMeter25.HoldPeak = true;
			((Control)vuMeter25).Location = new Point(36, 120);
			((Control)vuMeter25).Margin = new Padding(4);
			((Control)vuMeter25).Name = "vuMeter25";
			vuMeter25.NewValue = 0;
			vuMeter25.PeakHoldFastRelease = true;
			vuMeter25.PeakHoldForever = false;
			vuMeter25.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter25.PeakHoldImage");
			vuMeter25.PeakHoldTime = 2000;
			((Control)vuMeter25).Size = new Size(4, 200);
			((Control)vuMeter25).TabIndex = 191;
			((Control)vuMeter25).Tag = "25";
			vuMeter25.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter25.VUMeterImageOff");
			vuMeter25.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter25.VUMeterImageOn");
			((Control)label28).BackColor = Color.Transparent;
			((Control)label28).Font = new Font("Arial Narrow", 6.75f);
			((Control)label28).ForeColor = SystemColors.ButtonHighlight;
			((Control)label28).Location = new Point(3, 94);
			((Control)label28).Name = "label28";
			((Control)label28).Size = new Size(45, 18);
			((Control)label28).TabIndex = 130;
			((Control)label28).Text = "L         R";
			label28.TextAlign = (ContentAlignment)32;
			mainMute.AVCFeatureFunctionBlockId = 0;
			((Control)mainMute).BackgroundImage = (Image)(object)Resources.PanelBackground;
			mainMute.BkgImage = Resources.PanelBackground;
			mainMute.Channel = CPushButton.E_Channel.eMaster;
			mainMute.Disabled = false;
			mainMute.ImageMouseDown = null;
			mainMute.ImageOff = Resources.SingleMute_off;
			mainMute.ImageOn = Resources.SingleMute_on;
			((Control)mainMute).Location = new Point(10, 67);
			((Control)mainMute).Margin = new Padding(4);
			((Control)mainMute).Name = "mainMute";
			((Control)mainMute).Size = new Size(30, 19);
			mainMute.State = false;
			((Control)mainMute).TabIndex = 165;
			((Control)mainMute).Tag = "-1";
			mainMute.USBFunctionBlockId = 151;
			mainMute.OnPush += CRMMuteButton_OnPush;
			((Control)label42).BackColor = Color.Transparent;
			((Control)label42).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label42).ForeColor = Color.Transparent;
			((Control)label42).Location = new Point(7, 6);
			((Control)label42).Name = "label42";
			((Control)label42).Size = new Size(33, 15);
			((Control)label42).TabIndex = 166;
			((Control)label42).Text = "CRM";
			label42.TextAlign = (ContentAlignment)32;
			pictureBox26.Image = (Image)(object)Resources.DBScaleMiddle2;
			((Control)pictureBox26).Location = new Point(15, 119);
			((Control)pictureBox26).Name = "pictureBox26";
			((Control)pictureBox26).Size = new Size(20, 201);
			pictureBox26.TabIndex = 121;
			pictureBox26.TabStop = false;
			((Control)label30).BackColor = Color.Transparent;
			((Control)label30).Font = new Font("Arial Narrow", 8.25f);
			((Control)label30).ForeColor = SystemColors.ButtonHighlight;
			((Control)label30).Location = new Point(32, 9);
			((Control)label30).Name = "label30";
			((Control)label30).Size = new Size(41, 18);
			((Control)label30).TabIndex = 192;
			((Control)label30).Text = "USB";
			label30.TextAlign = (ContentAlignment)32;
			((Control)btnSettings).BackColor = Color.FromArgb(224, 224, 224);
			((ButtonBase)btnSettings).FlatStyle = (FlatStyle)0;
			((Control)btnSettings).Font = new Font("Microsoft Sans Serif", 6.5f);
			((Control)btnSettings).ForeColor = SystemColors.ControlText;
			((Control)btnSettings).Location = new Point(922, 3);
			((Control)btnSettings).Name = "btnSettings";
			((Control)btnSettings).Size = new Size(71, 23);
			((Control)btnSettings).TabIndex = 187;
			((Control)btnSettings).Text = "Settings";
			((ButtonBase)btnSettings).UseVisualStyleBackColor = false;
			((Control)btnSettings).Click += btnSettings_Click;
			((Control)channel_1_2).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_1_2).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_1_2).Controls.Add((Control)(object)fader1);
			((Control)channel_1_2).Controls.Add((Control)(object)matrixControl1);
			((Control)channel_1_2).Controls.Add((Control)(object)matrixControl2);
			((Control)channel_1_2).Controls.Add((Control)(object)vuMeter16);
			((Control)channel_1_2).Controls.Add((Control)(object)fader2);
			((Control)channel_1_2).Controls.Add((Control)(object)vuMeter15);
			((Control)channel_1_2).Controls.Add((Control)(object)link0_1);
			((Control)channel_1_2).Controls.Add((Control)(object)muteButton0);
			((Control)channel_1_2).Controls.Add((Control)(object)soloButton1);
			((Control)channel_1_2).Controls.Add((Control)(object)muteButton1);
			((Control)channel_1_2).Controls.Add((Control)(object)soloButton0);
			((Control)channel_1_2).Controls.Add((Control)(object)label22);
			((Control)channel_1_2).Controls.Add((Control)(object)Pan1);
			((Control)channel_1_2).Controls.Add((Control)(object)Pan0);
			((Control)channel_1_2).Controls.Add((Control)(object)pictureBox1);
			((Control)channel_1_2).Controls.Add((Control)(object)pictureBox2);
			((Control)channel_1_2).Location = new Point(2, 0);
			((Control)channel_1_2).Name = "channel_1_2";
			((Control)channel_1_2).Size = new Size(71, 350);
			((Control)channel_1_2).TabIndex = 196;
			((Control)channel_1_2).Tag = "0";
			fader1.AVCFeatureFunctionBlockId = -1;
			((Control)fader1).BackgroundImage = (Image)componentResourceManager.GetObject("fader1.BackgroundImage");
			fader1.Channel = fader.E_Channel.eLeft;
			fader1.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader1.ClickStep = 0.25;
			fader1.CurrentValue = -63.0;
			fader1.FaderLinearDBPos = -6;
			fader1.FaderLinearToRelPixelPos = 60;
			fader1.FaderMaxLeftPosition = 0;
			fader1.FaderMaxRightPosition = 0;
			fader1.FaderMaxTopPosition = 5;
			fader1.FaderMinBottomPosition = 5;
			fader1.FaderMovedByDB = 0.0;
			((Control)fader1).Location = new Point(17, 120);
			((Control)fader1).Margin = new Padding(2);
			fader1.MaxDBValue = 0;
			fader1.MinDBValue = -64;
			((Control)fader1).Name = "fader1";
			fader1.PollingTime = 80;
			((Control)fader1).Size = new Size(13, 205);
			fader1.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader1.SliderBackgroundImage");
			fader1.SliderImage = Resources.faderbutton1;
			fader1.Step = 0.125;
			((Control)fader1).TabIndex = 174;
			((Control)fader1).Tag = "0";
			fader1.USBFunctionBlockId = 181;
			fader1.ValueLinear = false;
			fader1.Vertical = true;
			fader1.OnFaderMove += fader_OnMove;
			fader1.OnActivate += fader_OnActivate;
			fader1.OnDeactivate += fader_OnDeactivate;
			matrixControl1.Direction = ScrollDirection.Left;
			((Control)matrixControl1).Location = new Point(4, 327);
			matrixControl1.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl1.maxCharactersPerLine = 5;
			((Control)matrixControl1).Name = "matrixControl1";
			((Control)matrixControl1).Size = new Size(30, 9);
			((Control)matrixControl1).TabIndex = 175;
			((Control)matrixControl1).TabStop = false;
			((Control)matrixControl1).Tag = "0";
			((Control)matrixControl1).Text = "  -  ";
			matrixControl2.Direction = ScrollDirection.Left;
			((Control)matrixControl2).Location = new Point(37, 327);
			matrixControl2.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl2.maxCharactersPerLine = 5;
			((Control)matrixControl2).Name = "matrixControl2";
			((Control)matrixControl2).Size = new Size(30, 9);
			((Control)matrixControl2).TabIndex = 179;
			((Control)matrixControl2).TabStop = false;
			((Control)matrixControl2).Tag = "1";
			((Control)matrixControl2).Text = "  -  ";
			((Control)vuMeter16).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter16.BackgroundImage");
			vuMeter16.CurrentValue = 1;
			vuMeter16.DecayTime = 50;
			vuMeter16.HasContextMenu = true;
			vuMeter16.HoldPeak = true;
			((Control)vuMeter16).Location = new Point(36, 119);
			((Control)vuMeter16).Margin = new Padding(4);
			((Control)vuMeter16).Name = "vuMeter16";
			vuMeter16.NewValue = 0;
			vuMeter16.PeakHoldFastRelease = true;
			vuMeter16.PeakHoldForever = false;
			vuMeter16.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter16.PeakHoldImage");
			vuMeter16.PeakHoldTime = 2000;
			((Control)vuMeter16).Size = new Size(4, 200);
			((Control)vuMeter16).TabIndex = 178;
			((Control)vuMeter16).Tag = "1";
			vuMeter16.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter16.VUMeterImageOff");
			vuMeter16.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter16.VUMeterImageOn");
			fader2.AVCFeatureFunctionBlockId = -1;
			((Control)fader2).BackgroundImage = (Image)componentResourceManager.GetObject("fader2.BackgroundImage");
			fader2.Channel = fader.E_Channel.eRight;
			fader2.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader2.ClickStep = 0.25;
			fader2.CurrentValue = -63.0;
			fader2.FaderLinearDBPos = -6;
			fader2.FaderLinearToRelPixelPos = 60;
			fader2.FaderMaxLeftPosition = 0;
			fader2.FaderMaxRightPosition = 0;
			fader2.FaderMaxTopPosition = 5;
			fader2.FaderMinBottomPosition = 5;
			fader2.FaderMovedByDB = 0.0;
			((Control)fader2).Location = new Point(41, 120);
			((Control)fader2).Margin = new Padding(2);
			fader2.MaxDBValue = 0;
			fader2.MinDBValue = -64;
			((Control)fader2).Name = "fader2";
			fader2.PollingTime = 80;
			((Control)fader2).Size = new Size(13, 205);
			fader2.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader2.SliderBackgroundImage");
			fader2.SliderImage = Resources.faderbutton1;
			fader2.Step = 0.125;
			((Control)fader2).TabIndex = 176;
			((Control)fader2).Tag = "1";
			fader2.USBFunctionBlockId = 181;
			fader2.ValueLinear = false;
			fader2.Vertical = true;
			fader2.OnFaderMove += fader_OnMove;
			fader2.OnActivate += fader_OnActivate;
			fader2.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter15).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter15.BackgroundImage");
			vuMeter15.CurrentValue = 1;
			vuMeter15.DecayTime = 50;
			vuMeter15.HasContextMenu = true;
			vuMeter15.HoldPeak = true;
			((Control)vuMeter15).Location = new Point(30, 119);
			((Control)vuMeter15).Margin = new Padding(4);
			((Control)vuMeter15).Name = "vuMeter15";
			vuMeter15.NewValue = 0;
			vuMeter15.PeakHoldFastRelease = true;
			vuMeter15.PeakHoldForever = false;
			vuMeter15.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter15.PeakHoldImage");
			vuMeter15.PeakHoldTime = 2000;
			((Control)vuMeter15).Size = new Size(4, 200);
			((Control)vuMeter15).TabIndex = 177;
			((Control)vuMeter15).Tag = "0";
			vuMeter15.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter15.VUMeterImageOff");
			vuMeter15.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter15.VUMeterImageOn");
			link0_1.AVCFeatureFunctionBlockId = 0;
			link0_1.BkgImage = null;
			link0_1.Channel = CPushButton.E_Channel.eMaster;
			link0_1.Disabled = false;
			link0_1.ImageMouseDown = null;
			link0_1.ImageOff = (Bitmap)componentResourceManager.GetObject("link0_1.ImageOff");
			link0_1.ImageOn = (Bitmap)componentResourceManager.GetObject("link0_1.ImageOn");
			((Control)link0_1).Location = new Point(6, 31);
			((Control)link0_1).Margin = new Padding(4);
			((Control)link0_1).Name = "link0_1";
			((Control)link0_1).Size = new Size(60, 19);
			link0_1.State = false;
			((Control)link0_1).TabIndex = 140;
			((Control)link0_1).Tag = "0_1";
			link0_1.USBFunctionBlockId = 0;
			link0_1.OnPush += linkButton_OnPush;
			muteButton0.AVCFeatureFunctionBlockId = 6;
			muteButton0.BkgImage = null;
			muteButton0.Channel = CPushButton.E_Channel.eLeft;
			muteButton0.Disabled = false;
			muteButton0.ImageMouseDown = null;
			muteButton0.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton0.ImageOff");
			muteButton0.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton0.ImageOn");
			((Control)muteButton0).Location = new Point(6, 67);
			((Control)muteButton0).Margin = new Padding(4);
			((Control)muteButton0).Name = "muteButton0";
			((Control)muteButton0).Size = new Size(30, 19);
			muteButton0.State = false;
			((Control)muteButton0).TabIndex = 141;
			((Control)muteButton0).Tag = "0";
			muteButton0.USBFunctionBlockId = 181;
			muteButton0.OnPush += muteButton_OnPush;
			soloButton1.AVCFeatureFunctionBlockId = 0;
			soloButton1.BkgImage = null;
			soloButton1.Channel = CPushButton.E_Channel.eMaster;
			soloButton1.Disabled = false;
			soloButton1.ImageMouseDown = null;
			soloButton1.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton1.ImageOff");
			soloButton1.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton1.ImageOn");
			((Control)soloButton1).Location = new Point(36, 49);
			((Control)soloButton1).Margin = new Padding(4);
			((Control)soloButton1).Name = "soloButton1";
			((Control)soloButton1).Size = new Size(30, 19);
			soloButton1.State = false;
			((Control)soloButton1).TabIndex = 142;
			((Control)soloButton1).Tag = "1";
			soloButton1.USBFunctionBlockId = 181;
			soloButton1.OnPush += soloButton_OnPush;
			muteButton1.AVCFeatureFunctionBlockId = 6;
			muteButton1.BkgImage = null;
			muteButton1.Channel = CPushButton.E_Channel.eRight;
			muteButton1.Disabled = false;
			muteButton1.ImageMouseDown = null;
			muteButton1.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton1.ImageOff");
			muteButton1.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton1.ImageOn");
			((Control)muteButton1).Location = new Point(36, 67);
			((Control)muteButton1).Margin = new Padding(4);
			((Control)muteButton1).Name = "muteButton1";
			((Control)muteButton1).Size = new Size(30, 19);
			muteButton1.State = false;
			((Control)muteButton1).TabIndex = 143;
			((Control)muteButton1).Tag = "1";
			muteButton1.USBFunctionBlockId = 181;
			muteButton1.OnPush += muteButton_OnPush;
			soloButton0.AVCFeatureFunctionBlockId = 0;
			soloButton0.BkgImage = null;
			soloButton0.Channel = CPushButton.E_Channel.eMaster;
			soloButton0.Disabled = false;
			soloButton0.ImageMouseDown = null;
			soloButton0.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton0.ImageOff");
			soloButton0.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton0.ImageOn");
			((Control)soloButton0).Location = new Point(6, 49);
			((Control)soloButton0).Margin = new Padding(4);
			((Control)soloButton0).Name = "soloButton0";
			((Control)soloButton0).Size = new Size(30, 19);
			soloButton0.State = false;
			((Control)soloButton0).TabIndex = 144;
			((Control)soloButton0).Tag = "0";
			soloButton0.USBFunctionBlockId = 181;
			soloButton0.OnPush += soloButton_OnPush;
			((Control)label22).BackColor = Color.Transparent;
			((Control)label22).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label22).ForeColor = Color.Transparent;
			((Control)label22).Location = new Point(6, 7);
			((Control)label22).Name = "label22";
			((Control)label22).Size = new Size(57, 15);
			((Control)label22).TabIndex = 125;
			((Control)label22).Text = "1  Line  2";
			label22.TextAlign = (ContentAlignment)32;
			Pan1.Angle = 0;
			Pan1.AVCFeatureFunctionBlockId = 6;
			Pan1.BkgImg = Resources.knob_new;
			Pan1.Channel = ControlKnob.E_Channel.eRight;
			Pan1.KnobImage = Resources.knob_new_indicator;
			((Control)Pan1).Location = new Point(39, 87);
			((Control)Pan1).Margin = new Padding(0);
			Pan1.MaxRotate = 127;
			Pan1.MaxValue = 127;
			Pan1.MinRotate = -127;
			Pan1.MinValue = -127;
			((Control)Pan1).Name = "Pan1";
			((Control)Pan1).Size = new Size(27, 27);
			((Control)Pan1).TabIndex = 172;
			((Control)Pan1).Tag = "1";
			Pan1.TransparentColorRGB = "000001";
			Pan1.USBFunctionBlockId = 181;
			Pan1.Value = 0;
			Pan1.OnRotate += Pan_OnRotate;
			Pan1.OnActivate += Pan_OnActivate;
			Pan1.OnDeactivate += Pan_OnDeActivate;
			Pan0.Angle = 0;
			Pan0.AVCFeatureFunctionBlockId = 6;
			Pan0.BkgImg = Resources.knob_new;
			Pan0.Channel = ControlKnob.E_Channel.eLeft;
			Pan0.KnobImage = Resources.knob_new_indicator;
			((Control)Pan0).Location = new Point(8, 87);
			((Control)Pan0).Margin = new Padding(0);
			Pan0.MaxRotate = 127;
			Pan0.MaxValue = 127;
			Pan0.MinRotate = -127;
			Pan0.MinValue = -127;
			((Control)Pan0).Name = "Pan0";
			((Control)Pan0).Size = new Size(27, 27);
			((Control)Pan0).TabIndex = 173;
			((Control)Pan0).Tag = "0";
			Pan0.TransparentColorRGB = "000001";
			Pan0.USBFunctionBlockId = 181;
			Pan0.Value = 0;
			Pan0.OnRotate += Pan_OnRotate;
			Pan0.OnActivate += Pan_OnActivate;
			Pan0.OnDeactivate += Pan_OnDeActivate;
			pictureBox1.Image = (Image)componentResourceManager.GetObject("pictureBox1.Image");
			((Control)pictureBox1).Location = new Point(53, 120);
			((Control)pictureBox1).Name = "pictureBox1";
			((Control)pictureBox1).Size = new Size(15, 201);
			pictureBox1.TabIndex = 81;
			pictureBox1.TabStop = false;
			pictureBox2.Image = (Image)componentResourceManager.GetObject("pictureBox2.Image");
			((Control)pictureBox2).Location = new Point(4, 120);
			((Control)pictureBox2).Name = "pictureBox2";
			((Control)pictureBox2).Size = new Size(15, 201);
			pictureBox2.TabIndex = 79;
			pictureBox2.TabStop = false;
			pInfoDisplay.BorderStyle = (BorderStyle)2;
			((Control)pInfoDisplay).Controls.Add((Control)(object)MainInfoDisplay);
			((Control)pInfoDisplay).Location = new Point(678, 3);
			((Control)pInfoDisplay).Name = "pInfoDisplay";
			((Control)pInfoDisplay).Size = new Size(240, 35);
			((Control)pInfoDisplay).TabIndex = 203;
			MainInfoDisplay.Direction = ScrollDirection.Left;
			((Control)MainInfoDisplay).Location = new Point(1, 0);
			MainInfoDisplay.Matrixsize = MatrixControl.MatrixSize.Tiny;
			MainInfoDisplay.maxCharactersPerLine = 40;
			((Control)MainInfoDisplay).Name = "MainInfoDisplay";
			((Control)MainInfoDisplay).Size = new Size(240, 36);
			((Control)MainInfoDisplay).TabIndex = 205;
			((Control)MainInfoDisplay).Text = "Not connected";
			((Control)panel16).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_77x350;
			((Control)panel16).BackgroundImageLayout = (ImageLayout)2;
			((Control)panel16).Controls.Add((Control)(object)fader26);
			((Control)panel16).Controls.Add((Control)(object)fader25);
			((Control)panel16).Controls.Add((Control)(object)muteDAW);
			((Control)panel16).Controls.Add((Control)(object)muteLine);
			((Control)panel16).Controls.Add((Control)(object)label12);
			((Control)panel16).Controls.Add((Control)(object)pictureBox17);
			((Control)panel16).Location = new Point(919, 1);
			((Control)panel16).Name = "panel16";
			((Control)panel16).Size = new Size(77, 350);
			((Control)panel16).TabIndex = 203;
			fader26.AVCFeatureFunctionBlockId = -1;
			((Control)fader26).BackgroundImage = (Image)componentResourceManager.GetObject("fader26.BackgroundImage");
			fader26.Channel = fader.E_Channel.eLeft;
			fader26.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader26.ClickStep = 0.25;
			fader26.CurrentValue = -63.0;
			fader26.FaderLinearDBPos = -6;
			fader26.FaderLinearToRelPixelPos = 60;
			fader26.FaderMaxLeftPosition = 0;
			fader26.FaderMaxRightPosition = 0;
			fader26.FaderMaxTopPosition = 5;
			fader26.FaderMinBottomPosition = 5;
			fader26.FaderMovedByDB = 0.0;
			((Control)fader26).Location = new Point(15, 120);
			((Control)fader26).Margin = new Padding(2);
			fader26.MaxDBValue = 0;
			fader26.MinDBValue = -63;
			((Control)fader26).Name = "fader26";
			fader26.PollingTime = 80;
			((Control)fader26).Size = new Size(13, 205);
			fader26.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader26.SliderBackgroundImage");
			fader26.SliderImage = Resources.faderbutton1;
			fader26.Step = 0.125;
			((Control)fader26).TabIndex = 193;
			((Control)fader26).Tag = "-1";
			fader26.USBFunctionBlockId = 151;
			fader26.ValueLinear = false;
			fader26.Vertical = true;
			fader26.OnFaderMove += fader_OnMove;
			fader26.OnActivate += fader_OnActivate;
			fader26.OnDeactivate += fader_OnDeactivate;
			fader25.AVCFeatureFunctionBlockId = -1;
			((Control)fader25).BackgroundImage = (Image)componentResourceManager.GetObject("fader25.BackgroundImage");
			fader25.Channel = fader.E_Channel.eLeft;
			fader25.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader25.ClickStep = 0.25;
			fader25.CurrentValue = -63.0;
			fader25.FaderLinearDBPos = -6;
			fader25.FaderLinearToRelPixelPos = 60;
			fader25.FaderMaxLeftPosition = 0;
			fader25.FaderMaxRightPosition = 0;
			fader25.FaderMaxTopPosition = 5;
			fader25.FaderMinBottomPosition = 5;
			fader25.FaderMovedByDB = 0.0;
			((Control)fader25).Location = new Point(47, 120);
			((Control)fader25).Margin = new Padding(2);
			fader25.MaxDBValue = 0;
			fader25.MinDBValue = -63;
			((Control)fader25).Name = "fader25";
			fader25.PollingTime = 80;
			((Control)fader25).Size = new Size(13, 205);
			fader25.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader25.SliderBackgroundImage");
			fader25.SliderImage = Resources.faderbutton1;
			fader25.Step = 0.125;
			((Control)fader25).TabIndex = 192;
			((Control)fader25).Tag = "-1";
			fader25.USBFunctionBlockId = 152;
			fader25.ValueLinear = false;
			fader25.Vertical = true;
			fader25.OnFaderMove += fader_OnMove;
			fader25.OnActivate += fader_OnActivate;
			fader25.OnDeactivate += fader_OnDeactivate;
			muteDAW.AVCFeatureFunctionBlockId = 5;
			muteDAW.BkgImage = null;
			muteDAW.Channel = CPushButton.E_Channel.eMaster;
			muteDAW.Disabled = false;
			muteDAW.ImageMouseDown = null;
			muteDAW.ImageOff = (Bitmap)componentResourceManager.GetObject("muteDAW.ImageOff");
			muteDAW.ImageOn = (Bitmap)componentResourceManager.GetObject("muteDAW.ImageOn");
			((Control)muteDAW).Location = new Point(8, 67);
			((Control)muteDAW).Margin = new Padding(4);
			((Control)muteDAW).Name = "muteDAW";
			((Control)muteDAW).Size = new Size(30, 19);
			muteDAW.State = false;
			((Control)muteDAW).TabIndex = 185;
			((Control)muteDAW).Tag = "-1";
			muteDAW.USBFunctionBlockId = 151;
			muteDAW.OnPush += muteButton_OnPush;
			muteLine.AVCFeatureFunctionBlockId = 5;
			muteLine.BkgImage = null;
			muteLine.Channel = CPushButton.E_Channel.eMaster;
			muteLine.Disabled = false;
			muteLine.ImageMouseDown = null;
			muteLine.ImageOff = (Bitmap)componentResourceManager.GetObject("muteLine.ImageOff");
			muteLine.ImageOn = (Bitmap)componentResourceManager.GetObject("muteLine.ImageOn");
			((Control)muteLine).Location = new Point(38, 67);
			((Control)muteLine).Margin = new Padding(4);
			((Control)muteLine).Name = "muteLine";
			((Control)muteLine).Size = new Size(30, 19);
			muteLine.State = false;
			((Control)muteLine).TabIndex = 187;
			((Control)muteLine).Tag = "-1";
			muteLine.USBFunctionBlockId = 152;
			muteLine.OnPush += muteButton_OnPush;
			((Control)label12).BackColor = Color.Transparent;
			((Control)label12).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label12).ForeColor = SystemColors.ButtonHighlight;
			((Control)label12).Location = new Point(2, 6);
			((Control)label12).Name = "label12";
			((Control)label12).Size = new Size(70, 15);
			((Control)label12).TabIndex = 191;
			((Control)label12).Text = "DAW    Line";
			label12.TextAlign = (ContentAlignment)32;
			((Control)pictureBox17).BackgroundImage = (Image)(object)Resources.DBScaleMiddle2;
			((Control)pictureBox17).Location = new Point(28, 120);
			((Control)pictureBox17).Name = "pictureBox17";
			((Control)pictureBox17).Size = new Size(20, 201);
			pictureBox17.TabIndex = 177;
			pictureBox17.TabStop = false;
			((Control)pMixerPanel).BackColor = Color.FromArgb(46, 46, 46);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_23_24);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_21_22);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_19_20);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_17_18);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_15_16);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel__13_14);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_7_8);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_9_10);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel__11_12);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_3_4);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_5_6);
			((Control)pMixerPanel).Controls.Add((Control)(object)panel16);
			((Control)pMixerPanel).Controls.Add((Control)(object)channel_1_2);
			((Control)pMixerPanel).Controls.Add((Control)(object)panel13);
			((Control)pMixerPanel).Location = new Point(0, 48);
			((Control)pMixerPanel).Name = "pMixerPanel";
			((Control)pMixerPanel).Size = new Size(994, 353);
			((Control)pMixerPanel).TabIndex = 202;
			((Control)channel_23_24).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_23_24).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_23_24).Controls.Add((Control)(object)fader23);
			((Control)channel_23_24).Controls.Add((Control)(object)matrixControl23);
			((Control)channel_23_24).Controls.Add((Control)(object)matrixControl24);
			((Control)channel_23_24).Controls.Add((Control)(object)vuMeter23);
			((Control)channel_23_24).Controls.Add((Control)(object)fader24);
			((Control)channel_23_24).Controls.Add((Control)(object)vuMeter24);
			((Control)channel_23_24).Controls.Add((Control)(object)link22_23);
			((Control)channel_23_24).Controls.Add((Control)(object)muteButton22);
			((Control)channel_23_24).Controls.Add((Control)(object)soloButton23);
			((Control)channel_23_24).Controls.Add((Control)(object)muteButton23);
			((Control)channel_23_24).Controls.Add((Control)(object)soloButton22);
			((Control)channel_23_24).Controls.Add((Control)(object)label11);
			((Control)channel_23_24).Controls.Add((Control)(object)Pan23);
			((Control)channel_23_24).Controls.Add((Control)(object)Pan22);
			((Control)channel_23_24).Controls.Add((Control)(object)pictureBox25);
			((Control)channel_23_24).Controls.Add((Control)(object)pictureBox27);
			((Control)channel_23_24).Location = new Point(794, 0);
			((Control)channel_23_24).Name = "channel_23_24";
			((Control)channel_23_24).Size = new Size(71, 350);
			((Control)channel_23_24).TabIndex = 214;
			((Control)channel_23_24).Tag = "11";
			fader23.AVCFeatureFunctionBlockId = -1;
			((Control)fader23).BackgroundImage = (Image)componentResourceManager.GetObject("fader23.BackgroundImage");
			fader23.Channel = fader.E_Channel.eLeft;
			fader23.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader23.ClickStep = 0.25;
			fader23.CurrentValue = -63.0;
			fader23.FaderLinearDBPos = -6;
			fader23.FaderLinearToRelPixelPos = 60;
			fader23.FaderMaxLeftPosition = 0;
			fader23.FaderMaxRightPosition = 0;
			fader23.FaderMaxTopPosition = 5;
			fader23.FaderMinBottomPosition = 5;
			fader23.FaderMovedByDB = 0.0;
			((Control)fader23).Location = new Point(17, 120);
			((Control)fader23).Margin = new Padding(2);
			fader23.MaxDBValue = 0;
			fader23.MinDBValue = -64;
			((Control)fader23).Name = "fader23";
			fader23.PollingTime = 80;
			((Control)fader23).Size = new Size(13, 205);
			fader23.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader23.SliderBackgroundImage");
			fader23.SliderImage = Resources.faderbutton1;
			fader23.Step = 0.125;
			((Control)fader23).TabIndex = 186;
			((Control)fader23).Tag = "22";
			fader23.USBFunctionBlockId = 192;
			fader23.ValueLinear = false;
			fader23.Vertical = true;
			fader23.OnFaderMove += fader_OnMove;
			fader23.OnActivate += fader_OnActivate;
			fader23.OnDeactivate += fader_OnDeactivate;
			matrixControl23.Direction = ScrollDirection.Left;
			((Control)matrixControl23).Location = new Point(4, 326);
			matrixControl23.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl23.maxCharactersPerLine = 5;
			((Control)matrixControl23).Name = "matrixControl23";
			((Control)matrixControl23).Size = new Size(30, 9);
			((Control)matrixControl23).TabIndex = 187;
			((Control)matrixControl23).TabStop = false;
			((Control)matrixControl23).Tag = "22";
			((Control)matrixControl23).Text = "  -  ";
			matrixControl24.Direction = ScrollDirection.Left;
			((Control)matrixControl24).Location = new Point(37, 326);
			matrixControl24.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl24.maxCharactersPerLine = 5;
			((Control)matrixControl24).Name = "matrixControl24";
			((Control)matrixControl24).Size = new Size(30, 9);
			((Control)matrixControl24).TabIndex = 191;
			((Control)matrixControl24).TabStop = false;
			((Control)matrixControl24).Tag = "23";
			((Control)matrixControl24).Text = "  -  ";
			((Control)vuMeter23).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter23.BackgroundImage");
			vuMeter23.CurrentValue = 1;
			vuMeter23.DecayTime = 50;
			vuMeter23.HasContextMenu = true;
			vuMeter23.HoldPeak = true;
			((Control)vuMeter23).Location = new Point(36, 118);
			((Control)vuMeter23).Margin = new Padding(4);
			((Control)vuMeter23).Name = "vuMeter23";
			vuMeter23.NewValue = 0;
			vuMeter23.PeakHoldFastRelease = true;
			vuMeter23.PeakHoldForever = false;
			vuMeter23.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter23.PeakHoldImage");
			vuMeter23.PeakHoldTime = 2000;
			((Control)vuMeter23).Size = new Size(4, 200);
			((Control)vuMeter23).TabIndex = 190;
			((Control)vuMeter23).Tag = "23";
			vuMeter23.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter23.VUMeterImageOff");
			vuMeter23.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter23.VUMeterImageOn");
			fader24.AVCFeatureFunctionBlockId = -1;
			((Control)fader24).BackgroundImage = (Image)componentResourceManager.GetObject("fader24.BackgroundImage");
			fader24.Channel = fader.E_Channel.eRight;
			fader24.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader24.ClickStep = 0.25;
			fader24.CurrentValue = -63.0;
			fader24.FaderLinearDBPos = -6;
			fader24.FaderLinearToRelPixelPos = 60;
			fader24.FaderMaxLeftPosition = 0;
			fader24.FaderMaxRightPosition = 0;
			fader24.FaderMaxTopPosition = 5;
			fader24.FaderMinBottomPosition = 5;
			fader24.FaderMovedByDB = 0.0;
			((Control)fader24).Location = new Point(41, 120);
			((Control)fader24).Margin = new Padding(2);
			fader24.MaxDBValue = 0;
			fader24.MinDBValue = -64;
			((Control)fader24).Name = "fader24";
			fader24.PollingTime = 80;
			((Control)fader24).Size = new Size(13, 205);
			fader24.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader24.SliderBackgroundImage");
			fader24.SliderImage = Resources.faderbutton1;
			fader24.Step = 0.125;
			((Control)fader24).TabIndex = 188;
			((Control)fader24).Tag = "23";
			fader24.USBFunctionBlockId = 192;
			fader24.ValueLinear = false;
			fader24.Vertical = true;
			fader24.OnFaderMove += fader_OnMove;
			fader24.OnActivate += fader_OnActivate;
			fader24.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter24).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter24.BackgroundImage");
			vuMeter24.CurrentValue = 1;
			vuMeter24.DecayTime = 50;
			vuMeter24.HasContextMenu = true;
			vuMeter24.HoldPeak = true;
			((Control)vuMeter24).Location = new Point(30, 118);
			((Control)vuMeter24).Margin = new Padding(4);
			((Control)vuMeter24).Name = "vuMeter24";
			vuMeter24.NewValue = 0;
			vuMeter24.PeakHoldFastRelease = true;
			vuMeter24.PeakHoldForever = false;
			vuMeter24.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter24.PeakHoldImage");
			vuMeter24.PeakHoldTime = 2000;
			((Control)vuMeter24).Size = new Size(4, 200);
			((Control)vuMeter24).TabIndex = 189;
			((Control)vuMeter24).Tag = "22";
			vuMeter24.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter24.VUMeterImageOff");
			vuMeter24.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter24.VUMeterImageOn");
			link22_23.AVCFeatureFunctionBlockId = 0;
			link22_23.BkgImage = null;
			link22_23.Channel = CPushButton.E_Channel.eMaster;
			link22_23.Disabled = false;
			link22_23.ImageMouseDown = null;
			link22_23.ImageOff = (Bitmap)componentResourceManager.GetObject("link22_23.ImageOff");
			link22_23.ImageOn = (Bitmap)componentResourceManager.GetObject("link22_23.ImageOn");
			((Control)link22_23).Location = new Point(6, 31);
			((Control)link22_23).Margin = new Padding(4);
			((Control)link22_23).Name = "link22_23";
			((Control)link22_23).Size = new Size(60, 19);
			link22_23.State = false;
			((Control)link22_23).TabIndex = 140;
			((Control)link22_23).Tag = "22_23";
			link22_23.USBFunctionBlockId = 0;
			link22_23.OnPush += linkButton_OnPush;
			muteButton22.AVCFeatureFunctionBlockId = 6;
			muteButton22.BkgImage = null;
			muteButton22.Channel = CPushButton.E_Channel.eLeft;
			muteButton22.Disabled = false;
			muteButton22.ImageMouseDown = null;
			muteButton22.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton22.ImageOff");
			muteButton22.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton22.ImageOn");
			((Control)muteButton22).Location = new Point(6, 67);
			((Control)muteButton22).Margin = new Padding(4);
			((Control)muteButton22).Name = "muteButton22";
			((Control)muteButton22).Size = new Size(30, 19);
			muteButton22.State = false;
			((Control)muteButton22).TabIndex = 141;
			((Control)muteButton22).Tag = "22";
			muteButton22.USBFunctionBlockId = 192;
			muteButton22.OnPush += muteButton_OnPush;
			soloButton23.AVCFeatureFunctionBlockId = 0;
			soloButton23.BkgImage = null;
			soloButton23.Channel = CPushButton.E_Channel.eMaster;
			soloButton23.Disabled = false;
			soloButton23.ImageMouseDown = null;
			soloButton23.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton23.ImageOff");
			soloButton23.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton23.ImageOn");
			((Control)soloButton23).Location = new Point(36, 49);
			((Control)soloButton23).Margin = new Padding(4);
			((Control)soloButton23).Name = "soloButton23";
			((Control)soloButton23).Size = new Size(30, 19);
			soloButton23.State = false;
			((Control)soloButton23).TabIndex = 142;
			((Control)soloButton23).Tag = "23";
			soloButton23.USBFunctionBlockId = 192;
			soloButton23.OnPush += soloButton_OnPush;
			muteButton23.AVCFeatureFunctionBlockId = 6;
			muteButton23.BkgImage = null;
			muteButton23.Channel = CPushButton.E_Channel.eRight;
			muteButton23.Disabled = false;
			muteButton23.ImageMouseDown = null;
			muteButton23.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton23.ImageOff");
			muteButton23.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton23.ImageOn");
			((Control)muteButton23).Location = new Point(36, 67);
			((Control)muteButton23).Margin = new Padding(4);
			((Control)muteButton23).Name = "muteButton23";
			((Control)muteButton23).Size = new Size(30, 19);
			muteButton23.State = false;
			((Control)muteButton23).TabIndex = 143;
			((Control)muteButton23).Tag = "23";
			muteButton23.USBFunctionBlockId = 192;
			muteButton23.OnPush += muteButton_OnPush;
			soloButton22.AVCFeatureFunctionBlockId = 0;
			soloButton22.BkgImage = null;
			soloButton22.Channel = CPushButton.E_Channel.eMaster;
			soloButton22.Disabled = false;
			soloButton22.ImageMouseDown = null;
			soloButton22.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton22.ImageOff");
			soloButton22.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton22.ImageOn");
			((Control)soloButton22).Location = new Point(6, 49);
			((Control)soloButton22).Margin = new Padding(4);
			((Control)soloButton22).Name = "soloButton22";
			((Control)soloButton22).Size = new Size(30, 19);
			soloButton22.State = false;
			((Control)soloButton22).TabIndex = 144;
			((Control)soloButton22).Tag = "22";
			soloButton22.USBFunctionBlockId = 192;
			soloButton22.OnPush += soloButton_OnPush;
			((Control)label11).BackColor = Color.Transparent;
			((Control)label11).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label11).ForeColor = Color.Transparent;
			((Control)label11).Location = new Point(6, 7);
			((Control)label11).Name = "label11";
			((Control)label11).Size = new Size(65, 15);
			((Control)label11).TabIndex = 125;
			((Control)label11).Text = "23 Line 24";
			label11.TextAlign = (ContentAlignment)32;
			Pan23.Angle = 0;
			Pan23.AVCFeatureFunctionBlockId = 6;
			Pan23.BkgImg = Resources.knob_new;
			Pan23.Channel = ControlKnob.E_Channel.eRight;
			Pan23.KnobImage = Resources.knob_new_indicator;
			((Control)Pan23).Location = new Point(39, 87);
			((Control)Pan23).Margin = new Padding(0);
			Pan23.MaxRotate = 127;
			Pan23.MaxValue = 127;
			Pan23.MinRotate = -127;
			Pan23.MinValue = -127;
			((Control)Pan23).Name = "Pan23";
			((Control)Pan23).Size = new Size(27, 27);
			((Control)Pan23).TabIndex = 172;
			((Control)Pan23).Tag = "23";
			Pan23.TransparentColorRGB = "000001";
			Pan23.USBFunctionBlockId = 192;
			Pan23.Value = 0;
			Pan23.OnRotate += Pan_OnRotate;
			Pan23.OnActivate += Pan_OnActivate;
			Pan23.OnDeactivate += Pan_OnDeActivate;
			Pan22.Angle = 0;
			Pan22.AVCFeatureFunctionBlockId = 6;
			Pan22.BkgImg = Resources.knob_new;
			Pan22.Channel = ControlKnob.E_Channel.eLeft;
			Pan22.KnobImage = Resources.knob_new_indicator;
			((Control)Pan22).Location = new Point(8, 87);
			((Control)Pan22).Margin = new Padding(0);
			Pan22.MaxRotate = 127;
			Pan22.MaxValue = 127;
			Pan22.MinRotate = -127;
			Pan22.MinValue = -127;
			((Control)Pan22).Name = "Pan22";
			((Control)Pan22).Size = new Size(27, 27);
			((Control)Pan22).TabIndex = 173;
			((Control)Pan22).Tag = "22";
			Pan22.TransparentColorRGB = "000001";
			Pan22.USBFunctionBlockId = 192;
			Pan22.Value = 0;
			Pan22.OnRotate += Pan_OnRotate;
			Pan22.OnActivate += Pan_OnActivate;
			Pan22.OnDeactivate += Pan_OnDeActivate;
			pictureBox25.Image = (Image)componentResourceManager.GetObject("pictureBox25.Image");
			((Control)pictureBox25).Location = new Point(53, 120);
			((Control)pictureBox25).Name = "pictureBox25";
			((Control)pictureBox25).Size = new Size(15, 201);
			pictureBox25.TabIndex = 81;
			pictureBox25.TabStop = false;
			pictureBox27.Image = (Image)componentResourceManager.GetObject("pictureBox27.Image");
			((Control)pictureBox27).Location = new Point(4, 120);
			((Control)pictureBox27).Name = "pictureBox27";
			((Control)pictureBox27).Size = new Size(15, 201);
			pictureBox27.TabIndex = 79;
			pictureBox27.TabStop = false;
			((Control)channel_21_22).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_21_22).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_21_22).Controls.Add((Control)(object)fader21);
			((Control)channel_21_22).Controls.Add((Control)(object)matrixControl21);
			((Control)channel_21_22).Controls.Add((Control)(object)matrixControl22);
			((Control)channel_21_22).Controls.Add((Control)(object)vuMeter21);
			((Control)channel_21_22).Controls.Add((Control)(object)fader22);
			((Control)channel_21_22).Controls.Add((Control)(object)vuMeter22);
			((Control)channel_21_22).Controls.Add((Control)(object)link20_21);
			((Control)channel_21_22).Controls.Add((Control)(object)muteButton20);
			((Control)channel_21_22).Controls.Add((Control)(object)soloButton21);
			((Control)channel_21_22).Controls.Add((Control)(object)muteButton21);
			((Control)channel_21_22).Controls.Add((Control)(object)soloButton20);
			((Control)channel_21_22).Controls.Add((Control)(object)label10);
			((Control)channel_21_22).Controls.Add((Control)(object)Pan21);
			((Control)channel_21_22).Controls.Add((Control)(object)Pan20);
			((Control)channel_21_22).Controls.Add((Control)(object)pictureBox23);
			((Control)channel_21_22).Controls.Add((Control)(object)pictureBox24);
			((Control)channel_21_22).Location = new Point(722, 0);
			((Control)channel_21_22).Name = "channel_21_22";
			((Control)channel_21_22).Size = new Size(71, 350);
			((Control)channel_21_22).TabIndex = 213;
			((Control)channel_21_22).Tag = "10";
			fader21.AVCFeatureFunctionBlockId = -1;
			((Control)fader21).BackgroundImage = (Image)componentResourceManager.GetObject("fader21.BackgroundImage");
			fader21.Channel = fader.E_Channel.eLeft;
			fader21.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader21.ClickStep = 0.25;
			fader21.CurrentValue = -63.0;
			fader21.FaderLinearDBPos = -6;
			fader21.FaderLinearToRelPixelPos = 60;
			fader21.FaderMaxLeftPosition = 0;
			fader21.FaderMaxRightPosition = 0;
			fader21.FaderMaxTopPosition = 5;
			fader21.FaderMinBottomPosition = 5;
			fader21.FaderMovedByDB = 0.0;
			((Control)fader21).Location = new Point(17, 120);
			((Control)fader21).Margin = new Padding(2);
			fader21.MaxDBValue = 0;
			fader21.MinDBValue = -64;
			((Control)fader21).Name = "fader21";
			fader21.PollingTime = 80;
			((Control)fader21).Size = new Size(13, 205);
			fader21.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader21.SliderBackgroundImage");
			fader21.SliderImage = Resources.faderbutton1;
			fader21.Step = 0.125;
			((Control)fader21).TabIndex = 186;
			((Control)fader21).Tag = "20";
			fader21.USBFunctionBlockId = 191;
			fader21.ValueLinear = false;
			fader21.Vertical = true;
			fader21.OnFaderMove += fader_OnMove;
			fader21.OnActivate += fader_OnActivate;
			fader21.OnDeactivate += fader_OnDeactivate;
			matrixControl21.Direction = ScrollDirection.Left;
			((Control)matrixControl21).Location = new Point(4, 326);
			matrixControl21.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl21.maxCharactersPerLine = 5;
			((Control)matrixControl21).Name = "matrixControl21";
			((Control)matrixControl21).Size = new Size(30, 9);
			((Control)matrixControl21).TabIndex = 187;
			((Control)matrixControl21).TabStop = false;
			((Control)matrixControl21).Tag = "20";
			((Control)matrixControl21).Text = "  -  ";
			matrixControl22.Direction = ScrollDirection.Left;
			((Control)matrixControl22).Location = new Point(37, 326);
			matrixControl22.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl22.maxCharactersPerLine = 5;
			((Control)matrixControl22).Name = "matrixControl22";
			((Control)matrixControl22).Size = new Size(30, 9);
			((Control)matrixControl22).TabIndex = 191;
			((Control)matrixControl22).TabStop = false;
			((Control)matrixControl22).Tag = "21";
			((Control)matrixControl22).Text = "  -  ";
			((Control)vuMeter21).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter21.BackgroundImage");
			vuMeter21.CurrentValue = 1;
			vuMeter21.DecayTime = 50;
			vuMeter21.HasContextMenu = true;
			vuMeter21.HoldPeak = true;
			((Control)vuMeter21).Location = new Point(36, 118);
			((Control)vuMeter21).Margin = new Padding(4);
			((Control)vuMeter21).Name = "vuMeter21";
			vuMeter21.NewValue = 0;
			vuMeter21.PeakHoldFastRelease = true;
			vuMeter21.PeakHoldForever = false;
			vuMeter21.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter21.PeakHoldImage");
			vuMeter21.PeakHoldTime = 2000;
			((Control)vuMeter21).Size = new Size(4, 200);
			((Control)vuMeter21).TabIndex = 190;
			((Control)vuMeter21).Tag = "21";
			vuMeter21.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter21.VUMeterImageOff");
			vuMeter21.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter21.VUMeterImageOn");
			fader22.AVCFeatureFunctionBlockId = -1;
			((Control)fader22).BackgroundImage = (Image)componentResourceManager.GetObject("fader22.BackgroundImage");
			fader22.Channel = fader.E_Channel.eRight;
			fader22.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader22.ClickStep = 0.25;
			fader22.CurrentValue = -63.0;
			fader22.FaderLinearDBPos = -6;
			fader22.FaderLinearToRelPixelPos = 60;
			fader22.FaderMaxLeftPosition = 0;
			fader22.FaderMaxRightPosition = 0;
			fader22.FaderMaxTopPosition = 5;
			fader22.FaderMinBottomPosition = 5;
			fader22.FaderMovedByDB = 0.0;
			((Control)fader22).Location = new Point(41, 120);
			((Control)fader22).Margin = new Padding(2);
			fader22.MaxDBValue = 0;
			fader22.MinDBValue = -64;
			((Control)fader22).Name = "fader22";
			fader22.PollingTime = 80;
			((Control)fader22).Size = new Size(13, 205);
			fader22.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader22.SliderBackgroundImage");
			fader22.SliderImage = Resources.faderbutton1;
			fader22.Step = 0.125;
			((Control)fader22).TabIndex = 188;
			((Control)fader22).Tag = "21";
			fader22.USBFunctionBlockId = 191;
			fader22.ValueLinear = false;
			fader22.Vertical = true;
			fader22.OnFaderMove += fader_OnMove;
			fader22.OnActivate += fader_OnActivate;
			fader22.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter22).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter22.BackgroundImage");
			vuMeter22.CurrentValue = 1;
			vuMeter22.DecayTime = 50;
			vuMeter22.HasContextMenu = true;
			vuMeter22.HoldPeak = true;
			((Control)vuMeter22).Location = new Point(30, 118);
			((Control)vuMeter22).Margin = new Padding(4);
			((Control)vuMeter22).Name = "vuMeter22";
			vuMeter22.NewValue = 0;
			vuMeter22.PeakHoldFastRelease = true;
			vuMeter22.PeakHoldForever = false;
			vuMeter22.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter22.PeakHoldImage");
			vuMeter22.PeakHoldTime = 2000;
			((Control)vuMeter22).Size = new Size(4, 200);
			((Control)vuMeter22).TabIndex = 189;
			((Control)vuMeter22).Tag = "20";
			vuMeter22.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter22.VUMeterImageOff");
			vuMeter22.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter22.VUMeterImageOn");
			link20_21.AVCFeatureFunctionBlockId = 0;
			link20_21.BkgImage = null;
			link20_21.Channel = CPushButton.E_Channel.eMaster;
			link20_21.Disabled = false;
			link20_21.ImageMouseDown = null;
			link20_21.ImageOff = (Bitmap)componentResourceManager.GetObject("link20_21.ImageOff");
			link20_21.ImageOn = (Bitmap)componentResourceManager.GetObject("link20_21.ImageOn");
			((Control)link20_21).Location = new Point(6, 31);
			((Control)link20_21).Margin = new Padding(4);
			((Control)link20_21).Name = "link20_21";
			((Control)link20_21).Size = new Size(60, 19);
			link20_21.State = false;
			((Control)link20_21).TabIndex = 140;
			((Control)link20_21).Tag = "20_21";
			link20_21.USBFunctionBlockId = 0;
			link20_21.OnPush += linkButton_OnPush;
			muteButton20.AVCFeatureFunctionBlockId = 6;
			muteButton20.BkgImage = null;
			muteButton20.Channel = CPushButton.E_Channel.eLeft;
			muteButton20.Disabled = false;
			muteButton20.ImageMouseDown = null;
			muteButton20.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton20.ImageOff");
			muteButton20.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton20.ImageOn");
			((Control)muteButton20).Location = new Point(6, 67);
			((Control)muteButton20).Margin = new Padding(4);
			((Control)muteButton20).Name = "muteButton20";
			((Control)muteButton20).Size = new Size(30, 19);
			muteButton20.State = false;
			((Control)muteButton20).TabIndex = 141;
			((Control)muteButton20).Tag = "20";
			muteButton20.USBFunctionBlockId = 191;
			muteButton20.OnPush += muteButton_OnPush;
			soloButton21.AVCFeatureFunctionBlockId = 0;
			soloButton21.BkgImage = null;
			soloButton21.Channel = CPushButton.E_Channel.eMaster;
			soloButton21.Disabled = false;
			soloButton21.ImageMouseDown = null;
			soloButton21.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton21.ImageOff");
			soloButton21.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton21.ImageOn");
			((Control)soloButton21).Location = new Point(36, 49);
			((Control)soloButton21).Margin = new Padding(4);
			((Control)soloButton21).Name = "soloButton21";
			((Control)soloButton21).Size = new Size(30, 19);
			soloButton21.State = false;
			((Control)soloButton21).TabIndex = 142;
			((Control)soloButton21).Tag = "21";
			soloButton21.USBFunctionBlockId = 191;
			soloButton21.OnPush += soloButton_OnPush;
			muteButton21.AVCFeatureFunctionBlockId = 6;
			muteButton21.BkgImage = null;
			muteButton21.Channel = CPushButton.E_Channel.eRight;
			muteButton21.Disabled = false;
			muteButton21.ImageMouseDown = null;
			muteButton21.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton21.ImageOff");
			muteButton21.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton21.ImageOn");
			((Control)muteButton21).Location = new Point(36, 67);
			((Control)muteButton21).Margin = new Padding(4);
			((Control)muteButton21).Name = "muteButton21";
			((Control)muteButton21).Size = new Size(30, 19);
			muteButton21.State = false;
			((Control)muteButton21).TabIndex = 143;
			((Control)muteButton21).Tag = "21";
			muteButton21.USBFunctionBlockId = 191;
			muteButton21.OnPush += muteButton_OnPush;
			soloButton20.AVCFeatureFunctionBlockId = 0;
			soloButton20.BkgImage = null;
			soloButton20.Channel = CPushButton.E_Channel.eMaster;
			soloButton20.Disabled = false;
			soloButton20.ImageMouseDown = null;
			soloButton20.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton20.ImageOff");
			soloButton20.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton20.ImageOn");
			((Control)soloButton20).Location = new Point(6, 49);
			((Control)soloButton20).Margin = new Padding(4);
			((Control)soloButton20).Name = "soloButton20";
			((Control)soloButton20).Size = new Size(30, 19);
			soloButton20.State = false;
			((Control)soloButton20).TabIndex = 144;
			((Control)soloButton20).Tag = "20";
			soloButton20.USBFunctionBlockId = 191;
			soloButton20.OnPush += soloButton_OnPush;
			((Control)label10).BackColor = Color.Transparent;
			((Control)label10).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label10).ForeColor = Color.Transparent;
			((Control)label10).Location = new Point(6, 7);
			((Control)label10).Name = "label10";
			((Control)label10).Size = new Size(65, 15);
			((Control)label10).TabIndex = 125;
			((Control)label10).Text = "21 Line 22";
			label10.TextAlign = (ContentAlignment)32;
			Pan21.Angle = 0;
			Pan21.AVCFeatureFunctionBlockId = 6;
			Pan21.BkgImg = Resources.knob_new;
			Pan21.Channel = ControlKnob.E_Channel.eRight;
			Pan21.KnobImage = Resources.knob_new_indicator;
			((Control)Pan21).Location = new Point(39, 87);
			((Control)Pan21).Margin = new Padding(0);
			Pan21.MaxRotate = 127;
			Pan21.MaxValue = 127;
			Pan21.MinRotate = -127;
			Pan21.MinValue = -127;
			((Control)Pan21).Name = "Pan21";
			((Control)Pan21).Size = new Size(27, 27);
			((Control)Pan21).TabIndex = 172;
			((Control)Pan21).Tag = "21";
			Pan21.TransparentColorRGB = "000001";
			Pan21.USBFunctionBlockId = 191;
			Pan21.Value = 0;
			Pan21.OnRotate += Pan_OnRotate;
			Pan21.OnActivate += Pan_OnActivate;
			Pan21.OnDeactivate += Pan_OnDeActivate;
			Pan20.Angle = 0;
			Pan20.AVCFeatureFunctionBlockId = 6;
			Pan20.BkgImg = Resources.knob_new;
			Pan20.Channel = ControlKnob.E_Channel.eLeft;
			Pan20.KnobImage = Resources.knob_new_indicator;
			((Control)Pan20).Location = new Point(8, 87);
			((Control)Pan20).Margin = new Padding(0);
			Pan20.MaxRotate = 127;
			Pan20.MaxValue = 127;
			Pan20.MinRotate = -127;
			Pan20.MinValue = -127;
			((Control)Pan20).Name = "Pan20";
			((Control)Pan20).Size = new Size(27, 27);
			((Control)Pan20).TabIndex = 173;
			((Control)Pan20).Tag = "20";
			Pan20.TransparentColorRGB = "000001";
			Pan20.USBFunctionBlockId = 191;
			Pan20.Value = 0;
			Pan20.OnRotate += Pan_OnRotate;
			Pan20.OnActivate += Pan_OnActivate;
			Pan20.OnDeactivate += Pan_OnDeActivate;
			pictureBox23.Image = (Image)componentResourceManager.GetObject("pictureBox23.Image");
			((Control)pictureBox23).Location = new Point(53, 120);
			((Control)pictureBox23).Name = "pictureBox23";
			((Control)pictureBox23).Size = new Size(15, 201);
			pictureBox23.TabIndex = 81;
			pictureBox23.TabStop = false;
			pictureBox24.Image = (Image)componentResourceManager.GetObject("pictureBox24.Image");
			((Control)pictureBox24).Location = new Point(4, 120);
			((Control)pictureBox24).Name = "pictureBox24";
			((Control)pictureBox24).Size = new Size(15, 201);
			pictureBox24.TabIndex = 79;
			pictureBox24.TabStop = false;
			((Control)channel_19_20).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_19_20).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_19_20).Controls.Add((Control)(object)fader19);
			((Control)channel_19_20).Controls.Add((Control)(object)matrixControl19);
			((Control)channel_19_20).Controls.Add((Control)(object)matrixControl20);
			((Control)channel_19_20).Controls.Add((Control)(object)vuMeter19);
			((Control)channel_19_20).Controls.Add((Control)(object)fader20);
			((Control)channel_19_20).Controls.Add((Control)(object)vuMeter20);
			((Control)channel_19_20).Controls.Add((Control)(object)link18_19);
			((Control)channel_19_20).Controls.Add((Control)(object)muteButton18);
			((Control)channel_19_20).Controls.Add((Control)(object)soloButton19);
			((Control)channel_19_20).Controls.Add((Control)(object)muteButton19);
			((Control)channel_19_20).Controls.Add((Control)(object)soloButton18);
			((Control)channel_19_20).Controls.Add((Control)(object)label9);
			((Control)channel_19_20).Controls.Add((Control)(object)Pan19);
			((Control)channel_19_20).Controls.Add((Control)(object)Pan18);
			((Control)channel_19_20).Controls.Add((Control)(object)pictureBox21);
			((Control)channel_19_20).Controls.Add((Control)(object)pictureBox22);
			((Control)channel_19_20).Location = new Point(650, 0);
			((Control)channel_19_20).Name = "channel_19_20";
			((Control)channel_19_20).Size = new Size(71, 350);
			((Control)channel_19_20).TabIndex = 212;
			((Control)channel_19_20).Tag = "9";
			fader19.AVCFeatureFunctionBlockId = -1;
			((Control)fader19).BackgroundImage = (Image)componentResourceManager.GetObject("fader19.BackgroundImage");
			fader19.Channel = fader.E_Channel.eLeft;
			fader19.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader19.ClickStep = 0.25;
			fader19.CurrentValue = -63.0;
			fader19.FaderLinearDBPos = -6;
			fader19.FaderLinearToRelPixelPos = 60;
			fader19.FaderMaxLeftPosition = 0;
			fader19.FaderMaxRightPosition = 0;
			fader19.FaderMaxTopPosition = 5;
			fader19.FaderMinBottomPosition = 5;
			fader19.FaderMovedByDB = 0.0;
			((Control)fader19).Location = new Point(18, 120);
			((Control)fader19).Margin = new Padding(2);
			fader19.MaxDBValue = 0;
			fader19.MinDBValue = -64;
			((Control)fader19).Name = "fader19";
			fader19.PollingTime = 80;
			((Control)fader19).Size = new Size(13, 205);
			fader19.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader19.SliderBackgroundImage");
			fader19.SliderImage = Resources.faderbutton1;
			fader19.Step = 0.125;
			((Control)fader19).TabIndex = 186;
			((Control)fader19).Tag = "18";
			fader19.USBFunctionBlockId = 190;
			fader19.ValueLinear = false;
			fader19.Vertical = true;
			fader19.OnFaderMove += fader_OnMove;
			fader19.OnActivate += fader_OnActivate;
			fader19.OnDeactivate += fader_OnDeactivate;
			matrixControl19.Direction = ScrollDirection.Left;
			((Control)matrixControl19).Location = new Point(5, 326);
			matrixControl19.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl19.maxCharactersPerLine = 5;
			((Control)matrixControl19).Name = "matrixControl19";
			((Control)matrixControl19).Size = new Size(30, 9);
			((Control)matrixControl19).TabIndex = 187;
			((Control)matrixControl19).TabStop = false;
			((Control)matrixControl19).Tag = "18";
			((Control)matrixControl19).Text = "  -  ";
			matrixControl20.Direction = ScrollDirection.Left;
			((Control)matrixControl20).Location = new Point(38, 326);
			matrixControl20.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl20.maxCharactersPerLine = 5;
			((Control)matrixControl20).Name = "matrixControl20";
			((Control)matrixControl20).Size = new Size(30, 9);
			((Control)matrixControl20).TabIndex = 191;
			((Control)matrixControl20).TabStop = false;
			((Control)matrixControl20).Tag = "19";
			((Control)matrixControl20).Text = "  -  ";
			((Control)vuMeter19).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter19.BackgroundImage");
			vuMeter19.CurrentValue = 1;
			vuMeter19.DecayTime = 50;
			vuMeter19.HasContextMenu = true;
			vuMeter19.HoldPeak = true;
			((Control)vuMeter19).Location = new Point(37, 118);
			((Control)vuMeter19).Margin = new Padding(4);
			((Control)vuMeter19).Name = "vuMeter19";
			vuMeter19.NewValue = 0;
			vuMeter19.PeakHoldFastRelease = true;
			vuMeter19.PeakHoldForever = false;
			vuMeter19.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter19.PeakHoldImage");
			vuMeter19.PeakHoldTime = 2000;
			((Control)vuMeter19).Size = new Size(4, 200);
			((Control)vuMeter19).TabIndex = 190;
			((Control)vuMeter19).Tag = "19";
			vuMeter19.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter19.VUMeterImageOff");
			vuMeter19.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter19.VUMeterImageOn");
			fader20.AVCFeatureFunctionBlockId = -1;
			((Control)fader20).BackgroundImage = (Image)componentResourceManager.GetObject("fader20.BackgroundImage");
			fader20.Channel = fader.E_Channel.eRight;
			fader20.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader20.ClickStep = 0.25;
			fader20.CurrentValue = -63.0;
			fader20.FaderLinearDBPos = -6;
			fader20.FaderLinearToRelPixelPos = 60;
			fader20.FaderMaxLeftPosition = 0;
			fader20.FaderMaxRightPosition = 0;
			fader20.FaderMaxTopPosition = 5;
			fader20.FaderMinBottomPosition = 5;
			fader20.FaderMovedByDB = 0.0;
			((Control)fader20).Location = new Point(42, 120);
			((Control)fader20).Margin = new Padding(2);
			fader20.MaxDBValue = 0;
			fader20.MinDBValue = -64;
			((Control)fader20).Name = "fader20";
			fader20.PollingTime = 80;
			((Control)fader20).Size = new Size(13, 205);
			fader20.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader20.SliderBackgroundImage");
			fader20.SliderImage = Resources.faderbutton1;
			fader20.Step = 0.125;
			((Control)fader20).TabIndex = 188;
			((Control)fader20).Tag = "19";
			fader20.USBFunctionBlockId = 190;
			fader20.ValueLinear = false;
			fader20.Vertical = true;
			fader20.OnFaderMove += fader_OnMove;
			fader20.OnActivate += fader_OnActivate;
			fader20.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter20).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter20.BackgroundImage");
			vuMeter20.CurrentValue = 1;
			vuMeter20.DecayTime = 50;
			vuMeter20.HasContextMenu = true;
			vuMeter20.HoldPeak = true;
			((Control)vuMeter20).Location = new Point(31, 118);
			((Control)vuMeter20).Margin = new Padding(4);
			((Control)vuMeter20).Name = "vuMeter20";
			vuMeter20.NewValue = 0;
			vuMeter20.PeakHoldFastRelease = true;
			vuMeter20.PeakHoldForever = false;
			vuMeter20.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter20.PeakHoldImage");
			vuMeter20.PeakHoldTime = 2000;
			((Control)vuMeter20).Size = new Size(4, 200);
			((Control)vuMeter20).TabIndex = 189;
			((Control)vuMeter20).Tag = "18";
			vuMeter20.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter20.VUMeterImageOff");
			vuMeter20.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter20.VUMeterImageOn");
			link18_19.AVCFeatureFunctionBlockId = 0;
			link18_19.BkgImage = null;
			link18_19.Channel = CPushButton.E_Channel.eMaster;
			link18_19.Disabled = false;
			link18_19.ImageMouseDown = null;
			link18_19.ImageOff = (Bitmap)componentResourceManager.GetObject("link18_19.ImageOff");
			link18_19.ImageOn = (Bitmap)componentResourceManager.GetObject("link18_19.ImageOn");
			((Control)link18_19).Location = new Point(6, 31);
			((Control)link18_19).Margin = new Padding(4);
			((Control)link18_19).Name = "link18_19";
			((Control)link18_19).Size = new Size(60, 19);
			link18_19.State = false;
			((Control)link18_19).TabIndex = 140;
			((Control)link18_19).Tag = "18_19";
			link18_19.USBFunctionBlockId = 0;
			link18_19.OnPush += linkButton_OnPush;
			muteButton18.AVCFeatureFunctionBlockId = 6;
			muteButton18.BkgImage = null;
			muteButton18.Channel = CPushButton.E_Channel.eLeft;
			muteButton18.Disabled = false;
			muteButton18.ImageMouseDown = null;
			muteButton18.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton18.ImageOff");
			muteButton18.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton18.ImageOn");
			((Control)muteButton18).Location = new Point(6, 67);
			((Control)muteButton18).Margin = new Padding(4);
			((Control)muteButton18).Name = "muteButton18";
			((Control)muteButton18).Size = new Size(30, 19);
			muteButton18.State = false;
			((Control)muteButton18).TabIndex = 141;
			((Control)muteButton18).Tag = "18";
			muteButton18.USBFunctionBlockId = 190;
			muteButton18.OnPush += muteButton_OnPush;
			soloButton19.AVCFeatureFunctionBlockId = 0;
			soloButton19.BkgImage = null;
			soloButton19.Channel = CPushButton.E_Channel.eMaster;
			soloButton19.Disabled = false;
			soloButton19.ImageMouseDown = null;
			soloButton19.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton19.ImageOff");
			soloButton19.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton19.ImageOn");
			((Control)soloButton19).Location = new Point(36, 49);
			((Control)soloButton19).Margin = new Padding(4);
			((Control)soloButton19).Name = "soloButton19";
			((Control)soloButton19).Size = new Size(30, 19);
			soloButton19.State = false;
			((Control)soloButton19).TabIndex = 142;
			((Control)soloButton19).Tag = "19";
			soloButton19.USBFunctionBlockId = 190;
			soloButton19.OnPush += soloButton_OnPush;
			muteButton19.AVCFeatureFunctionBlockId = 6;
			muteButton19.BkgImage = null;
			muteButton19.Channel = CPushButton.E_Channel.eRight;
			muteButton19.Disabled = false;
			muteButton19.ImageMouseDown = null;
			muteButton19.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton19.ImageOff");
			muteButton19.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton19.ImageOn");
			((Control)muteButton19).Location = new Point(36, 67);
			((Control)muteButton19).Margin = new Padding(4);
			((Control)muteButton19).Name = "muteButton19";
			((Control)muteButton19).Size = new Size(30, 19);
			muteButton19.State = false;
			((Control)muteButton19).TabIndex = 143;
			((Control)muteButton19).Tag = "19";
			muteButton19.USBFunctionBlockId = 190;
			muteButton19.OnPush += muteButton_OnPush;
			soloButton18.AVCFeatureFunctionBlockId = 0;
			soloButton18.BkgImage = null;
			soloButton18.Channel = CPushButton.E_Channel.eMaster;
			soloButton18.Disabled = false;
			soloButton18.ImageMouseDown = null;
			soloButton18.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton18.ImageOff");
			soloButton18.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton18.ImageOn");
			((Control)soloButton18).Location = new Point(6, 49);
			((Control)soloButton18).Margin = new Padding(4);
			((Control)soloButton18).Name = "soloButton18";
			((Control)soloButton18).Size = new Size(30, 19);
			soloButton18.State = false;
			((Control)soloButton18).TabIndex = 144;
			((Control)soloButton18).Tag = "18";
			soloButton18.USBFunctionBlockId = 190;
			soloButton18.OnPush += soloButton_OnPush;
			((Control)label9).BackColor = Color.Transparent;
			((Control)label9).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label9).ForeColor = Color.Transparent;
			((Control)label9).Location = new Point(6, 7);
			((Control)label9).Name = "label9";
			((Control)label9).Size = new Size(65, 15);
			((Control)label9).TabIndex = 125;
			((Control)label9).Text = "19 Line 20";
			label9.TextAlign = (ContentAlignment)32;
			Pan19.Angle = 0;
			Pan19.AVCFeatureFunctionBlockId = 6;
			Pan19.BkgImg = Resources.knob_new;
			Pan19.Channel = ControlKnob.E_Channel.eRight;
			Pan19.KnobImage = Resources.knob_new_indicator;
			((Control)Pan19).Location = new Point(39, 87);
			((Control)Pan19).Margin = new Padding(0);
			Pan19.MaxRotate = 127;
			Pan19.MaxValue = 127;
			Pan19.MinRotate = -127;
			Pan19.MinValue = -127;
			((Control)Pan19).Name = "Pan19";
			((Control)Pan19).Size = new Size(27, 27);
			((Control)Pan19).TabIndex = 172;
			((Control)Pan19).Tag = "19";
			Pan19.TransparentColorRGB = "000001";
			Pan19.USBFunctionBlockId = 190;
			Pan19.Value = 0;
			Pan19.OnRotate += Pan_OnRotate;
			Pan19.OnActivate += Pan_OnActivate;
			Pan19.OnDeactivate += Pan_OnDeActivate;
			Pan18.Angle = 0;
			Pan18.AVCFeatureFunctionBlockId = 6;
			Pan18.BkgImg = Resources.knob_new;
			Pan18.Channel = ControlKnob.E_Channel.eLeft;
			Pan18.KnobImage = Resources.knob_new_indicator;
			((Control)Pan18).Location = new Point(8, 87);
			((Control)Pan18).Margin = new Padding(0);
			Pan18.MaxRotate = 127;
			Pan18.MaxValue = 127;
			Pan18.MinRotate = -127;
			Pan18.MinValue = -127;
			((Control)Pan18).Name = "Pan18";
			((Control)Pan18).Size = new Size(27, 27);
			((Control)Pan18).TabIndex = 173;
			((Control)Pan18).Tag = "18";
			Pan18.TransparentColorRGB = "000001";
			Pan18.USBFunctionBlockId = 190;
			Pan18.Value = 0;
			Pan18.OnRotate += Pan_OnRotate;
			Pan18.OnActivate += Pan_OnActivate;
			Pan18.OnDeactivate += Pan_OnDeActivate;
			pictureBox21.Image = (Image)componentResourceManager.GetObject("pictureBox21.Image");
			((Control)pictureBox21).Location = new Point(53, 120);
			((Control)pictureBox21).Name = "pictureBox21";
			((Control)pictureBox21).Size = new Size(15, 201);
			pictureBox21.TabIndex = 81;
			pictureBox21.TabStop = false;
			pictureBox22.Image = (Image)componentResourceManager.GetObject("pictureBox22.Image");
			((Control)pictureBox22).Location = new Point(4, 120);
			((Control)pictureBox22).Name = "pictureBox22";
			((Control)pictureBox22).Size = new Size(15, 201);
			pictureBox22.TabIndex = 79;
			pictureBox22.TabStop = false;
			((Control)channel_17_18).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_17_18).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_17_18).Controls.Add((Control)(object)fader17);
			((Control)channel_17_18).Controls.Add((Control)(object)matrixControl17);
			((Control)channel_17_18).Controls.Add((Control)(object)matrixControl18);
			((Control)channel_17_18).Controls.Add((Control)(object)vuMeter17);
			((Control)channel_17_18).Controls.Add((Control)(object)fader18);
			((Control)channel_17_18).Controls.Add((Control)(object)vuMeter18);
			((Control)channel_17_18).Controls.Add((Control)(object)link16_17);
			((Control)channel_17_18).Controls.Add((Control)(object)muteButton16);
			((Control)channel_17_18).Controls.Add((Control)(object)soloButton17);
			((Control)channel_17_18).Controls.Add((Control)(object)muteButton17);
			((Control)channel_17_18).Controls.Add((Control)(object)soloButton16);
			((Control)channel_17_18).Controls.Add((Control)(object)label8);
			((Control)channel_17_18).Controls.Add((Control)(object)Pan17);
			((Control)channel_17_18).Controls.Add((Control)(object)Pan16);
			((Control)channel_17_18).Controls.Add((Control)(object)pictureBox19);
			((Control)channel_17_18).Controls.Add((Control)(object)pictureBox20);
			((Control)channel_17_18).Location = new Point(578, 0);
			((Control)channel_17_18).Name = "channel_17_18";
			((Control)channel_17_18).Size = new Size(71, 350);
			((Control)channel_17_18).TabIndex = 211;
			((Control)channel_17_18).Tag = "8";
			fader17.AVCFeatureFunctionBlockId = -1;
			((Control)fader17).BackgroundImage = (Image)componentResourceManager.GetObject("fader17.BackgroundImage");
			fader17.Channel = fader.E_Channel.eLeft;
			fader17.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader17.ClickStep = 0.25;
			fader17.CurrentValue = -63.0;
			fader17.FaderLinearDBPos = -6;
			fader17.FaderLinearToRelPixelPos = 60;
			fader17.FaderMaxLeftPosition = 0;
			fader17.FaderMaxRightPosition = 0;
			fader17.FaderMaxTopPosition = 5;
			fader17.FaderMinBottomPosition = 5;
			fader17.FaderMovedByDB = 0.0;
			((Control)fader17).Location = new Point(17, 120);
			((Control)fader17).Margin = new Padding(2);
			fader17.MaxDBValue = 0;
			fader17.MinDBValue = -64;
			((Control)fader17).Name = "fader17";
			fader17.PollingTime = 80;
			((Control)fader17).Size = new Size(13, 205);
			fader17.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader17.SliderBackgroundImage");
			fader17.SliderImage = Resources.faderbutton1;
			fader17.Step = 0.125;
			((Control)fader17).TabIndex = 186;
			((Control)fader17).Tag = "16";
			fader17.USBFunctionBlockId = 189;
			fader17.ValueLinear = false;
			fader17.Vertical = true;
			fader17.OnFaderMove += fader_OnMove;
			fader17.OnActivate += fader_OnActivate;
			fader17.OnDeactivate += fader_OnDeactivate;
			matrixControl17.Direction = ScrollDirection.Left;
			((Control)matrixControl17).Location = new Point(4, 326);
			matrixControl17.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl17.maxCharactersPerLine = 5;
			((Control)matrixControl17).Name = "matrixControl17";
			((Control)matrixControl17).Size = new Size(30, 9);
			((Control)matrixControl17).TabIndex = 187;
			((Control)matrixControl17).TabStop = false;
			((Control)matrixControl17).Tag = "16";
			((Control)matrixControl17).Text = "  -  ";
			matrixControl18.Direction = ScrollDirection.Left;
			((Control)matrixControl18).Location = new Point(37, 326);
			matrixControl18.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl18.maxCharactersPerLine = 5;
			((Control)matrixControl18).Name = "matrixControl18";
			((Control)matrixControl18).Size = new Size(30, 9);
			((Control)matrixControl18).TabIndex = 191;
			((Control)matrixControl18).TabStop = false;
			((Control)matrixControl18).Tag = "17";
			((Control)matrixControl18).Text = "  -  ";
			((Control)vuMeter17).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter17.BackgroundImage");
			vuMeter17.CurrentValue = 1;
			vuMeter17.DecayTime = 50;
			vuMeter17.HasContextMenu = true;
			vuMeter17.HoldPeak = true;
			((Control)vuMeter17).Location = new Point(36, 118);
			((Control)vuMeter17).Margin = new Padding(4);
			((Control)vuMeter17).Name = "vuMeter17";
			vuMeter17.NewValue = 0;
			vuMeter17.PeakHoldFastRelease = true;
			vuMeter17.PeakHoldForever = false;
			vuMeter17.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter17.PeakHoldImage");
			vuMeter17.PeakHoldTime = 2000;
			((Control)vuMeter17).Size = new Size(4, 200);
			((Control)vuMeter17).TabIndex = 190;
			((Control)vuMeter17).Tag = "17";
			vuMeter17.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter17.VUMeterImageOff");
			vuMeter17.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter17.VUMeterImageOn");
			fader18.AVCFeatureFunctionBlockId = -1;
			((Control)fader18).BackgroundImage = (Image)componentResourceManager.GetObject("fader18.BackgroundImage");
			fader18.Channel = fader.E_Channel.eRight;
			fader18.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader18.ClickStep = 0.25;
			fader18.CurrentValue = -63.0;
			fader18.FaderLinearDBPos = -6;
			fader18.FaderLinearToRelPixelPos = 60;
			fader18.FaderMaxLeftPosition = 0;
			fader18.FaderMaxRightPosition = 0;
			fader18.FaderMaxTopPosition = 5;
			fader18.FaderMinBottomPosition = 5;
			fader18.FaderMovedByDB = 0.0;
			((Control)fader18).Location = new Point(41, 120);
			((Control)fader18).Margin = new Padding(2);
			fader18.MaxDBValue = 0;
			fader18.MinDBValue = -64;
			((Control)fader18).Name = "fader18";
			fader18.PollingTime = 80;
			((Control)fader18).Size = new Size(13, 205);
			fader18.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader18.SliderBackgroundImage");
			fader18.SliderImage = Resources.faderbutton1;
			fader18.Step = 0.125;
			((Control)fader18).TabIndex = 188;
			((Control)fader18).Tag = "17";
			fader18.USBFunctionBlockId = 189;
			fader18.ValueLinear = false;
			fader18.Vertical = true;
			fader18.OnFaderMove += fader_OnMove;
			fader18.OnActivate += fader_OnActivate;
			fader18.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter18).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter18.BackgroundImage");
			vuMeter18.CurrentValue = 1;
			vuMeter18.DecayTime = 50;
			vuMeter18.HasContextMenu = true;
			vuMeter18.HoldPeak = true;
			((Control)vuMeter18).Location = new Point(30, 118);
			((Control)vuMeter18).Margin = new Padding(4);
			((Control)vuMeter18).Name = "vuMeter18";
			vuMeter18.NewValue = 0;
			vuMeter18.PeakHoldFastRelease = true;
			vuMeter18.PeakHoldForever = false;
			vuMeter18.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter18.PeakHoldImage");
			vuMeter18.PeakHoldTime = 2000;
			((Control)vuMeter18).Size = new Size(4, 200);
			((Control)vuMeter18).TabIndex = 189;
			((Control)vuMeter18).Tag = "16";
			vuMeter18.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter18.VUMeterImageOff");
			vuMeter18.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter18.VUMeterImageOn");
			link16_17.AVCFeatureFunctionBlockId = 0;
			link16_17.BkgImage = null;
			link16_17.Channel = CPushButton.E_Channel.eMaster;
			link16_17.Disabled = false;
			link16_17.ImageMouseDown = null;
			link16_17.ImageOff = (Bitmap)componentResourceManager.GetObject("link16_17.ImageOff");
			link16_17.ImageOn = (Bitmap)componentResourceManager.GetObject("link16_17.ImageOn");
			((Control)link16_17).Location = new Point(6, 31);
			((Control)link16_17).Margin = new Padding(4);
			((Control)link16_17).Name = "link16_17";
			((Control)link16_17).Size = new Size(60, 19);
			link16_17.State = false;
			((Control)link16_17).TabIndex = 140;
			((Control)link16_17).Tag = "16_17";
			link16_17.USBFunctionBlockId = 0;
			link16_17.OnPush += linkButton_OnPush;
			muteButton16.AVCFeatureFunctionBlockId = 6;
			muteButton16.BkgImage = null;
			muteButton16.Channel = CPushButton.E_Channel.eLeft;
			muteButton16.Disabled = false;
			muteButton16.ImageMouseDown = null;
			muteButton16.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton16.ImageOff");
			muteButton16.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton16.ImageOn");
			((Control)muteButton16).Location = new Point(6, 67);
			((Control)muteButton16).Margin = new Padding(4);
			((Control)muteButton16).Name = "muteButton16";
			((Control)muteButton16).Size = new Size(30, 19);
			muteButton16.State = false;
			((Control)muteButton16).TabIndex = 141;
			((Control)muteButton16).Tag = "16";
			muteButton16.USBFunctionBlockId = 189;
			muteButton16.OnPush += muteButton_OnPush;
			soloButton17.AVCFeatureFunctionBlockId = 0;
			soloButton17.BkgImage = null;
			soloButton17.Channel = CPushButton.E_Channel.eMaster;
			soloButton17.Disabled = false;
			soloButton17.ImageMouseDown = null;
			soloButton17.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton17.ImageOff");
			soloButton17.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton17.ImageOn");
			((Control)soloButton17).Location = new Point(36, 49);
			((Control)soloButton17).Margin = new Padding(4);
			((Control)soloButton17).Name = "soloButton17";
			((Control)soloButton17).Size = new Size(30, 19);
			soloButton17.State = false;
			((Control)soloButton17).TabIndex = 142;
			((Control)soloButton17).Tag = "17";
			soloButton17.USBFunctionBlockId = 189;
			soloButton17.OnPush += soloButton_OnPush;
			muteButton17.AVCFeatureFunctionBlockId = 6;
			muteButton17.BkgImage = null;
			muteButton17.Channel = CPushButton.E_Channel.eRight;
			muteButton17.Disabled = false;
			muteButton17.ImageMouseDown = null;
			muteButton17.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton17.ImageOff");
			muteButton17.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton17.ImageOn");
			((Control)muteButton17).Location = new Point(36, 67);
			((Control)muteButton17).Margin = new Padding(4);
			((Control)muteButton17).Name = "muteButton17";
			((Control)muteButton17).Size = new Size(30, 19);
			muteButton17.State = false;
			((Control)muteButton17).TabIndex = 143;
			((Control)muteButton17).Tag = "17";
			muteButton17.USBFunctionBlockId = 189;
			muteButton17.OnPush += muteButton_OnPush;
			soloButton16.AVCFeatureFunctionBlockId = 0;
			soloButton16.BkgImage = null;
			soloButton16.Channel = CPushButton.E_Channel.eMaster;
			soloButton16.Disabled = false;
			soloButton16.ImageMouseDown = null;
			soloButton16.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton16.ImageOff");
			soloButton16.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton16.ImageOn");
			((Control)soloButton16).Location = new Point(6, 49);
			((Control)soloButton16).Margin = new Padding(4);
			((Control)soloButton16).Name = "soloButton16";
			((Control)soloButton16).Size = new Size(30, 19);
			soloButton16.State = false;
			((Control)soloButton16).TabIndex = 144;
			((Control)soloButton16).Tag = "16";
			soloButton16.USBFunctionBlockId = 189;
			soloButton16.OnPush += soloButton_OnPush;
			((Control)label8).BackColor = Color.Transparent;
			((Control)label8).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label8).ForeColor = Color.Transparent;
			((Control)label8).Location = new Point(6, 7);
			((Control)label8).Name = "label8";
			((Control)label8).Size = new Size(65, 15);
			((Control)label8).TabIndex = 125;
			((Control)label8).Text = "17 Line 18";
			label8.TextAlign = (ContentAlignment)32;
			Pan17.Angle = 0;
			Pan17.AVCFeatureFunctionBlockId = 6;
			Pan17.BkgImg = Resources.knob_new;
			Pan17.Channel = ControlKnob.E_Channel.eRight;
			Pan17.KnobImage = Resources.knob_new_indicator;
			((Control)Pan17).Location = new Point(39, 87);
			((Control)Pan17).Margin = new Padding(0);
			Pan17.MaxRotate = 127;
			Pan17.MaxValue = 127;
			Pan17.MinRotate = -127;
			Pan17.MinValue = -127;
			((Control)Pan17).Name = "Pan17";
			((Control)Pan17).Size = new Size(27, 27);
			((Control)Pan17).TabIndex = 172;
			((Control)Pan17).Tag = "17";
			Pan17.TransparentColorRGB = "000001";
			Pan17.USBFunctionBlockId = 189;
			Pan17.Value = 0;
			Pan17.OnRotate += Pan_OnRotate;
			Pan17.OnActivate += Pan_OnActivate;
			Pan17.OnDeactivate += Pan_OnDeActivate;
			Pan16.Angle = 0;
			Pan16.AVCFeatureFunctionBlockId = 6;
			Pan16.BkgImg = Resources.knob_new;
			Pan16.Channel = ControlKnob.E_Channel.eLeft;
			Pan16.KnobImage = Resources.knob_new_indicator;
			((Control)Pan16).Location = new Point(8, 87);
			((Control)Pan16).Margin = new Padding(0);
			Pan16.MaxRotate = 127;
			Pan16.MaxValue = 127;
			Pan16.MinRotate = -127;
			Pan16.MinValue = -127;
			((Control)Pan16).Name = "Pan16";
			((Control)Pan16).Size = new Size(27, 27);
			((Control)Pan16).TabIndex = 173;
			((Control)Pan16).Tag = "16";
			Pan16.TransparentColorRGB = "000001";
			Pan16.USBFunctionBlockId = 189;
			Pan16.Value = 0;
			Pan16.OnRotate += Pan_OnRotate;
			Pan16.OnActivate += Pan_OnActivate;
			Pan16.OnDeactivate += Pan_OnDeActivate;
			pictureBox19.Image = (Image)componentResourceManager.GetObject("pictureBox19.Image");
			((Control)pictureBox19).Location = new Point(53, 120);
			((Control)pictureBox19).Name = "pictureBox19";
			((Control)pictureBox19).Size = new Size(15, 201);
			pictureBox19.TabIndex = 81;
			pictureBox19.TabStop = false;
			pictureBox20.Image = (Image)componentResourceManager.GetObject("pictureBox20.Image");
			((Control)pictureBox20).Location = new Point(4, 120);
			((Control)pictureBox20).Name = "pictureBox20";
			((Control)pictureBox20).Size = new Size(15, 201);
			pictureBox20.TabIndex = 79;
			pictureBox20.TabStop = false;
			((Control)channel_15_16).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_15_16).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_15_16).Controls.Add((Control)(object)fader15);
			((Control)channel_15_16).Controls.Add((Control)(object)matrixControl15);
			((Control)channel_15_16).Controls.Add((Control)(object)matrixControl16);
			((Control)channel_15_16).Controls.Add((Control)(object)vuMeter13);
			((Control)channel_15_16).Controls.Add((Control)(object)fader16);
			((Control)channel_15_16).Controls.Add((Control)(object)vuMeter14);
			((Control)channel_15_16).Controls.Add((Control)(object)link14_15);
			((Control)channel_15_16).Controls.Add((Control)(object)muteButton14);
			((Control)channel_15_16).Controls.Add((Control)(object)soloButton15);
			((Control)channel_15_16).Controls.Add((Control)(object)muteButton15);
			((Control)channel_15_16).Controls.Add((Control)(object)soloButton14);
			((Control)channel_15_16).Controls.Add((Control)(object)label7);
			((Control)channel_15_16).Controls.Add((Control)(object)Pan15);
			((Control)channel_15_16).Controls.Add((Control)(object)Pan14);
			((Control)channel_15_16).Controls.Add((Control)(object)pictureBox15);
			((Control)channel_15_16).Controls.Add((Control)(object)pictureBox18);
			((Control)channel_15_16).Location = new Point(506, 0);
			((Control)channel_15_16).Name = "channel_15_16";
			((Control)channel_15_16).Size = new Size(71, 350);
			((Control)channel_15_16).TabIndex = 210;
			((Control)channel_15_16).Tag = "7";
			fader15.AVCFeatureFunctionBlockId = -1;
			((Control)fader15).BackgroundImage = (Image)componentResourceManager.GetObject("fader15.BackgroundImage");
			fader15.Channel = fader.E_Channel.eLeft;
			fader15.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader15.ClickStep = 0.25;
			fader15.CurrentValue = -63.0;
			fader15.FaderLinearDBPos = -6;
			fader15.FaderLinearToRelPixelPos = 60;
			fader15.FaderMaxLeftPosition = 0;
			fader15.FaderMaxRightPosition = 0;
			fader15.FaderMaxTopPosition = 5;
			fader15.FaderMinBottomPosition = 5;
			fader15.FaderMovedByDB = 0.0;
			((Control)fader15).Location = new Point(17, 120);
			((Control)fader15).Margin = new Padding(2);
			fader15.MaxDBValue = 0;
			fader15.MinDBValue = -64;
			((Control)fader15).Name = "fader15";
			fader15.PollingTime = 80;
			((Control)fader15).Size = new Size(13, 205);
			fader15.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader15.SliderBackgroundImage");
			fader15.SliderImage = Resources.faderbutton1;
			fader15.Step = 0.125;
			((Control)fader15).TabIndex = 186;
			((Control)fader15).Tag = "14";
			fader15.USBFunctionBlockId = 188;
			fader15.ValueLinear = false;
			fader15.Vertical = true;
			fader15.OnFaderMove += fader_OnMove;
			fader15.OnActivate += fader_OnActivate;
			fader15.OnDeactivate += fader_OnDeactivate;
			matrixControl15.Direction = ScrollDirection.Left;
			((Control)matrixControl15).Location = new Point(4, 326);
			matrixControl15.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl15.maxCharactersPerLine = 5;
			((Control)matrixControl15).Name = "matrixControl15";
			((Control)matrixControl15).Size = new Size(30, 9);
			((Control)matrixControl15).TabIndex = 187;
			((Control)matrixControl15).TabStop = false;
			((Control)matrixControl15).Tag = "14";
			((Control)matrixControl15).Text = "  -  ";
			matrixControl16.Direction = ScrollDirection.Left;
			((Control)matrixControl16).Location = new Point(37, 326);
			matrixControl16.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl16.maxCharactersPerLine = 5;
			((Control)matrixControl16).Name = "matrixControl16";
			((Control)matrixControl16).Size = new Size(30, 9);
			((Control)matrixControl16).TabIndex = 191;
			((Control)matrixControl16).TabStop = false;
			((Control)matrixControl16).Tag = "15";
			((Control)matrixControl16).Text = "  -  ";
			((Control)vuMeter13).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter13.BackgroundImage");
			vuMeter13.CurrentValue = 1;
			vuMeter13.DecayTime = 50;
			vuMeter13.HasContextMenu = true;
			vuMeter13.HoldPeak = true;
			((Control)vuMeter13).Location = new Point(36, 118);
			((Control)vuMeter13).Margin = new Padding(4);
			((Control)vuMeter13).Name = "vuMeter13";
			vuMeter13.NewValue = 0;
			vuMeter13.PeakHoldFastRelease = true;
			vuMeter13.PeakHoldForever = false;
			vuMeter13.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter13.PeakHoldImage");
			vuMeter13.PeakHoldTime = 2000;
			((Control)vuMeter13).Size = new Size(4, 200);
			((Control)vuMeter13).TabIndex = 190;
			((Control)vuMeter13).Tag = "15";
			vuMeter13.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter13.VUMeterImageOff");
			vuMeter13.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter13.VUMeterImageOn");
			fader16.AVCFeatureFunctionBlockId = -1;
			((Control)fader16).BackgroundImage = (Image)componentResourceManager.GetObject("fader16.BackgroundImage");
			fader16.Channel = fader.E_Channel.eRight;
			fader16.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader16.ClickStep = 0.25;
			fader16.CurrentValue = -63.0;
			fader16.FaderLinearDBPos = -6;
			fader16.FaderLinearToRelPixelPos = 60;
			fader16.FaderMaxLeftPosition = 0;
			fader16.FaderMaxRightPosition = 0;
			fader16.FaderMaxTopPosition = 5;
			fader16.FaderMinBottomPosition = 5;
			fader16.FaderMovedByDB = 0.0;
			((Control)fader16).Location = new Point(41, 120);
			((Control)fader16).Margin = new Padding(2);
			fader16.MaxDBValue = 0;
			fader16.MinDBValue = -64;
			((Control)fader16).Name = "fader16";
			fader16.PollingTime = 80;
			((Control)fader16).Size = new Size(13, 205);
			fader16.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader16.SliderBackgroundImage");
			fader16.SliderImage = Resources.faderbutton1;
			fader16.Step = 0.125;
			((Control)fader16).TabIndex = 188;
			((Control)fader16).Tag = "15";
			fader16.USBFunctionBlockId = 188;
			fader16.ValueLinear = false;
			fader16.Vertical = true;
			fader16.OnFaderMove += fader_OnMove;
			fader16.OnActivate += fader_OnActivate;
			fader16.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter14).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter14.BackgroundImage");
			vuMeter14.CurrentValue = 1;
			vuMeter14.DecayTime = 50;
			vuMeter14.HasContextMenu = true;
			vuMeter14.HoldPeak = true;
			((Control)vuMeter14).Location = new Point(30, 118);
			((Control)vuMeter14).Margin = new Padding(4);
			((Control)vuMeter14).Name = "vuMeter14";
			vuMeter14.NewValue = 0;
			vuMeter14.PeakHoldFastRelease = true;
			vuMeter14.PeakHoldForever = false;
			vuMeter14.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter14.PeakHoldImage");
			vuMeter14.PeakHoldTime = 2000;
			((Control)vuMeter14).Size = new Size(4, 200);
			((Control)vuMeter14).TabIndex = 189;
			((Control)vuMeter14).Tag = "14";
			vuMeter14.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter14.VUMeterImageOff");
			vuMeter14.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter14.VUMeterImageOn");
			link14_15.AVCFeatureFunctionBlockId = 0;
			link14_15.BkgImage = null;
			link14_15.Channel = CPushButton.E_Channel.eMaster;
			link14_15.Disabled = false;
			link14_15.ImageMouseDown = null;
			link14_15.ImageOff = (Bitmap)componentResourceManager.GetObject("link14_15.ImageOff");
			link14_15.ImageOn = (Bitmap)componentResourceManager.GetObject("link14_15.ImageOn");
			((Control)link14_15).Location = new Point(6, 31);
			((Control)link14_15).Margin = new Padding(4);
			((Control)link14_15).Name = "link14_15";
			((Control)link14_15).Size = new Size(60, 19);
			link14_15.State = false;
			((Control)link14_15).TabIndex = 140;
			((Control)link14_15).Tag = "14_15";
			link14_15.USBFunctionBlockId = 0;
			link14_15.OnPush += linkButton_OnPush;
			muteButton14.AVCFeatureFunctionBlockId = 6;
			muteButton14.BkgImage = null;
			muteButton14.Channel = CPushButton.E_Channel.eLeft;
			muteButton14.Disabled = false;
			muteButton14.ImageMouseDown = null;
			muteButton14.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton14.ImageOff");
			muteButton14.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton14.ImageOn");
			((Control)muteButton14).Location = new Point(6, 67);
			((Control)muteButton14).Margin = new Padding(4);
			((Control)muteButton14).Name = "muteButton14";
			((Control)muteButton14).Size = new Size(30, 19);
			muteButton14.State = false;
			((Control)muteButton14).TabIndex = 141;
			((Control)muteButton14).Tag = "14";
			muteButton14.USBFunctionBlockId = 188;
			muteButton14.OnPush += muteButton_OnPush;
			soloButton15.AVCFeatureFunctionBlockId = 0;
			soloButton15.BkgImage = null;
			soloButton15.Channel = CPushButton.E_Channel.eMaster;
			soloButton15.Disabled = false;
			soloButton15.ImageMouseDown = null;
			soloButton15.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton15.ImageOff");
			soloButton15.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton15.ImageOn");
			((Control)soloButton15).Location = new Point(36, 49);
			((Control)soloButton15).Margin = new Padding(4);
			((Control)soloButton15).Name = "soloButton15";
			((Control)soloButton15).Size = new Size(30, 19);
			soloButton15.State = false;
			((Control)soloButton15).TabIndex = 142;
			((Control)soloButton15).Tag = "15";
			soloButton15.USBFunctionBlockId = 188;
			soloButton15.OnPush += soloButton_OnPush;
			muteButton15.AVCFeatureFunctionBlockId = 6;
			muteButton15.BkgImage = null;
			muteButton15.Channel = CPushButton.E_Channel.eRight;
			muteButton15.Disabled = false;
			muteButton15.ImageMouseDown = null;
			muteButton15.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton15.ImageOff");
			muteButton15.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton15.ImageOn");
			((Control)muteButton15).Location = new Point(36, 67);
			((Control)muteButton15).Margin = new Padding(4);
			((Control)muteButton15).Name = "muteButton15";
			((Control)muteButton15).Size = new Size(30, 19);
			muteButton15.State = false;
			((Control)muteButton15).TabIndex = 143;
			((Control)muteButton15).Tag = "15";
			muteButton15.USBFunctionBlockId = 188;
			muteButton15.OnPush += muteButton_OnPush;
			soloButton14.AVCFeatureFunctionBlockId = 0;
			soloButton14.BkgImage = null;
			soloButton14.Channel = CPushButton.E_Channel.eMaster;
			soloButton14.Disabled = false;
			soloButton14.ImageMouseDown = null;
			soloButton14.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton14.ImageOff");
			soloButton14.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton14.ImageOn");
			((Control)soloButton14).Location = new Point(6, 49);
			((Control)soloButton14).Margin = new Padding(4);
			((Control)soloButton14).Name = "soloButton14";
			((Control)soloButton14).Size = new Size(30, 19);
			soloButton14.State = false;
			((Control)soloButton14).TabIndex = 144;
			((Control)soloButton14).Tag = "14";
			soloButton14.USBFunctionBlockId = 188;
			soloButton14.OnPush += soloButton_OnPush;
			((Control)label7).BackColor = Color.Transparent;
			((Control)label7).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label7).ForeColor = Color.Transparent;
			((Control)label7).Location = new Point(6, 7);
			((Control)label7).Name = "label7";
			((Control)label7).Size = new Size(65, 15);
			((Control)label7).TabIndex = 125;
			((Control)label7).Text = "15 Line 16";
			label7.TextAlign = (ContentAlignment)32;
			Pan15.Angle = 0;
			Pan15.AVCFeatureFunctionBlockId = 6;
			Pan15.BkgImg = Resources.knob_new;
			Pan15.Channel = ControlKnob.E_Channel.eRight;
			Pan15.KnobImage = Resources.knob_new_indicator;
			((Control)Pan15).Location = new Point(39, 87);
			((Control)Pan15).Margin = new Padding(0);
			Pan15.MaxRotate = 127;
			Pan15.MaxValue = 127;
			Pan15.MinRotate = -127;
			Pan15.MinValue = -127;
			((Control)Pan15).Name = "Pan15";
			((Control)Pan15).Size = new Size(27, 27);
			((Control)Pan15).TabIndex = 172;
			((Control)Pan15).Tag = "15";
			Pan15.TransparentColorRGB = "000001";
			Pan15.USBFunctionBlockId = 188;
			Pan15.Value = 0;
			Pan15.OnRotate += Pan_OnRotate;
			Pan15.OnActivate += Pan_OnActivate;
			Pan15.OnDeactivate += Pan_OnDeActivate;
			Pan14.Angle = 0;
			Pan14.AVCFeatureFunctionBlockId = 6;
			Pan14.BkgImg = Resources.knob_new;
			Pan14.Channel = ControlKnob.E_Channel.eLeft;
			Pan14.KnobImage = Resources.knob_new_indicator;
			((Control)Pan14).Location = new Point(8, 87);
			((Control)Pan14).Margin = new Padding(0);
			Pan14.MaxRotate = 127;
			Pan14.MaxValue = 127;
			Pan14.MinRotate = -127;
			Pan14.MinValue = -127;
			((Control)Pan14).Name = "Pan14";
			((Control)Pan14).Size = new Size(27, 27);
			((Control)Pan14).TabIndex = 173;
			((Control)Pan14).Tag = "14";
			Pan14.TransparentColorRGB = "000001";
			Pan14.USBFunctionBlockId = 188;
			Pan14.Value = 0;
			Pan14.OnRotate += Pan_OnRotate;
			Pan14.OnActivate += Pan_OnActivate;
			Pan14.OnDeactivate += Pan_OnDeActivate;
			pictureBox15.Image = (Image)componentResourceManager.GetObject("pictureBox15.Image");
			((Control)pictureBox15).Location = new Point(53, 120);
			((Control)pictureBox15).Name = "pictureBox15";
			((Control)pictureBox15).Size = new Size(15, 201);
			pictureBox15.TabIndex = 81;
			pictureBox15.TabStop = false;
			pictureBox18.Image = (Image)componentResourceManager.GetObject("pictureBox18.Image");
			((Control)pictureBox18).Location = new Point(4, 120);
			((Control)pictureBox18).Name = "pictureBox18";
			((Control)pictureBox18).Size = new Size(15, 201);
			pictureBox18.TabIndex = 79;
			pictureBox18.TabStop = false;
			((Control)channel__13_14).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel__13_14).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel__13_14).Controls.Add((Control)(object)fader13);
			((Control)channel__13_14).Controls.Add((Control)(object)matrixControl13);
			((Control)channel__13_14).Controls.Add((Control)(object)matrixControl14);
			((Control)channel__13_14).Controls.Add((Control)(object)vuMeter11);
			((Control)channel__13_14).Controls.Add((Control)(object)fader14);
			((Control)channel__13_14).Controls.Add((Control)(object)vuMeter12);
			((Control)channel__13_14).Controls.Add((Control)(object)link12_13);
			((Control)channel__13_14).Controls.Add((Control)(object)muteButton12);
			((Control)channel__13_14).Controls.Add((Control)(object)soloButton13);
			((Control)channel__13_14).Controls.Add((Control)(object)muteButton13);
			((Control)channel__13_14).Controls.Add((Control)(object)soloButton12);
			((Control)channel__13_14).Controls.Add((Control)(object)label6);
			((Control)channel__13_14).Controls.Add((Control)(object)Pan13);
			((Control)channel__13_14).Controls.Add((Control)(object)Pan12);
			((Control)channel__13_14).Controls.Add((Control)(object)pictureBox13);
			((Control)channel__13_14).Controls.Add((Control)(object)pictureBox14);
			((Control)channel__13_14).Location = new Point(434, 0);
			((Control)channel__13_14).Name = "channel__13_14";
			((Control)channel__13_14).Size = new Size(71, 350);
			((Control)channel__13_14).TabIndex = 209;
			((Control)channel__13_14).Tag = "6";
			fader13.AVCFeatureFunctionBlockId = -1;
			((Control)fader13).BackgroundImage = (Image)componentResourceManager.GetObject("fader13.BackgroundImage");
			fader13.Channel = fader.E_Channel.eLeft;
			fader13.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader13.ClickStep = 0.25;
			fader13.CurrentValue = -63.0;
			fader13.FaderLinearDBPos = -6;
			fader13.FaderLinearToRelPixelPos = 60;
			fader13.FaderMaxLeftPosition = 0;
			fader13.FaderMaxRightPosition = 0;
			fader13.FaderMaxTopPosition = 5;
			fader13.FaderMinBottomPosition = 5;
			fader13.FaderMovedByDB = 0.0;
			((Control)fader13).Location = new Point(18, 120);
			((Control)fader13).Margin = new Padding(2);
			fader13.MaxDBValue = 0;
			fader13.MinDBValue = -64;
			((Control)fader13).Name = "fader13";
			fader13.PollingTime = 80;
			((Control)fader13).Size = new Size(13, 205);
			fader13.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader13.SliderBackgroundImage");
			fader13.SliderImage = Resources.faderbutton1;
			fader13.Step = 0.125;
			((Control)fader13).TabIndex = 186;
			((Control)fader13).Tag = "12";
			fader13.USBFunctionBlockId = 187;
			fader13.ValueLinear = false;
			fader13.Vertical = true;
			fader13.OnFaderMove += fader_OnMove;
			fader13.OnActivate += fader_OnActivate;
			fader13.OnDeactivate += fader_OnDeactivate;
			matrixControl13.Direction = ScrollDirection.Left;
			((Control)matrixControl13).Location = new Point(5, 326);
			matrixControl13.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl13.maxCharactersPerLine = 5;
			((Control)matrixControl13).Name = "matrixControl13";
			((Control)matrixControl13).Size = new Size(30, 9);
			((Control)matrixControl13).TabIndex = 187;
			((Control)matrixControl13).TabStop = false;
			((Control)matrixControl13).Tag = "12";
			((Control)matrixControl13).Text = "  -  ";
			matrixControl14.Direction = ScrollDirection.Left;
			((Control)matrixControl14).Location = new Point(38, 326);
			matrixControl14.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl14.maxCharactersPerLine = 5;
			((Control)matrixControl14).Name = "matrixControl14";
			((Control)matrixControl14).Size = new Size(30, 9);
			((Control)matrixControl14).TabIndex = 191;
			((Control)matrixControl14).TabStop = false;
			((Control)matrixControl14).Tag = "13";
			((Control)matrixControl14).Text = "  -  ";
			((Control)vuMeter11).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter11.BackgroundImage");
			vuMeter11.CurrentValue = 1;
			vuMeter11.DecayTime = 50;
			vuMeter11.HasContextMenu = true;
			vuMeter11.HoldPeak = true;
			((Control)vuMeter11).Location = new Point(37, 118);
			((Control)vuMeter11).Margin = new Padding(4);
			((Control)vuMeter11).Name = "vuMeter11";
			vuMeter11.NewValue = 0;
			vuMeter11.PeakHoldFastRelease = true;
			vuMeter11.PeakHoldForever = false;
			vuMeter11.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter11.PeakHoldImage");
			vuMeter11.PeakHoldTime = 2000;
			((Control)vuMeter11).Size = new Size(4, 200);
			((Control)vuMeter11).TabIndex = 190;
			((Control)vuMeter11).Tag = "13";
			vuMeter11.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter11.VUMeterImageOff");
			vuMeter11.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter11.VUMeterImageOn");
			fader14.AVCFeatureFunctionBlockId = -1;
			((Control)fader14).BackgroundImage = (Image)componentResourceManager.GetObject("fader14.BackgroundImage");
			fader14.Channel = fader.E_Channel.eRight;
			fader14.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader14.ClickStep = 0.25;
			fader14.CurrentValue = -63.0;
			fader14.FaderLinearDBPos = -6;
			fader14.FaderLinearToRelPixelPos = 60;
			fader14.FaderMaxLeftPosition = 0;
			fader14.FaderMaxRightPosition = 0;
			fader14.FaderMaxTopPosition = 5;
			fader14.FaderMinBottomPosition = 5;
			fader14.FaderMovedByDB = 0.0;
			((Control)fader14).Location = new Point(42, 120);
			((Control)fader14).Margin = new Padding(2);
			fader14.MaxDBValue = 0;
			fader14.MinDBValue = -64;
			((Control)fader14).Name = "fader14";
			fader14.PollingTime = 80;
			((Control)fader14).Size = new Size(13, 205);
			fader14.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader14.SliderBackgroundImage");
			fader14.SliderImage = Resources.faderbutton1;
			fader14.Step = 0.125;
			((Control)fader14).TabIndex = 188;
			((Control)fader14).Tag = "13";
			fader14.USBFunctionBlockId = 187;
			fader14.ValueLinear = false;
			fader14.Vertical = true;
			fader14.OnFaderMove += fader_OnMove;
			fader14.OnActivate += fader_OnActivate;
			fader14.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter12).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter12.BackgroundImage");
			vuMeter12.CurrentValue = 1;
			vuMeter12.DecayTime = 50;
			vuMeter12.HasContextMenu = true;
			vuMeter12.HoldPeak = true;
			((Control)vuMeter12).Location = new Point(31, 118);
			((Control)vuMeter12).Margin = new Padding(4);
			((Control)vuMeter12).Name = "vuMeter12";
			vuMeter12.NewValue = 0;
			vuMeter12.PeakHoldFastRelease = true;
			vuMeter12.PeakHoldForever = false;
			vuMeter12.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter12.PeakHoldImage");
			vuMeter12.PeakHoldTime = 2000;
			((Control)vuMeter12).Size = new Size(4, 200);
			((Control)vuMeter12).TabIndex = 189;
			((Control)vuMeter12).Tag = "12";
			vuMeter12.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter12.VUMeterImageOff");
			vuMeter12.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter12.VUMeterImageOn");
			link12_13.AVCFeatureFunctionBlockId = 0;
			link12_13.BkgImage = null;
			link12_13.Channel = CPushButton.E_Channel.eMaster;
			link12_13.Disabled = false;
			link12_13.ImageMouseDown = null;
			link12_13.ImageOff = (Bitmap)componentResourceManager.GetObject("link12_13.ImageOff");
			link12_13.ImageOn = (Bitmap)componentResourceManager.GetObject("link12_13.ImageOn");
			((Control)link12_13).Location = new Point(6, 31);
			((Control)link12_13).Margin = new Padding(4);
			((Control)link12_13).Name = "link12_13";
			((Control)link12_13).Size = new Size(60, 19);
			link12_13.State = false;
			((Control)link12_13).TabIndex = 140;
			((Control)link12_13).Tag = "12_13";
			link12_13.USBFunctionBlockId = 0;
			link12_13.OnPush += linkButton_OnPush;
			muteButton12.AVCFeatureFunctionBlockId = 6;
			muteButton12.BkgImage = null;
			muteButton12.Channel = CPushButton.E_Channel.eLeft;
			muteButton12.Disabled = false;
			muteButton12.ImageMouseDown = null;
			muteButton12.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton12.ImageOff");
			muteButton12.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton12.ImageOn");
			((Control)muteButton12).Location = new Point(6, 67);
			((Control)muteButton12).Margin = new Padding(4);
			((Control)muteButton12).Name = "muteButton12";
			((Control)muteButton12).Size = new Size(30, 19);
			muteButton12.State = false;
			((Control)muteButton12).TabIndex = 141;
			((Control)muteButton12).Tag = "12";
			muteButton12.USBFunctionBlockId = 187;
			muteButton12.OnPush += muteButton_OnPush;
			soloButton13.AVCFeatureFunctionBlockId = 0;
			soloButton13.BkgImage = null;
			soloButton13.Channel = CPushButton.E_Channel.eMaster;
			soloButton13.Disabled = false;
			soloButton13.ImageMouseDown = null;
			soloButton13.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton13.ImageOff");
			soloButton13.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton13.ImageOn");
			((Control)soloButton13).Location = new Point(36, 49);
			((Control)soloButton13).Margin = new Padding(4);
			((Control)soloButton13).Name = "soloButton13";
			((Control)soloButton13).Size = new Size(30, 19);
			soloButton13.State = false;
			((Control)soloButton13).TabIndex = 142;
			((Control)soloButton13).Tag = "13";
			soloButton13.USBFunctionBlockId = 187;
			soloButton13.OnPush += soloButton_OnPush;
			muteButton13.AVCFeatureFunctionBlockId = 6;
			muteButton13.BkgImage = null;
			muteButton13.Channel = CPushButton.E_Channel.eRight;
			muteButton13.Disabled = false;
			muteButton13.ImageMouseDown = null;
			muteButton13.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton13.ImageOff");
			muteButton13.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton13.ImageOn");
			((Control)muteButton13).Location = new Point(36, 67);
			((Control)muteButton13).Margin = new Padding(4);
			((Control)muteButton13).Name = "muteButton13";
			((Control)muteButton13).Size = new Size(30, 19);
			muteButton13.State = false;
			((Control)muteButton13).TabIndex = 143;
			((Control)muteButton13).Tag = "13";
			muteButton13.USBFunctionBlockId = 187;
			muteButton13.OnPush += muteButton_OnPush;
			soloButton12.AVCFeatureFunctionBlockId = 0;
			soloButton12.BkgImage = null;
			soloButton12.Channel = CPushButton.E_Channel.eMaster;
			soloButton12.Disabled = false;
			soloButton12.ImageMouseDown = null;
			soloButton12.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton12.ImageOff");
			soloButton12.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton12.ImageOn");
			((Control)soloButton12).Location = new Point(6, 49);
			((Control)soloButton12).Margin = new Padding(4);
			((Control)soloButton12).Name = "soloButton12";
			((Control)soloButton12).Size = new Size(30, 19);
			soloButton12.State = false;
			((Control)soloButton12).TabIndex = 144;
			((Control)soloButton12).Tag = "12";
			soloButton12.USBFunctionBlockId = 187;
			soloButton12.OnPush += soloButton_OnPush;
			((Control)label6).BackColor = Color.Transparent;
			((Control)label6).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label6).ForeColor = Color.Transparent;
			((Control)label6).Location = new Point(6, 7);
			((Control)label6).Name = "label6";
			((Control)label6).Size = new Size(65, 15);
			((Control)label6).TabIndex = 125;
			((Control)label6).Text = "13 Line 14";
			label6.TextAlign = (ContentAlignment)32;
			Pan13.Angle = 0;
			Pan13.AVCFeatureFunctionBlockId = 6;
			Pan13.BkgImg = Resources.knob_new;
			Pan13.Channel = ControlKnob.E_Channel.eRight;
			Pan13.KnobImage = Resources.knob_new_indicator;
			((Control)Pan13).Location = new Point(39, 87);
			((Control)Pan13).Margin = new Padding(0);
			Pan13.MaxRotate = 127;
			Pan13.MaxValue = 127;
			Pan13.MinRotate = -127;
			Pan13.MinValue = -127;
			((Control)Pan13).Name = "Pan13";
			((Control)Pan13).Size = new Size(27, 27);
			((Control)Pan13).TabIndex = 172;
			((Control)Pan13).Tag = "13";
			Pan13.TransparentColorRGB = "000001";
			Pan13.USBFunctionBlockId = 187;
			Pan13.Value = 0;
			Pan13.OnRotate += Pan_OnRotate;
			Pan13.OnActivate += Pan_OnActivate;
			Pan13.OnDeactivate += Pan_OnDeActivate;
			Pan12.Angle = 0;
			Pan12.AVCFeatureFunctionBlockId = 6;
			Pan12.BkgImg = Resources.knob_new;
			Pan12.Channel = ControlKnob.E_Channel.eLeft;
			Pan12.KnobImage = Resources.knob_new_indicator;
			((Control)Pan12).Location = new Point(8, 87);
			((Control)Pan12).Margin = new Padding(0);
			Pan12.MaxRotate = 127;
			Pan12.MaxValue = 127;
			Pan12.MinRotate = -127;
			Pan12.MinValue = -127;
			((Control)Pan12).Name = "Pan12";
			((Control)Pan12).Size = new Size(27, 27);
			((Control)Pan12).TabIndex = 173;
			((Control)Pan12).Tag = "12";
			Pan12.TransparentColorRGB = "000001";
			Pan12.USBFunctionBlockId = 187;
			Pan12.Value = 0;
			Pan12.OnRotate += Pan_OnRotate;
			Pan12.OnActivate += Pan_OnActivate;
			Pan12.OnDeactivate += Pan_OnDeActivate;
			pictureBox13.Image = (Image)componentResourceManager.GetObject("pictureBox13.Image");
			((Control)pictureBox13).Location = new Point(53, 120);
			((Control)pictureBox13).Name = "pictureBox13";
			((Control)pictureBox13).Size = new Size(15, 201);
			pictureBox13.TabIndex = 81;
			pictureBox13.TabStop = false;
			pictureBox14.Image = (Image)componentResourceManager.GetObject("pictureBox14.Image");
			((Control)pictureBox14).Location = new Point(4, 120);
			((Control)pictureBox14).Name = "pictureBox14";
			((Control)pictureBox14).Size = new Size(15, 201);
			pictureBox14.TabIndex = 79;
			pictureBox14.TabStop = false;
			((Control)channel_7_8).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_7_8).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_7_8).Controls.Add((Control)(object)fader7);
			((Control)channel_7_8).Controls.Add((Control)(object)matrixControl7);
			((Control)channel_7_8).Controls.Add((Control)(object)matrixControl8);
			((Control)channel_7_8).Controls.Add((Control)(object)vuMeter5);
			((Control)channel_7_8).Controls.Add((Control)(object)fader8);
			((Control)channel_7_8).Controls.Add((Control)(object)vuMeter6);
			((Control)channel_7_8).Controls.Add((Control)(object)link6_7);
			((Control)channel_7_8).Controls.Add((Control)(object)muteButton6);
			((Control)channel_7_8).Controls.Add((Control)(object)soloButton7);
			((Control)channel_7_8).Controls.Add((Control)(object)muteButton7);
			((Control)channel_7_8).Controls.Add((Control)(object)soloButton6);
			((Control)channel_7_8).Controls.Add((Control)(object)label5);
			((Control)channel_7_8).Controls.Add((Control)(object)Pan7);
			((Control)channel_7_8).Controls.Add((Control)(object)Pan6);
			((Control)channel_7_8).Controls.Add((Control)(object)pictureBox11);
			((Control)channel_7_8).Controls.Add((Control)(object)pictureBox12);
			((Control)channel_7_8).Location = new Point(218, 0);
			((Control)channel_7_8).Name = "channel_7_8";
			((Control)channel_7_8).Size = new Size(71, 350);
			((Control)channel_7_8).TabIndex = 208;
			((Control)channel_7_8).Tag = "3";
			fader7.AVCFeatureFunctionBlockId = -1;
			((Control)fader7).BackgroundImage = (Image)componentResourceManager.GetObject("fader7.BackgroundImage");
			fader7.Channel = fader.E_Channel.eLeft;
			fader7.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader7.ClickStep = 0.25;
			fader7.CurrentValue = -63.0;
			fader7.FaderLinearDBPos = -6;
			fader7.FaderLinearToRelPixelPos = 60;
			fader7.FaderMaxLeftPosition = 0;
			fader7.FaderMaxRightPosition = 0;
			fader7.FaderMaxTopPosition = 5;
			fader7.FaderMinBottomPosition = 5;
			fader7.FaderMovedByDB = 0.0;
			((Control)fader7).Location = new Point(17, 120);
			((Control)fader7).Margin = new Padding(2);
			fader7.MaxDBValue = 0;
			fader7.MinDBValue = -64;
			((Control)fader7).Name = "fader7";
			fader7.PollingTime = 80;
			((Control)fader7).Size = new Size(13, 205);
			fader7.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader7.SliderBackgroundImage");
			fader7.SliderImage = Resources.faderbutton1;
			fader7.Step = 0.125;
			((Control)fader7).TabIndex = 180;
			((Control)fader7).Tag = "6";
			fader7.USBFunctionBlockId = 184;
			fader7.ValueLinear = false;
			fader7.Vertical = true;
			fader7.OnFaderMove += fader_OnMove;
			fader7.OnActivate += fader_OnActivate;
			fader7.OnDeactivate += fader_OnDeactivate;
			matrixControl7.Direction = ScrollDirection.Left;
			((Control)matrixControl7).Location = new Point(4, 326);
			matrixControl7.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl7.maxCharactersPerLine = 5;
			((Control)matrixControl7).Name = "matrixControl7";
			((Control)matrixControl7).Size = new Size(30, 9);
			((Control)matrixControl7).TabIndex = 181;
			((Control)matrixControl7).TabStop = false;
			((Control)matrixControl7).Tag = "6";
			((Control)matrixControl7).Text = "  -  ";
			matrixControl8.Direction = ScrollDirection.Left;
			((Control)matrixControl8).Location = new Point(37, 326);
			matrixControl8.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl8.maxCharactersPerLine = 5;
			((Control)matrixControl8).Name = "matrixControl8";
			((Control)matrixControl8).Size = new Size(30, 9);
			((Control)matrixControl8).TabIndex = 185;
			((Control)matrixControl8).TabStop = false;
			((Control)matrixControl8).Tag = "7";
			((Control)matrixControl8).Text = "  -  ";
			((Control)vuMeter5).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter5.BackgroundImage");
			vuMeter5.CurrentValue = 1;
			vuMeter5.DecayTime = 50;
			vuMeter5.HasContextMenu = true;
			vuMeter5.HoldPeak = true;
			((Control)vuMeter5).Location = new Point(36, 118);
			((Control)vuMeter5).Margin = new Padding(4);
			((Control)vuMeter5).Name = "vuMeter5";
			vuMeter5.NewValue = 0;
			vuMeter5.PeakHoldFastRelease = true;
			vuMeter5.PeakHoldForever = false;
			vuMeter5.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter5.PeakHoldImage");
			vuMeter5.PeakHoldTime = 2000;
			((Control)vuMeter5).Size = new Size(4, 200);
			((Control)vuMeter5).TabIndex = 184;
			((Control)vuMeter5).Tag = "7";
			vuMeter5.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter5.VUMeterImageOff");
			vuMeter5.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter5.VUMeterImageOn");
			fader8.AVCFeatureFunctionBlockId = -1;
			((Control)fader8).BackgroundImage = (Image)componentResourceManager.GetObject("fader8.BackgroundImage");
			fader8.Channel = fader.E_Channel.eRight;
			fader8.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader8.ClickStep = 0.25;
			fader8.CurrentValue = -63.0;
			fader8.FaderLinearDBPos = -6;
			fader8.FaderLinearToRelPixelPos = 60;
			fader8.FaderMaxLeftPosition = 0;
			fader8.FaderMaxRightPosition = 0;
			fader8.FaderMaxTopPosition = 5;
			fader8.FaderMinBottomPosition = 5;
			fader8.FaderMovedByDB = 0.0;
			((Control)fader8).Location = new Point(41, 120);
			((Control)fader8).Margin = new Padding(2);
			fader8.MaxDBValue = 0;
			fader8.MinDBValue = -64;
			((Control)fader8).Name = "fader8";
			fader8.PollingTime = 80;
			((Control)fader8).Size = new Size(13, 205);
			fader8.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader8.SliderBackgroundImage");
			fader8.SliderImage = Resources.faderbutton1;
			fader8.Step = 0.125;
			((Control)fader8).TabIndex = 182;
			((Control)fader8).Tag = "7";
			fader8.USBFunctionBlockId = 184;
			fader8.ValueLinear = false;
			fader8.Vertical = true;
			fader8.OnFaderMove += fader_OnMove;
			fader8.OnActivate += fader_OnActivate;
			fader8.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter6).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter6.BackgroundImage");
			vuMeter6.CurrentValue = 1;
			vuMeter6.DecayTime = 50;
			vuMeter6.HasContextMenu = true;
			vuMeter6.HoldPeak = true;
			((Control)vuMeter6).Location = new Point(30, 118);
			((Control)vuMeter6).Margin = new Padding(4);
			((Control)vuMeter6).Name = "vuMeter6";
			vuMeter6.NewValue = 0;
			vuMeter6.PeakHoldFastRelease = true;
			vuMeter6.PeakHoldForever = false;
			vuMeter6.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter6.PeakHoldImage");
			vuMeter6.PeakHoldTime = 2000;
			((Control)vuMeter6).Size = new Size(4, 200);
			((Control)vuMeter6).TabIndex = 183;
			((Control)vuMeter6).Tag = "6";
			vuMeter6.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter6.VUMeterImageOff");
			vuMeter6.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter6.VUMeterImageOn");
			link6_7.AVCFeatureFunctionBlockId = 0;
			link6_7.BkgImage = null;
			link6_7.Channel = CPushButton.E_Channel.eMaster;
			link6_7.Disabled = false;
			link6_7.ImageMouseDown = null;
			link6_7.ImageOff = (Bitmap)componentResourceManager.GetObject("link6_7.ImageOff");
			link6_7.ImageOn = (Bitmap)componentResourceManager.GetObject("link6_7.ImageOn");
			((Control)link6_7).Location = new Point(6, 31);
			((Control)link6_7).Margin = new Padding(4);
			((Control)link6_7).Name = "link6_7";
			((Control)link6_7).Size = new Size(60, 19);
			link6_7.State = false;
			((Control)link6_7).TabIndex = 140;
			((Control)link6_7).Tag = "6_7";
			link6_7.USBFunctionBlockId = 0;
			link6_7.OnPush += linkButton_OnPush;
			muteButton6.AVCFeatureFunctionBlockId = 6;
			muteButton6.BkgImage = null;
			muteButton6.Channel = CPushButton.E_Channel.eLeft;
			muteButton6.Disabled = false;
			muteButton6.ImageMouseDown = null;
			muteButton6.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton6.ImageOff");
			muteButton6.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton6.ImageOn");
			((Control)muteButton6).Location = new Point(6, 67);
			((Control)muteButton6).Margin = new Padding(4);
			((Control)muteButton6).Name = "muteButton6";
			((Control)muteButton6).Size = new Size(30, 19);
			muteButton6.State = false;
			((Control)muteButton6).TabIndex = 141;
			((Control)muteButton6).Tag = "6";
			muteButton6.USBFunctionBlockId = 184;
			muteButton6.OnPush += muteButton_OnPush;
			soloButton7.AVCFeatureFunctionBlockId = 0;
			soloButton7.BkgImage = null;
			soloButton7.Channel = CPushButton.E_Channel.eMaster;
			soloButton7.Disabled = false;
			soloButton7.ImageMouseDown = null;
			soloButton7.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton7.ImageOff");
			soloButton7.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton7.ImageOn");
			((Control)soloButton7).Location = new Point(36, 49);
			((Control)soloButton7).Margin = new Padding(4);
			((Control)soloButton7).Name = "soloButton7";
			((Control)soloButton7).Size = new Size(30, 19);
			soloButton7.State = false;
			((Control)soloButton7).TabIndex = 142;
			((Control)soloButton7).Tag = "7";
			soloButton7.USBFunctionBlockId = 184;
			soloButton7.OnPush += soloButton_OnPush;
			muteButton7.AVCFeatureFunctionBlockId = 6;
			muteButton7.BkgImage = null;
			muteButton7.Channel = CPushButton.E_Channel.eRight;
			muteButton7.Disabled = false;
			muteButton7.ImageMouseDown = null;
			muteButton7.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton7.ImageOff");
			muteButton7.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton7.ImageOn");
			((Control)muteButton7).Location = new Point(36, 67);
			((Control)muteButton7).Margin = new Padding(4);
			((Control)muteButton7).Name = "muteButton7";
			((Control)muteButton7).Size = new Size(30, 19);
			muteButton7.State = false;
			((Control)muteButton7).TabIndex = 143;
			((Control)muteButton7).Tag = "7";
			muteButton7.USBFunctionBlockId = 184;
			muteButton7.OnPush += muteButton_OnPush;
			soloButton6.AVCFeatureFunctionBlockId = 0;
			soloButton6.BkgImage = null;
			soloButton6.Channel = CPushButton.E_Channel.eMaster;
			soloButton6.Disabled = false;
			soloButton6.ImageMouseDown = null;
			soloButton6.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton6.ImageOff");
			soloButton6.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton6.ImageOn");
			((Control)soloButton6).Location = new Point(6, 49);
			((Control)soloButton6).Margin = new Padding(4);
			((Control)soloButton6).Name = "soloButton6";
			((Control)soloButton6).Size = new Size(30, 19);
			soloButton6.State = false;
			((Control)soloButton6).TabIndex = 144;
			((Control)soloButton6).Tag = "6";
			soloButton6.USBFunctionBlockId = 184;
			soloButton6.OnPush += soloButton_OnPush;
			((Control)label5).BackColor = Color.Transparent;
			((Control)label5).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label5).ForeColor = Color.Transparent;
			((Control)label5).Location = new Point(6, 7);
			((Control)label5).Name = "label5";
			((Control)label5).Size = new Size(57, 15);
			((Control)label5).TabIndex = 125;
			((Control)label5).Text = "7  Line  8";
			label5.TextAlign = (ContentAlignment)32;
			Pan7.Angle = 0;
			Pan7.AVCFeatureFunctionBlockId = 6;
			Pan7.BkgImg = Resources.knob_new;
			Pan7.Channel = ControlKnob.E_Channel.eRight;
			Pan7.KnobImage = Resources.knob_new_indicator;
			((Control)Pan7).Location = new Point(39, 87);
			((Control)Pan7).Margin = new Padding(0);
			Pan7.MaxRotate = 127;
			Pan7.MaxValue = 127;
			Pan7.MinRotate = -127;
			Pan7.MinValue = -127;
			((Control)Pan7).Name = "Pan7";
			((Control)Pan7).Size = new Size(27, 27);
			((Control)Pan7).TabIndex = 172;
			((Control)Pan7).Tag = "7";
			Pan7.TransparentColorRGB = "000001";
			Pan7.USBFunctionBlockId = 184;
			Pan7.Value = 0;
			Pan7.OnRotate += Pan_OnRotate;
			Pan7.OnActivate += Pan_OnActivate;
			Pan7.OnDeactivate += Pan_OnDeActivate;
			Pan6.Angle = 0;
			Pan6.AVCFeatureFunctionBlockId = 6;
			Pan6.BkgImg = Resources.knob_new;
			Pan6.Channel = ControlKnob.E_Channel.eLeft;
			Pan6.KnobImage = Resources.knob_new_indicator;
			((Control)Pan6).Location = new Point(8, 87);
			((Control)Pan6).Margin = new Padding(0);
			Pan6.MaxRotate = 127;
			Pan6.MaxValue = 127;
			Pan6.MinRotate = -127;
			Pan6.MinValue = -127;
			((Control)Pan6).Name = "Pan6";
			((Control)Pan6).Size = new Size(27, 27);
			((Control)Pan6).TabIndex = 173;
			((Control)Pan6).Tag = "6";
			Pan6.TransparentColorRGB = "000001";
			Pan6.USBFunctionBlockId = 184;
			Pan6.Value = 0;
			Pan6.OnRotate += Pan_OnRotate;
			Pan6.OnActivate += Pan_OnActivate;
			Pan6.OnDeactivate += Pan_OnDeActivate;
			pictureBox11.Image = (Image)componentResourceManager.GetObject("pictureBox11.Image");
			((Control)pictureBox11).Location = new Point(53, 120);
			((Control)pictureBox11).Name = "pictureBox11";
			((Control)pictureBox11).Size = new Size(15, 201);
			pictureBox11.TabIndex = 81;
			pictureBox11.TabStop = false;
			pictureBox12.Image = (Image)componentResourceManager.GetObject("pictureBox12.Image");
			((Control)pictureBox12).Location = new Point(4, 120);
			((Control)pictureBox12).Name = "pictureBox12";
			((Control)pictureBox12).Size = new Size(15, 201);
			pictureBox12.TabIndex = 79;
			pictureBox12.TabStop = false;
			((Control)channel_9_10).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_9_10).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_9_10).Controls.Add((Control)(object)fader9);
			((Control)channel_9_10).Controls.Add((Control)(object)matrixControl9);
			((Control)channel_9_10).Controls.Add((Control)(object)matrixControl10);
			((Control)channel_9_10).Controls.Add((Control)(object)vuMeter7);
			((Control)channel_9_10).Controls.Add((Control)(object)fader10);
			((Control)channel_9_10).Controls.Add((Control)(object)vuMeter8);
			((Control)channel_9_10).Controls.Add((Control)(object)link8_9);
			((Control)channel_9_10).Controls.Add((Control)(object)muteButton8);
			((Control)channel_9_10).Controls.Add((Control)(object)soloButton9);
			((Control)channel_9_10).Controls.Add((Control)(object)muteButton9);
			((Control)channel_9_10).Controls.Add((Control)(object)soloButton8);
			((Control)channel_9_10).Controls.Add((Control)(object)label4);
			((Control)channel_9_10).Controls.Add((Control)(object)Pan9);
			((Control)channel_9_10).Controls.Add((Control)(object)Pan8);
			((Control)channel_9_10).Controls.Add((Control)(object)pictureBox9);
			((Control)channel_9_10).Controls.Add((Control)(object)pictureBox10);
			((Control)channel_9_10).Location = new Point(290, 0);
			((Control)channel_9_10).Name = "channel_9_10";
			((Control)channel_9_10).Size = new Size(71, 350);
			((Control)channel_9_10).TabIndex = 207;
			((Control)channel_9_10).Tag = "4";
			fader9.AVCFeatureFunctionBlockId = -1;
			((Control)fader9).BackgroundImage = (Image)componentResourceManager.GetObject("fader9.BackgroundImage");
			fader9.Channel = fader.E_Channel.eLeft;
			fader9.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader9.ClickStep = 0.25;
			fader9.CurrentValue = -63.0;
			fader9.FaderLinearDBPos = -6;
			fader9.FaderLinearToRelPixelPos = 60;
			fader9.FaderMaxLeftPosition = 0;
			fader9.FaderMaxRightPosition = 0;
			fader9.FaderMaxTopPosition = 5;
			fader9.FaderMinBottomPosition = 5;
			fader9.FaderMovedByDB = 0.0;
			((Control)fader9).Location = new Point(17, 120);
			((Control)fader9).Margin = new Padding(2);
			fader9.MaxDBValue = 0;
			fader9.MinDBValue = -64;
			((Control)fader9).Name = "fader9";
			fader9.PollingTime = 80;
			((Control)fader9).Size = new Size(13, 205);
			fader9.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader9.SliderBackgroundImage");
			fader9.SliderImage = Resources.faderbutton1;
			fader9.Step = 0.125;
			((Control)fader9).TabIndex = 180;
			((Control)fader9).Tag = "8";
			fader9.USBFunctionBlockId = 185;
			fader9.ValueLinear = false;
			fader9.Vertical = true;
			fader9.OnFaderMove += fader_OnMove;
			fader9.OnActivate += fader_OnActivate;
			fader9.OnDeactivate += fader_OnDeactivate;
			matrixControl9.Direction = ScrollDirection.Left;
			((Control)matrixControl9).Location = new Point(4, 326);
			matrixControl9.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl9.maxCharactersPerLine = 5;
			((Control)matrixControl9).Name = "matrixControl9";
			((Control)matrixControl9).Size = new Size(30, 9);
			((Control)matrixControl9).TabIndex = 181;
			((Control)matrixControl9).TabStop = false;
			((Control)matrixControl9).Tag = "8";
			((Control)matrixControl9).Text = "  -  ";
			matrixControl10.Direction = ScrollDirection.Left;
			((Control)matrixControl10).Location = new Point(37, 326);
			matrixControl10.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl10.maxCharactersPerLine = 5;
			((Control)matrixControl10).Name = "matrixControl10";
			((Control)matrixControl10).Size = new Size(30, 9);
			((Control)matrixControl10).TabIndex = 185;
			((Control)matrixControl10).TabStop = false;
			((Control)matrixControl10).Tag = "9";
			((Control)matrixControl10).Text = "  -  ";
			((Control)vuMeter7).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter7.BackgroundImage");
			vuMeter7.CurrentValue = 1;
			vuMeter7.DecayTime = 50;
			vuMeter7.HasContextMenu = true;
			vuMeter7.HoldPeak = true;
			((Control)vuMeter7).Location = new Point(36, 118);
			((Control)vuMeter7).Margin = new Padding(4);
			((Control)vuMeter7).Name = "vuMeter7";
			vuMeter7.NewValue = 0;
			vuMeter7.PeakHoldFastRelease = true;
			vuMeter7.PeakHoldForever = false;
			vuMeter7.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter7.PeakHoldImage");
			vuMeter7.PeakHoldTime = 2000;
			((Control)vuMeter7).Size = new Size(4, 200);
			((Control)vuMeter7).TabIndex = 184;
			((Control)vuMeter7).Tag = "9";
			vuMeter7.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter7.VUMeterImageOff");
			vuMeter7.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter7.VUMeterImageOn");
			fader10.AVCFeatureFunctionBlockId = -1;
			((Control)fader10).BackgroundImage = (Image)componentResourceManager.GetObject("fader10.BackgroundImage");
			fader10.Channel = fader.E_Channel.eRight;
			fader10.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader10.ClickStep = 0.25;
			fader10.CurrentValue = -63.0;
			fader10.FaderLinearDBPos = -6;
			fader10.FaderLinearToRelPixelPos = 60;
			fader10.FaderMaxLeftPosition = 0;
			fader10.FaderMaxRightPosition = 0;
			fader10.FaderMaxTopPosition = 5;
			fader10.FaderMinBottomPosition = 5;
			fader10.FaderMovedByDB = 0.0;
			((Control)fader10).Location = new Point(41, 120);
			((Control)fader10).Margin = new Padding(2);
			fader10.MaxDBValue = 0;
			fader10.MinDBValue = -64;
			((Control)fader10).Name = "fader10";
			fader10.PollingTime = 80;
			((Control)fader10).Size = new Size(13, 205);
			fader10.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader10.SliderBackgroundImage");
			fader10.SliderImage = Resources.faderbutton1;
			fader10.Step = 0.125;
			((Control)fader10).TabIndex = 182;
			((Control)fader10).Tag = "9";
			fader10.USBFunctionBlockId = 185;
			fader10.ValueLinear = false;
			fader10.Vertical = true;
			fader10.OnFaderMove += fader_OnMove;
			fader10.OnActivate += fader_OnActivate;
			fader10.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter8).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter8.BackgroundImage");
			vuMeter8.CurrentValue = 1;
			vuMeter8.DecayTime = 50;
			vuMeter8.HasContextMenu = true;
			vuMeter8.HoldPeak = true;
			((Control)vuMeter8).Location = new Point(30, 118);
			((Control)vuMeter8).Margin = new Padding(4);
			((Control)vuMeter8).Name = "vuMeter8";
			vuMeter8.NewValue = 0;
			vuMeter8.PeakHoldFastRelease = true;
			vuMeter8.PeakHoldForever = false;
			vuMeter8.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter8.PeakHoldImage");
			vuMeter8.PeakHoldTime = 2000;
			((Control)vuMeter8).Size = new Size(4, 200);
			((Control)vuMeter8).TabIndex = 183;
			((Control)vuMeter8).Tag = "8";
			vuMeter8.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter8.VUMeterImageOff");
			vuMeter8.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter8.VUMeterImageOn");
			link8_9.AVCFeatureFunctionBlockId = 0;
			link8_9.BkgImage = null;
			link8_9.Channel = CPushButton.E_Channel.eMaster;
			link8_9.Disabled = false;
			link8_9.ImageMouseDown = null;
			link8_9.ImageOff = (Bitmap)componentResourceManager.GetObject("link8_9.ImageOff");
			link8_9.ImageOn = (Bitmap)componentResourceManager.GetObject("link8_9.ImageOn");
			((Control)link8_9).Location = new Point(6, 31);
			((Control)link8_9).Margin = new Padding(4);
			((Control)link8_9).Name = "link8_9";
			((Control)link8_9).Size = new Size(60, 19);
			link8_9.State = false;
			((Control)link8_9).TabIndex = 140;
			((Control)link8_9).Tag = "8_9";
			link8_9.USBFunctionBlockId = 0;
			link8_9.OnPush += linkButton_OnPush;
			muteButton8.AVCFeatureFunctionBlockId = 6;
			muteButton8.BkgImage = null;
			muteButton8.Channel = CPushButton.E_Channel.eLeft;
			muteButton8.Disabled = false;
			muteButton8.ImageMouseDown = null;
			muteButton8.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton8.ImageOff");
			muteButton8.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton8.ImageOn");
			((Control)muteButton8).Location = new Point(6, 67);
			((Control)muteButton8).Margin = new Padding(4);
			((Control)muteButton8).Name = "muteButton8";
			((Control)muteButton8).Size = new Size(30, 19);
			muteButton8.State = false;
			((Control)muteButton8).TabIndex = 141;
			((Control)muteButton8).Tag = "8";
			muteButton8.USBFunctionBlockId = 185;
			muteButton8.OnPush += muteButton_OnPush;
			soloButton9.AVCFeatureFunctionBlockId = 0;
			soloButton9.BkgImage = null;
			soloButton9.Channel = CPushButton.E_Channel.eMaster;
			soloButton9.Disabled = false;
			soloButton9.ImageMouseDown = null;
			soloButton9.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton9.ImageOff");
			soloButton9.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton9.ImageOn");
			((Control)soloButton9).Location = new Point(36, 49);
			((Control)soloButton9).Margin = new Padding(4);
			((Control)soloButton9).Name = "soloButton9";
			((Control)soloButton9).Size = new Size(30, 19);
			soloButton9.State = false;
			((Control)soloButton9).TabIndex = 142;
			((Control)soloButton9).Tag = "9";
			soloButton9.USBFunctionBlockId = 185;
			soloButton9.OnPush += soloButton_OnPush;
			muteButton9.AVCFeatureFunctionBlockId = 6;
			muteButton9.BkgImage = null;
			muteButton9.Channel = CPushButton.E_Channel.eRight;
			muteButton9.Disabled = false;
			muteButton9.ImageMouseDown = null;
			muteButton9.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton9.ImageOff");
			muteButton9.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton9.ImageOn");
			((Control)muteButton9).Location = new Point(36, 67);
			((Control)muteButton9).Margin = new Padding(4);
			((Control)muteButton9).Name = "muteButton9";
			((Control)muteButton9).Size = new Size(30, 19);
			muteButton9.State = false;
			((Control)muteButton9).TabIndex = 143;
			((Control)muteButton9).Tag = "9";
			muteButton9.USBFunctionBlockId = 185;
			muteButton9.OnPush += muteButton_OnPush;
			soloButton8.AVCFeatureFunctionBlockId = 0;
			soloButton8.BkgImage = null;
			soloButton8.Channel = CPushButton.E_Channel.eMaster;
			soloButton8.Disabled = false;
			soloButton8.ImageMouseDown = null;
			soloButton8.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton8.ImageOff");
			soloButton8.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton8.ImageOn");
			((Control)soloButton8).Location = new Point(6, 49);
			((Control)soloButton8).Margin = new Padding(4);
			((Control)soloButton8).Name = "soloButton8";
			((Control)soloButton8).Size = new Size(30, 19);
			soloButton8.State = false;
			((Control)soloButton8).TabIndex = 144;
			((Control)soloButton8).Tag = "8";
			soloButton8.USBFunctionBlockId = 185;
			soloButton8.OnPush += soloButton_OnPush;
			((Control)label4).BackColor = Color.Transparent;
			((Control)label4).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label4).ForeColor = Color.Transparent;
			((Control)label4).Location = new Point(6, 7);
			((Control)label4).Name = "label4";
			((Control)label4).Size = new Size(61, 15);
			((Control)label4).TabIndex = 125;
			((Control)label4).Text = "9  Line 10";
			label4.TextAlign = (ContentAlignment)32;
			Pan9.Angle = 0;
			Pan9.AVCFeatureFunctionBlockId = 6;
			Pan9.BkgImg = Resources.knob_new;
			Pan9.Channel = ControlKnob.E_Channel.eRight;
			Pan9.KnobImage = Resources.knob_new_indicator;
			((Control)Pan9).Location = new Point(39, 87);
			((Control)Pan9).Margin = new Padding(0);
			Pan9.MaxRotate = 127;
			Pan9.MaxValue = 127;
			Pan9.MinRotate = -127;
			Pan9.MinValue = -127;
			((Control)Pan9).Name = "Pan9";
			((Control)Pan9).Size = new Size(27, 27);
			((Control)Pan9).TabIndex = 172;
			((Control)Pan9).Tag = "9";
			Pan9.TransparentColorRGB = "000001";
			Pan9.USBFunctionBlockId = 185;
			Pan9.Value = 0;
			Pan9.OnRotate += Pan_OnRotate;
			Pan9.OnActivate += Pan_OnActivate;
			Pan9.OnDeactivate += Pan_OnDeActivate;
			Pan8.Angle = 0;
			Pan8.AVCFeatureFunctionBlockId = 6;
			Pan8.BkgImg = Resources.knob_new;
			Pan8.Channel = ControlKnob.E_Channel.eLeft;
			Pan8.KnobImage = Resources.knob_new_indicator;
			((Control)Pan8).Location = new Point(8, 87);
			((Control)Pan8).Margin = new Padding(0);
			Pan8.MaxRotate = 127;
			Pan8.MaxValue = 127;
			Pan8.MinRotate = -127;
			Pan8.MinValue = -127;
			((Control)Pan8).Name = "Pan8";
			((Control)Pan8).Size = new Size(27, 27);
			((Control)Pan8).TabIndex = 173;
			((Control)Pan8).Tag = "8";
			Pan8.TransparentColorRGB = "000001";
			Pan8.USBFunctionBlockId = 185;
			Pan8.Value = 0;
			Pan8.OnRotate += Pan_OnRotate;
			Pan8.OnActivate += Pan_OnActivate;
			Pan8.OnDeactivate += Pan_OnDeActivate;
			pictureBox9.Image = (Image)componentResourceManager.GetObject("pictureBox9.Image");
			((Control)pictureBox9).Location = new Point(53, 120);
			((Control)pictureBox9).Name = "pictureBox9";
			((Control)pictureBox9).Size = new Size(15, 201);
			pictureBox9.TabIndex = 81;
			pictureBox9.TabStop = false;
			pictureBox10.Image = (Image)componentResourceManager.GetObject("pictureBox10.Image");
			((Control)pictureBox10).Location = new Point(4, 120);
			((Control)pictureBox10).Name = "pictureBox10";
			((Control)pictureBox10).Size = new Size(15, 201);
			pictureBox10.TabIndex = 79;
			pictureBox10.TabStop = false;
			((Control)channel__11_12).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel__11_12).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel__11_12).Controls.Add((Control)(object)fader11);
			((Control)channel__11_12).Controls.Add((Control)(object)matrixControl11);
			((Control)channel__11_12).Controls.Add((Control)(object)matrixControl12);
			((Control)channel__11_12).Controls.Add((Control)(object)vuMeter9);
			((Control)channel__11_12).Controls.Add((Control)(object)fader12);
			((Control)channel__11_12).Controls.Add((Control)(object)vuMeter10);
			((Control)channel__11_12).Controls.Add((Control)(object)link10_11);
			((Control)channel__11_12).Controls.Add((Control)(object)muteButton10);
			((Control)channel__11_12).Controls.Add((Control)(object)soloButton11);
			((Control)channel__11_12).Controls.Add((Control)(object)muteButton11);
			((Control)channel__11_12).Controls.Add((Control)(object)soloButton10);
			((Control)channel__11_12).Controls.Add((Control)(object)label3);
			((Control)channel__11_12).Controls.Add((Control)(object)Pan11);
			((Control)channel__11_12).Controls.Add((Control)(object)Pan10);
			((Control)channel__11_12).Controls.Add((Control)(object)pictureBox7);
			((Control)channel__11_12).Controls.Add((Control)(object)pictureBox8);
			((Control)channel__11_12).Location = new Point(362, 0);
			((Control)channel__11_12).Name = "channel__11_12";
			((Control)channel__11_12).Size = new Size(71, 350);
			((Control)channel__11_12).TabIndex = 206;
			((Control)channel__11_12).Tag = "5";
			fader11.AVCFeatureFunctionBlockId = -1;
			((Control)fader11).BackgroundImage = (Image)componentResourceManager.GetObject("fader11.BackgroundImage");
			fader11.Channel = fader.E_Channel.eLeft;
			fader11.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader11.ClickStep = 0.25;
			fader11.CurrentValue = -63.0;
			fader11.FaderLinearDBPos = -6;
			fader11.FaderLinearToRelPixelPos = 60;
			fader11.FaderMaxLeftPosition = 0;
			fader11.FaderMaxRightPosition = 0;
			fader11.FaderMaxTopPosition = 5;
			fader11.FaderMinBottomPosition = 5;
			fader11.FaderMovedByDB = 0.0;
			((Control)fader11).Location = new Point(17, 120);
			((Control)fader11).Margin = new Padding(2);
			fader11.MaxDBValue = 0;
			fader11.MinDBValue = -64;
			((Control)fader11).Name = "fader11";
			fader11.PollingTime = 80;
			((Control)fader11).Size = new Size(13, 205);
			fader11.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader11.SliderBackgroundImage");
			fader11.SliderImage = Resources.faderbutton1;
			fader11.Step = 0.125;
			((Control)fader11).TabIndex = 180;
			((Control)fader11).Tag = "10";
			fader11.USBFunctionBlockId = 186;
			fader11.ValueLinear = false;
			fader11.Vertical = true;
			fader11.OnFaderMove += fader_OnMove;
			fader11.OnActivate += fader_OnActivate;
			fader11.OnDeactivate += fader_OnDeactivate;
			matrixControl11.Direction = ScrollDirection.Left;
			((Control)matrixControl11).Location = new Point(4, 326);
			matrixControl11.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl11.maxCharactersPerLine = 5;
			((Control)matrixControl11).Name = "matrixControl11";
			((Control)matrixControl11).Size = new Size(30, 9);
			((Control)matrixControl11).TabIndex = 181;
			((Control)matrixControl11).TabStop = false;
			((Control)matrixControl11).Tag = "10";
			((Control)matrixControl11).Text = "  -  ";
			matrixControl12.Direction = ScrollDirection.Left;
			((Control)matrixControl12).Location = new Point(37, 326);
			matrixControl12.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl12.maxCharactersPerLine = 5;
			((Control)matrixControl12).Name = "matrixControl12";
			((Control)matrixControl12).Size = new Size(30, 9);
			((Control)matrixControl12).TabIndex = 185;
			((Control)matrixControl12).TabStop = false;
			((Control)matrixControl12).Tag = "11";
			((Control)matrixControl12).Text = "  -  ";
			((Control)vuMeter9).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter9.BackgroundImage");
			vuMeter9.CurrentValue = 1;
			vuMeter9.DecayTime = 50;
			vuMeter9.HasContextMenu = true;
			vuMeter9.HoldPeak = true;
			((Control)vuMeter9).Location = new Point(36, 118);
			((Control)vuMeter9).Margin = new Padding(4);
			((Control)vuMeter9).Name = "vuMeter9";
			vuMeter9.NewValue = 0;
			vuMeter9.PeakHoldFastRelease = true;
			vuMeter9.PeakHoldForever = false;
			vuMeter9.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter9.PeakHoldImage");
			vuMeter9.PeakHoldTime = 2000;
			((Control)vuMeter9).Size = new Size(4, 200);
			((Control)vuMeter9).TabIndex = 184;
			((Control)vuMeter9).Tag = "11";
			vuMeter9.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter9.VUMeterImageOff");
			vuMeter9.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter9.VUMeterImageOn");
			fader12.AVCFeatureFunctionBlockId = -1;
			((Control)fader12).BackgroundImage = (Image)componentResourceManager.GetObject("fader12.BackgroundImage");
			fader12.Channel = fader.E_Channel.eRight;
			fader12.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader12.ClickStep = 0.25;
			fader12.CurrentValue = -63.0;
			fader12.FaderLinearDBPos = -6;
			fader12.FaderLinearToRelPixelPos = 60;
			fader12.FaderMaxLeftPosition = 0;
			fader12.FaderMaxRightPosition = 0;
			fader12.FaderMaxTopPosition = 5;
			fader12.FaderMinBottomPosition = 5;
			fader12.FaderMovedByDB = 0.0;
			((Control)fader12).Location = new Point(41, 120);
			((Control)fader12).Margin = new Padding(2);
			fader12.MaxDBValue = 0;
			fader12.MinDBValue = -64;
			((Control)fader12).Name = "fader12";
			fader12.PollingTime = 80;
			((Control)fader12).Size = new Size(13, 205);
			fader12.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader12.SliderBackgroundImage");
			fader12.SliderImage = Resources.faderbutton1;
			fader12.Step = 0.125;
			((Control)fader12).TabIndex = 182;
			((Control)fader12).Tag = "11";
			fader12.USBFunctionBlockId = 186;
			fader12.ValueLinear = false;
			fader12.Vertical = true;
			fader12.OnFaderMove += fader_OnMove;
			fader12.OnActivate += fader_OnActivate;
			fader12.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter10).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter10.BackgroundImage");
			vuMeter10.CurrentValue = 1;
			vuMeter10.DecayTime = 50;
			vuMeter10.HasContextMenu = true;
			vuMeter10.HoldPeak = true;
			((Control)vuMeter10).Location = new Point(30, 118);
			((Control)vuMeter10).Margin = new Padding(4);
			((Control)vuMeter10).Name = "vuMeter10";
			vuMeter10.NewValue = 0;
			vuMeter10.PeakHoldFastRelease = true;
			vuMeter10.PeakHoldForever = false;
			vuMeter10.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter10.PeakHoldImage");
			vuMeter10.PeakHoldTime = 2000;
			((Control)vuMeter10).Size = new Size(4, 200);
			((Control)vuMeter10).TabIndex = 183;
			((Control)vuMeter10).Tag = "10";
			vuMeter10.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter10.VUMeterImageOff");
			vuMeter10.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter10.VUMeterImageOn");
			link10_11.AVCFeatureFunctionBlockId = 0;
			link10_11.BkgImage = null;
			link10_11.Channel = CPushButton.E_Channel.eMaster;
			link10_11.Disabled = false;
			link10_11.ImageMouseDown = null;
			link10_11.ImageOff = (Bitmap)componentResourceManager.GetObject("link10_11.ImageOff");
			link10_11.ImageOn = (Bitmap)componentResourceManager.GetObject("link10_11.ImageOn");
			((Control)link10_11).Location = new Point(6, 31);
			((Control)link10_11).Margin = new Padding(4);
			((Control)link10_11).Name = "link10_11";
			((Control)link10_11).Size = new Size(60, 19);
			link10_11.State = false;
			((Control)link10_11).TabIndex = 140;
			((Control)link10_11).Tag = "10_11";
			link10_11.USBFunctionBlockId = 186;
			link10_11.OnPush += linkButton_OnPush;
			muteButton10.AVCFeatureFunctionBlockId = 6;
			muteButton10.BkgImage = null;
			muteButton10.Channel = CPushButton.E_Channel.eLeft;
			muteButton10.Disabled = false;
			muteButton10.ImageMouseDown = null;
			muteButton10.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton10.ImageOff");
			muteButton10.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton10.ImageOn");
			((Control)muteButton10).Location = new Point(6, 67);
			((Control)muteButton10).Margin = new Padding(4);
			((Control)muteButton10).Name = "muteButton10";
			((Control)muteButton10).Size = new Size(30, 19);
			muteButton10.State = false;
			((Control)muteButton10).TabIndex = 141;
			((Control)muteButton10).Tag = "10";
			muteButton10.USBFunctionBlockId = 186;
			muteButton10.OnPush += muteButton_OnPush;
			soloButton11.AVCFeatureFunctionBlockId = 0;
			soloButton11.BkgImage = null;
			soloButton11.Channel = CPushButton.E_Channel.eMaster;
			soloButton11.Disabled = false;
			soloButton11.ImageMouseDown = null;
			soloButton11.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton11.ImageOff");
			soloButton11.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton11.ImageOn");
			((Control)soloButton11).Location = new Point(36, 49);
			((Control)soloButton11).Margin = new Padding(4);
			((Control)soloButton11).Name = "soloButton11";
			((Control)soloButton11).Size = new Size(30, 19);
			soloButton11.State = false;
			((Control)soloButton11).TabIndex = 142;
			((Control)soloButton11).Tag = "11";
			soloButton11.USBFunctionBlockId = 186;
			soloButton11.OnPush += soloButton_OnPush;
			muteButton11.AVCFeatureFunctionBlockId = 6;
			muteButton11.BkgImage = null;
			muteButton11.Channel = CPushButton.E_Channel.eRight;
			muteButton11.Disabled = false;
			muteButton11.ImageMouseDown = null;
			muteButton11.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton11.ImageOff");
			muteButton11.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton11.ImageOn");
			((Control)muteButton11).Location = new Point(36, 67);
			((Control)muteButton11).Margin = new Padding(4);
			((Control)muteButton11).Name = "muteButton11";
			((Control)muteButton11).Size = new Size(30, 19);
			muteButton11.State = false;
			((Control)muteButton11).TabIndex = 143;
			((Control)muteButton11).Tag = "11";
			muteButton11.USBFunctionBlockId = 186;
			muteButton11.OnPush += muteButton_OnPush;
			soloButton10.AVCFeatureFunctionBlockId = 0;
			soloButton10.BkgImage = null;
			soloButton10.Channel = CPushButton.E_Channel.eMaster;
			soloButton10.Disabled = false;
			soloButton10.ImageMouseDown = null;
			soloButton10.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton10.ImageOff");
			soloButton10.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton10.ImageOn");
			((Control)soloButton10).Location = new Point(6, 49);
			((Control)soloButton10).Margin = new Padding(4);
			((Control)soloButton10).Name = "soloButton10";
			((Control)soloButton10).Size = new Size(30, 19);
			soloButton10.State = false;
			((Control)soloButton10).TabIndex = 144;
			((Control)soloButton10).Tag = "10";
			soloButton10.USBFunctionBlockId = 186;
			soloButton10.OnPush += soloButton_OnPush;
			((Control)label3).BackColor = Color.Transparent;
			((Control)label3).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label3).ForeColor = Color.Transparent;
			((Control)label3).Location = new Point(6, 7);
			((Control)label3).Name = "label3";
			((Control)label3).Size = new Size(64, 15);
			((Control)label3).TabIndex = 125;
			((Control)label3).Text = "11 Line 12";
			label3.TextAlign = (ContentAlignment)32;
			Pan11.Angle = 0;
			Pan11.AVCFeatureFunctionBlockId = 6;
			Pan11.BkgImg = Resources.knob_new;
			Pan11.Channel = ControlKnob.E_Channel.eRight;
			Pan11.KnobImage = Resources.knob_new_indicator;
			((Control)Pan11).Location = new Point(39, 87);
			((Control)Pan11).Margin = new Padding(0);
			Pan11.MaxRotate = 127;
			Pan11.MaxValue = 127;
			Pan11.MinRotate = -127;
			Pan11.MinValue = -127;
			((Control)Pan11).Name = "Pan11";
			((Control)Pan11).Size = new Size(27, 27);
			((Control)Pan11).TabIndex = 172;
			((Control)Pan11).Tag = "11";
			Pan11.TransparentColorRGB = "000001";
			Pan11.USBFunctionBlockId = 186;
			Pan11.Value = 0;
			Pan11.OnRotate += Pan_OnRotate;
			Pan11.OnActivate += Pan_OnActivate;
			Pan11.OnDeactivate += Pan_OnDeActivate;
			Pan10.Angle = 0;
			Pan10.AVCFeatureFunctionBlockId = 6;
			Pan10.BkgImg = Resources.knob_new;
			Pan10.Channel = ControlKnob.E_Channel.eLeft;
			Pan10.KnobImage = Resources.knob_new_indicator;
			((Control)Pan10).Location = new Point(8, 87);
			((Control)Pan10).Margin = new Padding(0);
			Pan10.MaxRotate = 127;
			Pan10.MaxValue = 127;
			Pan10.MinRotate = -127;
			Pan10.MinValue = -127;
			((Control)Pan10).Name = "Pan10";
			((Control)Pan10).Size = new Size(27, 27);
			((Control)Pan10).TabIndex = 173;
			((Control)Pan10).Tag = "10";
			Pan10.TransparentColorRGB = "000001";
			Pan10.USBFunctionBlockId = 186;
			Pan10.Value = 0;
			Pan10.OnRotate += Pan_OnRotate;
			Pan10.OnActivate += Pan_OnActivate;
			Pan10.OnDeactivate += Pan_OnDeActivate;
			pictureBox7.Image = (Image)componentResourceManager.GetObject("pictureBox7.Image");
			((Control)pictureBox7).Location = new Point(53, 120);
			((Control)pictureBox7).Name = "pictureBox7";
			((Control)pictureBox7).Size = new Size(15, 201);
			pictureBox7.TabIndex = 81;
			pictureBox7.TabStop = false;
			pictureBox8.Image = (Image)componentResourceManager.GetObject("pictureBox8.Image");
			((Control)pictureBox8).Location = new Point(4, 120);
			((Control)pictureBox8).Name = "pictureBox8";
			((Control)pictureBox8).Size = new Size(15, 201);
			pictureBox8.TabIndex = 79;
			pictureBox8.TabStop = false;
			((Control)channel_3_4).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_3_4).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_3_4).Controls.Add((Control)(object)fader3);
			((Control)channel_3_4).Controls.Add((Control)(object)matrixControl3);
			((Control)channel_3_4).Controls.Add((Control)(object)matrixControl4);
			((Control)channel_3_4).Controls.Add((Control)(object)vuMeter1);
			((Control)channel_3_4).Controls.Add((Control)(object)fader4);
			((Control)channel_3_4).Controls.Add((Control)(object)vuMeter2);
			((Control)channel_3_4).Controls.Add((Control)(object)link2_3);
			((Control)channel_3_4).Controls.Add((Control)(object)muteButton2);
			((Control)channel_3_4).Controls.Add((Control)(object)soloButton3);
			((Control)channel_3_4).Controls.Add((Control)(object)muteButton3);
			((Control)channel_3_4).Controls.Add((Control)(object)soloButton2);
			((Control)channel_3_4).Controls.Add((Control)(object)label2);
			((Control)channel_3_4).Controls.Add((Control)(object)Pan3);
			((Control)channel_3_4).Controls.Add((Control)(object)Pan2);
			((Control)channel_3_4).Controls.Add((Control)(object)pictureBox5);
			((Control)channel_3_4).Controls.Add((Control)(object)pictureBox6);
			((Control)channel_3_4).Location = new Point(74, 0);
			((Control)channel_3_4).Name = "channel_3_4";
			((Control)channel_3_4).Size = new Size(71, 350);
			((Control)channel_3_4).TabIndex = 205;
			((Control)channel_3_4).Tag = "1";
			fader3.AVCFeatureFunctionBlockId = -1;
			((Control)fader3).BackgroundImage = (Image)componentResourceManager.GetObject("fader3.BackgroundImage");
			fader3.Channel = fader.E_Channel.eLeft;
			fader3.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader3.ClickStep = 0.25;
			fader3.CurrentValue = -63.0;
			fader3.FaderLinearDBPos = -6;
			fader3.FaderLinearToRelPixelPos = 60;
			fader3.FaderMaxLeftPosition = 0;
			fader3.FaderMaxRightPosition = 0;
			fader3.FaderMaxTopPosition = 5;
			fader3.FaderMinBottomPosition = 5;
			fader3.FaderMovedByDB = 0.0;
			((Control)fader3).Location = new Point(17, 120);
			((Control)fader3).Margin = new Padding(2);
			fader3.MaxDBValue = 0;
			fader3.MinDBValue = -64;
			((Control)fader3).Name = "fader3";
			fader3.PollingTime = 80;
			((Control)fader3).Size = new Size(13, 205);
			fader3.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader3.SliderBackgroundImage");
			fader3.SliderImage = Resources.faderbutton1;
			fader3.Step = 0.125;
			((Control)fader3).TabIndex = 180;
			((Control)fader3).Tag = "2";
			fader3.USBFunctionBlockId = 182;
			fader3.ValueLinear = false;
			fader3.Vertical = true;
			fader3.OnFaderMove += fader_OnMove;
			fader3.OnActivate += fader_OnActivate;
			fader3.OnDeactivate += fader_OnDeactivate;
			matrixControl3.Direction = ScrollDirection.Left;
			((Control)matrixControl3).Location = new Point(4, 326);
			matrixControl3.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl3.maxCharactersPerLine = 5;
			((Control)matrixControl3).Name = "matrixControl3";
			((Control)matrixControl3).Size = new Size(30, 9);
			((Control)matrixControl3).TabIndex = 181;
			((Control)matrixControl3).TabStop = false;
			((Control)matrixControl3).Tag = "2";
			((Control)matrixControl3).Text = "  -  ";
			matrixControl4.Direction = ScrollDirection.Left;
			((Control)matrixControl4).Location = new Point(37, 326);
			matrixControl4.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl4.maxCharactersPerLine = 5;
			((Control)matrixControl4).Name = "matrixControl4";
			((Control)matrixControl4).Size = new Size(30, 9);
			((Control)matrixControl4).TabIndex = 185;
			((Control)matrixControl4).TabStop = false;
			((Control)matrixControl4).Tag = "3";
			((Control)matrixControl4).Text = "  -  ";
			((Control)vuMeter1).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter1.BackgroundImage");
			vuMeter1.CurrentValue = 1;
			vuMeter1.DecayTime = 50;
			vuMeter1.HasContextMenu = true;
			vuMeter1.HoldPeak = true;
			((Control)vuMeter1).Location = new Point(36, 118);
			((Control)vuMeter1).Margin = new Padding(4);
			((Control)vuMeter1).Name = "vuMeter1";
			vuMeter1.NewValue = 0;
			vuMeter1.PeakHoldFastRelease = true;
			vuMeter1.PeakHoldForever = false;
			vuMeter1.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter1.PeakHoldImage");
			vuMeter1.PeakHoldTime = 2000;
			((Control)vuMeter1).Size = new Size(4, 200);
			((Control)vuMeter1).TabIndex = 184;
			((Control)vuMeter1).Tag = "3";
			vuMeter1.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter1.VUMeterImageOff");
			vuMeter1.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter1.VUMeterImageOn");
			fader4.AVCFeatureFunctionBlockId = -1;
			((Control)fader4).BackgroundImage = (Image)componentResourceManager.GetObject("fader4.BackgroundImage");
			fader4.Channel = fader.E_Channel.eRight;
			fader4.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader4.ClickStep = 0.25;
			fader4.CurrentValue = -63.0;
			fader4.FaderLinearDBPos = -6;
			fader4.FaderLinearToRelPixelPos = 60;
			fader4.FaderMaxLeftPosition = 0;
			fader4.FaderMaxRightPosition = 0;
			fader4.FaderMaxTopPosition = 5;
			fader4.FaderMinBottomPosition = 5;
			fader4.FaderMovedByDB = 0.0;
			((Control)fader4).Location = new Point(41, 120);
			((Control)fader4).Margin = new Padding(2);
			fader4.MaxDBValue = 0;
			fader4.MinDBValue = -64;
			((Control)fader4).Name = "fader4";
			fader4.PollingTime = 80;
			((Control)fader4).Size = new Size(13, 205);
			fader4.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader4.SliderBackgroundImage");
			fader4.SliderImage = Resources.faderbutton1;
			fader4.Step = 0.125;
			((Control)fader4).TabIndex = 182;
			((Control)fader4).Tag = "3";
			fader4.USBFunctionBlockId = 182;
			fader4.ValueLinear = false;
			fader4.Vertical = true;
			fader4.OnFaderMove += fader_OnMove;
			fader4.OnActivate += fader_OnActivate;
			fader4.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter2).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter2.BackgroundImage");
			vuMeter2.CurrentValue = 1;
			vuMeter2.DecayTime = 50;
			vuMeter2.HasContextMenu = true;
			vuMeter2.HoldPeak = true;
			((Control)vuMeter2).Location = new Point(30, 118);
			((Control)vuMeter2).Margin = new Padding(4);
			((Control)vuMeter2).Name = "vuMeter2";
			vuMeter2.NewValue = 0;
			vuMeter2.PeakHoldFastRelease = true;
			vuMeter2.PeakHoldForever = false;
			vuMeter2.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter2.PeakHoldImage");
			vuMeter2.PeakHoldTime = 2000;
			((Control)vuMeter2).Size = new Size(4, 200);
			((Control)vuMeter2).TabIndex = 183;
			((Control)vuMeter2).Tag = "2";
			vuMeter2.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter2.VUMeterImageOff");
			vuMeter2.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter2.VUMeterImageOn");
			link2_3.AVCFeatureFunctionBlockId = 0;
			link2_3.BkgImage = null;
			link2_3.Channel = CPushButton.E_Channel.eMaster;
			link2_3.Disabled = false;
			link2_3.ImageMouseDown = null;
			link2_3.ImageOff = (Bitmap)componentResourceManager.GetObject("link2_3.ImageOff");
			link2_3.ImageOn = (Bitmap)componentResourceManager.GetObject("link2_3.ImageOn");
			((Control)link2_3).Location = new Point(6, 31);
			((Control)link2_3).Margin = new Padding(4);
			((Control)link2_3).Name = "link2_3";
			((Control)link2_3).Size = new Size(60, 19);
			link2_3.State = false;
			((Control)link2_3).TabIndex = 140;
			((Control)link2_3).Tag = "2_3";
			link2_3.USBFunctionBlockId = 0;
			link2_3.OnPush += linkButton_OnPush;
			muteButton2.AVCFeatureFunctionBlockId = 6;
			muteButton2.BkgImage = null;
			muteButton2.Channel = CPushButton.E_Channel.eLeft;
			muteButton2.Disabled = false;
			muteButton2.ImageMouseDown = null;
			muteButton2.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton2.ImageOff");
			muteButton2.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton2.ImageOn");
			((Control)muteButton2).Location = new Point(6, 67);
			((Control)muteButton2).Margin = new Padding(4);
			((Control)muteButton2).Name = "muteButton2";
			((Control)muteButton2).Size = new Size(30, 19);
			muteButton2.State = false;
			((Control)muteButton2).TabIndex = 141;
			((Control)muteButton2).Tag = "2";
			muteButton2.USBFunctionBlockId = 182;
			muteButton2.OnPush += muteButton_OnPush;
			soloButton3.AVCFeatureFunctionBlockId = 0;
			soloButton3.BkgImage = null;
			soloButton3.Channel = CPushButton.E_Channel.eMaster;
			soloButton3.Disabled = false;
			soloButton3.ImageMouseDown = null;
			soloButton3.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton3.ImageOff");
			soloButton3.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton3.ImageOn");
			((Control)soloButton3).Location = new Point(36, 49);
			((Control)soloButton3).Margin = new Padding(4);
			((Control)soloButton3).Name = "soloButton3";
			((Control)soloButton3).Size = new Size(30, 19);
			soloButton3.State = false;
			((Control)soloButton3).TabIndex = 142;
			((Control)soloButton3).Tag = "3";
			soloButton3.USBFunctionBlockId = 182;
			soloButton3.OnPush += soloButton_OnPush;
			muteButton3.AVCFeatureFunctionBlockId = 6;
			muteButton3.BkgImage = null;
			muteButton3.Channel = CPushButton.E_Channel.eRight;
			muteButton3.Disabled = false;
			muteButton3.ImageMouseDown = null;
			muteButton3.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton3.ImageOff");
			muteButton3.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton3.ImageOn");
			((Control)muteButton3).Location = new Point(36, 67);
			((Control)muteButton3).Margin = new Padding(4);
			((Control)muteButton3).Name = "muteButton3";
			((Control)muteButton3).Size = new Size(30, 19);
			muteButton3.State = false;
			((Control)muteButton3).TabIndex = 143;
			((Control)muteButton3).Tag = "3";
			muteButton3.USBFunctionBlockId = 182;
			muteButton3.OnPush += muteButton_OnPush;
			soloButton2.AVCFeatureFunctionBlockId = 0;
			soloButton2.BkgImage = null;
			soloButton2.Channel = CPushButton.E_Channel.eMaster;
			soloButton2.Disabled = false;
			soloButton2.ImageMouseDown = null;
			soloButton2.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton2.ImageOff");
			soloButton2.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton2.ImageOn");
			((Control)soloButton2).Location = new Point(6, 49);
			((Control)soloButton2).Margin = new Padding(4);
			((Control)soloButton2).Name = "soloButton2";
			((Control)soloButton2).Size = new Size(30, 19);
			soloButton2.State = false;
			((Control)soloButton2).TabIndex = 144;
			((Control)soloButton2).Tag = "2";
			soloButton2.USBFunctionBlockId = 182;
			soloButton2.OnPush += soloButton_OnPush;
			((Control)label2).BackColor = Color.Transparent;
			((Control)label2).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label2).ForeColor = Color.Transparent;
			((Control)label2).Location = new Point(6, 7);
			((Control)label2).Name = "label2";
			((Control)label2).Size = new Size(57, 15);
			((Control)label2).TabIndex = 125;
			((Control)label2).Text = "3  Line  4";
			label2.TextAlign = (ContentAlignment)32;
			Pan3.Angle = 0;
			Pan3.AVCFeatureFunctionBlockId = 6;
			Pan3.BkgImg = Resources.knob_new;
			Pan3.Channel = ControlKnob.E_Channel.eRight;
			Pan3.KnobImage = Resources.knob_new_indicator;
			((Control)Pan3).Location = new Point(39, 87);
			((Control)Pan3).Margin = new Padding(0);
			Pan3.MaxRotate = 127;
			Pan3.MaxValue = 127;
			Pan3.MinRotate = -127;
			Pan3.MinValue = -127;
			((Control)Pan3).Name = "Pan3";
			((Control)Pan3).Size = new Size(27, 27);
			((Control)Pan3).TabIndex = 172;
			((Control)Pan3).Tag = "3";
			Pan3.TransparentColorRGB = "000001";
			Pan3.USBFunctionBlockId = 182;
			Pan3.Value = 0;
			Pan3.OnRotate += Pan_OnRotate;
			Pan3.OnActivate += Pan_OnActivate;
			Pan3.OnDeactivate += Pan_OnDeActivate;
			Pan2.Angle = 0;
			Pan2.AVCFeatureFunctionBlockId = 6;
			Pan2.BkgImg = Resources.knob_new;
			Pan2.Channel = ControlKnob.E_Channel.eLeft;
			Pan2.KnobImage = Resources.knob_new_indicator;
			((Control)Pan2).Location = new Point(8, 87);
			((Control)Pan2).Margin = new Padding(0);
			Pan2.MaxRotate = 127;
			Pan2.MaxValue = 127;
			Pan2.MinRotate = -127;
			Pan2.MinValue = -127;
			((Control)Pan2).Name = "Pan2";
			((Control)Pan2).Size = new Size(27, 27);
			((Control)Pan2).TabIndex = 173;
			((Control)Pan2).Tag = "2";
			Pan2.TransparentColorRGB = "000001";
			Pan2.USBFunctionBlockId = 182;
			Pan2.Value = 0;
			Pan2.OnRotate += Pan_OnRotate;
			Pan2.OnActivate += Pan_OnActivate;
			Pan2.OnDeactivate += Pan_OnDeActivate;
			pictureBox5.Image = (Image)componentResourceManager.GetObject("pictureBox5.Image");
			((Control)pictureBox5).Location = new Point(53, 120);
			((Control)pictureBox5).Name = "pictureBox5";
			((Control)pictureBox5).Size = new Size(15, 201);
			pictureBox5.TabIndex = 81;
			pictureBox5.TabStop = false;
			pictureBox6.Image = (Image)componentResourceManager.GetObject("pictureBox6.Image");
			((Control)pictureBox6).Location = new Point(4, 120);
			((Control)pictureBox6).Name = "pictureBox6";
			((Control)pictureBox6).Size = new Size(15, 201);
			pictureBox6.TabIndex = 79;
			pictureBox6.TabStop = false;
			((Control)channel_5_6).BackgroundImage = (Image)(object)Resources.channel_strip_bkg_71x350;
			((Control)channel_5_6).BackgroundImageLayout = (ImageLayout)0;
			((Control)channel_5_6).Controls.Add((Control)(object)fader5);
			((Control)channel_5_6).Controls.Add((Control)(object)matrixControl5);
			((Control)channel_5_6).Controls.Add((Control)(object)matrixControl6);
			((Control)channel_5_6).Controls.Add((Control)(object)vuMeter3);
			((Control)channel_5_6).Controls.Add((Control)(object)fader6);
			((Control)channel_5_6).Controls.Add((Control)(object)vuMeter4);
			((Control)channel_5_6).Controls.Add((Control)(object)link4_5);
			((Control)channel_5_6).Controls.Add((Control)(object)muteButton4);
			((Control)channel_5_6).Controls.Add((Control)(object)soloButton5);
			((Control)channel_5_6).Controls.Add((Control)(object)muteButton5);
			((Control)channel_5_6).Controls.Add((Control)(object)soloButton4);
			((Control)channel_5_6).Controls.Add((Control)(object)label1);
			((Control)channel_5_6).Controls.Add((Control)(object)Pan5);
			((Control)channel_5_6).Controls.Add((Control)(object)Pan4);
			((Control)channel_5_6).Controls.Add((Control)(object)pictureBox3);
			((Control)channel_5_6).Controls.Add((Control)(object)pictureBox4);
			((Control)channel_5_6).Location = new Point(146, 0);
			((Control)channel_5_6).Name = "channel_5_6";
			((Control)channel_5_6).Size = new Size(71, 350);
			((Control)channel_5_6).TabIndex = 204;
			((Control)channel_5_6).Tag = "2";
			fader5.AVCFeatureFunctionBlockId = -1;
			((Control)fader5).BackgroundImage = (Image)componentResourceManager.GetObject("fader5.BackgroundImage");
			fader5.Channel = fader.E_Channel.eLeft;
			fader5.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader5.ClickStep = 0.25;
			fader5.CurrentValue = -63.0;
			fader5.FaderLinearDBPos = -6;
			fader5.FaderLinearToRelPixelPos = 60;
			fader5.FaderMaxLeftPosition = 0;
			fader5.FaderMaxRightPosition = 0;
			fader5.FaderMaxTopPosition = 5;
			fader5.FaderMinBottomPosition = 5;
			fader5.FaderMovedByDB = 0.0;
			((Control)fader5).Location = new Point(17, 120);
			((Control)fader5).Margin = new Padding(2);
			fader5.MaxDBValue = 0;
			fader5.MinDBValue = -64;
			((Control)fader5).Name = "fader5";
			fader5.PollingTime = 80;
			((Control)fader5).Size = new Size(13, 205);
			fader5.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader5.SliderBackgroundImage");
			fader5.SliderImage = Resources.faderbutton1;
			fader5.Step = 0.125;
			((Control)fader5).TabIndex = 180;
			((Control)fader5).Tag = "4";
			fader5.USBFunctionBlockId = 183;
			fader5.ValueLinear = false;
			fader5.Vertical = true;
			fader5.OnFaderMove += fader_OnMove;
			fader5.OnActivate += fader_OnActivate;
			fader5.OnDeactivate += fader_OnDeactivate;
			matrixControl5.Direction = ScrollDirection.Left;
			((Control)matrixControl5).Location = new Point(4, 326);
			matrixControl5.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl5.maxCharactersPerLine = 5;
			((Control)matrixControl5).Name = "matrixControl5";
			((Control)matrixControl5).Size = new Size(30, 9);
			((Control)matrixControl5).TabIndex = 181;
			((Control)matrixControl5).TabStop = false;
			((Control)matrixControl5).Tag = "4";
			((Control)matrixControl5).Text = "  -  ";
			matrixControl6.Direction = ScrollDirection.Left;
			((Control)matrixControl6).Location = new Point(37, 326);
			matrixControl6.Matrixsize = MatrixControl.MatrixSize.Tiny;
			matrixControl6.maxCharactersPerLine = 5;
			((Control)matrixControl6).Name = "matrixControl6";
			((Control)matrixControl6).Size = new Size(30, 9);
			((Control)matrixControl6).TabIndex = 185;
			((Control)matrixControl6).TabStop = false;
			((Control)matrixControl6).Tag = "5";
			((Control)matrixControl6).Text = "  -  ";
			((Control)vuMeter3).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter3.BackgroundImage");
			vuMeter3.CurrentValue = 1;
			vuMeter3.DecayTime = 50;
			vuMeter3.HasContextMenu = true;
			vuMeter3.HoldPeak = true;
			((Control)vuMeter3).Location = new Point(36, 118);
			((Control)vuMeter3).Margin = new Padding(4);
			((Control)vuMeter3).Name = "vuMeter3";
			vuMeter3.NewValue = 0;
			vuMeter3.PeakHoldFastRelease = true;
			vuMeter3.PeakHoldForever = false;
			vuMeter3.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter3.PeakHoldImage");
			vuMeter3.PeakHoldTime = 2000;
			((Control)vuMeter3).Size = new Size(4, 200);
			((Control)vuMeter3).TabIndex = 184;
			((Control)vuMeter3).Tag = "5";
			vuMeter3.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter3.VUMeterImageOff");
			vuMeter3.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter3.VUMeterImageOn");
			fader6.AVCFeatureFunctionBlockId = -1;
			((Control)fader6).BackgroundImage = (Image)componentResourceManager.GetObject("fader6.BackgroundImage");
			fader6.Channel = fader.E_Channel.eRight;
			fader6.ChannelIOMode = fader.E_ChannelIOType.Standard;
			fader6.ClickStep = 0.25;
			fader6.CurrentValue = -63.0;
			fader6.FaderLinearDBPos = -6;
			fader6.FaderLinearToRelPixelPos = 60;
			fader6.FaderMaxLeftPosition = 0;
			fader6.FaderMaxRightPosition = 0;
			fader6.FaderMaxTopPosition = 5;
			fader6.FaderMinBottomPosition = 5;
			fader6.FaderMovedByDB = 0.0;
			((Control)fader6).Location = new Point(41, 120);
			((Control)fader6).Margin = new Padding(2);
			fader6.MaxDBValue = 0;
			fader6.MinDBValue = -64;
			((Control)fader6).Name = "fader6";
			fader6.PollingTime = 80;
			((Control)fader6).Size = new Size(13, 205);
			fader6.SliderBackgroundImage = (Bitmap)componentResourceManager.GetObject("fader6.SliderBackgroundImage");
			fader6.SliderImage = Resources.faderbutton1;
			fader6.Step = 0.125;
			((Control)fader6).TabIndex = 182;
			((Control)fader6).Tag = "5";
			fader6.USBFunctionBlockId = 183;
			fader6.ValueLinear = false;
			fader6.Vertical = true;
			fader6.OnFaderMove += fader_OnMove;
			fader6.OnActivate += fader_OnActivate;
			fader6.OnDeactivate += fader_OnDeactivate;
			((Control)vuMeter4).BackgroundImage = (Image)componentResourceManager.GetObject("vuMeter4.BackgroundImage");
			vuMeter4.CurrentValue = 1;
			vuMeter4.DecayTime = 50;
			vuMeter4.HasContextMenu = true;
			vuMeter4.HoldPeak = true;
			((Control)vuMeter4).Location = new Point(30, 118);
			((Control)vuMeter4).Margin = new Padding(4);
			((Control)vuMeter4).Name = "vuMeter4";
			vuMeter4.NewValue = 0;
			vuMeter4.PeakHoldFastRelease = true;
			vuMeter4.PeakHoldForever = false;
			vuMeter4.PeakHoldImage = (Bitmap)componentResourceManager.GetObject("vuMeter4.PeakHoldImage");
			vuMeter4.PeakHoldTime = 2000;
			((Control)vuMeter4).Size = new Size(4, 200);
			((Control)vuMeter4).TabIndex = 183;
			((Control)vuMeter4).Tag = "4";
			vuMeter4.VUMeterImageOff = (Bitmap)componentResourceManager.GetObject("vuMeter4.VUMeterImageOff");
			vuMeter4.VUMeterImageOn = (Bitmap)componentResourceManager.GetObject("vuMeter4.VUMeterImageOn");
			link4_5.AVCFeatureFunctionBlockId = 0;
			link4_5.BkgImage = null;
			link4_5.Channel = CPushButton.E_Channel.eMaster;
			link4_5.Disabled = false;
			link4_5.ImageMouseDown = null;
			link4_5.ImageOff = (Bitmap)componentResourceManager.GetObject("link4_5.ImageOff");
			link4_5.ImageOn = (Bitmap)componentResourceManager.GetObject("link4_5.ImageOn");
			((Control)link4_5).Location = new Point(6, 31);
			((Control)link4_5).Margin = new Padding(4);
			((Control)link4_5).Name = "link4_5";
			((Control)link4_5).Size = new Size(60, 19);
			link4_5.State = false;
			((Control)link4_5).TabIndex = 140;
			((Control)link4_5).Tag = "4_5";
			link4_5.USBFunctionBlockId = 0;
			link4_5.OnPush += linkButton_OnPush;
			muteButton4.AVCFeatureFunctionBlockId = 6;
			muteButton4.BkgImage = null;
			muteButton4.Channel = CPushButton.E_Channel.eLeft;
			muteButton4.Disabled = false;
			muteButton4.ImageMouseDown = null;
			muteButton4.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton4.ImageOff");
			muteButton4.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton4.ImageOn");
			((Control)muteButton4).Location = new Point(6, 67);
			((Control)muteButton4).Margin = new Padding(4);
			((Control)muteButton4).Name = "muteButton4";
			((Control)muteButton4).Size = new Size(30, 19);
			muteButton4.State = false;
			((Control)muteButton4).TabIndex = 141;
			((Control)muteButton4).Tag = "4";
			muteButton4.USBFunctionBlockId = 183;
			muteButton4.OnPush += muteButton_OnPush;
			soloButton5.AVCFeatureFunctionBlockId = 0;
			soloButton5.BkgImage = null;
			soloButton5.Channel = CPushButton.E_Channel.eMaster;
			soloButton5.Disabled = false;
			soloButton5.ImageMouseDown = null;
			soloButton5.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton5.ImageOff");
			soloButton5.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton5.ImageOn");
			((Control)soloButton5).Location = new Point(36, 49);
			((Control)soloButton5).Margin = new Padding(4);
			((Control)soloButton5).Name = "soloButton5";
			((Control)soloButton5).Size = new Size(30, 19);
			soloButton5.State = false;
			((Control)soloButton5).TabIndex = 142;
			((Control)soloButton5).Tag = "5";
			soloButton5.USBFunctionBlockId = 183;
			soloButton5.OnPush += soloButton_OnPush;
			muteButton5.AVCFeatureFunctionBlockId = 6;
			muteButton5.BkgImage = null;
			muteButton5.Channel = CPushButton.E_Channel.eRight;
			muteButton5.Disabled = false;
			muteButton5.ImageMouseDown = null;
			muteButton5.ImageOff = (Bitmap)componentResourceManager.GetObject("muteButton5.ImageOff");
			muteButton5.ImageOn = (Bitmap)componentResourceManager.GetObject("muteButton5.ImageOn");
			((Control)muteButton5).Location = new Point(36, 67);
			((Control)muteButton5).Margin = new Padding(4);
			((Control)muteButton5).Name = "muteButton5";
			((Control)muteButton5).Size = new Size(30, 19);
			muteButton5.State = false;
			((Control)muteButton5).TabIndex = 143;
			((Control)muteButton5).Tag = "5";
			muteButton5.USBFunctionBlockId = 183;
			muteButton5.OnPush += muteButton_OnPush;
			soloButton4.AVCFeatureFunctionBlockId = 0;
			soloButton4.BkgImage = null;
			soloButton4.Channel = CPushButton.E_Channel.eMaster;
			soloButton4.Disabled = false;
			soloButton4.ImageMouseDown = null;
			soloButton4.ImageOff = (Bitmap)componentResourceManager.GetObject("soloButton4.ImageOff");
			soloButton4.ImageOn = (Bitmap)componentResourceManager.GetObject("soloButton4.ImageOn");
			((Control)soloButton4).Location = new Point(6, 49);
			((Control)soloButton4).Margin = new Padding(4);
			((Control)soloButton4).Name = "soloButton4";
			((Control)soloButton4).Size = new Size(30, 19);
			soloButton4.State = false;
			((Control)soloButton4).TabIndex = 144;
			((Control)soloButton4).Tag = "4";
			soloButton4.USBFunctionBlockId = 183;
			soloButton4.OnPush += soloButton_OnPush;
			((Control)label1).BackColor = Color.Transparent;
			((Control)label1).Font = new Font("Arial", 6.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label1).ForeColor = Color.Transparent;
			((Control)label1).Location = new Point(6, 7);
			((Control)label1).Name = "label1";
			((Control)label1).Size = new Size(57, 15);
			((Control)label1).TabIndex = 125;
			((Control)label1).Text = "5  Line  6";
			label1.TextAlign = (ContentAlignment)32;
			Pan5.Angle = 0;
			Pan5.AVCFeatureFunctionBlockId = 6;
			Pan5.BkgImg = Resources.knob_new;
			Pan5.Channel = ControlKnob.E_Channel.eRight;
			Pan5.KnobImage = Resources.knob_new_indicator;
			((Control)Pan5).Location = new Point(39, 87);
			((Control)Pan5).Margin = new Padding(0);
			Pan5.MaxRotate = 127;
			Pan5.MaxValue = 127;
			Pan5.MinRotate = -127;
			Pan5.MinValue = -127;
			((Control)Pan5).Name = "Pan5";
			((Control)Pan5).Size = new Size(27, 27);
			((Control)Pan5).TabIndex = 172;
			((Control)Pan5).Tag = "5";
			Pan5.TransparentColorRGB = "000001";
			Pan5.USBFunctionBlockId = 183;
			Pan5.Value = 0;
			Pan5.OnRotate += Pan_OnRotate;
			Pan5.OnActivate += Pan_OnActivate;
			Pan5.OnDeactivate += Pan_OnDeActivate;
			Pan4.Angle = 0;
			Pan4.AVCFeatureFunctionBlockId = 6;
			Pan4.BkgImg = Resources.knob_new;
			Pan4.Channel = ControlKnob.E_Channel.eLeft;
			Pan4.KnobImage = Resources.knob_new_indicator;
			((Control)Pan4).Location = new Point(8, 87);
			((Control)Pan4).Margin = new Padding(0);
			Pan4.MaxRotate = 127;
			Pan4.MaxValue = 127;
			Pan4.MinRotate = -127;
			Pan4.MinValue = -127;
			((Control)Pan4).Name = "Pan4";
			((Control)Pan4).Size = new Size(27, 27);
			((Control)Pan4).TabIndex = 173;
			((Control)Pan4).Tag = "4";
			Pan4.TransparentColorRGB = "000001";
			Pan4.USBFunctionBlockId = 183;
			Pan4.Value = 0;
			Pan4.OnRotate += Pan_OnRotate;
			Pan4.OnActivate += Pan_OnActivate;
			Pan4.OnDeactivate += Pan_OnDeActivate;
			pictureBox3.Image = (Image)componentResourceManager.GetObject("pictureBox3.Image");
			((Control)pictureBox3).Location = new Point(53, 120);
			((Control)pictureBox3).Name = "pictureBox3";
			((Control)pictureBox3).Size = new Size(15, 201);
			pictureBox3.TabIndex = 81;
			pictureBox3.TabStop = false;
			pictureBox4.Image = (Image)componentResourceManager.GetObject("pictureBox4.Image");
			((Control)pictureBox4).Location = new Point(4, 120);
			((Control)pictureBox4).Name = "pictureBox4";
			((Control)pictureBox4).Size = new Size(15, 201);
			pictureBox4.TabIndex = 79;
			pictureBox4.TabStop = false;
			((Control)pTopPanel).Anchor = (AnchorStyles)13;
			((Control)pTopPanel).Controls.Add((Control)(object)USBModeLight);
			((Control)pTopPanel).Controls.Add((Control)(object)label30);
			((Control)pTopPanel).Controls.Add((Control)(object)pInfoDisplay);
			((Control)pTopPanel).Controls.Add((Control)(object)btnSettings);
			((Control)pTopPanel).Location = new Point(0, 0);
			((Control)pTopPanel).Name = "pTopPanel";
			((Control)pTopPanel).Size = new Size(994, 43);
			((Control)pTopPanel).TabIndex = 204;
			USBModeLight.AVCFeatureFunctionBlockId = 0;
			((Control)USBModeLight).BackgroundImage = (Image)(object)Resources.PanelBackground;
			USBModeLight.BkgImage = Resources.PanelBackground;
			USBModeLight.Channel = CPushButton.E_Channel.eMaster;
			USBModeLight.Disabled = true;
			USBModeLight.ImageMouseDown = null;
			USBModeLight.ImageOff = Resources.USBButton_off1;
			USBModeLight.ImageOn = Resources.USBButton_on1;
			((Control)USBModeLight).Location = new Point(6, 3);
			((Control)USBModeLight).Margin = new Padding(4);
			((Control)USBModeLight).Name = "USBModeLight";
			((Control)USBModeLight).Size = new Size(30, 30);
			USBModeLight.State = false;
			((Control)USBModeLight).TabIndex = 191;
			USBModeLight.USBFunctionBlockId = 0;
			((Control)settingsTab).Controls.Add((Control)(object)tabPage4);
			((Control)settingsTab).Controls.Add((Control)(object)tabPage5);
			((Control)settingsTab).Controls.Add((Control)(object)tabPage6);
			((Control)settingsTab).Controls.Add((Control)(object)tabPage7);
			((Control)settingsTab).Controls.Add((Control)(object)tabPage8);
			((Control)settingsTab).Location = new Point(8, 411);
			settingsTab.myBackColor = Color.FromArgb(57, 57, 57);
			((Control)settingsTab).Name = "settingsTab";
			((TabControl)settingsTab).SelectedIndex = 0;
			((Control)settingsTab).Size = new Size(661, 352);
			((Control)settingsTab).TabIndex = 192;
			((TabControl)settingsTab).SelectedIndexChanged += settingsTab_SelectedIndexChanged;
			((Control)tabPage4).BackColor = Color.FromArgb(57, 57, 57);
			((Control)tabPage4).Controls.Add((Control)(object)label43);
			((Control)tabPage4).Controls.Add((Control)(object)btn_setSyncSource);
			((Control)tabPage4).Controls.Add((Control)(object)label31);
			((Control)tabPage4).Controls.Add((Control)(object)btnSetSampleRate);
			((Control)tabPage4).Controls.Add((Control)(object)label21);
			((Control)tabPage4).Controls.Add((Control)(object)btnSetDeviceNickname);
			((Control)tabPage4).Controls.Add((Control)(object)label32);
			((Control)tabPage4).Controls.Add((Control)(object)txtDeviceNickname);
			((Control)tabPage4).Controls.Add((Control)(object)cbSyncSource);
			((Control)tabPage4).Controls.Add((Control)(object)cbSamplerate);
			((Control)tabPage4).ForeColor = SystemColors.Control;
			tabPage4.Location = new Point(4, 25);
			((Control)tabPage4).Name = "tabPage4";
			((Control)tabPage4).Padding = new Padding(3);
			((Control)tabPage4).Size = new Size(653, 323);
			tabPage4.TabIndex = 0;
			((Control)tabPage4).Text = "Sync";
			((Control)label43).AutoSize = true;
			((Control)label43).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)1);
			((Control)label43).Location = new Point(32, 35);
			((Control)label43).Name = "label43";
			((Control)label43).Size = new Size(278, 16);
			((Control)label43).TabIndex = 13;
			((Control)label43).Text = "Sample Rate && Synchronization Source";
			((Control)btn_setSyncSource).Anchor = (AnchorStyles)9;
			((Control)btn_setSyncSource).BackColor = Color.FromArgb(224, 224, 224);
			((ButtonBase)btn_setSyncSource).FlatStyle = (FlatStyle)0;
			((Control)btn_setSyncSource).Font = new Font("Microsoft Sans Serif", 6.5f);
			((Control)btn_setSyncSource).ForeColor = SystemColors.ControlText;
			((Control)btn_setSyncSource).Location = new Point(455, 148);
			((Control)btn_setSyncSource).Name = "btn_setSyncSource";
			((Control)btn_setSyncSource).Size = new Size(43, 23);
			((Control)btn_setSyncSource).TabIndex = 12;
			((Control)btn_setSyncSource).Text = "set";
			((ButtonBase)btn_setSyncSource).UseVisualStyleBackColor = false;
			((Control)btn_setSyncSource).Click += btnSetSyncSource_Click;
			((Control)label31).AutoSize = true;
			((Control)label31).BackColor = Color.Transparent;
			((Control)label31).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label31).ForeColor = SystemColors.Control;
			((Control)label31).Location = new Point(49, 87);
			((Control)label31).Name = "label31";
			((Control)label31).Size = new Size(75, 13);
			((Control)label31).TabIndex = 3;
			((Control)label31).Text = "Device Name:";
			((Control)btnSetSampleRate).Anchor = (AnchorStyles)9;
			((Control)btnSetSampleRate).BackColor = Color.FromArgb(224, 224, 224);
			((ButtonBase)btnSetSampleRate).FlatStyle = (FlatStyle)0;
			((Control)btnSetSampleRate).Font = new Font("Microsoft Sans Serif", 6.5f);
			((Control)btnSetSampleRate).ForeColor = SystemColors.ControlText;
			((Control)btnSetSampleRate).Location = new Point(455, 117);
			((Control)btnSetSampleRate).Name = "btnSetSampleRate";
			((Control)btnSetSampleRate).Size = new Size(43, 23);
			((Control)btnSetSampleRate).TabIndex = 11;
			((Control)btnSetSampleRate).Text = "set";
			((ButtonBase)btnSetSampleRate).UseVisualStyleBackColor = false;
			((Control)btnSetSampleRate).Click += btnSetSampleRate_Click;
			((Control)label21).AutoSize = true;
			((Control)label21).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label21).ForeColor = SystemColors.Control;
			((Control)label21).Location = new Point(53, 151);
			((Control)label21).Name = "label21";
			((Control)label21).Size = new Size(71, 13);
			((Control)label21).TabIndex = 1;
			((Control)label21).Text = "Sync Source:";
			((Control)btnSetDeviceNickname).Anchor = (AnchorStyles)9;
			((Control)btnSetDeviceNickname).BackColor = Color.FromArgb(224, 224, 224);
			((ButtonBase)btnSetDeviceNickname).FlatStyle = (FlatStyle)0;
			((Control)btnSetDeviceNickname).Font = new Font("Microsoft Sans Serif", 6.5f);
			((Control)btnSetDeviceNickname).ForeColor = SystemColors.ControlText;
			((Control)btnSetDeviceNickname).Location = new Point(455, 84);
			((Control)btnSetDeviceNickname).Name = "btnSetDeviceNickname";
			((Control)btnSetDeviceNickname).Size = new Size(43, 23);
			((Control)btnSetDeviceNickname).TabIndex = 10;
			((Control)btnSetDeviceNickname).Text = "set";
			((ButtonBase)btnSetDeviceNickname).UseVisualStyleBackColor = false;
			((Control)btnSetDeviceNickname).Click += btnSetDeviceNickname_Click;
			((Control)label32).AutoSize = true;
			((Control)label32).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label32).ForeColor = SystemColors.Control;
			((Control)label32).Location = new Point(53, 119);
			((Control)label32).Name = "label32";
			((Control)label32).Size = new Size(71, 13);
			((Control)label32).TabIndex = 4;
			((Control)label32).Text = "Sample Rate:";
			((Control)txtDeviceNickname).Anchor = (AnchorStyles)9;
			((Control)txtDeviceNickname).Font = new Font("Microsoft Sans Serif", 8f);
			((Control)txtDeviceNickname).Location = new Point(161, 85);
			((Control)txtDeviceNickname).Name = "txtDeviceNickname";
			((Control)txtDeviceNickname).Size = new Size(290, 20);
			((Control)txtDeviceNickname).TabIndex = 9;
			((Control)txtDeviceNickname).Text = "No device connected";
			((Control)cbSyncSource).Anchor = (AnchorStyles)9;
			cbSyncSource.DropDownStyle = (ComboBoxStyle)2;
			((Control)cbSyncSource).Font = new Font("Microsoft Sans Serif", 8f);
			((ListControl)cbSyncSource).FormattingEnabled = true;
			((Control)cbSyncSource).Location = new Point(161, 149);
			((Control)cbSyncSource).Name = "cbSyncSource";
			((Control)cbSyncSource).Size = new Size(290, 21);
			((Control)cbSyncSource).TabIndex = 6;
			((Control)cbSamplerate).Anchor = (AnchorStyles)9;
			cbSamplerate.DropDownStyle = (ComboBoxStyle)2;
			((Control)cbSamplerate).Font = new Font("Microsoft Sans Serif", 8f);
			((ListControl)cbSamplerate).FormattingEnabled = true;
			((Control)cbSamplerate).Location = new Point(161, 117);
			((Control)cbSamplerate).Name = "cbSamplerate";
			((Control)cbSamplerate).Size = new Size(290, 21);
			((Control)cbSamplerate).TabIndex = 7;
			((Control)tabPage5).BackColor = Color.FromArgb(57, 57, 57);
			((Control)tabPage5).Controls.Add((Control)(object)btnSetAsioBufferSize);
			((Control)tabPage5).Controls.Add((Control)(object)cbxAsioBufferDepth);
			((Control)tabPage5).Controls.Add((Control)(object)cbxStreamBufferDepth);
			((Control)tabPage5).Controls.Add((Control)(object)groupBox3);
			((Control)tabPage5).Controls.Add((Control)(object)label47);
			((Control)tabPage5).Controls.Add((Control)(object)label27);
			((Control)tabPage5).Controls.Add((Control)(object)label20);
			((Control)tabPage5).ForeColor = SystemColors.Control;
			tabPage5.Location = new Point(4, 25);
			((Control)tabPage5).Name = "tabPage5";
			((Control)tabPage5).Padding = new Padding(3);
			((Control)tabPage5).Size = new Size(653, 323);
			tabPage5.TabIndex = 1;
			((Control)tabPage5).Text = "Buffers";
			((Control)btnSetAsioBufferSize).Anchor = (AnchorStyles)9;
			((Control)btnSetAsioBufferSize).BackColor = Color.FromArgb(224, 224, 224);
			((Control)btnSetAsioBufferSize).Enabled = false;
			((ButtonBase)btnSetAsioBufferSize).FlatStyle = (FlatStyle)0;
			((Control)btnSetAsioBufferSize).Font = new Font("Microsoft Sans Serif", 6.5f);
			((Control)btnSetAsioBufferSize).ForeColor = SystemColors.ControlText;
			((Control)btnSetAsioBufferSize).Location = new Point(379, 90);
			((Control)btnSetAsioBufferSize).Name = "btnSetAsioBufferSize";
			((Control)btnSetAsioBufferSize).Size = new Size(39, 23);
			((Control)btnSetAsioBufferSize).TabIndex = 210;
			((Control)btnSetAsioBufferSize).Text = "set";
			((ButtonBase)btnSetAsioBufferSize).UseVisualStyleBackColor = false;
			((Control)btnSetAsioBufferSize).Click += btnSetAsioBufferSize_Click;
			((Control)cbxAsioBufferDepth).Anchor = (AnchorStyles)9;
			cbxAsioBufferDepth.DropDownStyle = (ComboBoxStyle)2;
			((ListControl)cbxAsioBufferDepth).FormattingEnabled = true;
			((Control)cbxAsioBufferDepth).Location = new Point(173, 107);
			((Control)cbxAsioBufferDepth).Name = "cbxAsioBufferDepth";
			((Control)cbxAsioBufferDepth).Size = new Size(194, 21);
			((Control)cbxAsioBufferDepth).TabIndex = 208;
			cbxAsioBufferDepth.SelectedIndexChanged += BufferDepth_SelectedIndexChanged;
			((Control)cbxStreamBufferDepth).Anchor = (AnchorStyles)9;
			cbxStreamBufferDepth.DropDownStyle = (ComboBoxStyle)2;
			((ListControl)cbxStreamBufferDepth).FormattingEnabled = true;
			((Control)cbxStreamBufferDepth).Location = new Point(173, 75);
			((Control)cbxStreamBufferDepth).Name = "cbxStreamBufferDepth";
			((Control)cbxStreamBufferDepth).Size = new Size(194, 21);
			((Control)cbxStreamBufferDepth).TabIndex = 207;
			cbxStreamBufferDepth.SelectedIndexChanged += BufferDepth_SelectedIndexChanged;
			((Control)groupBox3).Controls.Add((Control)(object)lblAsioDropOuts);
			((Control)groupBox3).Controls.Add((Control)(object)label37);
			((Control)groupBox3).ForeColor = SystemColors.ButtonHighlight;
			((Control)groupBox3).Location = new Point(22, 253);
			((Control)groupBox3).Name = "groupBox3";
			((Control)groupBox3).Size = new Size(612, 54);
			((Control)groupBox3).TabIndex = 195;
			groupBox3.TabStop = false;
			((Control)groupBox3).Text = "ASIO Statistics";
			((Control)lblAsioDropOuts).Anchor = (AnchorStyles)9;
			((Control)lblAsioDropOuts).BackColor = Color.Transparent;
			((Control)lblAsioDropOuts).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)lblAsioDropOuts).ForeColor = SystemColors.Control;
			((Control)lblAsioDropOuts).Location = new Point(145, 23);
			((Control)lblAsioDropOuts).Name = "lblAsioDropOuts";
			((Control)lblAsioDropOuts).Size = new Size(99, 24);
			((Control)lblAsioDropOuts).TabIndex = 204;
			((Control)lblAsioDropOuts).Text = "0";
			((Control)label37).AutoSize = true;
			((Control)label37).BackColor = Color.Transparent;
			((Control)label37).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label37).ForeColor = SystemColors.Control;
			((Control)label37).Location = new Point(8, 23);
			((Control)label37).Name = "label37";
			((Control)label37).Size = new Size(101, 13);
			((Control)label37).TabIndex = 198;
			((Control)label37).Text = "Drop-outs detected:";
			((Control)label47).AutoSize = true;
			((Control)label47).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)1);
			((Control)label47).Location = new Point(16, 35);
			((Control)label47).Name = "label47";
			((Control)label47).Size = new Size(108, 16);
			((Control)label47).TabIndex = 204;
			((Control)label47).Text = "Buffer Settings";
			((Control)label27).AutoSize = true;
			((Control)label27).BackColor = Color.Transparent;
			((Control)label27).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label27).ForeColor = SystemColors.Control;
			((Control)label27).Location = new Point(19, 110);
			((Control)label27).Name = "label27";
			((Control)label27).Size = new Size(98, 13);
			((Control)label27).TabIndex = 196;
			((Control)label27).Text = "ASIO Buffer Depth:";
			((Control)label20).AutoSize = true;
			((Control)label20).BackColor = Color.Transparent;
			((Control)label20).Font = new Font("Microsoft Sans Serif", 8.25f);
			((Control)label20).ForeColor = SystemColors.Control;
			((Control)label20).Location = new Point(19, 78);
			((Control)label20).Name = "label20";
			((Control)label20).Size = new Size(112, 13);
			((Control)label20).TabIndex = 192;
			((Control)label20).Text = "USB Streaming Mode:";
			((Control)tabPage6).BackColor = Color.FromArgb(57, 57, 57);
			((Control)tabPage6).Controls.Add((Control)(object)cbxAsioDisplayName1);
			((Control)tabPage6).Controls.Add((Control)(object)dgInputChannels);
			((Control)tabPage6).ForeColor = SystemColors.Control;
			tabPage6.Location = new Point(4, 25);
			((Control)tabPage6).Name = "tabPage6";
			((Control)tabPage6).Padding = new Padding(3);
			((Control)tabPage6).Size = new Size(653, 323);
			tabPage6.TabIndex = 2;
			((Control)tabPage6).Text = "Input Channels";
			cbxAsioDisplayName1.CheckAlign = (ContentAlignment)1;
			((Control)cbxAsioDisplayName1).ForeColor = SystemColors.ButtonHighlight;
			((Control)cbxAsioDisplayName1).Location = new Point(514, 292);
			((Control)cbxAsioDisplayName1).Name = "cbxAsioDisplayName1";
			((Control)cbxAsioDisplayName1).Size = new Size(128, 30);
			((Control)cbxAsioDisplayName1).TabIndex = 3;
			((Control)cbxAsioDisplayName1).Text = "Include device name in ASIO display name";
			((ButtonBase)cbxAsioDisplayName1).TextAlign = (ContentAlignment)1;
			((ButtonBase)cbxAsioDisplayName1).UseVisualStyleBackColor = true;
			((Control)cbxAsioDisplayName1).Click += cbxAsioDisplayName1_CheckedChanged;
			dgInputChannels.AllowUserToResizeColumns = false;
			dgInputChannels.AllowUserToResizeRows = false;
			((Control)dgInputChannels).Anchor = (AnchorStyles)7;
			dgInputChannels.ColumnHeadersHeightSizeMode = (DataGridViewColumnHeadersHeightSizeMode)2;
			((Control)dgInputChannels).Location = new Point(0, 0);
			((Control)dgInputChannels).Name = "dgInputChannels";
			((Control)dgInputChannels).Size = new Size(500, 317);
			((Control)dgInputChannels).TabIndex = 0;
			dgInputChannels.CellEndEdit += new DataGridViewCellEventHandler(dgChannels_CellEndEdit);
			((Control)tabPage7).BackColor = Color.FromArgb(57, 57, 57);
			((Control)tabPage7).Controls.Add((Control)(object)cbxAsioDisplayName2);
			((Control)tabPage7).Controls.Add((Control)(object)dgOutputChannels);
			((Control)tabPage7).ForeColor = SystemColors.Control;
			tabPage7.Location = new Point(4, 25);
			((Control)tabPage7).Name = "tabPage7";
			((Control)tabPage7).Padding = new Padding(3);
			((Control)tabPage7).Size = new Size(653, 323);
			tabPage7.TabIndex = 3;
			((Control)tabPage7).Text = "Output Channels";
			cbxAsioDisplayName2.CheckAlign = (ContentAlignment)1;
			((Control)cbxAsioDisplayName2).ForeColor = SystemColors.ButtonHighlight;
			((Control)cbxAsioDisplayName2).Location = new Point(514, 292);
			((Control)cbxAsioDisplayName2).Name = "cbxAsioDisplayName2";
			((Control)cbxAsioDisplayName2).Size = new Size(130, 30);
			((Control)cbxAsioDisplayName2).TabIndex = 2;
			((Control)cbxAsioDisplayName2).Text = "Include device name in ASIO display name";
			((ButtonBase)cbxAsioDisplayName2).TextAlign = (ContentAlignment)1;
			((ButtonBase)cbxAsioDisplayName2).UseVisualStyleBackColor = true;
			((Control)cbxAsioDisplayName2).Click += cbxAsioDisplayName2_CheckedChanged;
			dgOutputChannels.AllowUserToAddRows = false;
			dgOutputChannels.AllowUserToDeleteRows = false;
			dgOutputChannels.AllowUserToOrderColumns = true;
			dgOutputChannels.AllowUserToResizeColumns = false;
			dgOutputChannels.AllowUserToResizeRows = false;
			((Control)dgOutputChannels).Anchor = (AnchorStyles)7;
			dgOutputChannels.ColumnHeadersHeightSizeMode = (DataGridViewColumnHeadersHeightSizeMode)2;
			((Control)dgOutputChannels).Location = new Point(0, 0);
			((Control)dgOutputChannels).Name = "dgOutputChannels";
			((Control)dgOutputChannels).Size = new Size(500, 317);
			((Control)dgOutputChannels).TabIndex = 1;
			dgOutputChannels.CellEndEdit += new DataGridViewCellEventHandler(dgChannels_CellEndEdit);
			((Control)tabPage8).BackColor = Color.FromArgb(57, 57, 57);
			((Control)tabPage8).Controls.Add((Control)(object)linkLabel1);
			((Control)tabPage8).Controls.Add((Control)(object)label38);
			((Control)tabPage8).Controls.Add((Control)(object)pictureBox16);
			((Control)tabPage8).Controls.Add((Control)(object)lblDriverVersion);
			((Control)tabPage8).Controls.Add((Control)(object)label41);
			((Control)tabPage8).Controls.Add((Control)(object)label45);
			((Control)tabPage8).Controls.Add((Control)(object)lblDeviceStatus);
			((Control)tabPage8).Controls.Add((Control)(object)label44);
			((Control)tabPage8).Controls.Add((Control)(object)lblDeviceFirmwareVersion);
			((Control)tabPage8).Controls.Add((Control)(object)lblDeviceSerialNumber);
			((Control)tabPage8).Controls.Add((Control)(object)label46);
			((Control)tabPage8).Controls.Add((Control)(object)lblStrFirmwareVersion);
			((Control)tabPage8).ForeColor = SystemColors.Control;
			tabPage8.Location = new Point(4, 25);
			((Control)tabPage8).Name = "tabPage8";
			((Control)tabPage8).Padding = new Padding(3);
			((Control)tabPage8).Size = new Size(653, 323);
			tabPage8.TabIndex = 4;
			((Control)tabPage8).Text = "About";
			((Control)linkLabel1).Anchor = (AnchorStyles)10;
			((Control)linkLabel1).AutoSize = true;
			((Control)linkLabel1).BackColor = Color.Transparent;
			((Control)linkLabel1).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			linkLabel1.LinkColor = Color.White;
			((Control)linkLabel1).Location = new Point(333, 295);
			((Control)linkLabel1).Name = "linkLabel1";
			((Control)linkLabel1).Size = new Size(147, 16);
			((Control)linkLabel1).TabIndex = 207;
			linkLabel1.TabStop = true;
			((Control)linkLabel1).Text = "www.cymaticaudio.com";
			linkLabel1.VisitedLinkColor = Color.FromArgb(255, 128, 0);
			linkLabel1.LinkClicked += new LinkLabelLinkClickedEventHandler(linkLabel1_LinkClicked);
			((Control)label38).AutoSize = true;
			((Control)label38).BackColor = Color.Transparent;
			((Control)label38).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)1, (GraphicsUnit)3, (byte)0);
			((Control)label38).ForeColor = SystemColors.Control;
			((Control)label38).Location = new Point(173, 28);
			((Control)label38).Name = "label38";
			((Control)label38).Size = new Size(179, 16);
			((Control)label38).TabIndex = 193;
			((Control)label38).Text = "Mixer Panel for uTrack24";
			((Control)pictureBox16).Anchor = (AnchorStyles)9;
			((Control)pictureBox16).BackColor = Color.Transparent;
			pictureBox16.Image = (Image)(object)Resources.Cymatic_audio_powered_by_Archwave;
			((Control)pictureBox16).Location = new Point(161, 217);
			((Control)pictureBox16).Name = "pictureBox16";
			((Control)pictureBox16).Size = new Size(329, 67);
			pictureBox16.TabIndex = 206;
			pictureBox16.TabStop = false;
			((Control)lblDriverVersion).AutoSize = true;
			((Control)lblDriverVersion).BackColor = Color.Transparent;
			((Control)lblDriverVersion).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)lblDriverVersion).ForeColor = SystemColors.Control;
			((Control)lblDriverVersion).Location = new Point(300, 158);
			((Control)lblDriverVersion).Name = "lblDriverVersion";
			((Control)lblDriverVersion).Size = new Size(109, 16);
			((Control)lblDriverVersion).TabIndex = 205;
			((Control)lblDriverVersion).Text = "# driver version #";
			((Control)label41).AutoSize = true;
			((Control)label41).BackColor = Color.Transparent;
			((Control)label41).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)label41).ForeColor = SystemColors.Control;
			((Control)label41).Location = new Point(173, 158);
			((Control)label41).Name = "label41";
			((Control)label41).Size = new Size(97, 16);
			((Control)label41).TabIndex = 204;
			((Control)label41).Text = "Driver version :";
			((Control)label45).AutoSize = true;
			((Control)label45).BackColor = Color.Transparent;
			((Control)label45).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)label45).ForeColor = SystemColors.Control;
			((Control)label45).Location = new Point(173, 76);
			((Control)label45).Name = "label45";
			((Control)label45).Size = new Size(70, 16);
			((Control)label45).TabIndex = 197;
			((Control)label45).Text = "uTrack24: ";
			((Control)lblDeviceStatus).AutoSize = true;
			((Control)lblDeviceStatus).BackColor = Color.Transparent;
			((Control)lblDeviceStatus).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)lblDeviceStatus).ForeColor = SystemColors.Control;
			((Control)lblDeviceStatus).Location = new Point(300, 76);
			((Control)lblDeviceStatus).Name = "lblDeviceStatus";
			((Control)lblDeviceStatus).Size = new Size(63, 16);
			((Control)lblDeviceStatus).TabIndex = 203;
			((Control)lblDeviceStatus).Text = "# status #";
			((Control)label44).AutoSize = true;
			((Control)label44).BackColor = Color.Transparent;
			((Control)label44).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)label44).ForeColor = SystemColors.Control;
			((Control)label44).Location = new Point(173, 96);
			((Control)label44).Name = "label44";
			((Control)label44).Size = new Size(97, 16);
			((Control)label44).TabIndex = 198;
			((Control)label44).Text = "Serial number :";
			((Control)lblDeviceFirmwareVersion).AutoSize = true;
			((Control)lblDeviceFirmwareVersion).BackColor = Color.Transparent;
			((Control)lblDeviceFirmwareVersion).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)lblDeviceFirmwareVersion).ForeColor = SystemColors.Control;
			((Control)lblDeviceFirmwareVersion).Location = new Point(300, 118);
			((Control)lblDeviceFirmwareVersion).Name = "lblDeviceFirmwareVersion";
			((Control)lblDeviceFirmwareVersion).Size = new Size(125, 16);
			((Control)lblDeviceFirmwareVersion).TabIndex = 202;
			((Control)lblDeviceFirmwareVersion).Text = "# firmware version #";
			((Control)lblDeviceFirmwareVersion).Visible = false;
			((Control)lblDeviceSerialNumber).AutoSize = true;
			((Control)lblDeviceSerialNumber).BackColor = Color.Transparent;
			((Control)lblDeviceSerialNumber).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)lblDeviceSerialNumber).ForeColor = SystemColors.Control;
			((Control)lblDeviceSerialNumber).Location = new Point(300, 96);
			((Control)lblDeviceSerialNumber).Name = "lblDeviceSerialNumber";
			((Control)lblDeviceSerialNumber).Size = new Size(109, 16);
			((Control)lblDeviceSerialNumber).TabIndex = 199;
			((Control)lblDeviceSerialNumber).Text = "# serial number #";
			((Control)label46).Anchor = (AnchorStyles)6;
			((Control)label46).AutoSize = true;
			((Control)label46).BackColor = Color.Transparent;
			((Control)label46).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)label46).ForeColor = SystemColors.Control;
			((Control)label46).Location = new Point(173, 295);
			((Control)label46).Name = "label46";
			((Control)label46).Size = new Size(136, 16);
			((Control)label46).TabIndex = 201;
			((Control)label46).Text = "© 2016 Cymatic Audio";
			((Control)lblStrFirmwareVersion).AutoSize = true;
			((Control)lblStrFirmwareVersion).BackColor = Color.Transparent;
			((Control)lblStrFirmwareVersion).Font = new Font("Microsoft Sans Serif", 9.75f, (FontStyle)0, (GraphicsUnit)3, (byte)0);
			((Control)lblStrFirmwareVersion).ForeColor = SystemColors.Control;
			((Control)lblStrFirmwareVersion).Location = new Point(173, 118);
			((Control)lblStrFirmwareVersion).Name = "lblStrFirmwareVersion";
			((Control)lblStrFirmwareVersion).Size = new Size(116, 16);
			((Control)lblStrFirmwareVersion).TabIndex = 200;
			((Control)lblStrFirmwareVersion).Text = "Firmware version :";
			((Control)lblStrFirmwareVersion).Visible = false;
			((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
			((ContainerControl)this).AutoValidate = (AutoValidate)1;
			((Control)this).BackColor = Color.FromArgb(57, 57, 57);
			((Form)this).ClientSize = new Size(994, 872);
			((Control)this).Controls.Add((Control)(object)pTopPanel);
			((Control)this).Controls.Add((Control)(object)pMixerPanel);
			((Control)this).Controls.Add((Control)(object)settingsTab);
			((Control)this).DoubleBuffered = true;
			((Form)this).FormBorderStyle = (FormBorderStyle)1;
			((Form)this).Icon = (Icon)componentResourceManager.GetObject("$this.Icon");
			((Control)this).Name = "MixerPanel";
			((Form)this).SizeGripStyle = (SizeGripStyle)2;
			((Form)this).StartPosition = (FormStartPosition)4;
			((Control)this).Text = "uTrack24 Mixer Panel";
			((Form)this).TopMost = true;
			((Form)this).Load += MixerPanel_Load;
			((Form)this).Shown += MixerPanel_Shown;
			((Control)this).LocationChanged += MixerPanel_LocationChanged;
			((Control)panel13).ResumeLayout(false);
			((ISupportInitialize)pictureBox26).EndInit();
			((Control)channel_1_2).ResumeLayout(false);
			((ISupportInitialize)pictureBox1).EndInit();
			((ISupportInitialize)pictureBox2).EndInit();
			((Control)pInfoDisplay).ResumeLayout(false);
			((Control)panel16).ResumeLayout(false);
			((ISupportInitialize)pictureBox17).EndInit();
			((Control)pMixerPanel).ResumeLayout(false);
			((Control)channel_23_24).ResumeLayout(false);
			((ISupportInitialize)pictureBox25).EndInit();
			((ISupportInitialize)pictureBox27).EndInit();
			((Control)channel_21_22).ResumeLayout(false);
			((ISupportInitialize)pictureBox23).EndInit();
			((ISupportInitialize)pictureBox24).EndInit();
			((Control)channel_19_20).ResumeLayout(false);
			((ISupportInitialize)pictureBox21).EndInit();
			((ISupportInitialize)pictureBox22).EndInit();
			((Control)channel_17_18).ResumeLayout(false);
			((ISupportInitialize)pictureBox19).EndInit();
			((ISupportInitialize)pictureBox20).EndInit();
			((Control)channel_15_16).ResumeLayout(false);
			((ISupportInitialize)pictureBox15).EndInit();
			((ISupportInitialize)pictureBox18).EndInit();
			((Control)channel__13_14).ResumeLayout(false);
			((ISupportInitialize)pictureBox13).EndInit();
			((ISupportInitialize)pictureBox14).EndInit();
			((Control)channel_7_8).ResumeLayout(false);
			((ISupportInitialize)pictureBox11).EndInit();
			((ISupportInitialize)pictureBox12).EndInit();
			((Control)channel_9_10).ResumeLayout(false);
			((ISupportInitialize)pictureBox9).EndInit();
			((ISupportInitialize)pictureBox10).EndInit();
			((Control)channel__11_12).ResumeLayout(false);
			((ISupportInitialize)pictureBox7).EndInit();
			((ISupportInitialize)pictureBox8).EndInit();
			((Control)channel_3_4).ResumeLayout(false);
			((ISupportInitialize)pictureBox5).EndInit();
			((ISupportInitialize)pictureBox6).EndInit();
			((Control)channel_5_6).ResumeLayout(false);
			((ISupportInitialize)pictureBox3).EndInit();
			((ISupportInitialize)pictureBox4).EndInit();
			((Control)pTopPanel).ResumeLayout(false);
			((Control)settingsTab).ResumeLayout(false);
			((Control)tabPage4).ResumeLayout(false);
			((Control)tabPage4).PerformLayout();
			((Control)tabPage5).ResumeLayout(false);
			((Control)tabPage5).PerformLayout();
			((Control)groupBox3).ResumeLayout(false);
			((Control)groupBox3).PerformLayout();
			((Control)tabPage6).ResumeLayout(false);
			((ISupportInitialize)dgInputChannels).EndInit();
			((Control)tabPage7).ResumeLayout(false);
			((ISupportInitialize)dgOutputChannels).EndInit();
			((Control)tabPage8).ResumeLayout(false);
			((Control)tabPage8).PerformLayout();
			((ISupportInitialize)pictureBox16).EndInit();
			((Control)this).ResumeLayout(false);
		}

		[DllImport("user32")]
		private static extern int RegisterWindowMessage(string message);

		public MixerPanel(bool bMinimized, bool openAsio)
		{
			//IL_0081: Unknown result type (might be due to invalid IL or missing references)
			//IL_008b: Expected O, but got Unknown
			//IL_00f2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fc: Expected O, but got Unknown
			//IL_01bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_01c9: Expected O, but got Unknown
			//IL_01f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_01fb: Expected O, but got Unknown
			//IL_0220: Unknown result type (might be due to invalid IL or missing references)
			//IL_022a: Expected O, but got Unknown
			//IL_024e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0258: Expected O, but got Unknown
			gUSBInterfaceGuid = new Guid("CC50BD25-DB83-474e-96C1-C868E142432A");
			((ContainerControl)this).AutoScaleMode = (AutoScaleMode)0;
			mOpenAsio = openAsio;
			trayMenu = new ContextMenu();
			((Menu)trayMenu).MenuItems.Add("Open", (EventHandler)DoubleClickTrayIcon);
			((Menu)trayMenu).MenuItems.Add("Settings", (EventHandler)ShowSettings);
			((Menu)trayMenu).MenuItems.Add("Exit", (EventHandler)OnExit);
			trayIcon = new NotifyIcon();
			trayIcon.Text = "uTrack24 Mixerpanel";
			trayIcon.Icon = Resources.uTrack_Icon;
			trayIcon.ContextMenu = trayMenu;
			trayIcon.Visible = true;
			trayIcon.DoubleClick += DoubleClickTrayIcon;
			trayIcon.Click += ClickTrayIcon;
			InitializeComponent();
			((Control)this).DoubleBuffered = true;
			mFormWidth = ((Control)this).Width;
			((Control)this).MaximumSize = new Size(885, 390);
			((Control)this).Height = 390;
			((Control)this).Width = 885;
			((Form)this).MaximizeBox = false;
			((TabControl)settingsTab).SelectedIndex = 1;
			mBlinkTimer = new Timer();
			mBlinkTimer.Interval = 600;
			mBlinkTimer.Tick += blinkElements;
			mMoveFadersDownTimer = new Timer();
			mMoveFadersDownTimer.Interval = 10;
			mMoveFadersDownTimer.Tick += moveFadersDown;
			mMoveFadersUpTimer = new Timer();
			mMoveFadersUpTimer.Interval = 5;
			mMoveFadersUpTimer.Tick += moveFadersUp;
			mConnectionTimer = new Timer();
			mConnectionTimer.Tick += connectDevice;
			mConnectionTimer.Interval = 1000;
			string location = Assembly.GetExecutingAssembly().Location;
			RegistryAccess.WriteRegistry("Cymatic Audio", "uTrack24 Mixerpanel", "installPath", location);
			if (bMinimized)
			{
				((Form)this).WindowState = (FormWindowState)1;
				((Form)this).ShowInTaskbar = true;
			}
			string text = RegistryAccess.ReadRegistry("Cymatic Audio", "uTrack24 Mixerpanel", "ALWAYS_ON_TOP");
			bool flag = true;
			if (text != null)
			{
				flag = text == "1";
			}
			mSystemMenu = SystemMenu.FromForm((Form)(object)this);
			mSystemMenu.InsertSeparator(0);
			mSystemMenu.InsertMenu(0, flag ? ItemFlags.mfChecked : ItemFlags.mfUnchecked, 256, "Always on Top");
			((Form)this).TopMost = flag;
			resetControlls();
			initializeControls();
			ClearSettingsPage();
			AttachInterface();
		}

		protected override void WndProc(ref Message m)
		{
			if (((Message)(ref m)).Msg == WM_DEVICECHANGE)
			{
				((Message)(ref m)).WParam.ToInt32();
				((Message)(ref m)).LParam.ToInt32();
				bool flag = hwh.DeviceIsPresent(gUSBInterfaceGuid, 0u);
				if (!mDeviceAttached || !flag)
				{
					if (mDeviceAttached && !flag)
					{
						mDeviceAttached = false;
						RemoveInterface();
					}
					else if (!mDeviceAttached && flag)
					{
						mDeviceAttached = true;
						AttachInterface();
					}
				}
			}
			if (((Message)(ref m)).Msg == WM_OPEN_ASIO)
			{
				LayoutMixerPanel(E_WINDOW_MODE.eMixer);
				((TabControl)settingsTab).SelectedTab = settingsTab.TabPages[1];
				ShowWindow();
			}
			if (((Message)(ref m)).Msg == WM_RESTORE_INSTANCE)
			{
				if (((Message)(ref m)).WParam.ToInt32() == 52685 && ((Message)(ref m)).LParam.ToInt32() == 61423)
				{
					if (m_MinimizedToSysTray)
					{
						ShowWindow();
						m_MinimizedToSysTray = false;
						((Form)this).Location = mLocation;
					}
					else
					{
						((Form)this).WindowState = (FormWindowState)0;
						((Form)this).Location = mLocation;
						((Control)this).BringToFront();
					}
				}
				else if (((Message)(ref m)).WParam.ToInt32() == 61937 && ((Message)(ref m)).LParam.ToInt32() == 7967)
				{
					((Form)this).Close();
					Application.Exit();
				}
				else if (((Message)(ref m)).WParam.ToInt32() == 41377 && ((Message)(ref m)).LParam.ToInt32() == 6682)
				{
					m_MinimizedToSysTray = true;
					((Form)this).WindowState = (FormWindowState)1;
					((Control)this).Hide();
				}
			}
			else if (((Message)(ref m)).Msg == 274)
			{
				switch (((Message)(ref m)).WParam.ToInt32() & 0xFFF0)
				{
				case 256:
					if (((Form)this).TopMost)
					{
						mSystemMenu.checkMenuItem(check: false, 0);
						((Form)this).TopMost = false;
					}
					else
					{
						mSystemMenu.checkMenuItem(check: true, 0);
						((Form)this).TopMost = true;
					}
					RegistryAccess.WriteRegistry("Cymatic Audio", "uTrack24 Mixerpanel", "ALWAYS_ON_TOP", ((Form)this).TopMost ? 1 : 0);
					break;
				case 61488:
					((Form)this).Location = new Point(((Form)this).Location.X - (mFormWidth - 236), ((Form)this).Location.Y);
					((Control)this).Width = mFormWidth;
					m_eMixerState = E_MIXER_STATE.eMaxi;
					((Form)this).MaximizeBox = false;
					return;
				case 61440:
					return;
				case 61728:
					((Form)this).Location = mLocation;
					break;
				case 61536:
					m_MinimizedToSysTray = true;
					((Form)this).WindowState = (FormWindowState)1;
					((Control)this).Hide();
					return;
				}
			}
			((Form)this).WndProc(ref m);
		}

		private bool AttachInterface()
		{
			if (hwh.DeviceIsPresent(gUSBInterfaceGuid, 0u))
			{
				mDeviceAttached = true;
				DInterface = new CDriverInterface(gUSBInterfaceGuid);
				mConnectionTimer.Start();
				return true;
			}
			RemoveInterface();
			return false;
		}

		private void RemoveInterface()
		{
			if (DInterface != null)
			{
				mConnected = false;
				DInterface.OnUsbNotification -= DInterface_OnUsbNotification;
				DInterface.RemoveUsbNotificationCallback();
				DInterface.Dispose();
				mMoveFadersDownTimer.Enabled = true;
				mMoveFadersDownTimer.Start();
				ClearSettingsPage();
				setUiInfo();
			}
		}

		private void MixerPanel_Load(object sender, EventArgs e)
		{
			//IL_019b: Unknown result type (might be due to invalid IL or missing references)
			//IL_01a5: Expected O, but got Unknown
			//IL_01d2: Unknown result type (might be due to invalid IL or missing references)
			//IL_01dc: Expected O, but got Unknown
			((Control)this).MaximumSize = new Size(1000, 428);
			((Control)this).Height = 428;
			((Control)this).Width = 1000;
			if (mOpenAsio)
			{
				LayoutMixerPanel(E_WINDOW_MODE.eMixer);
				((TabControl)settingsTab).SelectedTab = settingsTab.TabPages[1];
			}
			mStreamBufferSettingValues = new Dictionary<string, E_StreamingMode>();
			mStreamBufferSettingValues.Add("Minimum Latency", E_StreamingMode.MinimumLatency);
			mStreamBufferSettingValues.Add("Low latency", E_StreamingMode.LowLatency);
			mStreamBufferSettingValues.Add("Standard", E_StreamingMode.Standard);
			mStreamBufferSettingValues.Add("Relaxed", E_StreamingMode.Relaxed);
			mStreamBufferSettingValues.Add("Reliable", E_StreamingMode.Reliable);
			mStreamBufferSettingValues.Add("Safe", E_StreamingMode.Safe);
			mAsioBufferSettingValues = new Dictionary<string, uint>();
			mAsioBufferSettingValues.Add("64 samples", 64u);
			mAsioBufferSettingValues.Add("128 samples", 128u);
			mAsioBufferSettingValues.Add("256 samples", 256u);
			mAsioBufferSettingValues.Add("512 samples", 512u);
			mAsioBufferSettingValues.Add("1024 samples", 1024u);
			mAsioBufferSettingValues.Add("2048 samples", 2048u);
			mAsioBufferSettingValues.Add("4096 samples", 4096u);
			mAsioBufferSettingValues.Add("8192 samples", 8192u);
			mAsioBufferSettingValues.Add("16384 samples", 16384u);
			cbxStreamBufferDepth.DataSource = (object)new BindingSource((object)mStreamBufferSettingValues, (string)null);
			((ListControl)cbxStreamBufferDepth).ValueMember = "Value";
			((ListControl)cbxStreamBufferDepth).DisplayMember = "Key";
			cbxAsioBufferDepth.DataSource = (object)new BindingSource((object)mAsioBufferSettingValues, (string)null);
			((ListControl)cbxAsioBufferDepth).ValueMember = "Value";
			((ListControl)cbxAsioBufferDepth).DisplayMember = "Key";
		}

		public void ShowWindow()
		{
			((Control)this).Show();
			((Form)this).WindowState = (FormWindowState)0;
			((Form)this).Location = mLocation;
			m_MinimizedToSysTray = false;
			((Form)this).ShowInTaskbar = true;
		}

		private void OnExit(object sender, EventArgs e)
		{
			CallBuffer.Stop();
			foreach (global::VUMeter.VUMeter value in ControlsDictionary["VUMeter.VUMeter"].Values)
			{
				value.Stop();
			}
			WriteAllSettingsToRegistry();
			((Control)this).Hide();
			((Control)this).Visible = false;
			trayIcon.Visible = false;
			((Form)this).ShowInTaskbar = false;
			mConnected = false;
			((Form)this).Close();
			Application.Exit();
		}

		private void DoubleClickTrayIcon(object sender, EventArgs e)
		{
			ShowWindow();
		}

		private void ClickTrayIcon(object sender, EventArgs e)
		{
			ShowWindow();
		}

		private void ShowSettings(object sender, EventArgs e)
		{
			((Control)this).Visible = true;
			btnSettings_Click(sender, e);
		}

		private void connectDevice(object sender, EventArgs args)
		{
			//IL_0138: Unknown result type (might be due to invalid IL or missing references)
			//IL_0142: Expected O, but got Unknown
			if (mDeviceAttached)
			{
				mConnected = DInterface.connectDevice(0);
			}
			if (!mConnected)
			{
				return;
			}
			DInterface.SetUsbNotificationCallback();
			DInterface.OnUsbNotification += DInterface_OnUsbNotification;
			mMoveFadersDownTimer.Stop();
			mMoveFadersDownTimer.Enabled = false;
			mProps = DInterface.GetDeviceProps(0);
			if (mProps != null)
			{
				mVersionInfo = DInterface.getVersionInfo(0);
				mConnectionTimer.Stop();
				mConnectionType = mProps.ConnectionType;
				setConnectionTypeIndicators();
				mDeviceStatus = DInterface.pollDeviceStatus(0);
				mCurrentSampleRate = DInterface.getSampleRate(0);
				if (mCurrentSampleRate == 44100 || mCurrentSampleRate == 48000)
				{
					mMaxChannels = 24;
				}
				else
				{
					mMaxChannels = 8;
				}
				mCurrentSyncSource = DInterface.getCurrentSyncSource(0);
				mAudioMode = DInterface.getCurrentAudioMode(0);
				mDeviceStatusNew = 0L;
				getInitialSettings();
				initializeSettingsPage();
				mVUMeterPollingTimer = new Timer();
				mVUMeterPollingTimer.Tick += VUMeterPollingTimer_Tick;
				mVUMeterPollingTimer.Interval = 25;
				mAsioDropoutsPollingThreadResetEvent = new ManualResetEvent(initialState: false);
				mGetCurrentSettingsThreadPauseEvent = new ManualResetEvent(initialState: false);
				startAllProcesses();
				setDeviceConfig();
				setUiInfo();
			}
		}

		private void startAllProcesses()
		{
			if (!mDeviceAttached || !mConnected || !((Control)this).IsHandleCreated)
			{
				return;
			}
			((Control)this).BeginInvoke((Delegate)(Action)delegate
			{
				mVUMeterPollingTimer.Start();
				if ((mAsioDropoutsPollingThread != null && mAsioDropoutsPollingThread.ThreadState == System.Threading.ThreadState.Stopped) || mAsioDropoutsPollingThread == null)
				{
					mAsioDropoutsPollingThread = new Thread(pollAsioDropoutsThread);
					mAsioDropoutsPollingThread.Start();
				}
				if ((mGetCurrentSettingsThread != null && mGetCurrentSettingsThread.ThreadState == System.Threading.ThreadState.Stopped) || mGetCurrentSettingsThread == null)
				{
					mGetCurrentSettingsThread = new Thread(getCurrentSettingsThread);
					mGetCurrentSettingsThread.Start();
				}
			});
		}

		private void DInterface_OnUsbNotification(int msg)
		{
			switch ((USB_EVENT_TYPE)msg)
			{
			case USB_EVENT_TYPE.USB_EvtType_StreamingRestarted:
			case USB_EVENT_TYPE.USB_EvtType_DomainConfigurationChanged:
				pollDeviceStatus();
				break;
			}
		}

		private void initializeControls()
		{
			//IL_0014: Unknown result type (might be due to invalid IL or missing references)
			//IL_001a: Expected O, but got Unknown
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_002a: Expected O, but got Unknown
			//IL_0030: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Expected O, but got Unknown
			//IL_0040: Unknown result type (might be due to invalid IL or missing references)
			//IL_004a: Expected O, but got Unknown
			mBlinkTimer.Start();
			if (bControlsInitialized)
			{
				return;
			}
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
			miPH.Checked = mHoldPeak;
			miHF.Checked = mPeakHoldForever;
			miFR.Checked = mPeakHoldFastRelease;
			((Menu)val).MenuItems.Add(miPH);
			((Menu)val).MenuItems.Add(miHF);
			((Menu)val).MenuItems.Add(miFR);
			ControlsDictionary = new Dictionary<string, Dictionary<string, Control>>();
			ControlsDictionary.Add("CControlKnob.ControlKnob", new Dictionary<string, Control>());
			ControlsDictionary.Add("PushButton.CPushButton", new Dictionary<string, Control>());
			ControlsDictionary.Add("VUMeter.VUMeter", new Dictionary<string, Control>());
			ControlsDictionary.Add("MatrixLib.MatrixControl", new Dictionary<string, Control>());
			ControlsDictionary.Add("Fader.fader", new Dictionary<string, Control>());
			ControlsDictionary.Add("ChannelStrips", new Dictionary<string, Control>());
			List<Control> allControls = GetAllControls((Control)(object)this);
			foreach (Control item in allControls)
			{
				string key = ((object)item).GetType().ToString();
				if (((object)item).GetType() == typeof(MatrixControl))
				{
					ControlsDictionary[key].Add(item.Name, item);
					((MatrixControl)(object)item).SetColor(Color.FromArgb(2015237120), Color.FromArgb(-1057708271));
				}
				else if (((object)item).GetType() == typeof(ControlKnob))
				{
					ControlsDictionary[key].Add(item.Name, item);
					FeedbackControlList.Add(item);
				}
				else if (((object)item).GetType() == typeof(CPushButton))
				{
					if (item.Name.ToLower().IndexOf("mute") == 0)
					{
						ControlsDictionary[key].Add(item.Name, item);
						FeedbackControlList.Add(item);
						if (item.Tag.ToString() != "-1")
						{
							mMuteButtonArray[Convert.ToInt16(item.Tag)] = (CPushButton)(object)item;
						}
					}
					if (item.Name.ToLower().IndexOf("solo") == 0)
					{
						ControlsDictionary[key].Add(item.Name, item);
						mSoloButtonArray[Convert.ToInt16(item.Tag)] = (CPushButton)(object)item;
					}
					if (item.Name.ToLower().IndexOf("link") == 0)
					{
						ControlsDictionary[key].Add(item.Name, item);
					}
				}
				else if (((object)item).GetType() == typeof(global::VUMeter.VUMeter))
				{
					ControlsDictionary[key].Add(item.Name, item);
				}
				else if (((object)item).GetType() == typeof(Panel))
				{
					if (item.Name.ToLower().IndexOf("channel_") == 0)
					{
						ControlsDictionary["ChannelStrips"].Add(item.Name, item);
					}
				}
				else if (((object)item).GetType() == typeof(fader))
				{
					ControlsDictionary[key].Add(item.Name, item);
					FeedbackControlList.Add(item);
					if (int.TryParse(item.Tag.ToString(), out var result) && result >= 0)
					{
						mFaderArray[result] = (fader)(object)item;
					}
				}
			}
			bControlsInitialized = true;
			mDeviceStatusNew = 0L;
			LayoutMixerPanel(E_WINDOW_MODE.eSettings);
		}

		private void pollDeviceStatus()
		{
			if (!mConnected || !mDeviceAttached)
			{
				return;
			}
			mDeviceStatus = DInterface.pollDeviceStatus(0);
			string sSyncStatus = "unlocked";
			if (isInSync(mDeviceStatusNew))
			{
				sSyncStatus = "locked";
			}
			setMainDisplayInfo(mProps.Nickname, ((double)mDeviceStatus.uSampleRate / 1000.0).ToString("#00.0") + "kHz", translateSyncSource(mDeviceStatus.iSyncSource), sSyncStatus);
			if (!((Control)this).IsHandleCreated)
			{
				return;
			}
			((Control)this).BeginInvoke((Delegate)(Action)delegate
			{
				if (mCurrentSampleRate != mDeviceStatus.uSampleRate)
				{
					mCurrentSampleRate = mDeviceStatus.uSampleRate;
					((ListControl)cbSamplerate).SelectedValue = mDeviceStatus.uSampleRate;
				}
			});
		}

		private void setDeviceConfig()
		{
			//IL_0098: Unknown result type (might be due to invalid IL or missing references)
			//IL_009e: Expected O, but got Unknown
			//IL_0039: Unknown result type (might be due to invalid IL or missing references)
			//IL_003f: Expected O, but got Unknown
			switch (mMaxChannels)
			{
			case 24:
			{
				foreach (Panel value in ControlsDictionary["ChannelStrips"].Values)
				{
					Panel val2 = value;
					if (int.TryParse(((Control)val2).Tag.ToString(), out var _))
					{
						((Control)val2).Enabled = true;
					}
				}
				break;
			}
			case 8:
			{
				foreach (Panel value2 in ControlsDictionary["ChannelStrips"].Values)
				{
					Panel val = value2;
					if (int.TryParse(((Control)val).Tag.ToString(), out var result))
					{
						if (result < 4)
						{
							((Control)val).Enabled = true;
						}
						else
						{
							((Control)val).Enabled = false;
						}
					}
				}
				break;
			}
			}
		}

		private void pollAsioDropoutsThread(object obj)
		{
			while (true)
			{
				mAsioDropoutsPollingThreadResetEvent.WaitOne(250);
				if (!mConnected)
				{
					break;
				}
				if (((Control)this).IsHandleCreated)
				{
					((Control)this).BeginInvoke((Delegate)(Action)delegate
					{
						int asioDropouts = DInterface.getAsioDropouts();
						((Control)lblAsioDropOuts).Text = asioDropouts.ToString();
					});
				}
				mAsioDropoutsPollingThreadResetEvent.Reset();
			}
		}

		private void resetControlls()
		{
			mMuteButtonArray = new CPushButton[25];
			mSoloButtonArray = new CPushButton[24];
			mFaderArray = new fader[26];
			mLinkedChannels = new Dictionary<string, LinkedChannels>();
			muteButtonStateArray = new bool[25];
		}

		private void setUiInfo()
		{
			string text = "";
			string text2 = "";
			string text3 = "";
			string text4 = "";
			if (mConnected)
			{
				text = mProps.Nickname;
				text2 = ((double)mDeviceStatus.uSampleRate / 1000.0).ToString("#00.0") + "kHz";
				text3 = translateSyncSource(mDeviceStatus.iSyncSource);
				text4 = "??";
			}
			else
			{
				ClearSettingsPage();
				text = "Not connected";
				text2 = "--";
				text3 = "--";
				text4 = "--";
			}
			setMainDisplayInfo(text, text2, text3, text4);
		}

		private void setMainDisplayInfo(string sDeviceName = "", string sSampleRate = "", string sSyncSource = "", string sSyncStatus = "")
		{
			if (!((Control)this).IsHandleCreated)
			{
				return;
			}
			((Control)this).BeginInvoke((Delegate)(Action)delegate
			{
				string text;
				string text2;
				string text3;
				if (mConnected)
				{
					text = sDeviceName.PadRight(12) + "Sample Rate: " + sSampleRate;
					text2 = "".PadRight(12) + ("Sync Source: " + sSyncSource).PadRight(20);
					text3 = "".PadRight(12) + "Sync Status: " + sSyncStatus;
				}
				else
				{
					text = sDeviceName;
					text2 = "";
					text3 = "";
				}
				if (mVersionInfo.FirmwareVersionInt != 0 && mVersionInfo.FirmwareVersionInt < 3660)
				{
					text3 = "";
				}
				MainInfoDisplay.setTextLine(0, text, MatrixTextLine.Enum_Align.left);
				MainInfoDisplay.setTextLine(1, text2, MatrixTextLine.Enum_Align.left);
				MainInfoDisplay.setTextLine(2, text3, MatrixTextLine.Enum_Align.left);
			});
		}

		private void setConnectionTypeIndicators()
		{
			USBModeLight.State = mConnectionType == E_CONN_TYPE.eUSB2;
		}

		private void blinkElements(object sender, EventArgs args)
		{
			mBlinkOn = !mBlinkOn;
			if (!mConnected || mConnectionType == E_CONN_TYPE.eNoConnection)
			{
				USBModeLight.State = !USBModeLight.State;
				return;
			}
			setConnectionTypeIndicators();
			string sSyncStatus = "unlocked";
			if (isInSync(mDeviceStatusNew))
			{
				sSyncStatus = "locked";
			}
			else if (mBlinkOn)
			{
				sSyncStatus = "";
			}
			setMainDisplayInfo(mProps.Nickname, ((double)mDeviceStatus.uSampleRate / 1000.0).ToString("#00.0") + "kHz", translateSyncSource(mDeviceStatus.iSyncSource), sSyncStatus);
		}

		private void moveFadersDown(object sender, EventArgs args)
		{
			bool flag = false;
			if (!mConnected)
			{
				foreach (string key in ControlsDictionary["Fader.fader"].Keys)
				{
					fader fader = (fader)(object)ControlsDictionary["Fader.fader"][key];
					int.TryParse(((Control)fader).Tag.ToString(), out var result);
					if (result < mMaxChannels && cacheFadervalues.ContainsKey(key))
					{
						if (fader.CurrentValue > (double)fader.MinDBValue)
						{
							flag = true;
						}
						double currentValue = ((fader.CurrentValue - 2.0 < (double)fader.MinDBValue) ? ((double)fader.MinDBValue) : (fader.CurrentValue - 2.0));
						SliderMoveEventArgs args2 = new SliderMoveEventArgs(currentValue, 0.0);
						autoMoveFader(fader, args2);
					}
				}
			}
			if (!flag)
			{
				mMoveFadersDownTimer.Enabled = false;
			}
		}

		private void moveFadersUp(object sender, EventArgs args)
		{
			bool flag = false;
			if (mConnected)
			{
				foreach (string key in ControlsDictionary["Fader.fader"].Keys)
				{
					fader fader = (fader)(object)ControlsDictionary["Fader.fader"][key];
					if (mProps.ConnectionType != 0)
					{
						_ = fader.AVCFeatureFunctionBlockId;
					}
					else
					{
						_ = fader.USBFunctionBlockId;
					}
					int.TryParse(((Control)fader).Tag.ToString(), out var result);
					if (result < mMaxChannels && cacheFadervalues.ContainsKey(key))
					{
						double num = cacheFadervalues[key];
						double num2 = ((fader.CurrentValue + 3.0 > num) ? num : (fader.CurrentValue + 3.0));
						if (num2 != num)
						{
							flag = true;
						}
						SliderMoveEventArgs args2 = new SliderMoveEventArgs(num2, 0.0);
						autoMoveFader(fader, args2);
						fader_OnMove(fader, args2);
					}
				}
			}
			if (!flag)
			{
				mMoveFadersUpTimer.Stop();
			}
		}

		private void WriteAllSettingsToRegistry()
		{
			//IL_0142: Unknown result type (might be due to invalid IL or missing references)
			if (mProps == null)
			{
				return;
			}
			int num = 0;
			try
			{
				foreach (string key in ControlsDictionary.Keys)
				{
					foreach (string key2 in ControlsDictionary[key].Keys)
					{
						switch (key)
						{
						case "PushButton.CPushButton":
						{
							CPushButton cPushButton = (CPushButton)(object)ControlsDictionary[key][key2];
							num = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? cPushButton.USBFunctionBlockId : cPushButton.AVCFeatureFunctionBlockId);
							WriteRegistry(mProps.VendorName, mProps.ProductName, mProps.ConnectionType.ToString(), num, key, key2, cPushButton.State.ToString());
							break;
						}
						}
					}
				}
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
		}

		private void writeSettingToRegistry(object userControl)
		{
			if (mConnected)
			{
				string text = userControl.ToString();
				string text2;
				if ((text2 = text) != null && text2 == "PushButton.CPushButton")
				{
					CPushButton cPushButton = (CPushButton)userControl;
					int functID = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? cPushButton.USBFunctionBlockId : cPushButton.AVCFeatureFunctionBlockId);
					WriteRegistry(mProps.VendorName, mProps.ProductName, mProps.ConnectionType.ToString(), functID, text, ((Control)cPushButton).Name, cPushButton.State.ToString());
				}
			}
		}

		private void GetCurrentSettingsThreadPause()
		{
			mGetCurrentSettingsThreadPauseEvent.Reset();
		}

		private void GetCurrentSettingsThreadStop()
		{
			mConnected = false;
			mGetCurrentSettingsThreadPauseEvent.Set();
		}

		private void getCurrentSettingsThread()
		{
			//IL_019a: Unknown result type (might be due to invalid IL or missing references)
			//IL_01a1: Expected O, but got Unknown
			//IL_025d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0267: Expected O, but got Unknown
			//IL_0449: Unknown result type (might be due to invalid IL or missing references)
			//IL_0453: Expected O, but got Unknown
			//IL_0371: Unknown result type (might be due to invalid IL or missing references)
			//IL_0378: Expected O, but got Unknown
			int num = 0;
			while (mConnected)
			{
				mGetCurrentSettingsThreadPauseEvent.WaitOne(10);
				if (mPauseSettingsPolling)
				{
					continue;
				}
				if (mConnected && bControlsInitialized)
				{
					int num2 = 0;
					if (mConnected)
					{
						Control val2 = FeedbackControlList[num];
						if (!int.TryParse(val2.Tag.ToString(), out var result))
						{
							continue;
						}
						if (result <= mMaxChannels - 1 && result != activeChannelNumber)
						{
							string text = ((object)val2).ToString();
							string name = val2.Name;
							if (!m_MinimizedToSysTray && m_eMixerState != 0)
							{
								MethodInvoker val3 = null;
								switch (text)
								{
								case "CControlKnob.ControlKnob":
								{
									ControlKnob knob = (ControlKnob)(object)ControlsDictionary[text][name];
									num2 = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? knob.USBFunctionBlockId : knob.AVCFeatureFunctionBlockId);
									long channelInputMonitorPan = DInterface.getChannelInputMonitorPan(0, num2, (E_Channel)knob.Channel);
									int val = (int)channelInputMonitorPan;
									if (knob.Angle == -val || !((Control)knob).IsHandleCreated)
									{
										break;
									}
									ControlKnob controlKnob = knob;
									if (val3 == null)
									{
										val3 = (MethodInvoker)delegate
										{
											knob.upDateKnobPosition(val);
										};
									}
									((Control)controlKnob).BeginInvoke((Delegate)(object)val3);
									break;
								}
								case "PushButton.CPushButton":
								{
									CPushButton button = (CPushButton)(object)ControlsDictionary[text][name];
									num2 = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? button.USBFunctionBlockId : button.AVCFeatureFunctionBlockId);
									if (name.ToLower().IndexOf("mute") == -1)
									{
										break;
									}
									bool state = DInterface.getChannelInputMonitorMute(0, num2, (E_Channel)button.Channel);
									if (((Control)button).IsHandleCreated)
									{
										((Control)button).BeginInvoke((Delegate)(MethodInvoker)delegate
										{
											button.State = state;
										});
									}
									break;
								}
								case "Fader.fader":
								{
									fader fader = (fader)(object)ControlsDictionary[text][name];
									if (Convert.ToInt16(((Control)fader).Tag) == -1)
									{
										break;
									}
									MethodInvoker val4 = null;
									num2 = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? fader.USBFunctionBlockId : fader.AVCFeatureFunctionBlockId);
									double faderVal = DInterface.GetChannelInputMonitorVol(0, num2, (E_Channel)fader.Channel);
									faderVal = Math.Round(faderVal, 1);
									if (faderVal < -63.0)
									{
										faderVal = -64.0;
									}
									if (((Control)fader).Name == "CrossFader")
									{
										if (((Control)fader).IsHandleCreated)
										{
											fader fader2 = fader;
											if (val4 == null)
											{
												val4 = (MethodInvoker)delegate
												{
													fader.setFader(faderVal);
												};
											}
											((Control)fader2).BeginInvoke((Delegate)(object)val4);
										}
										MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)fader).Tag.ToString());
										double num3 = faderVal / 127.0 * 100.0;
										matrixControl.ScreenText = ((int)(0.0 - num3)).ToString();
									}
									else
									{
										if (((Control)fader).Name.IndexOf("settings_") != -1)
										{
											break;
										}
										SliderMoveEventArgs args1 = new SliderMoveEventArgs(faderVal, 0.0);
										if (((Control)fader).IsHandleCreated)
										{
											((Control)fader).BeginInvoke((Delegate)(MethodInvoker)delegate
											{
												autoMoveFader(fader, args1);
											});
										}
									}
									break;
								}
								}
							}
						}
					}
				}
				GetCurrentSettingsThreadPause();
				num++;
				if (num == FeedbackControlList.Count())
				{
					num = 0;
				}
			}
		}

		private bool getInitialSettings()
		{
			int num = 0;
			foreach (string key in ControlsDictionary.Keys)
			{
				foreach (string key2 in ControlsDictionary[key].Keys)
				{
					Control val = ControlsDictionary[key][key2];
					if (val.Tag == null)
					{
						continue;
					}
					int.TryParse(val.Tag.ToString(), out var result);
					if (result > mMaxChannels - 1)
					{
						continue;
					}
					switch (key)
					{
					case "CControlKnob.ControlKnob":
						try
						{
							ControlKnob controlKnob = (ControlKnob)(object)ControlsDictionary[key][key2];
							num = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? controlKnob.USBFunctionBlockId : controlKnob.AVCFeatureFunctionBlockId);
							long channelInputMonitorPan = DInterface.getChannelInputMonitorPan(0, num, (E_Channel)controlKnob.Channel);
							int value2 = (int)channelInputMonitorPan;
							controlKnob.init(value2);
						}
						catch
						{
						}
						break;
					case "PushButton.CPushButton":
						try
						{
							CPushButton cPushButton = (CPushButton)(object)ControlsDictionary[key][key2];
							num = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? cPushButton.USBFunctionBlockId : cPushButton.AVCFeatureFunctionBlockId);
							bool flag = false;
							string text = ReadRegistry(mProps.VendorName, mProps.ProductName, mProps.ConnectionType.ToString(), num, key, key2);
							if (text != null)
							{
								flag = Convert.ToBoolean(text);
							}
							cPushButton.State = flag;
							if (key2.ToLower().IndexOf("mute") == 0)
							{
								CallBuffer.addCall(DInterface.setChannelInputMonitorMute, 0, num, (E_Channel)cPushButton.Channel, flag);
								muteButtonStateArray[Convert.ToInt16(((Control)cPushButton).Tag)] = flag;
							}
							else if (key2.ToLower().IndexOf("solo") != 0 && key2.ToLower().IndexOf("link") == 0)
							{
								string text2 = ((Control)cPushButton).Tag.ToString();
								if (!mLinkedChannels.ContainsKey(text2))
								{
									int idLeft = Convert.ToInt16(text2.Replace("link", "").Split(new char[1] { '_' })[0]);
									int idRight = Convert.ToInt16(text2.Replace("link", "").Split(new char[1] { '_' })[1]);
									LinkedChannels value = new LinkedChannels(flag, idLeft, idRight, 0.0, 0.0);
									mLinkedChannels.Add(text2, value);
								}
							}
						}
						catch
						{
						}
						break;
					case "Fader.fader":
						try
						{
							fader fader = (fader)(object)ControlsDictionary[key][key2];
							num = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? fader.USBFunctionBlockId : fader.AVCFeatureFunctionBlockId);
							double channelInputMonitorVol = DInterface.GetChannelInputMonitorVol(0, num, (E_Channel)fader.Channel);
							channelInputMonitorVol = Math.Round(channelInputMonitorVol, 1);
							if (channelInputMonitorVol < -63.0)
							{
								channelInputMonitorVol = -64.0;
							}
							if (((Control)fader).Name == "CrossFader")
							{
								fader.setFader(channelInputMonitorVol);
								MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)fader).Tag.ToString());
								double num2 = channelInputMonitorVol / 127.0 * 100.0;
								matrixControl.ScreenText = ((int)num2).ToString();
							}
							else if (((Control)fader).Name.IndexOf("settings_") == -1)
							{
								if (cacheFadervalues.ContainsKey(key2))
								{
									cacheFadervalues[key2] = channelInputMonitorVol;
								}
								else
								{
									cacheFadervalues.Add(key2, channelInputMonitorVol);
								}
							}
						}
						catch
						{
						}
						break;
					}
				}
			}
			mMoveFadersUpTimer.Start();
			return true;
		}

		private void VUMeterPollingTimer_Tick(object sender, EventArgs e)
		{
			if (mConnected && mDeviceAttached && DInterface.UpdateLevelMeterData(0, 26))
			{
				DeviceLevels_onUpdate();
				DeviceStatus_onUpdate();
			}
		}

		private void DeviceStatus_onUpdate()
		{
			long deviceStatus = DInterface.DeviceStatus;
			if (deviceStatus == 0 || deviceStatus == mDeviceStatusNew)
			{
				return;
			}
			mDeviceStatusNew = deviceStatus;
			if (!((Control)this).IsHandleCreated)
			{
				return;
			}
			((Control)this).BeginInvoke((Delegate)(Action)delegate
			{
				string text = "unlocked";
				if (isInSync(mDeviceStatusNew))
				{
					text = "locked";
				}
				string text2 = "".PadRight(12) + "Sync Status: " + text;
				if (mVersionInfo.FirmwareVersionInt != 0 && mVersionInfo.FirmwareVersionInt < 3660)
				{
					text2 = "";
				}
				MainInfoDisplay.setTextLine(2, text2, MatrixTextLine.Enum_Align.left);
				string inputType = getInputType(mDeviceStatusNew, 1);
				((Control)label22).Text = "1  " + inputType + "  2";
				((Control)label2).Text = "3  " + inputType + "  4";
				((Control)label1).Text = "5  " + inputType + "  6";
				((Control)label5).Text = "7  " + inputType + "  8";
				inputType = getInputType(mDeviceStatusNew, 2);
				((Control)label4).Text = "9  " + inputType + " 10";
				((Control)label3).Text = "11 " + inputType + " 12";
				((Control)label6).Text = "13 " + inputType + " 14";
				((Control)label7).Text = "15 " + inputType + " 16";
				inputType = getInputType(mDeviceStatusNew, 3);
				((Control)label8).Text = "17 " + inputType + " 18";
				((Control)label9).Text = "19 " + inputType + " 20";
				((Control)label10).Text = "21 " + inputType + " 22";
				((Control)label11).Text = "23 " + inputType + " 24";
			});
		}

		private void DeviceLevels_onUpdate()
		{
			List<global::VUMeter.VUMeter> list = ControlsDictionary["VUMeter.VUMeter"].Values.Select((Control c) => (global::VUMeter.VUMeter)(object)c).ToList();
			foreach (global::VUMeter.VUMeter item in list)
			{
				int num = Convert.ToInt16(((Control)item).Tag);
				double d = DInterface.LevelMeterData[num] / 0.916;
				double num2 = 20.0 * Math.Log10(d);
				if (num2 < -63.0)
				{
					num2 = -63.0;
				}
				item.NewValue = 63 + (int)num2;
			}
		}

		private void fader_OnMove(object sender, SliderMoveEventArgs args)
		{
			if (!mConnected || args.movedBy == 0.0)
			{
				return;
			}
			fader fader = (fader)sender;
			fader fader2 = (fader)(object)getLinked((Control)(object)fader);
			MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)fader).Tag.ToString());
			double num = 0.0;
			if (((Control)fader).Name == "CrossFader")
			{
				if (matrixControl != null)
				{
					double num2 = args.currentValue / 127.0 * 100.0;
					matrixControl.ScreenText = ((int)(0.0 - num2)).ToString();
				}
				num = args.currentValue;
			}
			else
			{
				num = args.currentValue;
				if (matrixControl != null)
				{
					matrixControl.ScreenText = ((num > (double)fader.MinDBValue) ? Math.Round(num, 1).ToString("0.0").PadLeft(matrixControl.maxCharactersPerLine) : "-oo".PadLeft(matrixControl.maxCharactersPerLine));
				}
			}
			if (num < -63.0)
			{
				num = -127.0;
			}
			int iFeatId = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? fader.USBFunctionBlockId : fader.AVCFeatureFunctionBlockId);
			CallBuffer.addCall(DInterface.SetChannelInputMonitorVol, 0, iFeatId, (E_Channel)fader.Channel, num);
			((Control)fader).Refresh();
			if (fader2 == null)
			{
				return;
			}
			int num3 = Convert.ToInt16(((Control)fader).Tag);
			int num4 = Convert.ToInt16(((Control)fader2).Tag);
			string key = ((num3 > num4) ? (num4 + "_" + num3) : (num3 + "_" + num4));
			LinkedChannels linkedChannels = mLinkedChannels[key];
			if (linkedChannels.Linked)
			{
				((Control)fader2).Refresh();
				double num5 = 0.0;
				double num6 = ((num3 > num4) ? (linkedChannels.LevelLeft - linkedChannels.LevelRight) : (linkedChannels.LevelRight - linkedChannels.LevelLeft));
				num5 = num + num6;
				if (num5 > (double)fader2.MaxDBValue)
				{
					num5 = fader2.MaxDBValue;
				}
				if (num5 < (double)fader2.MinDBValue)
				{
					num5 = fader2.MinDBValue;
				}
				fader2.setFader(num5);
				MatrixControl matrixControl2 = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)fader2).Tag.ToString());
				matrixControl2.ScreenText = ((num5 > (double)fader2.MinDBValue) ? num5.ToString("0.0").PadLeft(matrixControl2.maxCharactersPerLine) : "-oo".PadLeft(matrixControl2.maxCharactersPerLine));
				iFeatId = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? fader2.USBFunctionBlockId : fader2.AVCFeatureFunctionBlockId);
				CallBuffer.addCall(DInterface.SetChannelInputMonitorVol, 0, iFeatId, (E_Channel)fader2.Channel, num5);
			}
		}

		private void autoMoveFader(object sender, SliderMoveEventArgs args)
		{
			fader fader = (fader)sender;
			Convert.ToInt16(((Control)fader).Tag);
			MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)fader).Tag.ToString());
			if (matrixControl != null)
			{
				matrixControl.ScreenText = ((args.currentValue > (double)fader.MinDBValue) ? args.currentValue.ToString("0.0").PadLeft(matrixControl.maxCharactersPerLine) : "-oo".PadLeft(matrixControl.maxCharactersPerLine));
			}
			fader.setFader(args.currentValue);
			((Control)fader).Refresh();
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
				break;
			case "FR":
				mHoldPeak = true;
				miHF.Checked = !miFR.Checked;
				mPeakHoldForever = false;
				mPeakHoldFastRelease = true;
				break;
			}
			setPeakHold();
		}

		private void setPeakHold()
		{
		}

		private void muteChannel(CPushButton muteButton)
		{
			if (mConnected)
			{
				int iFeatId = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? muteButton.USBFunctionBlockId : muteButton.AVCFeatureFunctionBlockId);
				CallBuffer.addCall(DInterface.setChannelInputMonitorMute, 0, iFeatId, (E_Channel)muteButton.Channel, muteButton.State);
				writeSettingToRegistry(muteButton);
			}
		}

		private Control getLinked(Control cControl)
		{
			int num = Convert.ToInt16(cControl.Tag);
			string text = "";
			int num2 = -1;
			if (num % 2 == 0)
			{
				num2 = num + 1;
				text = num + "_" + num2;
			}
			else
			{
				num2 = num - 1;
				text = num2 + "_" + num;
			}
			if (!mLinkedChannels.ContainsKey(text))
			{
				return null;
			}
			if (!mLinkedChannels[text].Linked)
			{
				return null;
			}
			string text2 = ((object)cControl).GetType().ToString();
			if (cControl.Name.IndexOf("mute") != -1)
			{
				return (Control)(object)mMuteButtonArray[num2];
			}
			if (cControl.Name.IndexOf("solo") != -1)
			{
				return (Control)(object)mSoloButtonArray[num2];
			}
			if (text2 == "Fader.fader")
			{
				return (Control)(object)mFaderArray[num2];
			}
			return null;
		}

		private void Pan_OnRotate(object sender, double RotateAngle)
		{
			long num = 0L;
			if (mConnected)
			{
				ControlKnob controlKnob = (ControlKnob)sender;
				Convert.ToInt16(((Control)controlKnob).Tag);
				if (RotateAngle != 0.0)
				{
					float num2 = controlKnob.MaxValue - controlKnob.MinValue;
					float num3 = (float)controlKnob.Value / num2;
					num = -127 + Convert.ToInt16(254.0 * (double)num3);
				}
				MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", ((Control)controlKnob).Tag.ToString());
				matrixControl.ScreenText = ((num == 0) ? " " : ((num < 0) ? "L" : "R")) + Math.Abs(num).ToString().PadLeft(matrixControl.maxCharactersPerLine - 1);
				int iFeatId = ((mProps.ConnectionType == E_CONN_TYPE.eUSB2) ? controlKnob.USBFunctionBlockId : controlKnob.AVCFeatureFunctionBlockId);
				CallBuffer.addCall(DInterface.setChannelInputMonitorPan, 0, iFeatId, (E_Channel)controlKnob.Channel, num * -1);
			}
		}

		private void Pan_OnActivate(object sender)
		{
			ControlKnob controlKnob = (ControlKnob)sender;
			int result = -1;
			string text = ((Control)controlKnob).Tag.ToString();
			if (int.TryParse(text, out result))
			{
				activeChannelNumber = result;
			}
			MatrixControl matrixControl = (MatrixControl)(object)getControlByTypeAndTag("MatrixLib.MatrixControl", text);
			matrixControl.ScreenText = ((controlKnob.Angle == 0) ? " " : ((controlKnob.Angle < 0) ? "L" : "R")) + Math.Abs(controlKnob.Angle).ToString().PadLeft(matrixControl.maxCharactersPerLine - 1);
		}

		private void Pan_OnDeActivate(object sender)
		{
			activeChannelNumber = -1;
		}

		private void CRMMuteButton_OnPush(object sender, bool state)
		{
			if (mConnected)
			{
				CallBuffer.addCall(DInterface.setChannelInputMonitorMute, 0, 151, E_Channel.eMaster, state);
				CallBuffer.addCall(DInterface.setChannelInputMonitorMute, 0, 152, E_Channel.eMaster, state);
			}
		}

		private void muteButton_OnPush(object sender, bool state)
		{
			if (!mConnected)
			{
				return;
			}
			CPushButton cPushButton = (CPushButton)sender;
			muteChannel(cPushButton);
			if (cPushButton.Channel == CPushButton.E_Channel.eMaster)
			{
				return;
			}
			CPushButton cPushButton2 = (CPushButton)(object)getLinked((Control)(object)cPushButton);
			muteButtonStateArray[Convert.ToInt16(((Control)cPushButton).Tag)] = state;
			int num = Convert.ToInt16(((Control)cPushButton).Tag);
			if (mSoloButtonArray.Length <= num)
			{
				return;
			}
			mSoloButtonArray[num].State = false;
			CPushButton cPushButton3 = (CPushButton)(object)getLinked((Control)(object)mSoloButtonArray[num]);
			if (cPushButton2 != null)
			{
				cPushButton2.State = state;
				muteChannel(cPushButton2);
				muteButtonStateArray[Convert.ToInt16(((Control)cPushButton2).Tag)] = state;
				if (cPushButton3 != null)
				{
					cPushButton3.State = mSoloButtonArray[num].State;
				}
			}
		}

		private void soloButton_OnPush(object sender, bool state)
		{
			if (!mConnected)
			{
				return;
			}
			CPushButton cPushButton = (CPushButton)sender;
			CPushButton cPushButton2 = (CPushButton)(object)getLinked((Control)(object)cPushButton);
			int num = Convert.ToInt16(((Control)cPushButton).Tag);
			CPushButton cPushButton3 = mMuteButtonArray[num];
			CPushButton cPushButton4 = (CPushButton)(object)getLinked((Control)(object)cPushButton3);
			if (cPushButton2 != null)
			{
				cPushButton2.State = cPushButton.State;
			}
			if (cPushButton.State)
			{
				cPushButton3.State = false;
				muteChannel(cPushButton3);
				if (cPushButton4 != null)
				{
					cPushButton4.State = false;
					muteChannel(cPushButton4);
				}
			}
			int num2 = 0;
			for (int i = 0; i < mSoloButtonArray.Length; i++)
			{
				if (mSoloButtonArray[i].State)
				{
					num2++;
				}
			}
			if (num2 >= 1 && !cPushButton.State)
			{
				mMuteButtonArray[num].State = true;
				muteChannel(mMuteButtonArray[num]);
				if (cPushButton2 != null)
				{
					cPushButton4.State = true;
					cPushButton2.State = false;
					muteChannel(cPushButton4);
				}
				return;
			}
			if (num2 == 0)
			{
				for (int j = 0; j < mMuteButtonArray.Length - 1; j++)
				{
					if (Convert.ToInt16(((Control)mMuteButtonArray[j]).Tag) < mMaxChannels)
					{
						mMuteButtonArray[j].State = muteButtonStateArray[j];
						muteChannel(mMuteButtonArray[j]);
					}
				}
				return;
			}
			for (int k = 0; k < mSoloButtonArray.Length; k++)
			{
				if (Convert.ToInt16(((Control)mMuteButtonArray[k]).Tag) < mMaxChannels && Convert.ToInt16(((Control)mSoloButtonArray[k]).Tag) < mMaxChannels && k != num)
				{
					if (cPushButton.State && !mSoloButtonArray[k].State)
					{
						mMuteButtonArray[k].setState(bState: true);
						muteChannel(mMuteButtonArray[k]);
					}
					else if (!cPushButton.State)
					{
						mMuteButtonArray[k].setState(bState: false);
						muteChannel(mMuteButtonArray[k]);
					}
				}
			}
		}

		private void linkButton_OnPush(object sender, bool state)
		{
			if (mConnected)
			{
				CPushButton cPushButton = (CPushButton)sender;
				string key = ((Control)cPushButton).Tag.ToString();
				mLinkedChannels[key].Linked = cPushButton.State;
				if (mLinkedChannels[key].Linked)
				{
					double currentValue = mFaderArray[mLinkedChannels[key].IdLeft].getCurrentValue().currentValue;
					double currentValue2 = mFaderArray[mLinkedChannels[key].IdRight].getCurrentValue().currentValue;
					mLinkedChannels[key].setLevels(currentValue, currentValue2);
				}
			}
		}

		public Control getControlByTypeAndTag(string sType, string sTag)
		{
			foreach (string key in ControlsDictionary[sType].Keys)
			{
				Control val = ControlsDictionary[sType][key];
				if (val.Tag != null && val.Tag.ToString() == sTag)
				{
					return val;
				}
			}
			return null;
		}

		private bool isInSync(long deviceStatus)
		{
			return (deviceStatus & 1) != 0;
		}

		private string getInputType(long deviceStatus, int iOctet)
		{
			if (mVersionInfo.FirmwareVersionInt != 0 && mVersionInfo.FirmwareVersionInt < 3660)
			{
				return "Line";
			}
			string text = "";
			long num = (deviceStatus & 0x700) >> 8;
			if (num > 3 || num < 0)
			{
				goto IL_0079;
			}
			switch (num)
			{
			case 0L:
				break;
			case 1L:
				goto IL_0061;
			case 2L:
				goto IL_0069;
			case 3L:
				goto IL_0071;
			default:
				goto IL_0079;
			}
			text = "Line";
			goto IL_007f;
			IL_0069:
			text = "ADAT";
			goto IL_007f;
			IL_0061:
			text = "MADI";
			goto IL_007f;
			IL_0079:
			text = "????";
			goto IL_007f;
			IL_007f:
			int num2 = 1 << iOctet;
			if ((deviceStatus & num2) == 0)
			{
				return text;
			}
			return "Line";
			IL_0071:
			text = "NET";
			goto IL_007f;
		}

		private string translateSyncSource(int SyncSourceID)
		{
			return (from ss in mSyncSourcesList
				where ss.SyncSourceID == SyncSourceID
				select ss.Name).FirstOrDefault();
		}

		private string translateAudioMode(E_SelectorPosAudioMode audioMode)
		{
			if (audioMode == E_SelectorPosAudioMode.eAudioModeStandard)
			{
				return "S/PDIF";
			}
			return "unknown";
		}

		public string ReadRegistry(string companyName, string appName, string connectionType, int functID, string controlType, string controlName)
		{
			try
			{
				RegistryKey currentUser = Registry.CurrentUser;
				return currentUser.OpenSubKey(companyName)?.OpenSubKey(appName)?.OpenSubKey(connectionType)?.OpenSubKey(functID.ToString())?.OpenSubKey(controlType)?.OpenSubKey(controlName)?.GetValue(controlName.ToUpper()).ToString();
			}
			catch
			{
				return null;
			}
		}

		public bool WriteRegistry(string companyName, string appName, string connectionType, int functID, string controlType, string controlName, object Value)
		{
			//IL_0061: Unknown result type (might be due to invalid IL or missing references)
			try
			{
				RegistryKey currentUser = Registry.CurrentUser;
				RegistryKey registryKey = currentUser.CreateSubKey(companyName);
				RegistryKey registryKey2 = registryKey.CreateSubKey(appName);
				RegistryKey registryKey3 = registryKey2.CreateSubKey(connectionType);
				RegistryKey registryKey4 = registryKey3.CreateSubKey(functID.ToString());
				RegistryKey registryKey5 = registryKey4.CreateSubKey(controlType);
				RegistryKey registryKey6 = registryKey5.CreateSubKey(controlName);
				registryKey6.SetValue(controlName.ToUpper(), Value);
				return true;
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message);
				return false;
			}
		}

		private List<Control> GetAllControls(Control container, List<Control> list)
		{
			//IL_0014: Unknown result type (might be due to invalid IL or missing references)
			//IL_001a: Expected O, but got Unknown
			foreach (Control item in (ArrangedElementCollection)container.Controls)
			{
				Control val = item;
				list.Add(val);
				if (((ArrangedElementCollection)val.Controls).Count > 0)
				{
					list = GetAllControls(val, list);
				}
			}
			return list;
		}

		private List<Control> GetAllControls(Control container)
		{
			return GetAllControls(container, new List<Control>());
		}

		private int convertAM824FreqToInt(ESFI_AM824_MBSamplingFreq eFDF)
		{
			return eFDF switch
			{
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_32k => 32000, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_44_1k => 44100, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_48k => 48000, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_88_2k => 88200, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_96k => 96000, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_176_4k => 176400, 
				ESFI_AM824_MBSamplingFreq.eSFIAM824SF_192k => 192000, 
				_ => -1, 
			};
		}

		private void btnSettings_Click(object sender, EventArgs e)
		{
			LayoutMixerPanel(m_eWindowMode);
		}

		private void LayoutMixerPanel(E_WINDOW_MODE winMode)
		{
			switch (winMode)
			{
			case E_WINDOW_MODE.eMixer:
				((Control)pMixerPanel).Visible = false;
				((Control)settingsTab).Visible = true;
				((Control)btnSettings).Text = "Mixer";
				((Control)this).Width = ((Control)settingsTab).Width + 6;
				((Control)settingsTab).Top = 48;
				((Control)settingsTab).Left = 0;
				((Control)pInfoDisplay).Top = 4;
				((Control)pInfoDisplay).Left = 343;
				((Control)btnSettings).Top = 3;
				((Control)btnSettings).Left = 585;
				m_eWindowMode = E_WINDOW_MODE.eSettings;
				initializeSettingsPage();
				break;
			case E_WINDOW_MODE.eSettings:
				((Control)pMixerPanel).Visible = true;
				((Control)settingsTab).Visible = false;
				((Control)btnSettings).Text = "Settings";
				((Control)this).Width = 1000;
				((Control)pMixerPanel).Top = 48;
				((Control)pMixerPanel).Left = 0;
				((Control)pInfoDisplay).Top = 4;
				((Control)pInfoDisplay).Left = 678;
				((Control)btnSettings).Top = 3;
				((Control)btnSettings).Left = 920;
				m_eWindowMode = E_WINDOW_MODE.eMixer;
				break;
			}
			((Form)this).Activate();
			((Control)this).BringToFront();
		}

		private void initializeSettingsPage()
		{
			if (!mConnected)
			{
				return;
			}
			List<int> sampleRateInfo = DInterface.GetSampleRateInfo(0);
			List<sampleRate> list = new List<sampleRate>();
			foreach (int item in sampleRateInfo)
			{
				list.Add(new sampleRate(((double)item / 1000.0).ToString("00.0 kHz"), item));
			}
			cbSamplerate.DataSource = list;
			((ListControl)cbSamplerate).DisplayMember = "Name";
			((ListControl)cbSamplerate).ValueMember = "Value";
			((ListControl)cbSamplerate).SelectedValue = mDeviceStatus.uSampleRate;
			DInterface.SetSampleRateSelectionMode(E_SampleRateSelectionMode.Manual);
			mSyncSourcesList = DInterface.GetSyncSourceInfo(0);
			cbSyncSource.DataSource = mSyncSourcesList;
			((ListControl)cbSyncSource).DisplayMember = "Name";
			((ListControl)cbSyncSource).ValueMember = "SyncSourceID";
			((ListControl)cbSyncSource).SelectedValue = mDeviceStatus.iSyncSource;
			if (mSyncSourcesList.Count() == 1)
			{
				((Control)cbSyncSource).Enabled = false;
				((Control)btn_setSyncSource).Visible = false;
			}
			((Control)txtDeviceNickname).Text = mProps.Nickname;
			m_bIncludeDeviceNameInAsioName = DInterface.GetPrependDeviceNameToDisplayName(0);
			cbxAsioDisplayName1.Checked = m_bIncludeDeviceNameInAsioName;
			cbxAsioDisplayName2.Checked = m_bIncludeDeviceNameInAsioName;
			setBufferSettings();
			getChannelNames();
			setAboutPage();
		}

		private void ClearSettingsPage()
		{
			cbSamplerate.DataSource = null;
			cbSyncSource.DataSource = null;
			((Control)txtDeviceNickname).Text = "Not connected";
			dgInputChannels.DataSource = null;
			dgOutputChannels.DataSource = null;
			((Control)lblAsioDropOuts).Text = "0";
			((Control)lblDeviceFirmwareVersion).Text = "--";
			((Control)lblDeviceSerialNumber).Text = "--";
			((Control)lblDriverVersion).Text = "--";
			((Control)lblDeviceStatus).Text = "Not connected";
		}

		private void setAboutPage()
		{
			((Control)label44).Visible = mConnected;
			((Control)lblDeviceSerialNumber).Visible = mConnected;
			((Control)lblStrFirmwareVersion).Visible = mConnected;
			((Control)lblDeviceFirmwareVersion).Visible = mConnected;
			if (mConnected)
			{
				((Control)lblDeviceFirmwareVersion).Text = mVersionInfo.FirmwareVersion;
				((Control)lblDeviceSerialNumber).Text = mProps.sDeviceSerialNo;
				((Control)lblDriverVersion).Text = mVersionInfo.DriverVersion;
			}
			((Control)lblDeviceStatus).Text = "connected";
		}

		private void setBufferSettings()
		{
			//IL_0010: Unknown result type (might be due to invalid IL or missing references)
			//IL_001a: Expected O, but got Unknown
			if (!((Control)this).IsHandleCreated)
			{
				return;
			}
			((Control)this).BeginInvoke((Delegate)(MethodInvoker)delegate
			{
				if (!((Control)cbxStreamBufferDepth).Focused && !((Control)cbxAsioBufferDepth).Focused && !bufferSettingsDirty)
				{
					m_StreamBuffer = DInterface.GetStreamBufferConfiguration(0);
					m_AsioBuffer = DInterface.GetAsioBufferConfiguration(0);
					((ListControl)cbxStreamBufferDepth).SelectedValue = m_StreamBuffer.StreamBufferSetting;
					((ListControl)cbxAsioBufferDepth).SelectedValue = m_AsioBuffer.CurrentSamples;
				}
			});
		}

		private void getChannelNames()
		{
			dgInputChannels.DataSource = DInterface.getChannelProperties(0, E_DIRECTION.Direction_Input, mProps.Nickname, mMaxChannels, m_bIncludeDeviceNameInAsioName);
			dgInputChannels.AllowUserToResizeColumns = true;
			dgInputChannels.RowHeadersVisible = false;
			DataGridViewColumn val = dgInputChannels.Columns["DeviceName"];
			val.HeaderText = "Device name";
			val.DisplayIndex = 0;
			val.Width = ((Control)dgInputChannels).Width / 3 - 6;
			((DataGridViewBand)val).ReadOnly = true;
			((DataGridViewBand)val).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
			DataGridViewColumn val2 = dgInputChannels.Columns["NickName"];
			val2.HeaderText = "Channel name";
			val2.DisplayIndex = 1;
			val2.Width = ((Control)dgInputChannels).Width / 3 - 6;
			((DataGridViewBand)val2).ReadOnly = false;
			((DataGridViewBand)val2).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
			DataGridViewColumn val3 = dgInputChannels.Columns["AsioDisplayName"];
			val3.HeaderText = "ASIO display name";
			val3.DisplayIndex = 2;
			val3.Width = ((Control)dgInputChannels).Width / 3 - 6;
			((DataGridViewBand)val3).ReadOnly = true;
			((DataGridViewBand)val3).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
			dgOutputChannels.DataSource = DInterface.getChannelProperties(0, E_DIRECTION.Direction_Output, mProps.Nickname, mMaxChannels, m_bIncludeDeviceNameInAsioName);
			dgOutputChannels.AllowUserToOrderColumns = true;
			dgOutputChannels.RowHeadersVisible = false;
			DataGridViewColumn val4 = dgOutputChannels.Columns["DeviceName"];
			val4.HeaderText = "Device name";
			val4.DisplayIndex = 0;
			val4.Width = ((Control)dgOutputChannels).Width / 3 - 6;
			((DataGridViewBand)val4).ReadOnly = true;
			((DataGridViewBand)val4).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
			DataGridViewColumn val5 = dgOutputChannels.Columns["NickName"];
			val5.HeaderText = "Channel Name";
			val5.DisplayIndex = 1;
			val5.Width = ((Control)dgOutputChannels).Width / 3 - 6;
			((DataGridViewBand)val5).ReadOnly = false;
			((DataGridViewBand)val5).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
			DataGridViewColumn val6 = dgOutputChannels.Columns["AsioDisplayName"];
			val6.HeaderText = "ASIO display name";
			val6.DisplayIndex = 2;
			val6.Width = ((Control)dgOutputChannels).Width / 3 - 6;
			((DataGridViewBand)val6).ReadOnly = true;
			((DataGridViewBand)val6).DefaultCellStyle.ForeColor = Color.FromArgb(0, 0, 0);
		}

		private void btnSetSampleRate_Click(object sender, EventArgs e)
		{
			if (mConnected)
			{
				int value = ((sampleRate)cbSamplerate.SelectedItem).Value;
				DInterface.setSampleRate(0, value);
			}
		}

		private void btnSetSyncSource_Click(object sender, EventArgs e)
		{
			if (mConnected)
			{
				SyncSource syncSource = (SyncSource)cbSyncSource.SelectedItem;
				DInterface.setSyncSource(0, mProps.DeviceID, syncSource.SyncSourceID, syncSource.DeviceSyncMode);
			}
		}

		private void btnSetDeviceNickname_Click(object sender, EventArgs e)
		{
			//IL_0027: Unknown result type (might be due to invalid IL or missing references)
			//IL_003e: Unknown result type (might be due to invalid IL or missing references)
			if (mConnected)
			{
				string text = ((Control)txtDeviceNickname).Text;
				if (text == "")
				{
					MessageBox.Show("Please assign a device name!");
				}
				else if (text.Length > 35)
				{
					MessageBox.Show("Device name too long! (35 characters maximum)");
				}
				DInterface.setDeviceNickName(text, 0);
				mProps = DInterface.GetDeviceProps(0);
				setUiInfo();
				getChannelNames();
			}
		}

		private void cbxAsioDisplayName1_CheckedChanged(object sender, EventArgs e)
		{
			if (mConnected)
			{
				cbxAsioDisplayName2.Checked = cbxAsioDisplayName1.Checked;
				DInterface.PrependDeviceNameToDisplayName(0, cbxAsioDisplayName1.Checked);
				m_bIncludeDeviceNameInAsioName = cbxAsioDisplayName1.Checked;
				getChannelNames();
			}
		}

		private void cbxAsioDisplayName2_CheckedChanged(object sender, EventArgs e)
		{
			if (mConnected)
			{
				cbxAsioDisplayName1.Checked = cbxAsioDisplayName2.Checked;
				DInterface.PrependDeviceNameToDisplayName(0, cbxAsioDisplayName1.Checked);
				m_bIncludeDeviceNameInAsioName = cbxAsioDisplayName1.Checked;
				getChannelNames();
			}
		}

		private void dgChannels_CellEndEdit(object sender, DataGridViewCellEventArgs e)
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0061: Unknown result type (might be due to invalid IL or missing references)
			DataGridViewRow val = ((DataGridView)sender).Rows[e.RowIndex];
			DataGridViewCell val2 = val.Cells[e.ColumnIndex];
			ChannelProperties channelProperties = (ChannelProperties)val.DataBoundItem;
			string text = (string)val2.Value;
			DInterface.SetChannelNickName(0, text, channelProperties.ChannelID, channelProperties.Direction, channelProperties.DeviceID);
			DataGridViewCell val3 = ((DataGridView)sender).Rows[e.RowIndex].Cells[e.ColumnIndex + 1];
			val3.Value = (m_bIncludeDeviceNameInAsioName ? (mProps.Nickname + " - " + text) : text);
		}

		private void btnSetAsioBufferSize_Click(object sender, EventArgs e)
		{
			if (mConnected)
			{
				KeyValuePair<string, E_StreamingMode> keyValuePair = (KeyValuePair<string, E_StreamingMode>)cbxStreamBufferDepth.SelectedItem;
				KeyValuePair<string, uint> keyValuePair2 = (KeyValuePair<string, uint>)cbxAsioBufferDepth.SelectedItem;
				if (checkBufferSizeCombination((uint)keyValuePair.Value, keyValuePair2.Value))
				{
					DInterface.SetAsioBufferConfiguration((int)keyValuePair2.Value);
					m_AsioBuffer.CurrentSamples = keyValuePair2.Value;
					DInterface.SetStreamBufferConfiguration((int)keyValuePair.Value);
					m_StreamBuffer.StreamBufferSetting = keyValuePair.Value;
					bufferSettingsDirty = false;
				}
				else
				{
					((ListControl)cbxAsioBufferDepth).SelectedValue = m_AsioBuffer.CurrentSamples;
					((ListControl)cbxAsioBufferDepth).SelectedValue = m_StreamBuffer.StreamBufferSetting;
				}
				bufferSettingsDirty = false;
				((Control)btnSetAsioBufferSize).Enabled = false;
			}
		}

		private bool checkBufferSizeCombination(uint streamingBufferDepth, uint asioBufferDepth)
		{
			//IL_003f: Unknown result type (might be due to invalid IL or missing references)
			int num = DInterface.getSampleRate(0);
			uint num2 = streamingBufferDepth * (uint)num;
			num2 /= 1000;
			num2 *= 11;
			num2 /= 10;
			if (num2 > asioBufferDepth)
			{
				string text = $"At {num} Hz sampling rate the selected ASIO buffer size is too small for the current USB streaming mode. To avoid audio distortions, the selected ASIO buffer size should be larger than {num2} samples.";
				MessageBox.Show(text);
				return false;
			}
			return true;
		}

		private void MixerPanel_Shown(object sender, EventArgs e)
		{
			mLocation = ((Form)this).Location;
		}

		private void MixerPanel_LocationChanged(object sender, EventArgs e)
		{
			mLocation = ((Form)this).Location;
		}

		private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Expected O, but got Unknown
			LinkLabel val = (LinkLabel)sender;
			Process.Start(((Control)val).Text);
		}

		private void fader_OnActivate(object sender, SliderMoveEventArgs moveEventArgs)
		{
			int result = 0;
			if (int.TryParse(((Control)(fader)sender).Tag.ToString(), out result))
			{
				activeChannelNumber = result;
			}
			mPauseSettingsPolling = true;
		}

		private void fader_OnDeactivate(object sender, SliderMoveEventArgs moveEventArgs)
		{
			activeChannelNumber = -1;
			mPauseSettingsPolling = false;
		}

		private void BufferDepth_SelectedIndexChanged(object sender, EventArgs e)
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			if (((Control)(ComboBox)sender).Focused)
			{
				bufferSettingsDirty = true;
				((Control)btnSetAsioBufferSize).Enabled = true;
			}
		}

		private void settingsTab_SelectedIndexChanged(object sender, EventArgs e)
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			//IL_0007: Expected O, but got Unknown
			TabControl val = (TabControl)sender;
			int selectedIndex = val.SelectedIndex;
			Color color = Color.FromArgb(2134456633);
			Color color2 = Color.FromArgb(2131232776);
			for (int i = 0; i < val.TabPages.Count; i++)
			{
				((Control)val.TabPages[i]).BackColor = ((i == selectedIndex) ? color : color2);
			}
		}
	}
	internal class functionCallBuffer
	{
		public delegate void fCallback();

		private TraceSource TrcSource = new TraceSource("Trace Source");

		private SourceSwitch TrcSwitch = new SourceSwitch("Trace Switch");

		private List<functionCallContainer> mFuncBuffer = new List<functionCallContainer>();

		private bool deviceBusy;

		private System.Timers.Timer cueTimer;

		private readonly object syncLock = new object();

		private Thread ExecCueThread;

		private ManualResetEventSlim mExecCueThreadPauseEvent;

		private bool mRunning = true;

		private bool mBusySending;

		public bool BusySending => mBusySending;

		public functionCallBuffer()
		{
			ExecCueThread = new Thread(exeCueThread);
			mExecCueThreadPauseEvent = new ManualResetEventSlim(initialState: false);
			ExecCueThread.Start();
			cueTimer = new System.Timers.Timer(50.0);
			cueTimer.Elapsed += execCuedTimerElapsed;
			cueTimer.Start();
		}

		public void addCall(MixerPanel.functionCallerDbl delegateFunction, int iDeviceID, int iFeatId, E_Channel eChannel, double value)
		{
			lock (syncLock)
			{
				functionCallContainer item = new functionCallContainer(delegateFunction, iDeviceID, iFeatId, eChannel, value);
				mFuncBuffer.Add(item);
			}
		}

		public void addCall(MixerPanel.functionCallerLng delegateFunction, int iDeviceID, int iFeatId, E_Channel eChannel, long value)
		{
			lock (syncLock)
			{
				functionCallContainer item = new functionCallContainer(delegateFunction, iDeviceID, iFeatId, eChannel, value);
				mFuncBuffer.Add(item);
			}
		}

		public void addCall(MixerPanel.functionCallerInt delegateFunction, int iDeviceID, int iFeatId, E_Channel eChannel, int value)
		{
			lock (syncLock)
			{
				functionCallContainer item = new functionCallContainer(delegateFunction, iDeviceID, iFeatId, eChannel, value);
				mFuncBuffer.Add(item);
			}
		}

		public void addCall(MixerPanel.functionCallerBool delegateFunction, int iDeviceID, int iFeatId, E_Channel eChannel, bool value)
		{
			lock (syncLock)
			{
				functionCallContainer item = new functionCallContainer(delegateFunction, iDeviceID, iFeatId, eChannel, value);
				mFuncBuffer.Add(item);
			}
		}

		private void execCuedTimerElapsed(object source, ElapsedEventArgs e)
		{
			if (!deviceBusy && mFuncBuffer.Count() > 0)
			{
				ExeCueThreadResume();
			}
		}

		private void exeCueThread()
		{
			object obj = default(object);
			while (mRunning)
			{
				mExecCueThreadPauseEvent.Wait(-1);
				while (mFuncBuffer.Count() > 0)
				{
					mBusySending = true;
					bool lockTaken = false;
					try
					{
						Monitor.Enter(obj = syncLock, ref lockTaken);
						functionCallContainer funcCallCont = mFuncBuffer.Last();
						if (funcCallCont == null)
						{
							return;
						}
						switch (funcCallCont.m_eValueType)
						{
						case eValueType.eDouble:
						{
							MixerPanel.functionCallerDbl fFunctionDbl = funcCallCont.m_fFunctionDbl;
							fFunctionDbl.BeginInvoke(funcCallCont.m_iDeviceID, funcCallCont.m_iFeatId, funcCallCont.m_eChannel, funcCallCont.m_dValue, execCuedFunc_callback, null);
							break;
						}
						case eValueType.eLong:
						{
							MixerPanel.functionCallerLng fFunctionLng = funcCallCont.m_fFunctionLng;
							fFunctionLng.BeginInvoke(funcCallCont.m_iDeviceID, funcCallCont.m_iFeatId, funcCallCont.m_eChannel, funcCallCont.m_lValue, execCuedFunc_callback, null);
							break;
						}
						case eValueType.eInt:
						{
							MixerPanel.functionCallerInt fFunctionInt = funcCallCont.m_fFunctionInt;
							fFunctionInt.BeginInvoke(funcCallCont.m_iDeviceID, funcCallCont.m_iFeatId, funcCallCont.m_eChannel, funcCallCont.m_iValue, execCuedFunc_callback, null);
							break;
						}
						case eValueType.eBool:
						{
							MixerPanel.functionCallerBool fFunctionBool = funcCallCont.m_fFunctionBool;
							fFunctionBool.BeginInvoke(funcCallCont.m_iDeviceID, funcCallCont.m_iFeatId, funcCallCont.m_eChannel, funcCallCont.m_bValue, execCuedFunc_callback, null);
							break;
						}
						}
						mFuncBuffer = mFuncBuffer.Where((functionCallContainer p) => p.m_iDeviceID != funcCallCont.m_iDeviceID || p.m_iFeatId != funcCallCont.m_iFeatId || p.m_eChannel != funcCallCont.m_eChannel).ToList();
						Thread.Sleep(5);
					}
					finally
					{
						if (lockTaken)
						{
							Monitor.Exit(obj);
						}
					}
					mBusySending = false;
				}
				ExeCueThreadPause();
			}
		}

		public void Stop()
		{
			ExeCueThreadStop();
		}

		private void ExeCueThreadPause()
		{
			mExecCueThreadPauseEvent.Reset();
		}

		private void ExeCueThreadResume()
		{
			mExecCueThreadPauseEvent.Set();
		}

		private void ExeCueThreadStop()
		{
			mRunning = false;
			mExecCueThreadPauseEvent.Set();
		}

		public void execCuedFunc_callback(IAsyncResult ar)
		{
			deviceBusy = false;
		}
	}
	internal class functionCallContainer
	{
		public MixerPanel.functionCallerDbl m_fFunctionDbl { get; set; }

		public MixerPanel.functionCallerLng m_fFunctionLng { get; set; }

		public MixerPanel.functionCallerInt m_fFunctionInt { get; set; }

		public MixerPanel.functionCallerBool m_fFunctionBool { get; set; }

		public int m_iDeviceID { get; set; }

		public int m_iFeatId { get; set; }

		public E_Channel m_eChannel { get; set; }

		public double m_dValue { get; set; }

		public long m_lValue { get; set; }

		public int m_iValue { get; set; }

		public bool m_bValue { get; set; }

		public eValueType m_eValueType { get; set; }

		public functionCallContainer(MixerPanel.functionCallerDbl dFunc, int iDeviceID, int iFeatId, E_Channel eChannel, double value)
		{
			m_fFunctionDbl = dFunc;
			m_iDeviceID = iDeviceID;
			m_iFeatId = iFeatId;
			m_eChannel = eChannel;
			m_dValue = value;
			m_eValueType = eValueType.eDouble;
		}

		public functionCallContainer(MixerPanel.functionCallerLng lFunc, int iDeviceID, int iFeatId, E_Channel eChannel, long value)
		{
			m_fFunctionLng = lFunc;
			m_iDeviceID = iDeviceID;
			m_iFeatId = iFeatId;
			m_eChannel = eChannel;
			m_lValue = value;
			m_eValueType = eValueType.eLong;
		}

		public functionCallContainer(MixerPanel.functionCallerInt iFunc, int iDeviceID, int iFeatId, E_Channel eChannel, int value)
		{
			m_fFunctionInt = iFunc;
			m_iDeviceID = iDeviceID;
			m_iFeatId = iFeatId;
			m_eChannel = eChannel;
			m_iValue = value;
			m_eValueType = eValueType.eInt;
		}

		public functionCallContainer(MixerPanel.functionCallerBool bFunc, int iDeviceID, int iFeatId, E_Channel eChannel, bool value)
		{
			m_fFunctionBool = bFunc;
			m_iDeviceID = iDeviceID;
			m_iFeatId = iFeatId;
			m_eChannel = eChannel;
			m_bValue = value;
			m_eValueType = eValueType.eBool;
		}
	}
	internal enum eValueType
	{
		eLong,
		eDouble,
		eInt,
		eBool
	}
	public static class Constants
	{
		public const string COMPANY_NAME = "Cymatic Audio";

		public const string PRODUCT_NAME = "uTrack24";

		public const string LR16_MIXERPANEL_NAME = "uTrack24 Mixerpanel";

		public const string PROGRAMM_NAME = "uTrack24 Mixerpanel";

		public const string INTERFACE_GUID_USB = "CC50BD25-DB83-474e-96C1-C868E142432A";

		public const int NUMBER_OF_MUTEBUTTONS = 25;

		public const int NUMBER_OF_SOLOBUTTONS = 24;

		public const int NUMBER_OF_FADERS = 26;

		public const int NUMBER_OF_LEVELMETERS = 26;

		public const int NUMBER_OF_INPUT_CHANNELS = 24;

		public const int NUMBER_OF_OUTPUT_CHANNELS = 26;

		public const int COLOR_OFF = 2015237120;

		public const int COLOR_ON = -1057708271;

		public const int COLOR_TAB_SELECTED = 2134456633;

		public const int COLOR_TAB_UNSELECTED = 2131232776;

		public const int MAX_PANEL_WIDTH = 1000;

		public const int MAX_PANEL_HEIGHT = 428;

		public const int PANEL_TOP = 48;

		public const int WM_SYSCOMMAND = 274;

		public const int WM_ACTIVATEAPP = 28;

		public const int WM_STYLECHANGING = 124;

		public const int SC_MINIMIZE = 61472;

		public const int SC_MAXIMIZE = 61488;

		public const int SC_RESIZE = 61440;

		public const int SC_RESTORE = 61728;

		public const int SC_CLOSE = 61536;

		public const int ALWAYS_ON_TOP = 256;

		public const double FULL_SCALE_VAL = 0.916;
	}
	public enum E_SampleRateSelectionMode
	{
		Manual,
		Automatic
	}
	public enum E_StreamingMode
	{
		MinimumLatency = 1,
		LowLatency = 2,
		Standard = 4,
		Relaxed = 8,
		Reliable = 12,
		Safe = 16
	}
	public enum USB_EVENT_TYPE
	{
		USB_EvtType_Undefined = 0,
		USB_EvtType_BusReset = 1,
		USB_EvtType_StreamingRestarted = 2,
		USB_EvtType_DomainConfigurationChanged = 3,
		USB_EvtType_AsioBufferSizeChanged = 100
	}
}
namespace Bebob_Mixerpanel.Properties
{
	[GeneratedCode("System.Resources.Tools.StronglyTypedResourceBuilder", "4.0.0.0")]
	[CompilerGenerated]
	[DebuggerNonUserCode]
	internal class Resources
	{
		private static ResourceManager resourceMan;

		private static CultureInfo resourceCulture;

		[EditorBrowsable(EditorBrowsableState.Advanced)]
		internal static ResourceManager ResourceManager
		{
			get
			{
				if (object.ReferenceEquals(resourceMan, null))
				{
					ResourceManager resourceManager = new ResourceManager("Bebob_Mixerpanel.Properties.Resources", typeof(Resources).Assembly);
					resourceMan = resourceManager;
				}
				return resourceMan;
			}
		}

		[EditorBrowsable(EditorBrowsableState.Advanced)]
		internal static CultureInfo Culture
		{
			get
			{
				return resourceCulture;
			}
			set
			{
				resourceCulture = value;
			}
		}

		internal static Bitmap ASIObufferScale1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("ASIObufferScale1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap channel_strip_bkg
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("channel_strip_bkg", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap channel_strip_bkg_60x350
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("channel_strip_bkg_60x350", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap channel_strip_bkg_71x350
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("channel_strip_bkg_71x350", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap channel_strip_bkg_77x350
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("channel_strip_bkg_77x350", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap channel_strip_bkg_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("channel_strip_bkg_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap cross
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("cross", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap crossFader
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("crossFader", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap crossFader_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("crossFader_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap crossfader2
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("crossfader2", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap crossfaderText
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("crossfaderText", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap Cymatic_audio_powered_by_Archwave
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("Cymatic audio powered by Archwave", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap CymaticAudioLogoWithPoweredByArchwave
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("CymaticAudioLogoWithPoweredByArchwave", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleLeft
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleLeft", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleLeft1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleLeft1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleMiddle
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleMiddle", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleMiddle_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleMiddle_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleMiddle2
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleMiddle2", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleRight
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleRight", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap DBScaleRight1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("DBScaleRight1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderBackground
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderBackground", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderBackground_13px
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderBackground_13px", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderBackground1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderBackground1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderbutton
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderbutton", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderbutton1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderbutton1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderHorizontal199x16WithoutScale
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderHorizontal199x16WithoutScale", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap faderHorizontal199x16WithoutScale1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("faderHorizontal199x16WithoutScale1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap knob_new
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("knob_new", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap knob_new_indicator
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("knob_new_indicator", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap linkButton_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("linkButton_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap linkButton_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("linkButton_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap MuteButtonLeft_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("MuteButtonLeft_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap MuteButtonLeft_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("MuteButtonLeft_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap MuteButtonRight_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("MuteButtonRight_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap MuteButtonRight_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("MuteButtonRight_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap PanelBackground
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("PanelBackground", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap peak_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("peak_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap peak_narrow1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("peak_narrow1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SingleMute_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SingleMute_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SingleMute_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SingleMute_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SoloButtonLeft_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SoloButtonLeft_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SoloButtonLeft_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SoloButtonLeft_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SoloButtonRight_off
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SoloButtonRight_off", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap SoloButtonRight_on
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("SoloButtonRight_on", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap streambufferScale1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("streambufferScale1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap USBButton_off1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("USBButton_off1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap USBButton_on1
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("USBButton_on1", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Icon uTrack_Icon
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("uTrack_Icon", resourceCulture);
				return (Icon)@object;
			}
		}

		internal static Bitmap VUMeterOff_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOff_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap VUMeterOff_narrow_4px
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOff_narrow_4px", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap VUMeterOff_tiny
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOff_tiny", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap VUMeterOn_narrow
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOn_narrow", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap VUMeterOn_narrow_4px
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOn_narrow_4px", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal static Bitmap VUMeterOn_tiny
		{
			get
			{
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Expected O, but got Unknown
				object @object = ResourceManager.GetObject("VUMeterOn_tiny", resourceCulture);
				return (Bitmap)@object;
			}
		}

		internal Resources()
		{
		}
	}
}
namespace Bebob_Mixerpanel
{
	[StructLayout(LayoutKind.Sequential)]
	internal class CDriverInfo
	{
		public int CDriverInfoSize;

		public int InterfaceVersionMajor;

		public int InterfaceVersionMinor;

		public int DriverVersionMajor;

		public int DriverVersionMinor;

		public int DriverVersionSub;

		public int Flags;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CDeviceProperties
	{
		public int CDevicePropertiesSize;

		public E_CONN_TYPE ConnectionType;

		public E_DEVICE_TYPE DeviceType;

		public Guid InterfaceGuid;

		public int DeviceID;

		public int VendorID;

		public int ProductID;

		public int DeviceRank;

		[MarshalAs(UnmanagedType.BStr)]
		public string VendorName = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string ProductName = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string Nickname = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string sDeviceSerialNo = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string HardwareIdString = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string InstanceIdString = "";
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CDigitalInputState
	{
		public int CDevicePropertiesSize;

		public bool Connected;

		public ESFI_AM824_MBSamplingFreq SampleRate;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CDeviceStatus
	{
		public int iCDeviceStatusSize;

		public bool bOpticalConnected;

		public ESFI_AM824_MBSamplingFreq eOpticalSampleRate;

		public bool bCoaxConnected;

		public ESFI_AM824_MBSamplingFreq eCoaxSampleRate;

		public E_SelectorPosAudioMode eAudioMode;

		public int iSyncSource;

		public bool bSyncLocked;

		public int uSampleRate;

		public E_DEVICE_MESSAGE_ID eDeviceMessageID;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CChannelProperties
	{
		public int CChannelPropertiesSize;

		public int ChannelID;

		public int DeviceID;

		public E_DIRECTION Direction;

		[MarshalAs(UnmanagedType.BStr)]
		public string HardwareName = "";

		[MarshalAs(UnmanagedType.BStr)]
		public string Nickname = "";
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CSampleRateInfo
	{
		public int CSampleRateInfoSize;

		public uint DomainID;

		public uint CurrentSampleRate;

		public uint Count;

		public IntPtr pSampleRates;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CChannelSettings
	{
		public int CChannelSettingsSize;

		public int NumberOfControls;

		public int DeviceIndex;

		public CChannelSetting[] ChannelSetting;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CChannelSetting
	{
		public int iFeatureID;

		public int eChannel;

		public int function;

		public int returnValue;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CSyncSource
	{
		public int CSyncSourceSize;

		public DEVICE_SYNC_MODE DeviceSyncMode;

		public int SyncSourceID;

		[MarshalAs(UnmanagedType.BStr)]
		public string Name;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CAsioBufferSettings
	{
		public int CAudioBufferSettingsSize;

		public uint CurrentSamples;
	}
	[StructLayout(LayoutKind.Sequential)]
	internal class CStreamBufferSettings
	{
		public int CStreamBufferSettingsSize;

		public E_StreamingMode StreamBufferSetting;
	}
	internal enum E_DIRECTION
	{
		Direction_Input,
		Direction_Output
	}
	internal enum E_CONN_TYPE
	{
		eNoConnection = -1,
		eUSB2,
		eEndOfDefinition
	}
	internal enum E_DEVICE_TYPE
	{
		eUndefinedType = -1,
		eCombiDevice,
		eUSB2Device
	}
	internal enum ESFI_AM824_MBSamplingFreq
	{
		eSFIAM824SF_22_05k = 0,
		eSFIAM824SF_24k = 1,
		eSFIAM824SF_32k = 2,
		eSFIAM824SF_44_1k = 3,
		eSFIAM824SF_48k = 4,
		eSFIAM824SF_96k = 5,
		eSFIAM824SF_176_4k = 6,
		eSFIAM824SF_192k = 7,
		eSFIAM824SF_88_2k = 10,
		eSFIAM824SF_DontCare = 15,
		eSFIAM824SF_OB_2_048M = 0,
		eSFIAM824SF_OB_2_8224M = 1,
		eSFIAM824SF_OB_3_072M = 2,
		eSFIAM824SF_OB_5_6448M = 3,
		eSFIAM824SF_OB_6_114M = 4,
		eSFIAM824SF_OB_11_2896M = 5,
		eSFIAM824SF_OB_12_288M = 6,
		eSFIAM824SF_OB_DontCare = 15,
		eSFIAM824SF_EndOfEnum = 16
	}
	internal enum E_SelectorPosAudioMode
	{
		eAudioModeStandard
	}
	internal enum E_ChannelIOType
	{
		Standard
	}
	internal enum E_SyncSource
	{
		eSyncSource_Internal,
		eSyncSource_Busclock
	}
	internal enum E_DEVICE_MESSAGE_ID
	{
		eMsgErr_Unknown,
		eMsgErr_AVSpdifInNoError,
		eMsgErr_AVOpticalInNoError,
		eMsgErr_StreamBlocked,
		eMsgErr_SpdifInputOutOfPhase,
		eMsgErr_OpticalInOutOfPhase,
		eMsgErr_SystemInLog,
		eMsgErr_SystemOutOfLog
	}
	internal enum DEVICE_SYNC_MODE
	{
		USB_DeviceSyncMode_Unspecified = 0,
		USB_DeviceSyncMode_CSP = 1,
		USB_DeviceSyncMode_SYT_Iso = 2,
		USB_DeviceSyncMode_SYT_Synch = 3,
		USB_DeviceSyncMode_ExtSync = 4,
		USB_DeviceSyncMode_ExtDigital = 5,
		USB_DeviceSyncMode_Force32bitEnum = 2000000000
	}
}
internal static class SVNRevision
{
	public static string Revision = "3666";
}
namespace HardwareHelperLib
{
	public class Native
	{
		public struct DEV_BROADCAST_HANDLE
		{
			public int dbch_size;

			public int dbch_devicetype;

			public int dbch_reserved;

			public IntPtr dbch_handle;

			public IntPtr dbch_hdevnotify;

			public Guid dbch_eventguid;

			public long dbch_nameoffset;

			public byte dbch_data;

			public byte dbch_data1;
		}

		[StructLayout(LayoutKind.Sequential)]
		public class DEV_BROADCAST_DEVICEINTERFACE
		{
			public int dbcc_size;

			public int dbcc_devicetype;

			public int dbcc_reserved;
		}

		[StructLayout(LayoutKind.Sequential)]
		public class SP_DEVINFO_DATA
		{
			public int cbSize;

			public Guid classGuid;

			public int devInst;

			public ulong reserved;
		}

		[StructLayout(LayoutKind.Sequential)]
		public class SP_DEVINSTALL_PARAMS
		{
			public int cbSize;

			public int Flags;

			public int FlagsEx;

			public IntPtr hwndParent;

			public IntPtr InstallMsgHandler;

			public IntPtr InstallMsgHandlerContext;

			public IntPtr FileQueue;

			public IntPtr ClassInstallReserved;

			public int Reserved;

			[MarshalAs(UnmanagedType.LPTStr)]
			public string DriverPath;
		}

		[StructLayout(LayoutKind.Sequential)]
		public class SP_PROPCHANGE_PARAMS
		{
			public SP_CLASSINSTALL_HEADER ClassInstallHeader = new SP_CLASSINSTALL_HEADER();

			public int StateChange;

			public int Scope;

			public int HwProfile;
		}

		[StructLayout(LayoutKind.Sequential)]
		public class SP_CLASSINSTALL_HEADER
		{
			public int cbSize;

			public int InstallFunction;
		}

		public struct SP_DEVICE_INTERFACE_DATA
		{
			public int cbSize;

			public Guid InterfaceClassGuid;

			public uint Flags;

			public IntPtr Reserved;
		}

		public const int DIGCF_ALLCLASSES = 4;

		public const int DIGCF_PRESENT = 2;

		public const int DIGCF_PROFILE = 8;

		public const int DIGCF_DEVICEINTERFACE = 16;

		public const int INVALID_HANDLE_VALUE = -1;

		public const int SPDRP_DEVICEDESC = 0;

		public const int MAX_DEV_LEN = 1000;

		public const int DEVICE_NOTIFY_WINDOW_HANDLE = 0;

		public const int DEVICE_NOTIFY_SERVICE_HANDLE = 1;

		public const int DEVICE_NOTIFY_ALL_INTERFACE_CLASSES = 4;

		public const int DBT_DEVTYP_DEVICEINTERFACE = 5;

		public const int DBT_DEVNODES_CHANGED = 7;

		public const int WM_DEVICECHANGE = 537;

		public const int DIF_PROPERTYCHANGE = 18;

		public const int DICS_FLAG_GLOBAL = 1;

		public const int DICS_FLAG_CONFIGSPECIFIC = 2;

		public const int DICS_ENABLE = 1;

		public const int DICS_DISABLE = 2;

		[DllImport("Kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
		public static extern uint GetLastError();

		[DllImport("user32.dll", CharSet = CharSet.Auto)]
		public static extern IntPtr RegisterDeviceNotification(IntPtr hRecipient, DEV_BROADCAST_DEVICEINTERFACE NotificationFilter, uint Flags);

		[DllImport("user32.dll", CharSet = CharSet.Auto)]
		public static extern uint UnregisterDeviceNotification(IntPtr hHandle);

		[DllImport("setupapi.dll", SetLastError = true)]
		public static extern IntPtr SetupDiGetClassDevs(ref Guid gClass, uint iEnumerator, IntPtr hParent, uint nFlags);

		[DllImport("setupapi.dll", CharSet = CharSet.Auto, SetLastError = true)]
		public static extern bool SetupDiEnumDeviceInterfaces(IntPtr hDevInfo, IntPtr devInfo, ref Guid interfaceClassGuid, uint memberIndex, ref SP_DEVICE_INTERFACE_DATA deviceInterfaceData);

		[DllImport("setupapi.dll", SetLastError = true)]
		public static extern int SetupDiDestroyDeviceInfoList(IntPtr lpInfoSet);

		[DllImport("setupapi.dll", SetLastError = true)]
		public static extern bool SetupDiEnumDeviceInfo(IntPtr lpInfoSet, uint dwIndex, SP_DEVINFO_DATA devInfoData);

		[DllImport("setupapi.dll", SetLastError = true)]
		public static extern bool SetupDiGetDeviceRegistryProperty(IntPtr lpInfoSet, SP_DEVINFO_DATA DeviceInfoData, uint Property, uint PropertyRegDataType, StringBuilder PropertyBuffer, uint PropertyBufferSize, IntPtr RequiredSize);

		[DllImport("setupapi.dll", CharSet = CharSet.Auto, SetLastError = true)]
		public static extern bool SetupDiSetClassInstallParams(IntPtr DeviceInfoSet, IntPtr DeviceInfoData, IntPtr ClassInstallParams, int ClassInstallParamsSize);

		[DllImport("setupapi.dll", CharSet = CharSet.Auto)]
		public static extern bool SetupDiCallClassInstaller(uint InstallFunction, IntPtr DeviceInfoSet, IntPtr DeviceInfoData);
	}
	public class HH_Lib
	{
		private Version m_Version = new Version(1, 0, 0);

		public List<string> GetAll()
		{
			List<string> list = new List<string>();
			try
			{
				Guid gClass = Guid.Empty;
				IntPtr lpInfoSet = Native.SetupDiGetClassDevs(ref gClass, 0u, IntPtr.Zero, 6u);
				if (lpInfoSet.ToInt32() == -1)
				{
					throw new Exception("Invalid Handle");
				}
				Native.SP_DEVINFO_DATA sP_DEVINFO_DATA = new Native.SP_DEVINFO_DATA();
				sP_DEVINFO_DATA.cbSize = 28;
				sP_DEVINFO_DATA.devInst = 0;
				sP_DEVINFO_DATA.classGuid = Guid.Empty;
				sP_DEVINFO_DATA.reserved = 0uL;
				StringBuilder stringBuilder = new StringBuilder("");
				stringBuilder.Capacity = 1000;
				for (uint num = 0u; Native.SetupDiEnumDeviceInfo(lpInfoSet, num, sP_DEVINFO_DATA); num++)
				{
					while (!Native.SetupDiGetDeviceRegistryProperty(lpInfoSet, sP_DEVINFO_DATA, 0u, 0u, stringBuilder, 1000u, IntPtr.Zero))
					{
					}
					list.Add(stringBuilder.ToString());
				}
				Native.SetupDiDestroyDeviceInfoList(lpInfoSet);
				return list;
			}
			catch (Exception innerException)
			{
				throw new Exception("Failed to enumerate device tree!", innerException);
			}
		}

		public bool DeviceIsPresent(Guid deviceGuid, uint deviceIndex)
		{
			IntPtr hDevInfo = Native.SetupDiGetClassDevs(ref deviceGuid, 0u, IntPtr.Zero, 26u);
			Native.GetLastError();
			if (hDevInfo.ToInt32() != -1)
			{
				bool flag = true;
				Native.SP_DEVICE_INTERFACE_DATA deviceInterfaceData = default(Native.SP_DEVICE_INTERFACE_DATA);
				deviceInterfaceData.cbSize = Marshal.SizeOf((object)deviceInterfaceData);
				flag = Native.SetupDiEnumDeviceInterfaces(hDevInfo, IntPtr.Zero, ref deviceGuid, deviceIndex, ref deviceInterfaceData);
				Native.GetLastError();
				return flag;
			}
			return false;
		}

		public bool SetDeviceState(string[] match, bool bEnable)
		{
			try
			{
				Guid gClass = Guid.Empty;
				IntPtr intPtr = Native.SetupDiGetClassDevs(ref gClass, 0u, IntPtr.Zero, 6u);
				if (intPtr.ToInt32() == -1)
				{
					return false;
				}
				Native.SP_DEVINFO_DATA sP_DEVINFO_DATA = new Native.SP_DEVINFO_DATA();
				sP_DEVINFO_DATA.cbSize = 28;
				sP_DEVINFO_DATA.devInst = 0;
				sP_DEVINFO_DATA.classGuid = Guid.Empty;
				sP_DEVINFO_DATA.reserved = 0uL;
				StringBuilder stringBuilder = new StringBuilder("");
				stringBuilder.Capacity = 1000;
				for (uint num = 0u; Native.SetupDiEnumDeviceInfo(intPtr, num, sP_DEVINFO_DATA); num++)
				{
					while (!Native.SetupDiGetDeviceRegistryProperty(intPtr, sP_DEVINFO_DATA, 0u, 0u, stringBuilder, 1000u, IntPtr.Zero))
					{
					}
					bool flag = true;
					foreach (string text in match)
					{
						if (!stringBuilder.ToString().ToLower().Contains(text.ToLower()))
						{
							flag = false;
							break;
						}
					}
					if (flag)
					{
						ChangeIt(intPtr, sP_DEVINFO_DATA, bEnable);
					}
				}
				Native.SetupDiDestroyDeviceInfoList(intPtr);
			}
			catch (Exception innerException)
			{
				throw new Exception("Failed to enumerate device tree!", innerException);
			}
			return true;
		}

		public bool HookHardwareNotifications(IntPtr callback, bool UseWindowHandle)
		{
			try
			{
				Native.DEV_BROADCAST_DEVICEINTERFACE dEV_BROADCAST_DEVICEINTERFACE = new Native.DEV_BROADCAST_DEVICEINTERFACE();
				dEV_BROADCAST_DEVICEINTERFACE.dbcc_size = Marshal.SizeOf((object)dEV_BROADCAST_DEVICEINTERFACE);
				dEV_BROADCAST_DEVICEINTERFACE.dbcc_reserved = 0;
				dEV_BROADCAST_DEVICEINTERFACE.dbcc_devicetype = 5;
				if (UseWindowHandle)
				{
					Native.RegisterDeviceNotification(callback, dEV_BROADCAST_DEVICEINTERFACE, 4u);
				}
				else
				{
					Native.RegisterDeviceNotification(callback, dEV_BROADCAST_DEVICEINTERFACE, 5u);
				}
				return true;
			}
			catch (Exception ex)
			{
				_ = ex.Message;
				return false;
			}
		}

		public void CutLooseHardwareNotifications(IntPtr callback)
		{
			try
			{
				Native.UnregisterDeviceNotification(callback);
			}
			catch
			{
			}
		}

		private bool ChangeIt(IntPtr hDevInfo, Native.SP_DEVINFO_DATA devInfoData, bool bEnable)
		{
			try
			{
				Native.SP_PROPCHANGE_PARAMS sP_PROPCHANGE_PARAMS = new Native.SP_PROPCHANGE_PARAMS();
				int cb;
				IntPtr intPtr;
				int cb2;
				IntPtr deviceInfoData;
				if (bEnable)
				{
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.cbSize = Marshal.SizeOf(typeof(Native.SP_CLASSINSTALL_HEADER));
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.InstallFunction = 18;
					sP_PROPCHANGE_PARAMS.StateChange = 1;
					sP_PROPCHANGE_PARAMS.Scope = 1;
					sP_PROPCHANGE_PARAMS.HwProfile = 0;
					cb = Marshal.SizeOf((object)sP_PROPCHANGE_PARAMS);
					intPtr = Marshal.AllocHGlobal(cb);
					Marshal.StructureToPtr((object)sP_PROPCHANGE_PARAMS, intPtr, fDeleteOld: true);
					cb2 = Marshal.SizeOf((object)devInfoData);
					deviceInfoData = Marshal.AllocHGlobal(cb2);
					if (Native.SetupDiSetClassInstallParams(hDevInfo, deviceInfoData, intPtr, Marshal.SizeOf(typeof(Native.SP_PROPCHANGE_PARAMS))))
					{
						Native.SetupDiCallClassInstaller(18u, hDevInfo, deviceInfoData);
					}
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.cbSize = Marshal.SizeOf(typeof(Native.SP_CLASSINSTALL_HEADER));
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.InstallFunction = 18;
					sP_PROPCHANGE_PARAMS.StateChange = 1;
					sP_PROPCHANGE_PARAMS.Scope = 2;
					sP_PROPCHANGE_PARAMS.HwProfile = 0;
				}
				else
				{
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.cbSize = Marshal.SizeOf(typeof(Native.SP_CLASSINSTALL_HEADER));
					sP_PROPCHANGE_PARAMS.ClassInstallHeader.InstallFunction = 18;
					sP_PROPCHANGE_PARAMS.StateChange = 2;
					sP_PROPCHANGE_PARAMS.Scope = 2;
					sP_PROPCHANGE_PARAMS.HwProfile = 0;
				}
				cb = Marshal.SizeOf((object)sP_PROPCHANGE_PARAMS);
				intPtr = Marshal.AllocHGlobal(cb);
				Marshal.StructureToPtr((object)sP_PROPCHANGE_PARAMS, intPtr, fDeleteOld: true);
				cb2 = Marshal.SizeOf((object)devInfoData);
				deviceInfoData = Marshal.AllocHGlobal(cb2);
				Marshal.StructureToPtr((object)devInfoData, deviceInfoData, fDeleteOld: true);
				bool flag = Native.SetupDiSetClassInstallParams(hDevInfo, deviceInfoData, intPtr, Marshal.SizeOf(typeof(Native.SP_PROPCHANGE_PARAMS)));
				bool flag2 = Native.SetupDiCallClassInstaller(18u, hDevInfo, deviceInfoData);
				if (!flag || !flag2)
				{
					throw new Exception("Unable to change device state!");
				}
				return true;
			}
			catch
			{
				return false;
			}
		}
	}
}
public class NoSystemMenuException : Exception
{
}
public enum ItemFlags
{
	mfUnchecked = 0,
	mfString = 0,
	mfDisabled = 2,
	mfGrayed = 1,
	mfChecked = 8,
	mfPopup = 16,
	mfBarBreak = 32,
	mfBreak = 64,
	mfByPosition = 1024,
	mfByCommand = 0,
	mfSeparator = 2048
}
public enum WindowMessages
{
	wmSysCommand = 274
}
public class SystemMenu
{
	private IntPtr m_SysMenu = IntPtr.Zero;

	[DllImport("USER32", CharSet = CharSet.Unicode, EntryPoint = "GetSystemMenu", ExactSpelling = true, SetLastError = true)]
	private static extern IntPtr apiGetSystemMenu(IntPtr WindowHandle, int bReset);

	[DllImport("USER32", CharSet = CharSet.Unicode, EntryPoint = "AppendMenuW", ExactSpelling = true, SetLastError = true)]
	private static extern int apiAppendMenu(IntPtr MenuHandle, int Flags, int NewID, string Item);

	[DllImport("USER32", CharSet = CharSet.Unicode, EntryPoint = "InsertMenuW", ExactSpelling = true, SetLastError = true)]
	private static extern int apiInsertMenu(IntPtr hMenu, int Position, int Flags, int NewId, string Item);

	[DllImport("USER32", CharSet = CharSet.Unicode, EntryPoint = "CheckMenuItem", ExactSpelling = true, SetLastError = true)]
	private static extern int apiCheckMenuItem(IntPtr hMenu, uint checkItemId, uint Flags);

	public bool InsertSeparator(int Pos)
	{
		return InsertMenu(Pos, (ItemFlags)3072, 0, "");
	}

	public bool InsertMenu(int Pos, int ID, string Item)
	{
		return InsertMenu(Pos, ItemFlags.mfByPosition, ID, Item);
	}

	public bool InsertMenu(int Pos, ItemFlags Flags, int ID, string Item)
	{
		return apiInsertMenu(m_SysMenu, Pos, (int)Flags, ID, Item) == 0;
	}

	public bool AppendSeparator()
	{
		return AppendMenu(0, "", ItemFlags.mfSeparator);
	}

	public bool AppendMenu(int ID, string Item)
	{
		return AppendMenu(ID, Item, ItemFlags.mfUnchecked);
	}

	public bool AppendMenu(int ID, string Item, ItemFlags Flags)
	{
		return apiAppendMenu(m_SysMenu, (int)Flags, ID, Item) == 0;
	}

	public bool checkMenuItem(bool check, int pos)
	{
		if (check)
		{
			return apiCheckMenuItem(m_SysMenu, (uint)pos, 1032u) == 0;
		}
		return apiCheckMenuItem(m_SysMenu, (uint)pos, 1024u) == 0;
	}

	public static SystemMenu FromForm(Form Frm)
	{
		SystemMenu systemMenu = new SystemMenu();
		systemMenu.m_SysMenu = apiGetSystemMenu(((Control)Frm).Handle, 0);
		if (systemMenu.m_SysMenu == IntPtr.Zero)
		{
			throw new NoSystemMenuException();
		}
		return systemMenu;
	}

	public static void ResetSystemMenu(Form Frm)
	{
		apiGetSystemMenu(((Control)Frm).Handle, 1);
	}

	public static bool VerifyItemID(int ID)
	{
		if (ID < 61440)
		{
			return ID > 0;
		}
		return false;
	}
}
namespace Bebob_Mixerpanel
{
	internal class sampleRate
	{
		public string Name { get; set; }

		public int Value { get; set; }

		private sampleRate()
		{
		}

		public sampleRate(string name, int value)
		{
			Name = name;
			Value = value;
		}
	}
	internal class LinkedChannels
	{
		public int IdLeft { get; set; }

		public int IdRight { get; set; }

		public bool Linked { get; set; }

		public double LevelLeft { get; set; }

		public double LevelRight { get; set; }

		public LinkedChannels(bool linked, int idLeft, int idRight, double levelL, double levelR)
		{
			IdLeft = idLeft;
			IdRight = idRight;
			Linked = linked;
			LevelLeft = levelL;
			LevelRight = levelR;
		}

		public void setLevels(double levelLeft, double levelRight)
		{
			LevelLeft = levelLeft;
			LevelRight = levelRight;
		}
	}
}
