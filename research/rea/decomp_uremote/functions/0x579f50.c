// rea decompile_all
// name: FUN_00579f50
// address: 0x579f50
// body: available
// range: 0x579f50-0x57a0c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00579f50(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005d5138;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 7;
  FUN_005123f0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 6;
  FUN_00501900();
  local_8._0_1_ = 5;
  FUN_00559ab0();
  local_8._0_1_ = 4;
  FUN_005a1f20();
  local_8._0_1_ = 3;
  piVar1 = (int *)(in_ECX + 0x60);
  *(undefined2 *)(in_ECX + 100) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8._0_1_ = 2;
  piVar1 = (int *)(in_ECX + 0x58);
  *(undefined2 *)(in_ECX + 0x5c) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8._0_1_ = 1;
  piVar1 = (int *)(in_ECX + 0x50);
  *(undefined2 *)(in_ECX + 0x54) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  piVar1 = (int *)(in_ECX + 0x48);
  *(undefined2 *)(in_ECX + 0x4c) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8 = 0xffffffff;
  FUN_0054f510();
  ExceptionList = local_10;
  return;
}

