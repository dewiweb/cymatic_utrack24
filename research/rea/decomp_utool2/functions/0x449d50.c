// rea decompile_all
// name: FUN_00449d50
// address: 0x449d50
// body: available
// range: 0x449d50-0x44a173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449d50(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  char *local_84;
  uint local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  double local_6c;
  undefined4 local_64;
  undefined1 local_40;
  undefined1 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff352;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = 0;
  if (param_1 == 0) goto LAB_0044a156;
  FUN_005ced70(local_14);
  local_8 = 0;
  FUN_0040da30(*(int *)(in_ECX + 0xc) + 0x38);
  pcVar8 = "";
  local_84 = "";
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((param_1 == *(int *)(in_ECX + 0x24)) || (param_1 == *(int *)(in_ECX + 0x28))) {
    if (*(int *)(in_ECX + 0x24) != 0) {
      iVar3 = FUN_006e85c0();
      if (iVar3 < 0) {
        local_78 = &DAT_00bfe12c;
        ppuVar5 = &local_78;
        uVar7 = 1;
      }
      else {
        ppuVar5 = (undefined1 **)FUN_006e8370(&local_7c);
        uVar7 = 2;
      }
      puVar1 = *ppuVar5;
      *ppuVar5 = local_74;
      local_74 = puVar1;
      local_80 = uVar7;
      if ((uVar7 & 2) != 0) {
        uVar7 = uVar7 & 0xfffffffd;
        piVar6 = (int *)(local_7c + -8);
        local_80 = uVar7;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
      local_8 = 1;
      if ((uVar7 & 1) != 0) {
        local_80 = uVar7 & 0xfffffffe;
        piVar6 = (int *)(local_78 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar6);
          }
        }
      }
    }
    if (*(int *)(in_ECX + 0x28) != 0) {
      iVar3 = FUN_006e85c0();
      bVar9 = -1 < iVar3;
      if (bVar9) {
        ppuVar5 = (undefined1 **)FUN_006e8370(&local_7c);
      }
      else {
        local_78 = &DAT_00bfe12c;
        ppuVar5 = &local_78;
      }
      puVar1 = *ppuVar5;
      *ppuVar5 = local_70;
      local_70 = puVar1;
      if ((bVar9) && (piVar6 = (int *)(local_7c + -8), piVar6 != &DAT_00bfe124)) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = 1;
      if ((!bVar9) && (piVar6 = (int *)(local_78 + -8), piVar6 != &DAT_00bfe124)) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    puVar1 = local_70;
    if (cVar2 == '\0') {
      piVar6 = (int *)(local_74 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      local_70 = local_74;
      UNLOCK();
      piVar6 = (int *)(puVar1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    if (param_1 == *(int *)(in_ECX + 0x28)) {
      local_40 = 1;
    }
    else {
      local_1c = 1;
    }
    puVar4 = (undefined4 *)FUN_005cf320(&local_7c,&local_74,1);
    pcVar8 = (char *)*puVar4;
    *puVar4 = &DAT_00bfe12c;
    piVar6 = (int *)(local_7c + -8);
    local_84 = pcVar8;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_7c = *(undefined1 **)(in_ECX + 0x28);
    if (local_7c != (undefined1 *)0x0) {
      iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))
                        (*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x98),1);
      FUN_006e83a0(iVar3 + 1,0);
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      local_7c = (undefined1 *)
                 (**(code **)(**(int **)(in_ECX + 8) + 0xc))
                           (*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x98),0);
      FUN_006e83a0(local_7c + 1,0);
      if (*(int *)(in_ECX + 0x4c) != 0) {
        FUN_006e9390(-1 < (int)local_7c);
      }
    }
    FUN_0044a9f0();
    FUN_00449890();
LAB_0044a0cf:
    if (*pcVar8 != '\0') {
      local_7c = &DAT_00bfe12c;
      local_8._0_1_ = 4;
      FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_006e6af0(&local_84,&local_7c,0,0);
      piVar6 = (int *)(local_78 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
  }
  else if (param_1 == *(int *)(in_ECX + 0x2c)) {
    iVar3 = FUN_006e85c0();
    if (0 < iVar3) {
      iVar3 = FUN_006e85c0();
      local_6c = (double)iVar3;
      puVar4 = (undefined4 *)FUN_005cf320(&local_78,&local_74,1);
      pcVar8 = (char *)*puVar4;
      *puVar4 = &DAT_00bfe12c;
      local_84 = pcVar8;
      FUN_00637c10();
      goto LAB_0044a0cf;
    }
  }
  else if ((param_1 == *(int *)(in_ECX + 0x30)) && (iVar3 = FUN_006e85c0(), 0 < iVar3)) {
    local_64 = FUN_006e85c0();
    puVar4 = (undefined4 *)FUN_005cf320(&local_78,&local_74,1);
    pcVar8 = (char *)*puVar4;
    *puVar4 = &DAT_00bfe12c;
    local_84 = pcVar8;
    FUN_00637c10();
    goto LAB_0044a0cf;
  }
  piVar6 = (int *)(pcVar8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_0040d9d0();
LAB_0044a156:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

