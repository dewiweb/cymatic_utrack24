// rea decompile_all
// name: FUN_004d5a4b
// address: 0x4d5a4b
// body: available
// range: 0x4d5a4b-0x4d5ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5a4b(undefined1 *param_1,int param_2,char param_3,char param_4,char param_5,
                 char param_6,char param_7,undefined4 param_8,undefined4 *param_9,int param_10,
                 int param_11)

{
  int *piVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  float unaff_EBX;
  float10 fVar2;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 **ppuStack_a0;
  int **ppiStack_9c;
  undefined1 **local_98;
  uint uStack_94;
  int *piStack_80;
  undefined4 *local_7c;
  int *local_78;
  undefined1 *local_74;
  undefined4 local_70;
  int iStack_6c;
  undefined4 uStack_58;
  int local_54;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dfe38;
  local_14 = ExceptionList;
  uStack_94 = DAT_00955fd4 ^ (uint)&stack0xffffff70;
  ExceptionList = &local_14;
  if (param_3 == '\0') {
    piVar1 = in_ECX + -8;
    local_98 = (undefined1 **)0x4d5b24;
    local_78 = in_ECX;
    FUN_004d3044();
    if (param_11 != 0) {
      local_98 = (undefined1 **)0x4d5b32;
      FUN_004d076d();
    }
    local_98 = (undefined1 **)&local_70;
    ppiStack_9c = (int **)0x4d5b42;
    FUN_004f5b59();
    if (param_5 == '\0') {
      ppiStack_9c = (int **)0x4d5b94;
      local_7c = &local_98;
      FUN_004d076d();
    }
    else {
      ppiStack_9c = (int **)0x4d5b5b;
      local_74 = (undefined1 *)&local_98;
      FUN_004d3044();
      ppiStack_9c = (int **)0x4d5b63;
      FUN_0047cda7();
      local_98 = (undefined1 **)&local_70;
      ppiStack_9c = (int **)0x4d5b70;
      FUN_0047d170();
      ppiStack_9c = (int **)0x4d5b83;
      local_74 = (undefined1 *)&local_98;
      FUN_004d3044();
    }
    ppiStack_9c = (int **)0x4d5b9c;
    FUN_0047cda7();
    if (param_4 == '\0') {
      local_98 = (undefined1 **)0x3e99999a;
      ppiStack_9c = (int **)0x4d5bb4;
      FUN_0047cdee();
      in_ECX = local_78;
    }
    local_98 = (undefined1 **)&local_7c;
    ppiStack_9c = (int **)0x4d5bc4;
    (**(code **)(*in_ECX + 0x10))();
    puStack_10 = (undefined1 *)0x0;
    local_78 = (int *)((float)*(int *)(param_2 + 0xc) / 1.3);
    ppiStack_9c = (int **)0x4d5bed;
    fVar2 = (float10)FUN_0049fa3d();
    if ((float10)(float)local_78 < fVar2) {
      ppiStack_9c = (int **)local_78;
      ppuStack_a0 = (undefined1 **)0x4d5c0b;
      FUN_0049f854();
    }
    ppiStack_9c = &piStack_80;
    ppuStack_a0 = (undefined1 **)0x4d5c18;
    FUN_0047ceaa();
    ppuStack_a0 = (undefined1 **)&uStack_58;
    puStack_a4 = (undefined1 *)((int)(iStack_6c * 5 + (iStack_6c * 5 >> 0x1f & 3U)) >> 2);
    puStack_a8 = (undefined1 *)0x4d5c3b;
    FUN_004f5b9e();
    puStack_a4 = (undefined1 *)0x4d5c45;
    FUN_004f5b59();
    ppuStack_a0 = (undefined1 **)0x4d5c50;
    FUN_0043bc2d();
    if (param_10 == 0) {
      if (param_6 != '\0') {
        ppuStack_a0 = (undefined1 **)0x3f800000;
        puStack_a4 = (undefined1 *)&uStack_58;
        puStack_a8 = (undefined1 *)0x4d5c93;
        (**(code **)(*piVar1 + 0x30))();
        local_7c = &ppuStack_a0;
        local_14._0_1_ = 1;
        ppuStack_a0 = (undefined1 **)0x24;
        puStack_a4 = (undefined1 *)0x1;
        puStack_a8 = (undefined1 *)&uStack_58;
        ppuStack_a0 = (undefined1 **)FUN_0047a5db();
        puStack_a4 = (undefined1 *)&uStack_58;
        puStack_a8 = (undefined1 *)0x4d5cca;
        FUN_0047d2ae();
        local_14 = (void *)((uint)local_14._1_3_ << 8);
        ppuStack_a0 = (undefined1 **)0x4d5cdb;
        FUN_004f7994();
      }
    }
    else {
      local_7c = &puStack_a4;
      ppuStack_a0 = (undefined1 **)0x3f800000;
      puStack_a8 = param_1;
      puStack_a4 = (undefined1 *)0x124;
      FUN_004c8cb8();
    }
    if (param_7 != '\0') {
      ppuStack_a0 = (undefined1 **)&local_7c;
      puStack_a4 = (undefined1 *)0x4d5cf3;
      (**(code **)(*piStack_80 + 0x10))();
      uStack_18 = 2;
      puStack_a4 = (undefined1 *)0x4d5d00;
      FUN_0049fa03();
      puStack_a4 = (undefined1 *)0x4d5d13;
      FUN_004c4d7a();
      ppuStack_a0 = (undefined1 **)0x4d5d1c;
      ppuStack_a0 = (undefined1 **)FUN_005b3fb0();
      puStack_a4 = (undefined1 *)0x4d5d2a;
      piVar1 = (int *)FUN_004f5bd0();
      local_7c = (undefined4 *)(float)*piVar1;
      piStack_80 = (int *)(float)(int)(local_74 + iStack_6c / 2);
      ppuStack_a0 = (undefined1 **)0x4d5d5a;
      FUN_0047888f();
      local_14._0_1_ = 3;
      ppuStack_a0 = (undefined1 **)piStack_80;
      puStack_a4 = (undefined1 *)(unaff_EBX * 0.6 + (float)local_7c);
      puStack_a8 = (undefined1 *)((float)piStack_80 + unaff_EBX * 0.5);
      piStack_80 = (int *)((float)piStack_80 - unaff_EBX * 0.5);
      FUN_00479368(extraout_ECX,local_7c,piStack_80,local_7c);
      ppuStack_a0 = (undefined1 **)&DAT_0095d798;
      puStack_a4 = (undefined1 *)&uStack_58;
      puStack_a8 = (undefined1 *)0x4d5ddc;
      FUN_0047d2ae();
      local_14 = (void *)((uint)local_14._1_3_ << 8);
      ppuStack_a0 = (undefined1 **)0x4d5ded;
      FUN_004f7994();
    }
    ppuStack_a0 = (undefined1 **)0x3;
    puStack_a4 = (undefined1 *)0x4d5dfc;
    FUN_004f5bd0();
    ppuStack_a0 = (undefined1 **)0x0;
    puStack_a4 = (undefined1 *)0x1;
    local_7c = &puStack_a8;
    puStack_a8 = (undefined1 *)0x21;
    FUN_0047d077();
    if (*(char *)*param_9 != '\0') {
      ppuStack_a0 = (undefined1 **)0x4d5e33;
      FUN_0049f50b();
      local_14 = (void *)CONCAT31(local_14._1_3_,4);
      ppuStack_a0 = (undefined1 **)0x4d5e40;
      fVar2 = (float10)FUN_0049fa3d();
      ppuStack_a0 = (undefined1 **)(float)(fVar2 * (float10)0.75);
      puStack_a4 = (undefined1 *)0x4d5e5b;
      local_7c = ppuStack_a0;
      FUN_0049f854();
      ppuStack_a0 = (undefined1 **)0x3f733333;
      puStack_a4 = (undefined1 *)0x4d5e6e;
      FUN_0049f973();
      ppuStack_a0 = (undefined1 **)&stack0xffffff78;
      puStack_a4 = (undefined1 *)0x4d5e7b;
      FUN_0047ceaa();
      puStack_a4 = (undefined1 *)0x1;
      piStack_80 = (int *)&puStack_a8;
      puStack_a8 = (undefined1 *)0x22;
      FUN_0047cffd(param_1,param_9,&local_7c);
      puStack_a4 = (undefined1 *)0x4d5e9f;
      FUN_004c4d7a();
    }
    ppuStack_a0 = (undefined1 **)0x4d5ea8;
    FUN_004c4d7a();
  }
  else {
    local_98 = (undefined1 **)0x4d5a9b;
    FUN_004f5b45();
    local_98 = (undefined1 **)(local_54 / 2 + -1);
    ppiStack_9c = (int **)0x4d5ab3;
    FUN_004f5b6b();
    local_74 = (undefined1 *)&local_98;
    ppiStack_9c = (int **)0x4d5ac4;
    FUN_0047604f();
    ppiStack_9c = (int **)0x4d5ace;
    FUN_0047cda7();
    local_98 = (undefined1 **)0x1;
    ppiStack_9c = (int **)0x4d5ad9;
    local_98 = (undefined1 **)FUN_004f5b6b();
    ppiStack_9c = (int **)0x4d5ae1;
    FUN_0047d170();
    ppiStack_9c = (int **)0x4d5af2;
    local_74 = (undefined1 *)&local_98;
    FUN_0047604f();
    ppiStack_9c = (int **)0x4d5af9;
    FUN_0047cda7();
    local_98 = (undefined1 **)0x1;
    ppiStack_9c = (int **)0x4d5b04;
    local_98 = (undefined1 **)FUN_004f5b6b();
    ppiStack_9c = (int **)0x4d5b0c;
    FUN_0047d170();
  }
  ExceptionList = local_14;
  return;
}

