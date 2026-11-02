// rea decompile_all
// name: FUN_004eed20
// address: 0x4eed20
// body: available
// range: 0x4eed20-0x4ef3e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eed20(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  void **ppvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_64;
  undefined4 *local_5c;
  int local_58;
  void *local_54;
  int local_50;
  void *local_4c;
  int *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070579f;
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
  local_44 = in_ECX;
  local_58 = FUN_006f6dd6(uVar1,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor,
                          &TargetExplorerItem_STSong::RTTI_Type_Descriptor,0,local_14);
  FUN_0040ec10(&local_3c);
  FUN_0040ebd0(&local_5c);
  local_8 = 0;
  if (local_3c != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_3c + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_3c)(1);
    }
  }
  uVar1 = FUN_0040eb00(&local_50);
  local_8._0_1_ = 1;
  FUN_006e4900(uVar1,0);
  local_8._0_1_ = 0;
  piVar5 = (int *)(local_50 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("Stereo Song");
  local_8._0_1_ = 2;
  local_4c = operator_new(0xac);
  local_8._0_1_ = 3;
  FUN_0045c990("Type: ");
  local_8 = CONCAT31(local_8._1_3_,4);
  local_40 = 1;
  piVar5 = (int *)FUN_00537fb0(&local_3c,&local_50,&PTR_DAT_00c7ed68);
  local_8 = 5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_4c = operator_new(0xac);
  local_8._0_1_ = 6;
  FUN_0045c990("Sample rate: ");
  local_8 = CONCAT31(local_8._1_3_,7);
  local_40 = 2;
  uVar1 = FUN_005be060();
  local_8 = 8;
  local_40 = 6;
  piVar5 = (int *)FUN_00537fb0(&local_3c,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 10;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  piVar5 = local_48 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_4c = operator_new(0xac);
  local_8._0_1_ = 0xb;
  FUN_0045c990("Resolution:");
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_40 = 8;
  uVar1 = FUN_005bdfb0();
  local_8 = 0xd;
  local_40 = 0x18;
  piVar5 = (int *)FUN_00537fb0(&local_3c,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0xf;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  piVar5 = local_48 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_4c = operator_new(0xac);
  local_8._0_1_ = 0x10;
  FUN_0045c990("Length: ");
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_40 = 0x20;
  uVar1 = FUN_00549490(&local_48);
  local_8 = 0x12;
  local_40 = 0x60;
  piVar5 = (int *)FUN_00537fb0(&local_3c,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x14;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  local_48 = local_48 + -2;
  if (local_48 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *local_48;
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(local_48);
    }
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_48 = operator_new(0xac);
  local_8._0_1_ = 0x15;
  FUN_0045c990("Size: ");
  local_8 = CONCAT31(local_8._1_3_,0x16);
  local_40 = 0x80;
  puVar2 = (undefined4 *)FUN_00458890();
  BVar3 = GetFileAttributesExW((LPCWSTR)*puVar2,GetFileExInfoStandard,local_38);
  if (BVar3 == 0) {
    local_64 = 0;
    local_64._4_4_ = 0;
    local_64._0_4_ = 0;
    local_18 = (undefined4)local_64;
    local_1c = local_64._4_4_;
  }
  uVar1 = FUN_00636d50(local_18,local_1c);
  local_8 = 0x17;
  local_40 = 0x180;
  local_48 = (int *)FUN_00537fb0(&local_3c,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x19;
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 0x28))(1);
    FUN_006e5050(local_48,0xffffffff);
  }
  piVar5 = (int *)((int)local_4c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_54 = operator_new(0xac);
  local_8._0_1_ = 0x1a;
  FUN_0045c990("Modification date: ");
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  uVar1 = 1;
  ppvVar6 = &local_4c;
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  local_40 = 0x600;
  FUN_0040ea80(&local_64);
  uVar1 = FUN_00636ad0(ppvVar6,uVar1,uVar7,uVar8,uVar9);
  local_8 = 0x1c;
  local_40 = 0xe00;
  piVar5 = (int *)FUN_00537fb0(&local_3c,uVar1,&PTR_DAT_00c7ed68);
  local_8 = 0x1e;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  piVar5 = (int *)((int)local_4c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 2;
  piVar5 = local_3c + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_54 = operator_new(0x214);
  local_8._0_1_ = 0x1f;
  iVar4 = FUN_006f6dd6(*(undefined4 *)(local_58 + 4),0,&juce::TreeView::RTTI_Type_Descriptor,
                       &TargetExplorer::RTTI_Type_Descriptor,0);
  piVar5 = (int *)FUN_00539540(*(undefined4 *)(iVar4 + 0xd0),local_5c,
                               *(undefined4 *)(local_44 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,2);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  FUN_005390d0();
  uVar1 = FUN_005305f0();
  *(undefined4 *)(local_44 + 0x4f0) = uVar1;
  piVar5 = (int *)(local_50 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  LOCK();
  piVar5 = local_5c + 1;
  iVar4 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    (**(code **)*local_5c)(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

