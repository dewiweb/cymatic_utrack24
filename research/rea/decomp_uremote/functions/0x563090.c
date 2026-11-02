// rea decompile_all
// name: FUN_00563090
// address: 0x563090
// body: available
// range: 0x563090-0x5631d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00563090(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *local_30;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4261;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_00501870(param_2);
  local_8 = 0;
  cVar1 = FUN_00503020();
  if (cVar1 != '\0') {
    iVar2 = FUN_0058e840(param_1);
    if (iVar2 == 0) {
      local_30 = (undefined4 *)FUN_005af82d(0x28);
      local_8._0_1_ = 1;
      if (local_30 == (undefined4 *)0x0) {
        local_30 = (undefined4 *)0x0;
      }
      else {
        *local_30 = CPCHAI::SectionNameItem::vftable;
        local_30[2] = *param_1;
        local_30[3] = param_1[1];
        local_30[4] = param_1[2];
        local_30[5] = param_1[3];
        FUN_005018d0(local_18);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_30 != (undefined4 *)0x0) {
        FUN_0058e8a0(local_30);
      }
    }
    else {
      FUN_00501e80(local_18);
    }
  }
  FUN_0054f6f0();
  local_8 = 0xffffffff;
  FUN_00501900();
  ExceptionList = local_10;
  return;
}

