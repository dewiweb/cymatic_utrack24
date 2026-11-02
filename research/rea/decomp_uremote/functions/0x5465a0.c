// rea decompile_all
// name: FUN_005465a0
// address: 0x5465a0
// body: available
// range: 0x5465a0-0x5466b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005465a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2612;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[0x18] = &DAT_005ecf9c;
    in_ECX[0x3f] = CPNS::IAsync::vftable;
    local_8 = 0;
  }
  FUN_00543ff0(0x2002,"CTaskFilteredDeviceSearch");
  local_8 = 1;
  *in_ECX = CPCHAI::CTaskFilteredDeviceSearch::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x18] + 4) + 0x60) =
       CPCHAI::CTaskFilteredDeviceSearch::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[0x18] + 4) + 0x5c) = *(int *)(in_ECX[0x18] + 4) + -0x9c;
  FUN_00546180(param_1 + 0xb08);
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[0x1f] = param_1;
  FUN_00507180(uVar1);
  in_ECX[0x3c] = param_2;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

