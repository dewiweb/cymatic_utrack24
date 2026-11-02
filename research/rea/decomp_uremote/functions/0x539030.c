// rea decompile_all
// name: FUN_00539030
// address: 0x539030
// body: available
// range: 0x539030-0x53922e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539030(void)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005d1916;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xe;
  FUN_0058f4e0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 0xd;
  FUN_0058eda0();
  local_8._0_1_ = 0xc;
  FUN_0058ee60();
  local_8._0_1_ = 0xb;
  piVar1 = (int *)(in_ECX + 0x100);
  *(undefined2 *)(in_ECX + 0x104) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8._0_1_ = 10;
  piVar1 = (int *)(in_ECX + 0xf8);
  *(undefined2 *)(in_ECX + 0xfc) = 0;
  if (*piVar1 != 0) {
    FUN_005b13e8(*piVar1);
  }
  *piVar1 = 0;
  local_8._0_1_ = 9;
  FUN_00521260();
  local_8._0_1_ = 8;
  FUN_0058e790();
  local_8._0_1_ = 7;
  FUN_0055aff0();
  local_8._0_1_ = 6;
  FUN_0055a8c0();
  local_8._0_1_ = 0xf;
  FUN_005706d0();
  local_8._0_1_ = 5;
  FUN_00539350();
  local_8._0_1_ = 0x10;
  FUN_00579650();
  local_8._0_1_ = 4;
  FUN_00539350();
  local_8._0_1_ = 0x11;
  FUN_00569710();
  local_8._0_1_ = 3;
  FUN_00539350();
  local_8._0_1_ = 0x12;
  FUN_00569710();
  local_8._0_1_ = 2;
  FUN_00539350();
  local_8._0_1_ = 1;
  FUN_00501900();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00501900();
  local_8 = 0xffffffff;
  FUN_0054f510();
  ExceptionList = local_10;
  return;
}

