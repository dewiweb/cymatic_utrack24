// rea decompile_all
// name: FUN_004da6fe
// address: 0x4da6fe
// body: available
// range: 0x4da6fe-0x4da7f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da6fe(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uStack_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  float local_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_40 [4];
  undefined1 *local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de573;
  local_14 = ExceptionList;
  uStack_4c = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  uStack_50 = 0;
  local_54 = 2.354576e-38;
  local_58 = local_40;
  uStack_5c = 0x4da73e;
  FUN_004c1e29();
  local_54 = 0.0;
  if (*(char *)(param_4 + 0x84) == '\0') {
    local_54 = (float)param_3 - 1.0;
    local_58 = (undefined1 *)0x0;
  }
  else {
    local_58 = (undefined1 *)((float)param_2 - 1.0);
  }
  uStack_50 = 0;
  local_3c = (undefined1 *)&uStack_5c;
  local_64 = (undefined1 *)&uStack_5c;
  local_60 = 0x3dcccccd;
  uStack_68 = 0x4da79d;
  FUN_00476535();
  local_3c = (undefined1 *)&uStack_68;
  local_60 = 0;
  local_64 = (undefined1 *)0x0;
  FUN_004d076d();
  uStack_50 = FUN_00476850(local_38);
  local_c = 0;
  local_54 = (float)param_1;
  local_58 = (undefined1 *)0x4da7d0;
  FUN_0047ce07();
  local_c = 0xffffffff;
  uStack_50 = 0x4da7de;
  FUN_004768de();
  uStack_50 = 0x4da7e3;
  FUN_0047d220();
  ExceptionList = local_14;
  return;
}

