// rea decompile_all
// name: FUN_0054f8d0
// address: 0x54f8d0
// body: available
// range: 0x54f8d0-0x54f9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0054f8d0(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d306f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    in_ECX[0x28] = &DAT_005eddd0;
    in_ECX[0x2d] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00598120(0x2007,"CTaskDeviceInfoGetInfo");
  *in_ECX = CPCHAI::CTaskDeviceInfoGetInfo::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0xa0) =
       CPCHAI::CTaskDeviceInfoGetInfo::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x28] + 4) + 0x9c) = *(int *)(in_ECX[0x28] + 4) + -0x14;
  ExceptionList = local_10;
  return in_ECX;
}

