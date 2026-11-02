// rea decompile_all
// name: FUN_005a5f10
// address: 0x5a5f10
// body: available
// range: 0x5a5f10-0x5a64d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5f10(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  int *piVar10;
  undefined4 extraout_ECX;
  void *pvVar11;
  undefined4 extraout_ECX_00;
  int iVar12;
  uint uVar13;
  void *local_98 [2];
  int local_90;
  int local_8c;
  int local_88;
  void *local_84;
  undefined4 local_80;
  void *local_7c;
  int local_78;
  void *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  void *local_64;
  undefined4 local_60;
  int local_5c;
  char local_55;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int *local_44 [2];
  undefined1 local_3c [8];
  int *local_34 [2];
  undefined1 local_2c [8];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717689;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar13 = 0;
  local_54 = 0;
  local_48 = 0;
  local_4c = in_ECX;
  local_14 = uVar5;
  if (((*(byte *)(in_ECX + 0x1df1) & 0x10) == 0) &&
     (((*(int *)(in_ECX + 0x1d94) == 0 || (cVar3 = FUN_006e6320(uVar5), cVar3 != '\0')) &&
      (cVar3 = FUN_005a9ec0(), cVar3 != '\0')))) {
    FUN_0045c990(&DAT_00747e6c);
    local_8 = 0;
    FUN_0045c990("Continue");
    local_8._0_1_ = 1;
    FUN_0045c990("Warning");
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar6 = FUN_004ed1f0(&local_50,&local_54,1);
    local_55 = iVar6 == 1;
    piVar10 = (int *)(local_5c + -8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    piVar10 = (int *)(local_50 - 8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    local_8 = 0xffffffff;
    piVar10 = (int *)(local_54 - 8);
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    if (local_55 != '\0') goto LAB_005a641f;
  }
  if ((*(byte *)(in_ECX + 0x2b0d) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x2b0d) = *(byte *)(in_ECX + 0x2b0d) | 0x10;
    iVar6 = *(int *)(in_ECX + 0x2ab0);
    if ((iVar6 == 0) ||
       (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar6 + 0xc) == 0 || (cVar3 = FUN_006e6320(uVar5), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  FUN_0052d8f0(local_98);
  local_8 = 3;
  local_64 = operator_new(0x50);
  local_5c = FUN_005a0910(-(uint)(in_ECX != 0) & in_ECX + 0x84U);
  uVar9 = *(undefined4 *)(in_ECX + 0x1ff0);
  uVar7 = *(undefined4 *)(in_ECX + 0x1ff4);
  local_50 = 0;
  *(undefined4 *)(local_5c + 0x20) = uVar9;
  *(undefined4 *)(local_5c + 0x24) = uVar7;
  *(undefined4 *)(local_5c + 0x28) = uVar9;
  *(undefined4 *)(local_5c + 0x2c) = uVar7;
  if (0 < local_90) {
    do {
      uVar5 = local_50;
      FUN_0040ec10(&local_68);
      puVar1 = local_68;
      local_8._0_1_ = 4;
      switch(local_68[2]) {
      case 2:
        local_74 = operator_new(0xb0);
        local_48 = FUN_005a1240(&local_7c);
        local_8 = CONCAT31(local_8._1_3_,6);
        local_54 = uVar13 | 1;
        local_60 = FUN_005a1140(&local_78);
        local_54 = uVar13 | 3;
        local_8 = 8;
        puVar8 = (undefined4 *)FUN_0063bf80(local_24);
        uVar4 = (**(code **)(*(int *)*puVar8 + 0x14))(puVar8 + 2);
        local_6c = CONCAT31(local_6c._1_3_,uVar4);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_50 = FUN_006e85c0();
        local_8 = 9;
        puVar8 = (undefined4 *)FUN_0063bf80(local_34);
        uVar4 = (**(code **)(*(int *)*puVar8 + 0x14))(puVar8 + 2);
        local_70 = CONCAT31(local_70._1_3_,uVar4);
        (**(code **)(*local_34[0] + 0x54))(local_2c);
        uVar9 = 0;
        local_8 = CONCAT31(local_8._1_3_,7);
        if (*(int *)(local_4c + 0x1e0c) == 1) {
          uVar9 = 1;
        }
        else if (*(int *)(local_4c + 8000) == 1) {
          uVar9 = 2;
        }
        uVar9 = FUN_0059f800(local_60,local_48,uVar9,puVar1,local_70,local_50,local_6c);
        FUN_0041e1f0(extraout_ECX,uVar9);
        piVar10 = (int *)(local_78 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        uVar13 = uVar13 & 0xfffffffc;
        pvVar11 = local_7c;
        goto LAB_005a628f;
      case 3:
        local_84 = operator_new(0x90);
        uVar9 = FUN_005a1240(&local_8c);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        local_54 = uVar13 | 4;
        local_48 = local_54;
        uVar7 = FUN_005a1140(&local_88);
        local_54 = local_48 | 8;
        local_8 = 0xf;
        local_48 = local_54;
        puVar8 = (undefined4 *)FUN_0063bf80(local_44);
        uVar4 = (**(code **)(*(int *)*puVar8 + 0x14))(puVar8 + 2);
        local_80 = CONCAT31(local_80._1_3_,uVar4);
        (**(code **)(*local_44[0] + 0x54))(local_3c);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        uVar9 = FUN_0059ff70(uVar7,uVar9,puVar1,local_80);
        FUN_0041e1f0(extraout_ECX_00,uVar9);
        uVar13 = local_48;
        piVar10 = (int *)(local_88 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        local_8._0_1_ = 4;
        local_8._1_3_ = 0;
        uVar13 = uVar13 & 0xfffffff3;
        piVar10 = (int *)(local_8c + -8);
        uVar5 = local_50;
        local_48 = uVar13;
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
            uVar5 = local_50;
          }
        }
        break;
      case 4:
        operator_new(0x88);
        local_8._0_1_ = 0x12;
        uVar9 = FUN_005a1140(&local_64);
        local_8 = CONCAT31(local_8._1_3_,0x13);
        local_54 = local_48 | 0x10;
        local_48 = local_54;
        local_60 = FUN_0059fbc0(uVar9,puVar1);
        iVar2 = local_5c;
        iVar6 = *(int *)(local_5c + 0x14);
        iVar12 = iVar6 + 1;
        if (*(int *)(local_5c + 0x10) < iVar12) {
          if (iVar12 < 0) {
            iVar12 = iVar6 + 2;
          }
          FUN_00409cf0((iVar12 >> 1) + iVar6 + 9 & 0xfffffff8);
        }
        iVar6 = *(int *)(iVar2 + 0x14);
        *(int *)(iVar2 + 0x14) = iVar6 + 1;
        uVar13 = local_48 & 0xffffffef;
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar6 * 4) = local_60;
        pvVar11 = local_64;
LAB_005a628f:
        local_8._1_3_ = 0;
        local_8._0_1_ = 4;
        piVar10 = (int *)((int)pvVar11 + -8);
        local_48 = uVar13;
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      LOCK();
      piVar10 = puVar1 + 1;
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar1)(1);
      }
      local_50 = uVar5 + 1;
    } while ((int)local_50 < local_90);
  }
  if (DAT_00c8a5e4 != 0) {
    FUN_005b5fb0(local_5c);
  }
  FID_conflict__free(local_98[0]);
LAB_005a641f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

