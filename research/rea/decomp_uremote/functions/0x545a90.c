// rea decompile_all
// name: FUN_00545a90
// address: 0x545a90
// body: available
// range: 0x545a90-0x545b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00545a90(int param_1,int param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d24f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    in_ECX[0x34] = &DAT_005ecf50;
    in_ECX[0x3f] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00595480(0x2001);
  local_8 = 1;
  *in_ECX = CPCHAI::CTaskCHAIFindForeignDevice::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x34] + 4) + 0xd0) =
       CPCHAI::CTaskCHAIFindForeignDevice::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x34] + 4) + 0xcc) = *(int *)(in_ECX[0x34] + 4) + -0x2c;
  FUN_00546180(param_1 + 0xb08);
  in_ECX[0x3b] = param_1;
  *(undefined1 *)(in_ECX + 0x3c) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

