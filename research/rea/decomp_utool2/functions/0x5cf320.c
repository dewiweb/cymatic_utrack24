// rea decompile_all
// name: FUN_005cf320
// address: 0x5cf320
// body: available
// range: 0x5cf320-0x5cfa51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf320(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int in_ECX;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  float10 fVar15;
  undefined8 in_XMM0_Qa;
  uint local_50;
  uint local_48;
  char *local_3c;
  void *local_38 [8];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b482;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar3 = FUN_005ce130();
  if ((cVar3 != '\0') && (*(int *)(in_ECX + 0x98) != 0)) {
    *param_1 = &DAT_00bfe12c;
    goto LAB_005cfa34;
  }
  cVar3 = FUN_005ce130();
  if ((cVar3 == '\0') && (0 < *(int *)(in_ECX + 0x18))) {
    piVar9 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar5 = *piVar9;
    if (iVar5 == 0) {
      *piVar9 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  if (*(int **)(in_ECX + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x98) + 0x28))();
  }
  if (*(int *)(in_ECX + 0xa8) == 0) {
    bVar2 = true;
    bVar1 = false;
    pcVar4 = local_3c;
    pcVar10 = "";
    pcVar11 = "";
  }
  else {
    pcVar4 = (char *)param_2[1];
    piVar9 = (int *)(pcVar4 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    bVar2 = false;
    bVar1 = true;
    pcVar10 = pcVar4;
    pcVar11 = local_3c;
  }
  piVar9 = (int *)(pcVar10 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_8 = 0;
  if ((bVar1) && (piVar9 = (int *)(pcVar4 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if ((bVar2) && (piVar9 = (int *)(pcVar11 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (*(int *)(in_ECX + 0xac) == 0) {
    bVar2 = false;
    bVar1 = true;
    pcVar4 = local_3c;
    pcVar11 = "";
    pcVar12 = "";
  }
  else {
    pcVar4 = (char *)*param_2;
    piVar9 = (int *)(pcVar4 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
    pcVar11 = pcVar4;
    pcVar12 = local_3c;
  }
  piVar9 = (int *)(pcVar11 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  if ((bVar2) && (piVar9 = (int *)(pcVar4 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if ((bVar1) && (piVar9 = (int *)(pcVar12 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar9 = (int *)FUN_005cc860();
  if ((piVar9 == (int *)0x0) || ((*pcVar10 == '\0' && (*pcVar11 == '\0')))) {
    FUN_005cc910();
    if (param_3 != '\0') {
      FUN_005cbd40();
    }
    piVar9 = (int *)(pcVar11 + -8);
    *param_1 = &DAT_00bfe12c;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(pcVar10 + -8);
    if (piVar9 == &DAT_00bfe124) goto LAB_005cfa34;
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
  }
  else {
    if ((((*(char **)(in_ECX + 0x3c) != pcVar10) && (iVar5 = FUN_00448730(), iVar5 != 0)) ||
        ((*(char **)(in_ECX + 0x38) != pcVar11 && (iVar5 = FUN_00448730(), iVar5 != 0)))) ||
       (piVar13 = (int *)&DAT_00bfe12c, *(int *)(in_ECX + 0x98) == 0)) {
      FUN_005cc910();
      FUN_005ccae0();
      if (((*pcVar11 != '\0') && (cVar3 = FUN_005cd830(), cVar3 == '\0')) ||
         ((*pcVar10 != '\0' && (cVar3 = FUN_005cd830(), cVar3 == '\0')))) {
        FUN_00637690();
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        goto LAB_005cfa34;
      }
      puVar6 = (undefined4 *)(**(code **)(*piVar9 + 0x14))();
      puVar8 = *(undefined4 **)(in_ECX + 0x98);
      if ((puVar8 != puVar6) &&
         (*(undefined4 **)(in_ECX + 0x98) = puVar6, puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)();
      }
      if (*(int **)(in_ECX + 0x98) == (int *)0x0) {
        FUN_0045c990();
      }
      else {
        puVar8 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x98) + 0x30))();
        piVar9 = (int *)*puVar8;
        *puVar8 = &DAT_00bfe12c;
      }
      FUN_00637c10();
      if ((char)*piVar9 != '\0') {
        FUN_005cc910();
        *param_1 = piVar9;
        FUN_00637c10();
        FUN_00637c10();
        FUN_00637c10();
        goto LAB_005cfa34;
      }
      if (*(char *)(param_2 + 0xd) != '\0') {
        local_3c = (char *)(in_ECX + 0xb4);
        FUN_0062ca00();
        pcVar4 = local_3c;
        iVar14 = 0;
        iVar5 = *(int *)(in_ECX + 0xa8) + -1;
        if (-1 < iVar5) {
          local_48 = 1;
          do {
            if (-1 < iVar14) {
              if (*(int *)(pcVar4 + 0x18) < iVar14) {
                FUN_006264b0();
                *(int *)(pcVar4 + 0x18) = iVar14;
              }
              pcVar12 = *(char **)pcVar4;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = pcVar4 + 4;
              }
              *(uint *)(pcVar12 + (iVar14 >> 5) * 4) =
                   *(uint *)(pcVar12 + (iVar14 >> 5) * 4) | local_48;
            }
            local_48 = local_48 << 1 | (uint)((int)local_48 < 0);
            iVar14 = iVar14 + 1;
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
      }
      if (*(char *)(param_2 + 0x16) != '\0') {
        local_3c = (char *)(in_ECX + 0xd4);
        FUN_0062ca00();
        pcVar4 = local_3c;
        iVar14 = 0;
        iVar5 = *(int *)(in_ECX + 0xac) + -1;
        if (-1 < iVar5) {
          local_50 = 1;
          do {
            if (-1 < iVar14) {
              if (*(int *)(pcVar4 + 0x18) < iVar14) {
                FUN_006264b0();
                *(int *)(pcVar4 + 0x18) = iVar14;
              }
              pcVar12 = *(char **)pcVar4;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = pcVar4 + 4;
              }
              *(uint *)(pcVar12 + (iVar14 >> 5) * 4) =
                   *(uint *)(pcVar12 + (iVar14 >> 5) * 4) | local_50;
            }
            local_50 = local_50 << 1 | (uint)((int)local_50 < 0);
            iVar14 = iVar14 + 1;
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
      }
      if (*pcVar10 == '\0') {
        FUN_0062ca00();
      }
      piVar13 = piVar9;
      if (*pcVar11 == '\0') {
        FUN_0062ca00();
      }
    }
    if (*(char *)(param_2 + 0xd) == '\0') {
      FUN_006374e0();
    }
    if (*(char *)(param_2 + 0x16) == '\0') {
      FUN_006374e0();
    }
    FUN_0040da30();
    FUN_005cc710();
    *(undefined8 *)(in_ECX + 0x40) = in_XMM0_Qa;
    uVar7 = FUN_005cc680();
    *(undefined4 *)(in_ECX + 0x48) = uVar7;
    puVar8 = (undefined4 *)
             (**(code **)(**(int **)(in_ECX + 0x98) + 0x18))
                       (&local_3c,in_ECX + 0xb4,in_ECX + 0xd4,*(undefined8 *)(in_ECX + 0x40));
    pcVar4 = (char *)*puVar8;
    *puVar8 = piVar13;
    piVar9 = (int *)(local_3c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    if (*pcVar4 == '\0') {
      FUN_00637b90();
      (**(code **)(**(int **)(in_ECX + 0x98) + 0x24))();
      fVar15 = (float10)(**(code **)(**(int **)(in_ECX + 0x98) + 0x38))();
      *(double *)(in_ECX + 0x40) = (double)fVar15;
      uVar7 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x34))();
      *(undefined4 *)(in_ECX + 0x48) = uVar7;
      uVar7 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x44))();
      FUN_0062bc40(uVar7);
      FID_conflict__free(local_38[0]);
      (**(code **)(**(int **)(in_ECX + 0x98) + 0x40))(local_38);
      FUN_0062bc40();
      FID_conflict__free(local_38[0]);
      iVar5 = 0;
      if (0 < *(int *)(in_ECX + 0x24)) {
        do {
          if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + iVar5 * 4) + 4) ==
               *(int *)(in_ECX + 0xb0)) || (iVar14 = FUN_00448730(), iVar14 == 0)) {
            FUN_0040da30();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(in_ECX + 0x24));
      }
      if (param_3 != '\0') {
        FUN_005cbd40();
      }
    }
    else {
      FUN_005cc910();
    }
    piVar9 = (int *)(pcVar11 + -8);
    *param_1 = pcVar4;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(pcVar10 + -8);
    if (piVar9 == &DAT_00bfe124) goto LAB_005cfa34;
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
  }
  if (iVar5 == 0) {
    FID_conflict__free(pcVar10 + -8);
  }
LAB_005cfa34:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

