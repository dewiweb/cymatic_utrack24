// rea decompile_all
// name: FUN_0045bd7d
// address: 0x45bd7d
// body: available
// range: 0x45bd7d-0x45c2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045bd7d(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int unaff_EBX;
  undefined1 *puVar7;
  int *piVar8;
  undefined2 uVar9;
  int aiStack_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de2a0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((param_1 == 0) || (*(int *)(unaff_EBX + 0x130) != param_1)) {
    FUN_0045ef8e(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
    iVar1 = *(int *)(unaff_EBX + 0x154);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x154) = 0;
    }
    FUN_0043f3c8();
    iVar1 = *(int *)(unaff_EBX + 0x158);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x158) = 0;
    }
    FUN_0043f3c8();
    iVar1 = *(int *)(unaff_EBX + 0x15c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x15c) = 0;
    }
    FUN_0044818a();
    iVar1 = *(int *)(unaff_EBX + 0x160);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x160) = 0;
    }
    FUN_004481e0();
    iVar1 = *(int *)(unaff_EBX + 0x164);
    *(undefined1 *)(unaff_EBX + 0x16c) = 0;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x164) = 0;
    }
    FUN_004481e0();
    iVar1 = *(int *)(unaff_EBX + 0x168);
    *(undefined1 *)(unaff_EBX + 0x16c) = 0;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EBX + 0x168) = 0;
    }
    if (*(int *)(unaff_EBX + 0x134) != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(*(int *)(unaff_EBX + 0x134));
      *(undefined4 *)(unaff_EBX + 0x134) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x13c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(iVar1);
      *(int *)(unaff_EBX + 0x13c) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x140);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(iVar1);
      *(int *)(unaff_EBX + 0x140) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x144);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(iVar1);
      *(int *)(unaff_EBX + 0x144) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x148);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(iVar1);
      *(int *)(unaff_EBX + 0x148) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x14c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(iVar1);
      *(int *)(unaff_EBX + 0x14c) = 0;
    }
    if (*(int *)(unaff_EBX + 0x150) != 0) {
      (**(code **)(**(int **)(unaff_EBX + 0x114) + 0x60))(*(int *)(unaff_EBX + 0x150));
      *(undefined4 *)(unaff_EBX + 0x150) = 0;
    }
    iVar1 = *(int *)(unaff_EBX + 0x130);
    if (iVar1 != param_1) {
      if (iVar1 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      }
      *(int *)(unaff_EBX + 0x130) = param_1;
    }
    (**(code **)(**(int **)(unaff_EBX + 0x11c) + 0x50))();
    (**(code **)(**(int **)(unaff_EBX + 0x120) + 0x50))();
    (**(code **)(**(int **)(unaff_EBX + 0x124) + 0x50))();
    (**(code **)(**(int **)(unaff_EBX + 0x128) + 0x50))();
    (**(code **)(**(int **)(unaff_EBX + 300) + 0x50))();
    FUN_0045efa9();
    if (*(int *)(unaff_EBX + 0x130) == 0) {
      if (*(int *)(unaff_EBX + 0x118) != 0) {
        (**(code **)(**(int **)(unaff_EBX + 0x11c) + 0x50))();
        (**(code **)(**(int **)(unaff_EBX + 0x120) + 0x50))();
        (**(code **)(**(int **)(unaff_EBX + 0x124) + 0x50))();
        (**(code **)(**(int **)(unaff_EBX + 0x128) + 0x50))();
        (**(code **)(**(int **)(unaff_EBX + 300) + 0x50))();
      }
      aiStack_34[0] = FUN_005af82d(0x1d0);
      uStack_c = 0;
      if (aiStack_34[0] == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00445ca1(aiStack_34[0],unaff_EBX);
      }
      uStack_c = 0xffffffff;
      puVar2 = *(undefined4 **)(unaff_EBX + 1000);
      if ((puVar2 != puVar6) &&
         (*(undefined4 **)(unaff_EBX + 1000) = puVar6, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      puVar6 = *(undefined4 **)(unaff_EBX + 1000);
      if (puVar6 != (undefined4 *)0x0) {
        *(int *)(unaff_EBX + 1000) = 0;
        (**(code **)*puVar6)(1);
      }
      (*(code *)**(undefined4 **)
                  (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x130) + 4) + 8) + 4 +
                  *(int *)(unaff_EBX + 0x130)))();
      uVar5 = FUN_00467ec4();
      *(undefined4 *)(unaff_EBX + 0x68) = uVar5;
      cVar3 = FUN_00448866();
      if (cVar3 == '\0') {
        *(undefined2 *)(unaff_EBX + 0x3ec) = 0;
        *(undefined2 *)(unaff_EBX + 0x3ee) = 1;
        *(undefined2 *)(unaff_EBX + 0x3f0) = 2;
        uVar4 = 3;
        uVar9 = 4;
      }
      else {
        *(undefined2 *)(unaff_EBX + 0x3ec) = 0;
        *(undefined2 *)(unaff_EBX + 0x3ee) = 0xffff;
        *(undefined2 *)(unaff_EBX + 0x3f0) = 1;
        uVar4 = 2;
        uVar9 = 3;
      }
      *(undefined2 *)(unaff_EBX + 0x3f2) = uVar4;
      *(undefined2 *)(unaff_EBX + 0x3f4) = uVar9;
      iVar1 = **(int **)(unaff_EBX + 0x11c);
      piVar8 = aiStack_34;
      uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 8))(piVar8,0);
      uVar5 = FUN_00503c30(uVar5,piVar8);
      (**(code **)(iVar1 + 0x54))(uVar5);
      if (*(short *)(unaff_EBX + 0x3ee) != -1) {
        iVar1 = **(int **)(unaff_EBX + 0x120);
        puVar7 = &stack0xffffffc4;
        uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 8))
                          (puVar7,*(short *)(unaff_EBX + 0x3ee));
        uVar5 = FUN_00503c30(uVar5,puVar7);
        (**(code **)(iVar1 + 0x54))(uVar5);
      }
      if (*(short *)(unaff_EBX + 0x3f0) != -1) {
        iVar1 = **(int **)(unaff_EBX + 0x124);
        puVar7 = &stack0xffffffc4;
        uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 8))
                          (puVar7,*(short *)(unaff_EBX + 0x3f0));
        uVar5 = FUN_00503c30(uVar5,puVar7);
        (**(code **)(iVar1 + 0x54))(uVar5);
      }
      if (*(short *)(unaff_EBX + 0x3f2) != -1) {
        iVar1 = **(int **)(unaff_EBX + 0x128);
        puVar7 = &stack0xffffffc4;
        uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 8))
                          (puVar7,*(short *)(unaff_EBX + 0x3f2));
        uVar5 = FUN_00503c30(uVar5,puVar7);
        (**(code **)(iVar1 + 0x54))(uVar5);
      }
      if (*(short *)(unaff_EBX + 0x3f4) != -1) {
        iVar1 = **(int **)(unaff_EBX + 300);
        puVar7 = &stack0xffffffc4;
        uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 8))
                          (puVar7,*(short *)(unaff_EBX + 0x3f4));
        uVar5 = FUN_00503c30(uVar5,puVar7);
        (**(code **)(iVar1 + 0x54))(uVar5);
      }
      *(undefined1 *)(unaff_EBX + 0x138) = 0;
      uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 0xac))
                        (5,&DAT_0095c888,0xffff,&stack0xffffffc4,unaff_EBX + 0x20,0);
      *(undefined4 *)(unaff_EBX + 0x134) = uVar5;
      uVar5 = (**(code **)(**(int **)(unaff_EBX + 0x130) + 0x58))(5,0x105,unaff_EBX + 0x40,0);
      *(undefined4 *)(unaff_EBX + 0x150) = uVar5;
    }
    *(undefined1 *)(unaff_EBX + 0xa9) = 1;
    FUN_0047433f();
    FUN_0047479c();
  }
  ExceptionList = local_14;
  return;
}

