// rea decompile_all
// name: FUN_00545190
// address: 0x545190
// body: available
// range: 0x545190-0x54529b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00545190(int param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2427;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[0x2a] = &DAT_005ececc;
    in_ECX[0x35] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00595010(0x2000);
  local_8 = 1;
  *in_ECX = CPCHAI::CTaskCHAIFindFirstDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x2a] + 4) + 0xa8) =
       CPCHAI::CTaskCHAIFindFirstDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x2a] + 4) + 0xa4) = *(int *)(in_ECX[0x2a] + 4) + -0x2c;
  FUN_00546180(param_1 + 0xb08);
  in_ECX[0x31] = param_1;
  *(undefined1 *)(in_ECX + 0x32) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

