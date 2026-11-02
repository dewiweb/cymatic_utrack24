// rea decompile_all
// name: FUN_00527500
// address: 0x527500
// body: available
// range: 0x527500-0x527b2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00527500(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_3c [8];
  void *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b862;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(in_ECX + 0x78);
  }
  local_18 = in_ECX;
  local_24 = FUN_006f6dd6(uVar2,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                          &ProjectExplorerItem_Playlist::RTTI_Type_Descriptor,0,
                          DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_20 = *(int *)(*(int *)(local_24 + 0x78) + 0xc);
  uVar2 = FUN_00410ea0(&local_28);
  local_8 = 0;
  FUN_006e4900(uVar2,0);
  local_8 = 0xffffffff;
  local_28 = local_28 + -2;
  if (local_28 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *local_28;
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(local_28);
    }
  }
  local_30 = operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location");
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = 1;
  local_28 = (int *)FUN_00534e00(&local_1c);
  local_8 = 0xffffffff;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_30 = operator_new(0xac);
  local_8 = 4;
  uVar2 = FUN_0051b7d0(&local_1c);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_14 = 2;
  uVar2 = FUN_00537fb0(uVar2,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  piVar3 = local_28;
  local_8 = 6;
  FUN_00534da0(uVar2);
  local_8 = 0xffffffff;
  local_1c = local_1c + -2;
  if (local_1c != &DAT_00bfe124) {
    LOCK();
    iVar5 = *local_1c;
    *local_1c = *local_1c + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(local_1c);
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  FUN_005356e0();
  piVar4 = *(int **)(local_24 + 0x44);
  local_30 = piVar4;
  FUN_005bdda0();
  local_1c = local_2c;
  piVar3 = local_2c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  if ((piVar4 != (int *)0x3) && (piVar4 != (int *)0x4)) {
    if (*(int *)(local_20 + 0x10) == 3) {
      pcVar9 = " stereo";
    }
    else {
      if (*(int *)(local_20 + 0x10) != 4) goto LAB_00527752;
      pcVar9 = " multitrack";
    }
    FUN_0045c990(pcVar9);
    local_1c = local_28;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
LAB_00527752:
  FUN_00621830(" Playlist");
  local_34 = operator_new(0xac);
  local_8._0_1_ = 9;
  FUN_0045c990("Type: ");
  local_8 = CONCAT31(local_8._1_3_,10);
  local_14 = 4;
  piVar4 = (int *)FUN_00537fb0(&local_28,&local_1c,&PTR_DAT_00c7ed68);
  local_8 = 0xb;
  iVar5 = local_18;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(1);
    iVar5 = local_18;
    FUN_006e5050(piVar4,0xffffffff);
  }
  local_8 = 8;
  piVar4 = local_28 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_34 = operator_new(0x204);
  local_8._0_1_ = 0xc;
  local_30 = (int *)FUN_00536c30(local_20,*(undefined4 *)(iVar5 + 0x74),local_30);
  local_8._0_1_ = 8;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 0x28))(1);
    FUN_006e5050(local_30,0xffffffff);
  }
  local_34 = operator_new(0xac);
  local_8._0_1_ = 0xd;
  FUN_0045c990("Length: ");
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_14 = 8;
  uVar2 = FUN_0054aff0(&local_30);
  local_8 = 0xf;
  local_14 = 0x18;
  piVar4 = (int *)FUN_00537fb0(&local_28,uVar2,&PTR_DAT_00c7ed68);
  local_8 = 0x11;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(1);
    FUN_006e5050(piVar4,0xffffffff);
  }
  piVar4 = local_30 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 8;
  piVar4 = local_28 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_34 = operator_new(0xac);
  local_8._0_1_ = 0x12;
  FUN_0045c990("Size: ");
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_14 = 0x20;
  uVar2 = FUN_00636d50(0x1000,0);
  local_8 = 0x14;
  local_14 = 0x60;
  piVar4 = (int *)FUN_00537fb0(&local_28,uVar2,&PTR_DAT_00c7ed68);
  local_8 = 0x16;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(1);
    FUN_006e5050(piVar4,0xffffffff);
  }
  piVar4 = local_30 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 8;
  piVar4 = local_28 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_34 = operator_new(0xac);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  FUN_0045c990("Modification date: ");
  ppiVar6 = &local_30;
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 1;
  uVar2 = 1;
  FUN_00413390(local_3c);
  uVar2 = FUN_00636ad0(ppiVar6,uVar2,uVar7,uVar8,uVar10);
  local_8 = 0x19;
  local_14 = 0x380;
  piVar4 = (int *)FUN_00537fb0(&local_28,uVar2,&PTR_DAT_00c7ed68);
  local_8 = 0x1b;
  iVar5 = local_18;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(1);
    FUN_006e5050(piVar4,0xffffffff);
    iVar5 = local_18;
  }
  piVar4 = local_30 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 8;
  piVar4 = local_28 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  uVar2 = FUN_0051c060();
  piVar4 = local_1c + -2;
  *(undefined4 *)(iVar5 + 0x4f0) = uVar2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

