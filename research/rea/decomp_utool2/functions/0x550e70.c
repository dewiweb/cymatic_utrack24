// rea decompile_all
// name: FUN_00550e70
// address: 0x550e70
// body: available
// range: 0x550e70-0x5510e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00550e70(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007108c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((PTR_DAT_00c7ed54 == (undefined *)*param_2) ||
     (iVar4 = FUN_0045c1e0(PTR_DAT_00c7ed54), iVar4 == 0)) {
    *param_1 = 0;
    ExceptionList = local_10;
    return param_1;
  }
  iVar4 = *param_2;
  local_14 = (int *)(iVar4 + -8);
  if (local_14 != &DAT_00bfe124) {
    LOCK();
    *local_14 = *local_14 + 1;
    UNLOCK();
  }
  puVar6 = *(undefined4 **)(in_ECX + 0x58);
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    puVar6[1] = puVar6[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  while (puVar6 != (undefined4 *)0x0) {
    param_2 = (int *)0x0;
    if (0 < (int)puVar6[0x16]) {
      do {
        FUN_004110e0(&local_18);
        puVar2 = local_18;
        if ((local_18[4] == iVar4) || (iVar5 = FUN_0045c1e0(local_18[4]), iVar5 == 0)) {
          *param_1 = puVar2;
          LOCK();
          piVar1 = puVar6 + 1;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*puVar6)();
          }
          if (local_14 != &DAT_00bfe124) {
            LOCK();
            iVar4 = *local_14;
            *local_14 = *local_14 + -1;
            UNLOCK();
            if (iVar4 == 0) {
              FID_conflict__free(local_14);
            }
          }
          ExceptionList = local_10;
          return param_1;
        }
        if (puVar2 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar2 + 1;
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*puVar2)();
          }
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < (int)puVar6[0x16]);
    }
    param_2 = (int *)0x0;
    if ((int)puVar6[0x16] < 1) break;
    while( true ) {
      FUN_004110e0(&local_1c);
      puVar2 = local_1c;
      local_8._0_1_ = 2;
      cVar3 = FUN_00635500();
      if (cVar3 != '\0') break;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar2 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar2)();
        }
      }
      param_2 = (int *)((int)param_2 + 1);
      if ((int)puVar6[0x16] <= (int)param_2) goto LAB_00550fc8;
    }
    puVar7 = puVar6;
    if (puVar6 != puVar2) {
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        puVar2[1] = puVar2[1] + 1;
        UNLOCK();
      }
      puVar7 = puVar2;
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar6 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar6)();
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar6 = puVar7;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar2)();
      }
    }
  }
LAB_00550fc8:
  *param_1 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar6 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar6)();
    }
  }
  if (local_14 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *local_14;
    *local_14 = *local_14 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(local_14);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

