// rea decompile_all
// name: FUN_00500370
// address: 0x500370
// body: available
// range: 0x500370-0x5009fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005009ac) */
/* WARNING: Removing unreachable block (ram,0x005009b8) */

void FUN_00500370(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int in_ECX;
  int *extraout_ECX;
  int *piVar9;
  bool bVar10;
  float fVar11;
  int *piStack_98;
  int local_54;
  undefined *local_48 [2];
  undefined **local_40;
  undefined4 *local_3c;
  undefined1 *local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070736d;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = (undefined4 *)0x0;
  if (*(uint *)(*(int *)(in_ECX + 0x17c) + 0x380) < 2) {
    piStack_98 = (int *)0x0;
  }
  else {
    piStack_98 = *(int **)(*(int *)(*(int *)(in_ECX + 0x17c) + 0x378) + 4);
  }
  FUN_006e9790(param_1,0);
  iVar8 = *(int *)(in_ECX + 0x17c);
  fVar11 = (float)(param_1 + *(int *)(in_ECX + 0x198));
  *(float *)(in_ECX + 0x220) = fVar11;
  if (*(uint *)(iVar8 + 0x380) < 3) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar8 + 0x378) + 8);
  }
  *(float *)(in_ECX + 0x224) = (float)iVar5;
  fVar11 = (float)(int)((float)iVar5 + fVar11);
  *(float *)(in_ECX + 0x228) = fVar11;
  if (*(uint *)(iVar8 + 0x380) < 4) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar8 + 0x378) + 0xc);
  }
  *(float *)(in_ECX + 0x22c) = (float)iVar5;
  *(float *)(in_ECX + 0x230) = (float)(int)((float)iVar5 + fVar11);
  if (*(uint *)(iVar8 + 0x380) < 5) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar8 + 0x378) + 0x10);
  }
  *(float *)(in_ECX + 0x234) = (float)iVar5;
  if (*(uint *)(iVar8 + 0x374) <= *(uint *)(in_ECX + 0x80)) goto LAB_005009e1;
  piVar9 = *(int **)(*(int *)(iVar8 + 0x36c) + *(uint *)(in_ECX + 0x80) * 4);
  piStack_98 = (int *)0x5004b6;
  FUN_00503750();
  local_8 = 0;
  local_40 = (undefined **)DAT_00c7ebbc;
  piVar6 = (int *)FUN_0057f460();
  local_8._0_1_ = 2;
  piStack_98 = (int *)0x500506;
  FUN_00636ec0();
  FUN_0044ec90();
  piStack_98 = piVar6;
  FUN_00644f50();
  local_8._0_1_ = 1;
  if (local_3c != (undefined4 *)0x0) {
    LOCK();
    piVar6 = local_3c + 1;
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      piStack_98 = (int *)0x500543;
      (**(code **)*local_3c)();
    }
  }
  piStack_98 = (int *)0x500562;
  FUN_00684960();
  if ((*piVar9 == 0) || (cVar4 = FUN_00540610(), cVar4 == '\0')) {
    local_48[0] = PTR_DAT_00c7ed68;
    piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    local_8 = 4;
    bVar2 = false;
    bVar10 = true;
    local_3c = (undefined4 *)0x2;
  }
  else {
    piStack_98 = (int *)0x500585;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,3);
    bVar2 = true;
    bVar10 = false;
    local_3c = (undefined4 *)0x1;
  }
  puVar3 = local_48[0];
  local_40 = local_48;
  if ((*piVar9 == 0) && (piVar9[1] != 0)) {
    FUN_00410ec0();
  }
  piStack_98 = (int *)0x500607;
  FUN_005be060();
  piStack_98 = (int *)0x500612;
  puVar7 = (undefined4 *)FUN_00637730();
  uVar1 = *(undefined4 *)(in_ECX + 0x250);
  *(undefined4 *)(in_ECX + 0x250) = *puVar7;
  *puVar7 = uVar1;
  piVar6 = (int *)(local_38[0] + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_98 = (int *)0x500642;
      FID_conflict__free(piVar6);
    }
  }
  if ((bVar10) && (piVar6 = (int *)(puVar3 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_98 = (int *)0x500670;
      FID_conflict__free(piVar6);
    }
  }
  local_8 = 1;
  if ((bVar2) && (piVar6 = (int *)(local_48[0] + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_98 = (int *)0x5006a2;
      FID_conflict__free(piVar6);
    }
  }
  FUN_005036b0();
  puVar7 = (undefined4 *)FUN_005bdf30();
  uVar1 = *(undefined4 *)(in_ECX + 0x254);
  *(undefined4 *)(in_ECX + 0x254) = *puVar7;
  *puVar7 = uVar1;
  piVar6 = (int *)(local_38[0] + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_98 = (int *)0x5006e9;
      FID_conflict__free(piVar6);
      piVar6 = extraout_ECX;
    }
  }
  iVar8 = *piVar9;
  if (iVar8 == 0) {
    bVar10 = piVar9[1] == 0;
  }
  else {
    bVar10 = *(int *)(iVar8 + 0x30) != 2;
  }
  if (!bVar10) {
    local_40 = (undefined **)&stack0xffffff6c;
    if (iVar8 == 0) {
      if (piVar9[1] == 0) {
        if (piVar9[2] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(piVar9[2] + 0x24);
        }
      }
      else {
        iVar8 = *(int *)(piVar9[1] + 100);
      }
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x5c);
    }
    local_38[0] = (undefined1 *)&piStack_98;
    piStack_98 = piVar6;
    if (iVar8 < 0) {
      iVar8 = FUN_006104a0();
      *(undefined1 *)(iVar8 + -1) = 0x2d;
      iVar8 = iVar8 + -1;
    }
    else {
      local_40 = (undefined **)&stack0xffffff6c;
      local_38[0] = (undefined1 *)&piStack_98;
      iVar8 = FUN_006104a0();
    }
    FUN_004557e0(&local_15 + -iVar8);
    FUN_006377c0();
    piStack_98 = (int *)0x50077c;
    puVar7 = (undefined4 *)FUN_00637730();
    uVar1 = *(undefined4 *)(in_ECX + 0x254);
    *(undefined4 *)(in_ECX + 0x254) = *puVar7;
    *puVar7 = uVar1;
    piVar6 = local_3c + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_98 = (int *)0x5007ac;
        FID_conflict__free(piVar6);
      }
    }
  }
  if (*piVar9 == 0) {
    if (piVar9[1] == 0) {
      bVar10 = false;
    }
    else {
      bVar10 = **(char **)(piVar9[1] + 0x80) != '\0';
    }
  }
  else {
    piStack_98 = *(int **)(*piVar9 + 100);
    iVar8 = FUN_00448730();
    bVar10 = iVar8 != 0;
  }
  *(bool *)(in_ECX + 600) = bVar10;
  local_8 = CONCAT31(local_8._1_3_,5);
  if (*piVar9 == 0) {
LAB_00500880:
    cVar4 = FUN_00503520();
    if (cVar4 == '\0') {
      piStack_98 = (int *)0x5008a0;
      FUN_0045c990();
      iVar8 = *(int *)(in_ECX + 0x260);
      *(undefined1 **)(in_ECX + 0x260) = local_38[0];
      piVar9 = (int *)(iVar8 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          piStack_98 = (int *)0x5008cf;
          FID_conflict__free(piVar9);
        }
      }
      FUN_00636260(local_38,&DAT_00739ad8);
      local_8 = CONCAT31(local_8._1_3_,7);
      goto LAB_005008ed;
    }
    piStack_98 = (int *)0x50092c;
    FUN_00637b90();
    piStack_98 = (int *)0x500937;
    puVar7 = (undefined4 *)FUN_005034a0();
    uVar1 = *(undefined4 *)(in_ECX + 0x25c);
    *(undefined4 *)(in_ECX + 0x25c) = *puVar7;
    *puVar7 = uVar1;
    piVar9 = (int *)(local_38[0] + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_98 = (int *)0x500967;
        FID_conflict__free(piVar9);
      }
    }
    piStack_98 = (int *)0x500978;
    (**(code **)(*(int *)(in_ECX + 0x74) + 8))();
  }
  else {
    piStack_98 = (int *)0x5;
    cVar4 = FUN_00540440();
    if (cVar4 != '\0') goto LAB_00500880;
    piStack_98 = (int *)0x500831;
    FUN_0045c990();
    iVar8 = *(int *)(in_ECX + 0x260);
    *(undefined1 **)(in_ECX + 0x260) = local_38[0];
    piVar9 = (int *)(iVar8 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_98 = (int *)0x500860;
        FID_conflict__free(piVar9);
      }
    }
    FUN_00636260(local_38,&DAT_00739ab0);
    local_8 = CONCAT31(local_8._1_3_,6);
LAB_005008ed:
    piStack_98 = (int *)0x5008f7;
    (**(code **)(*(int *)(in_ECX + 0x74) + 8))();
    piVar9 = (int *)(local_38[0] + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        piStack_98 = (int *)0x500917;
        FID_conflict__free(piVar9);
      }
    }
  }
  FUN_0040f7f0();
  piStack_98 = (int *)0x500988;
  FID_conflict__free((void *)0x0);
  FUN_00471bf0();
  piStack_98 = (int *)0x50099b;
  FID_conflict__free((void *)0x0);
  piVar9 = (int *)(local_54 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      piStack_98 = (int *)0x5009de;
      FID_conflict__free(piVar9);
    }
  }
LAB_005009e1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

