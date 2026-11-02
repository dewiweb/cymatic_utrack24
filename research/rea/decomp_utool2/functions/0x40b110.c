// rea decompile_all
// name: FUN_0040b110
// address: 0x40b110
// body: available
// range: 0x40b110-0x40b577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b110(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined *in_ECX;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  char *local_84;
  uint local_80;
  undefined *local_7c;
  undefined1 *local_78;
  undefined *local_74;
  undefined *local_70;
  double local_6c;
  undefined4 local_64;
  undefined1 local_40;
  undefined1 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc3d4;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = 0;
  local_7c = in_ECX;
  if (param_1 == 0) goto LAB_0040b55a;
  FUN_005ced70(local_14);
  local_8 = 0;
  FUN_0040da30(*(int *)(in_ECX + 0x14) + 0x38);
  pcVar11 = "";
  local_84 = "";
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((param_1 == *(int *)(in_ECX + 0x20)) || (param_1 == *(int *)(in_ECX + 0x24))) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      iVar6 = FUN_006e85c0();
      if (iVar6 < 0) {
        local_7c = PTR_DAT_00c7ed68;
        piVar12 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar12 != &DAT_00bfe124) {
          LOCK();
          *piVar12 = *piVar12 + 1;
          UNLOCK();
        }
        ppuVar8 = &local_7c;
        uVar10 = 1;
      }
      else {
        ppuVar8 = (undefined **)FUN_006e8370(&local_78);
        uVar10 = 2;
      }
      puVar4 = *ppuVar8;
      *ppuVar8 = local_74;
      local_74 = puVar4;
      local_80 = uVar10;
      if ((uVar10 & 2) != 0) {
        uVar10 = uVar10 & 0xfffffffd;
        piVar12 = (int *)(local_78 + -8);
        local_80 = uVar10;
        if (piVar12 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar12);
          }
        }
      }
      local_8 = 1;
      if ((uVar10 & 1) != 0) {
        local_80 = uVar10 & 0xfffffffe;
        piVar12 = (int *)(local_7c + -8);
        if (piVar12 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar12);
          }
        }
      }
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      iVar6 = FUN_006e85c0();
      if (iVar6 < 0) {
        local_7c = PTR_DAT_00c7ed68;
        piVar12 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar12 != &DAT_00bfe124) {
          LOCK();
          *piVar12 = *piVar12 + 1;
          UNLOCK();
        }
        ppuVar8 = &local_7c;
        bVar2 = true;
        bVar1 = false;
      }
      else {
        ppuVar8 = (undefined **)FUN_006e8370(&local_78);
        bVar2 = false;
        bVar1 = true;
      }
      puVar4 = *ppuVar8;
      *ppuVar8 = local_70;
      local_70 = puVar4;
      if ((bVar1) && (piVar12 = (int *)(local_78 + -8), piVar12 != &DAT_00bfe124)) {
        LOCK();
        iVar6 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar12);
        }
      }
      local_8 = 1;
      if ((bVar2) && (piVar12 = (int *)(local_7c + -8), piVar12 != &DAT_00bfe124)) {
        LOCK();
        iVar6 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar12);
        }
      }
    }
    cVar5 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))();
    puVar4 = local_70;
    if (cVar5 == '\0') {
      piVar12 = (int *)(local_74 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      LOCK();
      local_70 = local_74;
      UNLOCK();
      piVar12 = (int *)(puVar4 + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar12);
        }
      }
    }
    if (param_1 == *(int *)(in_ECX + 0x24)) {
      local_40 = 1;
    }
    else {
      local_1c = 1;
    }
    puVar9 = (undefined4 *)FUN_005cf320(&local_78,&local_74,1);
    pcVar11 = (char *)*puVar9;
    *puVar9 = &DAT_00bfe12c;
    piVar12 = (int *)(local_78 + -8);
    local_84 = pcVar11;
    if (piVar12 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar12);
      }
    }
    local_78 = *(undefined1 **)(in_ECX + 0x24);
    if (local_78 != (undefined1 *)0x0) {
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))
                        (*(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x98),1);
      FUN_006e83a0(iVar6 + 1,0);
    }
    if (*(int *)(in_ECX + 0x20) != 0) {
      local_78 = (undefined1 *)
                 (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))
                           (*(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x98),0);
      FUN_006e83a0(local_78 + 1,0);
      if (*(int *)(in_ECX + 0x44) != 0) {
        FUN_006e9390(-1 < (int)local_78);
      }
    }
    FUN_0040bbf0();
    (**(code **)(*(int *)(in_ECX + -0x74) + 0x84))();
    if (*pcVar11 != '\0') {
      local_78 = &DAT_00bfe12c;
      local_8._0_1_ = 5;
      FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_006e6af0(&local_84,&local_78,0,0);
      piVar12 = (int *)(local_7c + -8);
      if (piVar12 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar12);
        }
      }
    }
  }
  else if (param_1 == *(int *)(in_ECX + 0x28)) {
    iVar6 = FUN_006e85c0();
    if (0 < iVar6) {
      iVar6 = FUN_006e85c0();
      local_6c = (double)iVar6;
      goto LAB_0040b1df;
    }
  }
  else if ((param_1 == *(int *)(in_ECX + 0x2c)) && (iVar6 = FUN_006e85c0(), 0 < iVar6)) {
    local_64 = FUN_006e85c0();
LAB_0040b1df:
    if (in_ECX[8] != '\0') {
      local_78 = operator_new(0x1e8);
      local_8._0_1_ = 4;
      puVar4 = in_ECX + -0x74;
      for (puVar3 = *(undefined **)(in_ECX + -0x68); puVar3 != (undefined *)0x0;
          puVar3 = *(undefined **)(puVar3 + 0xc)) {
        puVar4 = puVar3;
      }
      uVar7 = FUN_0040a960(puVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0040dc80(uVar7);
      FUN_0040daf0(&local_74);
      uVar7 = *(undefined4 *)(local_7c + 0x14);
      FUN_0040dc20(uVar7);
      FUN_0040abd0(uVar7);
    }
  }
  piVar12 = (int *)(pcVar11 + -8);
  if (piVar12 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar12);
    }
  }
  FUN_0040d9d0();
LAB_0040b55a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

