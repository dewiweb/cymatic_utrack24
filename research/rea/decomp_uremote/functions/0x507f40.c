// rea decompile_all
// name: FUN_00507f40
// address: 0x507f40
// body: available
// range: 0x507f40-0x50805d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00507f40(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  uint local_20;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ce4e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  if (param_2 != 0) {
    if ((param_2 & 0x80000000) == 0) {
      FUN_00501ba0();
    }
    else {
      FUN_00501f30(&DAT_005e8b24);
    }
    local_20 = 1;
    for (local_1c = 0; local_1c < 0x1f; local_1c = local_1c + 1) {
      if ((param_2 & local_20) != 0) {
        cVar1 = FUN_00501bd0();
        if (cVar1 == '\0') {
          FUN_00502720(&DAT_0091309c);
        }
        uVar2 = FUN_005019d0(local_28,local_1c + 1);
        local_8._0_1_ = 2;
        FUN_005026d0(uVar2);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00501900();
      }
      local_20 = local_20 << 1;
    }
  }
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

