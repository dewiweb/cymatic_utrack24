// rea decompile_all
// name: FUN_00522460
// address: 0x522460
// body: available
// range: 0x522460-0x52272b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00522460(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070ac06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  if (((undefined *)*param_1 != PTR_DAT_00c7ed54) && (iVar3 = FUN_0045c1e0(*param_1), iVar3 != 0)) {
    FUN_00410ea0();
    local_8._0_1_ = 1;
    FUN_00636a10();
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar4 = (undefined4 *)FUN_00635a10(&local_18);
    puVar1 = (undefined1 *)*puVar4;
    *puVar4 = local_14;
    piVar6 = (int *)(local_18 + -8);
    local_14 = puVar1;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar6 = (int *)(local_20 + -8);
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
  uVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      if ((local_14 == PTR_DAT_00c7ed54) || (iVar3 = FUN_0045c1e0(local_14), iVar3 == 0)) {
        if (uVar7 < *(uint *)(in_ECX + 0x14)) {
          piVar6 = *(int **)(*(int *)(in_ECX + 0xc) + uVar7 * 4);
        }
        else {
          piVar6 = (int *)0x0;
        }
        cVar2 = (**(code **)(*piVar6 + 0x68))();
        if (cVar2 == '\0') goto LAB_00522712;
      }
      else {
        local_18 = local_14;
        piVar6 = (int *)(local_14 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        if (uVar7 < *(uint *)(in_ECX + 0x14)) {
          piVar6 = *(int **)(*(int *)(in_ECX + 0xc) + uVar7 * 4);
        }
        else {
          piVar6 = (int *)0x0;
        }
        cVar2 = (**(code **)(*piVar6 + 0x68))();
        if (cVar2 == '\0') {
          piVar6 = (int *)(local_18 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar6);
            }
          }
LAB_00522712:
          uVar5 = 0;
          goto LAB_005226b5;
        }
        local_8 = local_8 & 0xffffff00;
        piVar6 = (int *)(local_18 + -8);
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
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(in_ECX + 0x14));
  }
  if ((((PTR_DAT_00c7ed54 == (undefined *)*param_1) ||
       (iVar3 = FUN_0045c1e0(PTR_DAT_00c7ed54), iVar3 == 0)) && (PTR_DAT_00c7ed54 != local_14)) &&
     (iVar3 = FUN_0045c1e0(PTR_DAT_00c7ed54), iVar3 != 0)) {
    piVar6 = (int *)FUN_00636040();
    iVar3 = *param_1;
    *param_1 = *piVar6;
    *piVar6 = iVar3;
    param_1 = param_1 + -2;
    if (param_1 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *param_1;
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(param_1);
      }
    }
  }
  uVar5 = 1;
LAB_005226b5:
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
      ExceptionList = local_10;
      return uVar5;
    }
  }
  ExceptionList = local_10;
  return uVar5;
}

