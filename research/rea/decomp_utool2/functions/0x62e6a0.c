// rea decompile_all
// name: FUN_0062e6a0
// address: 0x62e6a0
// body: available
// range: 0x62e6a0-0x62eb6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0062e6a0(undefined4 *param_1,int *param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  wint_t _C;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int local_40;
  int local_3c [2];
  int local_34;
  int local_30;
  char *local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  char *local_1c;
  char *local_18;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar9 = param_2;
  puStack_c = &LAB_0071e2ef;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = 0;
  iVar12 = *param_2;
  piVar5 = (int *)(iVar12 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  puVar6 = (undefined4 *)FUN_00637730(iVar12);
  local_8 = 1;
  FUN_00635a10(param_1,*puVar6);
  local_8 = local_8 & 0xffffff00;
  local_20 = 1;
  piVar5 = param_2 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (*(char *)*param_1 == '\0') {
    ExceptionList = local_10;
    return param_1;
  }
  puVar6 = (undefined4 *)FUN_00458890(uVar4);
  DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
  if (DVar7 == 0xffffffff) {
    ExceptionList = local_10;
    return param_1;
  }
  pcVar13 = (char *)*piVar9;
  iVar12 = 1;
  piVar9 = (int *)(pcVar13 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_8 = 2;
  local_18 = pcVar13;
  FUN_006378b0(&local_28);
  cVar3 = FUN_00632d50(0x29);
  piVar9 = (int *)(local_28 + -8);
  param_2 = (int *)CONCAT13(cVar3,param_2._0_3_);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
      cVar3 = (char)((uint)param_2 >> 0x18);
    }
  }
  if (cVar3 == '\0') {
    if ((char)param_4 == '\0') {
      if (*pcVar13 == '\0') {
        _C = 0;
      }
      else {
        iVar8 = FUN_0044ec90();
        param_4 = pcVar13;
        FUN_0044ebd0(iVar8 + -1);
        _C = FUN_00426f70();
      }
      iVar8 = FID_conflict___iswdigit_l(_C);
      if (iVar8 == 0) {
        cVar3 = '\0';
        goto LAB_0062e8de;
      }
    }
  }
  else {
    iVar8 = FUN_006215b0(0x28);
    local_28 = FUN_006215b0(0x29);
    if ((iVar8 < 1) || (local_28 <= iVar8)) {
LAB_0062e823:
      param_4 = (char *)((uint)param_4 & 0xffffff);
    }
    else {
      FUN_006379a0(&param_2,iVar8 + 1,local_28);
      local_20 = 3;
      cVar3 = FUN_00632670("0123456789");
      param_4 = (char *)CONCAT13(1,param_4._0_3_);
      if (cVar3 == '\0') goto LAB_0062e823;
    }
    if ((local_20 & 2) != 0) {
      local_20 = local_20 & 0xfffffffd;
      piVar9 = (int *)((int)param_2 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar9);
        }
      }
    }
    if (param_4._3_1_ != '\0') {
      puVar6 = (undefined4 *)FUN_006379a0(&param_4,iVar8 + 1,local_28);
      iVar12 = FID_conflict__atoi((char *)*puVar6);
      piVar9 = (int *)(param_4 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      puVar6 = (undefined4 *)FUN_006379a0(&param_4,0,iVar8);
      local_18 = (char *)*puVar6;
      *puVar6 = pcVar13;
      piVar9 = (int *)(param_4 + -8);
      pcVar13 = local_18;
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
    }
  }
  cVar3 = '\x01';
LAB_0062e8de:
  piVar9 = (int *)(pcVar13 + -8);
  param_4 = (char *)CONCAT13(cVar3,param_4._0_3_);
  do {
    piVar5 = (int *)(pcVar13 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    iVar12 = iVar12 + 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1c = pcVar13;
    if (cVar3 == '\0') {
      FUN_0045d120();
    }
    else {
      param_2 = (int *)CONCAT22(param_2._2_2_,0x28);
      pcVar10 = (char *)&param_2;
      do {
        pcVar11 = pcVar10;
        pcVar10 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      local_24 = (int *)(pcVar11 + (-8 - (int)&stack0x00000000));
      local_28 = iVar12;
      if (0 < (int)local_24) {
        pcVar10 = pcVar13;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_00455850(pcVar13);
        piVar5 = local_24;
        local_1c = local_2c;
        pcVar10 = local_2c + ((int)pcVar10 - (int)(pcVar13 + 1));
        FUN_004c2c30(pcVar10,&param_2,local_24);
        pcVar10[(int)piVar5] = '\0';
      }
      iVar12 = local_28;
      local_24 = (int *)FUN_0045d120();
      pcVar10 = local_14;
      local_14[0] = ')';
      local_14[1] = '\0';
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      local_34 = (int)pcVar10 - (int)(local_14 + 1);
      if (0 < local_34) {
        pcVar10 = (char *)*local_24;
        pcVar11 = pcVar10;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_00455850(pcVar10);
        iVar8 = local_34;
        iVar12 = local_30 - (int)(pcVar10 + 1);
        *local_24 = local_30;
        FUN_004c2c30(pcVar11 + iVar12,local_14,local_34);
        (pcVar11 + iVar12)[iVar8] = '\0';
        iVar12 = local_28;
      }
    }
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    puVar6 = (undefined4 *)FUN_00637730(local_1c);
    local_8 = CONCAT31(local_8._1_3_,4);
    puVar6 = (undefined4 *)FUN_00635a10(local_3c,*puVar6);
    uVar2 = *param_1;
    *param_1 = *puVar6;
    *puVar6 = uVar2;
    piVar5 = (int *)(local_3c[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_40 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (*(char *)*param_1 == '\0') break;
    puVar6 = (undefined4 *)FUN_00458890();
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    cVar3 = param_4._3_1_;
  } while (DVar7 != 0xffffffff);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

