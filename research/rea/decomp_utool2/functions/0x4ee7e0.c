// rea decompile_all
// name: FUN_004ee7e0
// address: 0x4ee7e0
// body: available
// range: 0x4ee7e0-0x4eed17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee7e0(void)

{
  void *pvVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  TypeDescriptor **ppTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TypeDescriptor *pTStack_58;
  TypeDescriptor *local_38;
  TypeDescriptor *local_34;
  undefined1 local_30 [4];
  undefined1 *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007055c7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = **(undefined4 **)(in_ECX + 0x78);
  }
  pTStack_58 = &TargetExplorerItem_Playlist::RTTI_Type_Descriptor;
  local_18 = in_ECX;
  FUN_006f6dd6(uVar8,0,&TargetExplorerBaseItem::RTTI_Type_Descriptor);
  pTStack_58 = (TypeDescriptor *)0x4ee84b;
  FUN_0040ec10();
  pTStack_58 = (TypeDescriptor *)0x4ee856;
  FUN_0040ebf0();
  local_8 = 0;
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_20 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      pTStack_58 = (TypeDescriptor *)0x4ee87c;
      (**(code **)*local_20)();
    }
  }
  pTStack_58 = (TypeDescriptor *)0x4ee88a;
  pTStack_58 = (TypeDescriptor *)FUN_0040eb90();
  local_8._0_1_ = 1;
  FUN_006e4900();
  local_8._0_1_ = 0;
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4ee8c0;
      FID_conflict__free(piVar4);
    }
  }
  FUN_005bdda0();
  local_8._0_1_ = 2;
  FUN_005bde60();
  local_8._0_1_ = 3;
  pTStack_58 = (TypeDescriptor *)0x4ee8eb;
  local_34 = operator_new(0xac);
  local_8._0_1_ = 4;
  pTStack_58 = (TypeDescriptor *)0x4ee902;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,5);
  local_2c = (undefined1 *)&pTStack_58;
  local_14 = 1;
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  FUN_006377c0(local_28);
  pTStack_58 = (TypeDescriptor *)FUN_00637730();
  local_8 = 6;
  local_14 = 3;
  local_34 = (TypeDescriptor *)FUN_00537fb0(&local_1c);
  local_8 = 8;
  if (local_34 != (TypeDescriptor *)0x0) {
    pTStack_58 = (TypeDescriptor *)0x4ee97d;
    (**(code **)((int)local_34->pVFTable + 0x28))();
    pTStack_58 = local_34;
    FUN_006e5050();
  }
  local_38 = local_38 + -1;
  if (local_38 != (TypeDescriptor *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = local_38->pVFTable;
    local_38->pVFTable = (void *)((int)local_38->pVFTable + -1);
    UNLOCK();
    if (pvVar1 == (void *)0x0) {
      pTStack_58 = (TypeDescriptor *)0x4ee9ad;
      FID_conflict__free(local_38);
    }
  }
  local_8 = 3;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4ee9d7;
      FID_conflict__free(piVar5);
    }
  }
  pTStack_58 = (TypeDescriptor *)0x4ee9e4;
  local_38 = operator_new(0x204);
  local_8._0_1_ = 9;
  pTStack_58 = (TypeDescriptor *)0x4ee9f6;
  local_38 = (TypeDescriptor *)FUN_00536e90();
  local_8._0_1_ = 3;
  if (local_38 != (TypeDescriptor *)0x0) {
    pTStack_58 = (TypeDescriptor *)0x4eea0c;
    (**(code **)((int)local_38->pVFTable + 0x28))();
    pTStack_58 = local_38;
    FUN_006e5050();
  }
  pTStack_58 = (TypeDescriptor *)0x4eea26;
  local_34 = operator_new(0xac);
  local_8._0_1_ = 10;
  pTStack_58 = (TypeDescriptor *)0x4eea3f;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_14 = 4;
  pTStack_58 = (TypeDescriptor *)0x4eea58;
  pTStack_58 = (TypeDescriptor *)FUN_00558ae0();
  local_8 = 0xc;
  local_14 = 0xc;
  pTVar3 = (TypeDescriptor *)FUN_00537fb0(&local_1c);
  local_8 = 0xe;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTStack_58 = (TypeDescriptor *)0x4eea8f;
    (**(code **)((int)pTVar3->pVFTable + 0x28))();
    pTStack_58 = pTVar3;
    FUN_006e5050();
  }
  pTVar3 = local_38 + -1;
  if (pTVar3 != (TypeDescriptor *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = pTVar3->pVFTable;
    pTVar3->pVFTable = (void *)((int)pTVar3->pVFTable + -1);
    UNLOCK();
    if (pvVar1 == (void *)0x0) {
      pTStack_58 = (TypeDescriptor *)0x4eeac0;
      FID_conflict__free(pTVar3);
    }
  }
  local_8 = 3;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4eeaea;
      FID_conflict__free(piVar5);
    }
  }
  pTStack_58 = (TypeDescriptor *)0x4eeaf7;
  local_34 = operator_new(0xac);
  local_8._0_1_ = 0xf;
  pTStack_58 = (TypeDescriptor *)0x4eeb10;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_14 = 0x10;
  pTStack_58 = (TypeDescriptor *)FUN_00558b10();
  pTStack_58 = (TypeDescriptor *)FUN_00636d50();
  local_8 = 0x11;
  local_14 = 0x30;
  pTVar3 = (TypeDescriptor *)FUN_00537fb0(&local_1c);
  local_8 = 0x13;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTStack_58 = (TypeDescriptor *)0x4eeb69;
    (**(code **)((int)pTVar3->pVFTable + 0x28))();
    pTStack_58 = pTVar3;
    FUN_006e5050();
  }
  pTVar3 = local_38 + -1;
  if (pTVar3 != (TypeDescriptor *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = pTVar3->pVFTable;
    pTVar3->pVFTable = (void *)((int)pTVar3->pVFTable + -1);
    UNLOCK();
    if (pvVar1 == (void *)0x0) {
      pTStack_58 = (TypeDescriptor *)0x4eeb9a;
      FID_conflict__free(pTVar3);
    }
  }
  local_8 = 3;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4eebc4;
      FID_conflict__free(piVar5);
    }
  }
  pTStack_58 = (TypeDescriptor *)0x4eebd1;
  local_34 = operator_new(0xac);
  local_8 = CONCAT31(local_8._1_3_,0x14);
  pTStack_58 = (TypeDescriptor *)0x4eebea;
  FUN_0045c990();
  pTStack_58 = (TypeDescriptor *)0x0;
  uVar9 = 1;
  uVar8 = 1;
  ppTVar7 = &local_38;
  FUN_0040eb40(local_30);
  pTStack_58 = (TypeDescriptor *)FUN_00636ad0(ppTVar7,uVar8,uVar9);
  local_8 = 0x16;
  local_14 = 0x1c0;
  pTVar3 = (TypeDescriptor *)FUN_00537fb0(&local_1c);
  local_8 = 0x18;
  iVar6 = local_18;
  if (pTVar3 != (TypeDescriptor *)0x0) {
    pTStack_58 = (TypeDescriptor *)0x4eec42;
    (**(code **)((int)pTVar3->pVFTable + 0x28))();
    pTStack_58 = pTVar3;
    FUN_006e5050();
    iVar6 = local_18;
  }
  pTVar3 = local_38 + -1;
  if (pTVar3 != (TypeDescriptor *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = pTVar3->pVFTable;
    pTVar3->pVFTable = (void *)((int)pTVar3->pVFTable + -1);
    UNLOCK();
    if (pvVar1 == (void *)0x0) {
      pTStack_58 = (TypeDescriptor *)0x4eec78;
      FID_conflict__free(pTVar3);
    }
  }
  local_8 = 3;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4eeca2;
      FID_conflict__free(piVar5);
    }
  }
  uVar8 = FUN_005305f0();
  piVar5 = local_20 + -2;
  *(undefined4 *)(iVar6 + 0x4f0) = uVar8;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4eecd3;
      FID_conflict__free(piVar5);
    }
  }
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      pTStack_58 = (TypeDescriptor *)0x4eecf3;
      FID_conflict__free(piVar4);
    }
  }
  LOCK();
  piVar4 = local_24 + 1;
  iVar6 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    pTStack_58 = (TypeDescriptor *)0x4eed06;
    (**(code **)*local_24)();
  }
  ExceptionList = local_10;
  return;
}

