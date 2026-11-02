// rea decompile_all
// name: FUN_0050a800
// address: 0x50a800
// body: available
// range: 0x50a800-0x50a918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a800(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ced3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))
            (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_00501f30(&DAT_0091ae98);
  FUN_00502720(param_1);
  FUN_00502720(&DAT_00917178);
  FUN_00501870(param_1);
  local_8 = 0;
  FUN_00502720("\'s CHAI");
  uVar1 = FUN_00501d60();
  FUN_0052dd40(uVar1);
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  local_8 = 0xffffffff;
  FUN_00501900();
  ExceptionList = local_10;
  return;
}

