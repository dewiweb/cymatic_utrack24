// rea decompile_all
// name: FUN_004ef3f0
// address: 0x4ef3f0
// body: available
// range: 0x4ef3f0-0x4eff00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef3f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  int **ppiVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 local_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  undefined4 *local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int **local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  void *local_50;
  int local_4c;
  int local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705aa5;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(in_ECX + 0x78);
  }
  local_48 = in_ECX;
  local_64 = FUN_006f6dd6(uVar1,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor,
                          &TargetExplorerItem_MTSong::RTTI_Type_Descriptor,0,local_14);
  FUN_0040ec10(&local_3c);
  FUN_0040ebb0(&local_70);
  local_8 = 0;
  if (local_3c != (int *)0x0) {
    LOCK();
    piVar6 = local_3c + 1;
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_3c)(1);
    }
  }
  uVar1 = FUN_0040eb20(&local_4c);
  local_8._0_1_ = 1;
  FUN_006e4900(uVar1,0);
  local_8._0_1_ = 0;
  piVar6 = (int *)(local_4c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_4c = local_70[0x10];
  FUN_005bdda0();
  local_8._0_1_ = 2;
  local_54 = (int *)(local_74 + -8);
  if (local_54 != &DAT_00bfe124) {
    LOCK();
    *local_54 = *local_54 + 1;
    UNLOCK();
  }
  FUN_006377c0(local_74);
  local_8._0_1_ = 3;
  local_50 = operator_new(0xac);
  local_8._0_1_ = 4;
  FUN_0045c990("Type: ");
  local_8 = CONCAT31(local_8._1_3_,5);
  local_40 = 1;
  piVar6 = (int *)FUN_00537fb0(local_38,&local_68,&PTR_DAT_00c7ed68);
  local_8 = 6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x28))(1);
    FUN_006e5050(piVar6,0xffffffff);
  }
  local_8 = 3;
  piVar6 = (int *)(local_38[0] - 8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_5c = (int *)&DAT_00bfe12c;
  local_8._0_1_ = 7;
  iVar2 = local_70[0xe];
  if (iVar2 < 0x15889) {
    if (iVar2 == 0x15888) {
      iVar2 = 3;
    }
    else if (iVar2 == 0xac44) {
      iVar2 = 1;
    }
    else {
      if (iVar2 != 48000) goto LAB_004ef5ed;
      iVar2 = 2;
    }
  }
  else if (iVar2 == 96000) {
    iVar2 = 4;
  }
  else {
LAB_004ef5ed:
    iVar2 = 6;
  }
  switch(local_4c) {
  case 1:
    break;
  case 2:
  case 4:
    break;
  case 3:
    goto switchD_004ef602_caseD_3;
  default:
    goto switchD_004ef602_default;
  }
  if ((iVar2 != 1) && (iVar2 != 2)) {
switchD_004ef602_default:
    FUN_0045c990("Invalid");
    local_5c = local_3c;
  }
switchD_004ef602_caseD_3:
  piVar6 = local_5c;
  local_50 = operator_new(0xac);
  local_8._0_1_ = 8;
  FUN_0045c990("Sample rate: ");
  local_8 = CONCAT31(local_8._1_3_,9);
  local_40 = 2;
  uVar1 = FUN_005be110();
  local_8 = 10;
  local_40 = 6;
  piVar3 = (int *)FUN_00537fb0(local_38,uVar1,&local_5c);
  local_8 = 0xc;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  local_3c = local_3c + -2;
  if (local_3c != &DAT_00bfe124) {
    LOCK();
    iVar2 = *local_3c;
    *local_3c = *local_3c + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(local_3c);
    }
  }
  local_8 = 7;
  piVar3 = (int *)(local_38[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_3c = operator_new(0xac);
  local_8._0_1_ = 0xd;
  FUN_0045c990("Resolution: ");
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_40 = 8;
  uVar1 = FUN_005bdf30();
  local_8 = 0xf;
  local_40 = 0x18;
  local_3c = (int *)FUN_00537fb0(local_38,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x11;
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0x28))(1);
    FUN_006e5050(local_3c,0xffffffff);
  }
  piVar3 = (int *)(local_4c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = (int *)(local_38[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_3c = operator_new(0xac);
  local_8._0_1_ = 0x12;
  FUN_0045c990("Channel count: ");
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_40 = 0x20;
  if ((int)local_70[0x19] < 0) {
    iVar2 = FUN_006104a0();
    *(undefined1 *)(iVar2 + -1) = 0x2d;
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar2);
  local_8 = 0x14;
  local_40 = 0x60;
  local_3c = (int *)FUN_00537fb0(&local_44,local_38,&PTR_DAT_00c7ed68);
  local_8 = 0x16;
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0x28))(1);
    FUN_006e5050(local_3c,0xffffffff);
  }
  piVar3 = (int *)(local_38[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = local_44 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_50 = operator_new(0xac);
  local_8._0_1_ = 0x17;
  pcVar12 = "Length: ";
  FUN_0045c990("Length: ");
  local_8 = CONCAT31(local_8._1_3_,0x18);
  local_40 = 0x80;
  uVar1 = FUN_00560110(&local_3c,pcVar12);
  local_8 = 0x19;
  local_40 = 0x180;
  piVar3 = (int *)FUN_00537fb0(&local_44,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x1b;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  piVar3 = local_3c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = local_44 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_50 = operator_new(0xac);
  local_8._0_1_ = 0x1c;
  FUN_0045c990("Size: ");
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  local_40 = 0x200;
  uVar8 = FUN_00560170();
  uVar1 = FUN_00636d50(uVar8);
  local_8 = 0x1e;
  local_40 = 0x600;
  piVar3 = (int *)FUN_00537fb0(&local_44,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x20;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  piVar3 = local_3c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = local_44 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_50 = operator_new(0xac);
  local_8 = CONCAT31(local_8._1_3_,0x21);
  FUN_0045c990("Modification date: ");
  uVar13 = 0;
  uVar11 = 0;
  uVar10 = 1;
  uVar1 = 1;
  ppiVar9 = &local_3c;
  FUN_0040eb40(local_80);
  uVar1 = FUN_00636ad0(ppiVar9,uVar1,uVar10,uVar11,uVar13);
  local_8 = 0x23;
  local_40 = 0x3800;
  piVar3 = (int *)FUN_00537fb0(&local_44,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x25;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  piVar3 = local_3c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = local_44 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (*(char *)local_70[0x20] == '\0') goto LAB_004efdf1;
  local_58 = operator_new(0xac);
  local_8._0_1_ = 0x26;
  puVar4 = (undefined4 *)FUN_00560080(&local_50);
  local_8 = CONCAT31(local_8._1_3_,0x27);
  local_40 = 0x4000;
  if (*(char *)*puVar4 == '\0') {
LAB_004efc05:
    FUN_0045c990("Missing MIDI file");
    local_60 = &local_3c;
    local_8 = 0x29;
    local_6c = 0x14000;
  }
  else {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if ((DVar5 & 0x10) != 0) goto LAB_004efc05;
    local_44 = (int *)PTR_DAT_00c7ed68;
    piVar3 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    local_60 = &local_44;
    local_8 = 0x28;
    local_6c = 0xc000;
  }
  piVar3 = local_44;
  local_40 = local_6c;
  local_38[0] = local_6c;
  FUN_0045c990("MIDI file: ");
  local_8 = 0x2a;
  local_40 = local_40 | 0x20000;
  FUN_00560080(&local_7c);
  local_8 = 0x2b;
  local_40 = local_6c | 0x60000;
  uVar1 = FUN_00636a10(&local_78);
  local_8 = 0x2c;
  local_40 = local_38[0] | 0xe0000;
  local_38[0] = local_40;
  local_58 = (int *)FUN_00537fb0(&local_4c,uVar1,local_60);
  local_8 = 0x32;
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 0x28))(1);
    FUN_006e5050(local_58,0xffffffff);
  }
  local_38[0] = local_38[0] & 0xfff7ffff;
  piVar7 = (int *)(local_78 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_38[0] = local_38[0] & 0xfffbffff;
  piVar7 = (int *)(local_7c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_38[0] = local_38[0] & 0xfffdffff;
  piVar7 = (int *)(local_4c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if ((local_38[0] & 0x10000) != 0) {
    local_38[0] = local_38[0] & 0xfffeffff;
    piVar7 = local_3c + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if (((local_38[0] & 0x8000) != 0) && (piVar3 = piVar3 + -2, piVar3 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 7;
  piVar3 = (int *)((int)local_50 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
LAB_004efdf1:
  local_50 = operator_new(0x214);
  local_8._0_1_ = 0x33;
  iVar2 = FUN_006f6dd6(*(undefined4 *)(local_64 + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0);
  piVar3 = (int *)FUN_00539380(*(undefined4 *)(iVar2 + 0xd0),local_70,
                               *(undefined4 *)(local_48 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,7);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x28))(1);
    FUN_006e5050(piVar3,0xffffffff);
  }
  FUN_005390d0();
  uVar1 = FUN_005305f0();
  *(undefined4 *)(local_48 + 0x4f0) = uVar1;
  piVar6 = piVar6 + -2;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_68 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (local_54 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *local_54;
    *local_54 = *local_54 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(local_54);
    }
  }
  LOCK();
  piVar6 = local_70 + 1;
  iVar2 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)*local_70)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

