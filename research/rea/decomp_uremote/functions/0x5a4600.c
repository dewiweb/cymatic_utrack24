// rea decompile_all
// name: FUN_005a4600
// address: 0x5a4600
// body: available
// range: 0x5a4600-0x5a4760 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a4600(undefined4 param_1,short param_2)

{
  char cVar1;
  int in_ECX;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7575;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + -0x3c) + 0x28 +
                       *(int *)(*(int *)(*(int *)(in_ECX + -0x3c) + 0x28) + 0xc)) + 0x38))
            (local_18,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  FUN_00502720(&DAT_009114f0);
  FUN_005026d0(in_ECX + -0x34);
  if (param_2 != 0) {
    FUN_005017d0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00502720(&DAT_0091717c);
    if (*(int *)(in_ECX + -0x38) != 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + -0x38) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + -0x38) + 0x28) + 0xc)) + 4))
                (param_2,local_20);
    }
    cVar1 = FUN_00501bd0();
    if (cVar1 == '\0') {
      FUN_005026d0(local_20);
    }
    else {
      FUN_00502ce0(param_2);
    }
    FUN_00502720(&DAT_00917178);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00501900();
  }
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

