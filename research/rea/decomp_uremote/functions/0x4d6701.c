// rea decompile_all
// name: FUN_004d6701
// address: 0x4d6701
// body: available
// range: 0x4d6701-0x4d68ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d6701(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  int *in_ECX;
  undefined1 **ppuStack_7c;
  undefined1 *puStack_78;
  undefined1 **ppuStack_74;
  undefined1 *puStack_70;
  uint uStack_6c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 *apuStack_34 [3];
  undefined1 local_28 [16];
  int iStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dfdf5;
  local_14 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  local_4c = (undefined1 *)&puStack_70;
  ppuStack_7c = &puStack_70;
  ppuStack_74 = (undefined1 **)0x0;
  puStack_78 = (undefined1 *)0x1000280;
  FUN_004c1e29();
  ppuStack_74 = (undefined1 **)0x4d6750;
  FUN_0047d23a();
  puStack_70 = (undefined1 *)0x4d6757;
  cVar1 = FUN_004e61ec();
  if (cVar1 == '\0') {
    puStack_70 = (undefined1 *)0x4d6764;
    FUN_004c3153();
    puStack_70 = param_2;
    ppuStack_74 = &local_58;
    puStack_78 = (undefined1 *)0x4d6783;
    (**(code **)(*in_ECX + 8))();
    local_14 = (void *)0x0;
    puStack_54 = (undefined1 *)&puStack_78;
    FUN_004c1e29(&puStack_54,0x1000281);
    FUN_00476237();
    ppuStack_7c = (undefined1 **)0x4d67b7;
    FUN_0047cda7();
    puStack_78 = &stack0xffffffa0;
    ppuStack_7c = (undefined1 **)0x4d67c3;
    FUN_0047ceaa();
    puStack_54 = *(undefined1 **)(param_2 + 0xb4);
    uStack_50 = *(undefined4 *)(param_2 + 0xb8);
    local_4c = *(undefined1 **)(param_2 + 0xbc);
    uStack_48 = *(undefined4 *)(param_2 + 0xc0);
    ppuStack_7c = apuStack_34;
    FUN_004c2047();
    ppuStack_7c = (undefined1 **)0x4d67ff;
    FUN_004f640a();
    ppuStack_7c = &local_58;
    FUN_004e5b73();
    iStack_18._0_1_ = 1;
    ppuStack_7c = *(undefined1 ***)(param_2 + 0xc4);
    FUN_0049fa3d();
    FUN_005b3fb0();
    FUN_00439b5a();
    FUN_0047d077();
    iStack_18 = (uint)iStack_18._1_3_ << 8;
    ppuStack_7c = (undefined1 **)0x4d686c;
    FUN_004652d6();
    local_58 = (undefined1 *)&ppuStack_7c;
    FUN_004c1e29(&local_58,0x1000282,0);
    FUN_00476237();
    FUN_0047cda7();
    iStack_18 = 0xffffffff;
    ppuStack_7c = (undefined1 **)0x4d68aa;
    FUN_004c4d7a();
  }
  else {
    puStack_70 = (undefined1 *)0x4d68b4;
    cVar1 = FUN_004c3153();
    if (cVar1 != '\0') {
      local_4c = (undefined1 *)&puStack_70;
      ppuStack_7c = &puStack_70;
      ppuStack_74 = (undefined1 **)0x0;
      puStack_78 = (undefined1 *)0x1000282;
      FUN_004c1e29();
      ppuStack_74 = (undefined1 **)0x4d68d5;
      FUN_0047cda7();
    }
  }
  puStack_70 = (undefined1 *)0x1;
  ppuStack_74 = (undefined1 **)local_28;
  puStack_78 = (undefined1 *)0x4d68e3;
  FUN_004c2047();
  ppuStack_74 = (undefined1 **)param_1;
  puStack_78 = (undefined1 *)0x4d68eb;
  FUN_0047d37e();
  ExceptionList = local_14;
  return;
}

