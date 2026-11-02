// rea decompile_all
// name: FUN_00552470
// address: 0x552470
// body: available
// range: 0x552470-0x552593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00552470(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3485;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    in_ECX[0x29] = &DAT_005ee0c0;
    in_ECX[0x37] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00598120(0x2008,"CTaskDeviceInfoGetDestination");
  in_ECX[0x28] = CPNS::IRemoteDevice_NotificationHandler2::vftable;
  local_8 = 2;
  *in_ECX = CPCHAI::CTaskDeviceInfoGetDestination::vftable;
  in_ECX[0x28] = CPCHAI::CTaskDeviceInfoGetDestination::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x29] + 4) + 0xa4) =
       CPCHAI::CTaskDeviceInfoGetDestination::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x29] + 4) + 0xa0) = *(int *)(in_ECX[0x29] + 4) + -0x38;
  FUN_00503bc0(uVar1);
  in_ECX[0x30] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

