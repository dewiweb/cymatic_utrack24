// rea decompile_all
// name: FUN_004dd033
// address: 0x4dd033
// body: available
// range: 0x4dd033-0x4dd23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dd033(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uStack_70;
  undefined1 *local_6c;
  undefined1 **local_68;
  undefined4 local_64;
  undefined1 *local_60;
  float local_5c;
  undefined1 **local_58;
  uint uStack_54;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined1 local_38 [32];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e188e;
  local_14 = ExceptionList;
  uStack_54 = DAT_00955fd4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  local_58 = (undefined1 **)0x4dd06d;
  FUN_004d076d();
  if (param_3 == '\0') {
    uVar1 = 0x3e4ccccd;
  }
  else {
    uVar1 = 0x3ecccccd;
  }
  local_58 = (undefined1 **)0x0;
  local_5c = (float)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc));
  local_3c = &local_64;
  local_6c = (undefined1 *)&local_64;
  local_60 = (undefined1 *)0x0;
  local_68 = (undefined1 **)0x3dcccccd;
  uStack_70 = 0x4dd0c0;
  FUN_0047620f();
  local_68 = (undefined1 **)(float)*(int *)(param_2 + 4);
  local_3c = &uStack_70;
  local_6c = (undefined1 *)0x0;
  FUN_0047620f(&uStack_70,uVar1);
  local_58 = (undefined1 **)FUN_00476850(local_38);
  local_c = 0;
  local_5c = (float)param_1;
  local_60 = (undefined1 *)0x4dd109;
  FUN_0047ce07();
  local_c = 0xffffffff;
  local_58 = (undefined1 **)0x4dd117;
  FUN_004768de();
  local_58 = (undefined1 **)0x4dd11e;
  FUN_0047d220();
  local_3c = &local_58;
  local_60 = (undefined1 *)&local_58;
  local_5c = 0.1;
  local_68 = (undefined1 **)&local_3c;
  local_64 = 0x3f800000;
  local_6c = (undefined1 *)0x4dd144;
  FUN_004765bf();
  local_64 = 0x4dd149;
  FUN_0047620f();
  local_5c = 7.14642e-39;
  FUN_0047cda7();
  local_58 = (undefined1 **)0x1;
  local_5c = 7.146439e-39;
  local_58 = (undefined1 **)FUN_004f5ad5();
  local_5c = 7.14645e-39;
  FUN_0047d170();
  local_58 = (undefined1 **)0x4dd179;
  local_58 = (undefined1 **)FUN_004f5b0a();
  local_5c = 7.146489e-39;
  FUN_0047d170();
  local_3c = &local_58;
  local_60 = (undefined1 *)&local_58;
  local_5c = 1.0;
  local_64 = 0x4dd198;
  FUN_004765bf();
  local_5c = 7.146531e-39;
  FUN_0047cda7();
  local_58 = (undefined1 **)((float)*(int *)(param_2 + 0xc) * 0.6);
  local_5c = 7.146587e-39;
  local_3c = local_58;
  FUN_0049f51e();
  local_58 = &local_40;
  local_c = 1;
  local_5c = 7.146608e-39;
  local_58 = (undefined1 **)FUN_0049f995();
  local_c = CONCAT31(local_c._1_3_,2);
  local_5c = 7.146628e-39;
  FUN_0047ceaa();
  local_5c = 7.14664e-39;
  FUN_004c4d7a();
  puStack_10 = (undefined1 *)0xffffffff;
  local_5c = 7.14666e-39;
  FUN_004c4d7a();
  local_5c = 0.0;
  local_60 = (undefined1 *)0x1;
  local_40 = (undefined1 *)&local_64;
  local_64 = 0x21;
  local_68 = *(undefined1 ***)(param_2 + 0xc);
  local_6c = (undefined1 *)(*(int *)(param_2 + 8) + -6);
  uStack_70 = 0;
  FUN_0047d12a(4);
  ExceptionList = pvStack_18;
  return;
}

