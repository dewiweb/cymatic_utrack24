// rea decompile_all
// name: FUN_0045b595
// address: 0x45b595
// body: available
// range: 0x45b595-0x45b77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0045b595(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = CPNS::ICHAI_NotificationHandler::vftable;
  param_1[4] = CPNS::ICHAI_OnDemandNotificationHandler::vftable;
  param_1[5] = CPNS::IOutput_NotificationHandler::vftable;
  FUN_00474272(param_1 + 6);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = CPNS::IRemoteDevice_GetParameterInfo_AsyncReturnHandler::vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = CPNS::IRemoteDevice_GetSelectorParameterValueText_AsyncReturnHandler::vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = CPNS::IRemoteDevice_GetProperty_AsyncReturnHandler::vftable;
  param_1[0x14] = AvailableDeviceList::Listener::vftable;
  puVar1 = (undefined4 *)FUN_00474777();
  *param_1 = uTrack::vftable;
  param_1[4] = uTrack::vftable;
  param_1[5] = uTrack::vftable;
  param_1[6] = uTrack::vftable;
  param_1[8] = uTrack::vftable;
  param_1[0xc] = uTrack::vftable;
  param_1[0x10] = uTrack::vftable;
  param_1[0x14] = uTrack::vftable;
  *puVar1 = uTrack::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_0045af03(param_1 + 0x5c);
  FUN_0045f300(param_1 + 0x78,param_1);
  param_1[0xfa] = 0;
  param_1[0x4c] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  *(undefined1 *)((int)param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0xad) = 0;
  *(undefined1 *)((int)param_1 + 0x10f) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  puVar2 = (undefined1 *)((int)param_1 + 0xdf);
  iVar3 = 0x18;
  do {
    puVar2[0x18] = 0;
    *puVar2 = 0;
    puVar2[-0x30] = 0;
    puVar2[-0x18] = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  return param_1;
}

