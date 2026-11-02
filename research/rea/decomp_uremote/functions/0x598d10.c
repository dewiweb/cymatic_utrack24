// rea decompile_all
// name: FUN_00598d10
// address: 0x598d10
// body: available
// range: 0x598d10-0x598dc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00598d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d69d7;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::BaseQueuedNotification::vftable;
  in_ECX[1] = 0;
  *in_ECX = CPCHAI::TypedQueuedNotification<CPNS::IRemoteDevice_GetProperty_AsyncReturnHandler>::
            vftable;
  in_ECX[2] = param_1;
  local_8 = 0;
  *in_ECX = CPCHAI::NotificationManager_RemoteDevice_GetProperty::
            RemoteDevice_GetPropertyString_Return::vftable;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  *(undefined2 *)(in_ECX + 5) = param_4;
  FUN_00501870(param_5);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00544600(uVar1);
  ExceptionList = local_10;
  return in_ECX;
}

