// rea decompile_all
// name: FUN_0045a67e
// address: 0x45a67e
// body: available
// range: 0x45a67e-0x45ac4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a67e(undefined4 param_1)

{
  int iVar1;
  undefined4 **ppuVar2;
  float fVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
  int in_ECX;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  undefined1 *puVar14;
  undefined1 **ppuStack_80;
  undefined4 **ppuStack_7c;
  undefined1 **local_78;
  uint uStack_74;
  int local_5c;
  undefined1 **local_58;
  undefined1 **local_54;
  undefined1 **local_50;
  undefined1 **local_4c;
  undefined1 *puStack_48;
  undefined4 *local_44;
  double local_40;
  double local_38;
  undefined1 *local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e042c;
  local_14 = ExceptionList;
  uStack_74 = DAT_00955fd4 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_14;
  local_78 = (undefined1 **)0x45a6b1;
  iVar6 = FUN_0044bfc5();
  local_78 = (undefined1 **)(iVar6 + 0x80);
  local_44 = &local_78;
  ppuStack_7c = (undefined4 **)0x45a6c2;
  FUN_004d076d();
  ppuStack_7c = (undefined4 **)0x45a6cc;
  FUN_0047cda7();
  local_78 = (undefined1 **)0x45a6d1;
  iVar6 = FUN_0044bfc5();
  local_78 = (undefined1 **)(float)*(int *)(iVar6 + 0x14);
  ppuStack_7c = (undefined4 **)local_28;
  ppuStack_80 = (undefined1 **)0x45a6e4;
  FUN_004c2047();
  ppuStack_7c = (undefined4 **)0x45a6ef;
  ppuStack_7c = (undefined4 **)FUN_0043bc2d();
  ppuStack_80 = (undefined1 **)0x45a6f7;
  FUN_0047d575();
  local_78 = (undefined1 **)0x45a6fc;
  iVar6 = FUN_0044bfc5();
  local_54 = (undefined1 **)(float)*(int *)(iVar6 + 0xc);
  local_44 = &local_78;
  ppuStack_7c = (undefined4 **)0x45a714;
  FUN_004d076d();
  ppuStack_7c = (undefined4 **)0x45a71b;
  FUN_0047cda7();
  iVar6 = *(int *)(in_ECX + 0x70);
  iVar1 = *(int *)(iVar6 + 0x124);
  if ((iVar1 == 2) || (iVar1 == 3)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_5c = 6;
  if (bVar4) {
    local_5c = 7;
  }
  if (**(char **)(iVar6 + 0xac) != '\0') {
    local_5c = local_5c + 1;
  }
  if (**(char **)(iVar6 + 0xc0) != '\0') {
    local_5c = local_5c + 1;
  }
  if (**(char **)(iVar6 + 0xc4) != '\0') {
    local_5c = local_5c + 1;
  }
  local_44 = *(undefined4 **)(in_ECX + 0x18);
  ppuVar2 = (undefined4 **)((float)*(int *)(in_ECX + 0x1c) / (float)local_5c);
  local_50 = local_54;
  fVar3 = (float)local_54 + (float)local_54;
  local_40 = (double)fVar3;
  local_58 = (undefined1 **)((float)(int)local_44 - fVar3);
  if (iVar1 == 3) {
    local_58 = (undefined1 **)(((float)local_58 - fVar3) * 0.5);
  }
  ppuVar12 = (undefined4 **)((float)ppuVar2 * 0.5);
  local_38 = (double)(float)ppuVar12;
  local_4c = (undefined1 **)ppuVar12;
  if ((iVar1 == 1) || (iVar1 == 3)) {
    ppuStack_7c = &local_44;
    ppuStack_80 = (undefined1 **)0x45a804;
    local_78 = (undefined1 **)ppuVar2;
    local_78 = (undefined1 **)FUN_0049f81a();
    local_c = 0;
    ppuStack_7c = (undefined4 **)0x45a811;
    FUN_0047ceaa();
    puStack_10 = (undefined1 *)0xffffffff;
    ppuStack_7c = (undefined4 **)0x45a81f;
    FUN_004c4d7a();
    ppuStack_7c = &local_54;
    ppuStack_80 = (undefined1 **)0x45a82e;
    FUN_0046537e();
    ppuStack_7c = (undefined4 **)0x0;
    puStack_48 = (undefined1 *)&ppuStack_80;
    puStack_10 = (undefined1 *)0x1;
    ppuStack_80 = (undefined1 **)0x24;
    uVar7 = FUN_005b3fb0();
    uVar8 = FUN_005b3fb0(uVar7);
    uVar9 = FUN_005b3fb0(uVar8);
    uVar10 = FUN_005b3fb0(uVar9);
    FUN_0047d02d(param_1,&local_54,uVar10,uVar9,uVar8,uVar7);
    puStack_10 = (undefined1 *)0xffffffff;
    ppuStack_7c = (undefined4 **)0x45a886;
    FUN_004652d6();
    ppuStack_80 = &puStack_48;
    ppuStack_7c = ppuVar12;
    ppuStack_7c = (undefined4 **)FUN_0049f81a();
    puStack_10 = (undefined1 *)0x2;
    ppuStack_80 = (undefined1 **)0x45a8bb;
    FUN_0047ceaa();
    ppuStack_80 = (undefined1 **)0x45a8c4;
    FUN_004c4d7a();
    local_78 = (undefined1 **)0x45a8cd;
    FUN_0040954d();
    local_c = 3;
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0x9c);
    ppuStack_7c = (undefined4 **)0x45a8e7;
    thunk_FUN_0046e2c4();
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0xa0);
    ppuStack_7c = (undefined4 **)0x45a8f5;
    thunk_FUN_0046e2c4();
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0xa4);
    ppuStack_7c = (undefined4 **)0x45a903;
    thunk_FUN_0046e2c4();
    ppuStack_7c = (undefined4 **)local_58;
    ppuStack_80 = local_54;
    local_78 = (undefined1 **)ppuVar2;
    FUN_0045ac57(param_1);
    local_c = 0xffffffff;
    local_50 = (undefined1 **)((float)local_58 + (float)local_40 + (float)local_54);
    local_78 = (undefined1 **)0x45a943;
    FUN_004670ed();
  }
  ppuVar5 = local_4c;
  iVar6 = *(int *)(*(int *)(in_ECX + 0x70) + 0x124);
  if ((iVar6 == 2) || (iVar6 == 3)) {
    ppuStack_7c = &local_44;
    ppuStack_80 = (undefined1 **)0x45a97d;
    local_78 = (undefined1 **)ppuVar2;
    local_78 = (undefined1 **)FUN_0049f81a();
    local_c = 4;
    ppuStack_7c = (undefined4 **)0x45a98d;
    FUN_0047ceaa();
    puStack_10 = (undefined1 *)0xffffffff;
    ppuStack_7c = (undefined4 **)0x45a99b;
    FUN_004c4d7a();
    ppuStack_7c = &local_50;
    ppuStack_80 = (undefined1 **)0x45a9aa;
    FUN_0046537e();
    ppuStack_7c = (undefined4 **)0x0;
    local_44 = &ppuStack_80;
    puStack_10 = (undefined1 *)0x5;
    ppuStack_80 = (undefined1 **)0x24;
    ppuVar11 = (undefined4 **)FUN_005b3fb0();
    local_4c = (undefined1 **)FUN_005b3fb0();
    puStack_48 = (undefined1 *)FUN_005b3fb0();
    ppuVar12 = (undefined4 **)local_4c;
    ppuVar13 = ppuVar11;
    uVar7 = FUN_005b3fb0(local_4c,ppuVar11);
    FUN_0047d02d(param_1,&local_50,puStack_48,uVar7,ppuVar12,ppuVar13);
    puStack_10 = (undefined1 *)0xffffffff;
    ppuStack_7c = (undefined4 **)0x45aa17;
    FUN_004652d6();
    ppuStack_80 = (undefined1 **)&local_44;
    ppuStack_7c = (undefined4 **)ppuVar5;
    ppuStack_7c = (undefined4 **)FUN_0049f81a();
    puStack_10 = (undefined1 *)0x6;
    ppuStack_80 = (undefined1 **)0x45aa4c;
    FUN_0047ceaa();
    ppuStack_80 = (undefined1 **)0x45aa55;
    FUN_004c4d7a();
    local_78 = (undefined1 **)0x45aa5e;
    FUN_0040954d();
    local_c = 7;
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0xb0);
    ppuStack_7c = (undefined4 **)0x45aa78;
    thunk_FUN_0046e2c4();
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0xb4);
    ppuStack_7c = (undefined4 **)0x45aa86;
    thunk_FUN_0046e2c4();
    local_78 = (undefined1 **)(*(int *)(in_ECX + 0x70) + 0xb8);
    ppuStack_7c = (undefined4 **)0x45aa94;
    thunk_FUN_0046e2c4();
    ppuStack_80 = local_50;
    ppuStack_7c = ppuVar11;
    local_78 = (undefined1 **)ppuVar2;
    FUN_0045ac57(param_1);
    if (**(char **)(*(int *)(in_ECX + 0x70) + 0xbc) != '\0') {
      local_78 = (undefined1 **)0x0;
      local_4c = (undefined1 **)&ppuStack_7c;
      ppuStack_80 = local_54;
      ppuStack_7c = (undefined4 **)0x24;
      puVar14 = puStack_48;
      uVar7 = FUN_005b3fb0(puStack_48);
      FUN_0047d02d(param_1,*(int *)(in_ECX + 0x70) + 0xbc,local_44,uVar7,puVar14);
    }
    local_c = 0xffffffff;
    local_78 = (undefined1 **)0x45ab0e;
    FUN_004670ed();
  }
  local_78 = (undefined1 **)((float)*(int *)(in_ECX + 0x18) - (float)ppuVar2);
  ppuStack_80 = (undefined1 **)0x45ab55;
  ppuStack_7c = ppuVar2;
  local_44 = local_78;
  ppuStack_80 = (undefined1 **)FUN_005b3fb0();
  FUN_0047d84f(param_1);
  if (**(char **)(*(int *)(in_ECX + 0x70) + 0xac) != '\0') {
    local_78 = (undefined1 **)0x0;
    ppuStack_7c = (undefined4 **)0x24;
    ppuStack_80 = (undefined1 **)0x45ab7e;
    local_44 = &ppuStack_7c;
    ppuStack_80 = (undefined1 **)FUN_005b3fb0();
    uVar7 = *(undefined4 *)(in_ECX + 0x18);
    uVar8 = FUN_005b3fb0(uVar7);
    FUN_0047d02d(param_1,*(int *)(in_ECX + 0x70) + 0xac,0,uVar8,uVar7);
  }
  if (**(char **)(*(int *)(in_ECX + 0x70) + 0xc0) != '\0') {
    local_78 = (undefined1 **)0x0;
    local_44 = &ppuStack_7c;
    ppuStack_7c = (undefined4 **)0x24;
    ppuStack_80 = (undefined1 **)0x45abcb;
    ppuStack_80 = (undefined1 **)FUN_005b3fb0();
    uVar7 = *(undefined4 *)(in_ECX + 0x18);
    uVar8 = FUN_005b3fb0(uVar7);
    FUN_0047d02d(param_1,*(int *)(in_ECX + 0x70) + 0xc0,0,uVar8,uVar7);
  }
  if (**(char **)(*(int *)(in_ECX + 0x70) + 0xc4) != '\0') {
    local_78 = (undefined1 **)0x0;
    local_44 = &ppuStack_7c;
    ppuStack_7c = (undefined4 **)0x24;
    uVar7 = *(undefined4 *)(in_ECX + 0x18);
    ppuStack_80 = (undefined1 **)0x45ac1b;
    ppuStack_80 = (undefined1 **)FUN_005b3fb0();
    uVar8 = FUN_005b3fb0(uVar7);
    FUN_0047d02d(param_1,*(int *)(in_ECX + 0x70) + 0xc4,0,uVar8,uVar7);
  }
  ExceptionList = local_14;
  return;
}

