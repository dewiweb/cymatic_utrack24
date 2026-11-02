// rea decompile_all
// name: FUN_0052b750
// address: 0x52b750
// body: available
// range: 0x52b750-0x52bbfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052b750(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *piVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int local_78;
  int local_74;
  int *local_70;
  char *local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined4 *local_40;
  char *local_3c;
  char acStack_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070c4e2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = param_1;
  local_60 = 0;
  local_8 = 1;
  local_4c = in_ECX;
  FUN_0045c990();
  local_8._0_1_ = 2;
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_00637730();
  local_8 = CONCAT31(local_8._1_3_,3);
  local_74 = in_ECX + 0x13c;
  FUN_00635a10(param_1);
  local_60 = 1;
  piVar3 = (int *)(local_64 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar3 = (int *)(local_54 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  uVar7 = 1;
  local_44 = 1;
  do {
    if (*(char *)*local_40 == '\0') {
LAB_0052b890:
      uVar8 = 0;
      if (*(int *)(in_ECX + 0x560) < 1) {
LAB_0052bbbe:
        piVar3 = (int *)(param_2 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        ExceptionList = local_10;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
      while( true ) {
        piVar3 = (int *)FUN_006369b0();
        if (uVar8 < *(uint *)(in_ECX + 0x560)) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x558) + uVar8 * 4);
        }
        else {
          iVar9 = 0;
        }
        if (*(int *)(iVar9 + 4) == *piVar3) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_0045c1e0(*(undefined4 *)(iVar9 + 4));
        }
        piVar3 = (int *)(local_68 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        uVar7 = local_44;
        if (iVar9 == 0) break;
        uVar8 = uVar8 + 1;
        if (*(int *)(in_ECX + 0x560) <= (int)uVar8) goto LAB_0052bbbe;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_00458890();
      DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
      if ((DVar5 & 0x10) != 0) goto LAB_0052b890;
    }
    acStack_1b[2] = 0;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      pcVar10 = acStack_1b + 2;
      do {
        local_3c = pcVar10;
        pcVar10 = local_3c + -1;
        uVar8 = uVar7 / 10;
        *pcVar10 = (char)uVar7 + (char)uVar8 * -10 + '0';
        uVar7 = uVar8;
      } while (uVar8 != 0);
      local_3c = local_3c + -2;
      *local_3c = '-';
    }
    else {
      local_3c = acStack_1b + 2;
      do {
        local_3c = local_3c + -1;
        uVar8 = uVar7 / 10;
        *local_3c = (char)uVar7 + (char)uVar8 * -10 + '0';
        uVar7 = uVar8;
      } while (uVar8 != 0);
    }
    iVar9 = -(int)local_3c;
    pcVar10 = acStack_1b + iVar9 + 2;
    piVar3 = (int *)FUN_004bfe22();
    piVar3[1] = (uint)(&uStack_15 + iVar9) & 0xfffffffc;
    local_70 = piVar3 + 2;
    *piVar3 = 0;
    local_58 = local_70;
    local_6c = local_3c;
    while ((0 < (int)pcVar10 && (iVar9 = FUN_00443260(), iVar9 != 0))) {
      FUN_0044ecc0();
      pcVar10 = pcVar10 + -1;
    }
    *(undefined1 *)local_58 = 0;
    local_8._0_1_ = 4;
    piVar6 = (int *)(param_2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    FUN_006377c0(param_2);
    FUN_00637730();
    local_44 = local_44 + 1;
    local_8._0_1_ = 6;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_0045c990();
    local_8._0_1_ = 7;
    piVar3 = (int *)(local_48 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_00637730();
    local_8 = CONCAT31(local_8._1_3_,8);
    puVar4 = (undefined4 *)FUN_00635a10(&local_78);
    uVar2 = *local_40;
    *local_40 = *puVar4;
    *puVar4 = uVar2;
    piVar3 = (int *)(local_78 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_50 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_5c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    uVar7 = local_44;
    in_ECX = local_4c;
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar3 = (int *)(local_48 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  } while( true );
}

