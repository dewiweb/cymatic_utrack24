// rea decompile_all
// name: FUN_004de8cb
// address: 0x4de8cb
// body: available
// range: 0x4de8cb-0x4de9fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de8cb(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 *local_80;
  float local_7c;
  undefined4 *puStack_78;
  uint uStack_74;
  undefined1 local_60 [4];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de4cf;
  local_14 = ExceptionList;
  uStack_74 = DAT_00955fd4 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_14;
  puStack_78 = (undefined4 *)0x0;
  local_7c = 2.351491e-38;
  local_80 = local_60;
  uStack_84 = 0x4de90c;
  FUN_004c1e29();
  local_50 = param_2;
  local_5c = (undefined1 *)&puStack_78;
  local_80 = (undefined1 *)&puStack_78;
  local_4c = param_3;
  local_7c = 0.15;
  local_58 = 0;
  local_54 = 0;
  uStack_84 = 0x4de93d;
  FUN_004765bf();
  local_7c = 7.155015e-39;
  FUN_0047cda7();
  puStack_78 = (undefined4 *)0x1;
  local_7c = 7.155036e-39;
  puStack_78 = (undefined4 *)FUN_004f5b6b();
  local_7c = 7.155048e-39;
  FUN_0047d170();
  puStack_78 = (undefined4 *)0x1;
  local_7c = 7.155064e-39;
  puStack_78 = (undefined4 *)FUN_004f5c0c();
  local_7c = 7.155076e-39;
  FUN_0047d170();
  local_7c = (float)param_3;
  puStack_78 = (undefined4 *)0x0;
  local_5c = (undefined1 *)&uStack_84;
  local_8c = (undefined1 *)&uStack_84;
  local_80 = (undefined1 *)0x0;
  local_88 = 0x3da3d70a;
  uStack_90 = 0x4de99d;
  FUN_00476535();
  local_5c = (undefined1 *)&uStack_90;
  local_88 = 0;
  local_8c = (undefined1 *)0x0;
  FUN_004d076d();
  puStack_78 = (undefined4 *)FUN_00476850(local_38);
  local_c = 0;
  local_7c = (float)param_1;
  local_80 = (undefined1 *)0x4de9cf;
  FUN_0047ce07();
  local_c = 0xffffffff;
  puStack_78 = (undefined4 *)0x4de9dd;
  FUN_004768de();
  puStack_78 = &local_58;
  local_7c = 7.155246e-39;
  FUN_0047d170();
  ExceptionList = local_14;
  return;
}

