// rea decompile_all
// name: FUN_00695730
// address: 0x695730
// body: available
// range: 0x695730-0x695b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695730(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 *puVar8;
  int local_bc;
  float local_b8;
  float local_b4;
  int local_a4;
  int local_88;
  int local_7c;
  float local_78;
  float local_74;
  int local_64;
  int local_48;
  int local_38;
  int local_30;
  undefined4 local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721dcf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x97) == '\0') {
    fVar7 = 3.4028235e+38;
  }
  else {
    fVar7 = (float)((*(int *)(*(int *)(in_ECX + 0x7c) + 0xb8) - *(int *)(in_ECX + 0xfc)) + -3);
  }
  if (0.0 < fVar7) {
    FUN_006773f0(*(undefined4 *)(in_ECX + 0xfc));
    FUN_0067faa0();
    local_1c = 0;
    FUN_004a0d50(in_ECX + 0x114);
    local_8 = 0;
    if (*(int *)(in_ECX + 0xf4) != *(int *)(in_ECX + 0xf8)) {
      FUN_004a0e10();
      local_8 = CONCAT31(local_8._1_3_,2);
      cVar1 = FUN_004a0e90();
      while ((iVar5 = DAT_00c8a678, cVar1 != '\0' && (local_78 < (float)(local_30 + local_38)))) {
        fVar7 = (float)local_38;
        if (fVar7 <= local_74 + local_78) {
          iVar2 = *(int *)(local_64 + 8) + local_7c;
          iVar5 = local_7c;
          if (local_7c < iVar2) {
            iVar5 = iVar2;
          }
          if ((local_7c < *(int *)(in_ECX + 0xf8)) && (*(int *)(in_ECX + 0xf4) < iVar5)) {
            FUN_004a1b60();
            local_14 = fVar7;
            FUN_004a1b60();
            FUN_004af430();
          }
        }
        cVar1 = FUN_004a0e90();
      }
      for (; iVar5 != in_ECX; iVar5 = *(int *)(iVar5 + 0xc)) {
        if (iVar5 == 0) {
          local_14 = 0.5;
          goto LAB_00695904;
        }
      }
      local_14 = 1.0;
LAB_00695904:
      puVar8 = &stack0xffffff30;
      FUN_006e8e70((int)&local_1c + 3,0x1000202,0);
      FUN_00684d10(puVar8);
      FUN_00684c50();
      (**(code **)(*(int *)*param_1 + 0x58))();
      FUN_006e8e70((int)&local_1c + 3,0x1000203);
      FID_conflict__free((void *)0x0);
      local_8 = local_8 & 0xffffff00;
      piVar4 = (int *)(local_48 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
    local_14 = 0.0;
    cVar1 = FUN_004a0e90();
    while ((cVar1 != '\0' && (local_b8 < (float)(local_30 + local_38)))) {
      if ((float)local_38 <= local_b4 + local_b8) {
        iVar2 = *(int *)(local_a4 + 8) + local_bc;
        iVar5 = local_bc;
        if (local_bc < iVar2) {
          iVar5 = iVar2;
        }
        if ((local_bc < *(int *)(in_ECX + 0xf8)) && (*(int *)(in_ECX + 0xf4) < iVar5)) {
          FUN_004a1920(param_1,*(undefined4 *)(in_ECX + 0xf4),*(undefined4 *)(in_ECX + 0xf8));
          local_14 = 0.0;
        }
        else {
          FUN_004a1640(param_1);
        }
      }
      cVar1 = FUN_004a0e90();
    }
    local_14 = *(float *)(in_ECX + 0x160);
    while (local_14 = (float)((int)local_14 + -1), -1 < (int)local_14) {
      iVar5 = *(int *)(*(int *)(in_ECX + 0x158) + (int)local_14 * 8);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x158) + 4 + (int)local_14 * 8);
      FUN_004a0d50(in_ECX + 0x114);
      local_8 = CONCAT31(local_8._1_3_,3);
      cVar1 = FUN_004a0e90();
      while ((cVar1 != '\0' && (local_78 < (float)(local_30 + local_38)))) {
        if ((float)local_38 <= local_74 + local_78) {
          iVar3 = *(int *)(local_64 + 8) + local_7c;
          iVar6 = local_7c;
          if (local_7c < iVar3) {
            iVar6 = iVar3;
          }
          if ((local_7c < iVar2) && (iVar5 < iVar6)) {
            FUN_006e8e70(&stack0xffffff30,0x1000201,0);
            FUN_004a17d0(param_1,iVar5,iVar2);
          }
        }
        cVar1 = FUN_004a0e90();
      }
      local_8 = local_8 & 0xffffff00;
      piVar4 = (int *)(local_48 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar4);
        }
      }
    }
    piVar4 = (int *)(local_88 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

