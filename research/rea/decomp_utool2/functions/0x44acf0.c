// rea decompile_all
// name: FUN_0044acf0
// address: 0x44acf0
// body: available
// range: 0x44acf0-0x44b086 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044acf0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff5dc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  if (*(int *)(in_ECX + 0x90) < 1) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0x10))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (cVar3 != '\0') goto LAB_0044b02e;
  }
  if (*(int *)(in_ECX + 0x98) == 0) {
    operator_new(0xcc);
    local_1c = &DAT_00bfe12c;
    local_8 = 1;
    local_18 = 1;
    puVar4 = (undefined4 *)FUN_006e8840(&local_1c);
    puVar1 = *(undefined4 **)(in_ECX + 0x98);
    if ((puVar1 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0x98) = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    local_8 = 0xffffffff;
    local_18 = 0;
    if (in_ECX + 0x74 != 0) {
      FUN_004097d0(in_ECX + 0x74);
    }
    piVar9 = *(int **)(in_ECX + 0x98);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x28))(1);
      FUN_006e5050(piVar9,0xffffffff);
    }
    pvVar5 = operator_new(0xd0);
    local_8 = 3;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0x10))();
    if (cVar3 == '\0') {
      uVar6 = FUN_00637250();
      local_18 = 4;
    }
    else {
      uVar6 = FUN_00637250();
      local_18 = 2;
    }
    local_1c = &DAT_00bfe12c;
    local_18 = local_18 | 8;
    local_8 = 6;
    local_14 = local_18;
    puVar4 = (undefined4 *)FUN_006e8b40(&local_1c,uVar6);
    puVar1 = *(undefined4 **)(in_ECX + 0xa8);
    if ((puVar1 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0xa8) = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    local_14 = local_14 & 0xfffffff7;
    piVar9 = (int *)(local_1c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    if ((local_14 & 4) != 0) {
      local_14 = local_14 & 0xfffffffb;
      piVar9 = (int *)(local_20 + -8);
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
    local_8 = 0xffffffff;
    if ((local_14 & 2) != 0) {
      local_14 = local_14 & 0xfffffffd;
      piVar9 = (int *)(local_24 + -8);
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
    uVar2 = local_14;
    FUN_006e89c0(*(undefined4 *)(in_ECX + 0x98),local_14);
    if (0 < *(int *)(in_ECX + 0x90)) {
      operator_new(0xe0);
      local_8 = 10;
      uVar6 = FUN_00637250();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_18 = local_14 | 0x10;
      uVar7 = FUN_00637250();
      local_8 = 0xc;
      local_18 = uVar2 | 0x30;
      puVar4 = (undefined4 *)FUN_006e6560(uVar7,uVar6);
      local_8 = 0xe;
      puVar1 = *(undefined4 **)(in_ECX + 0xc0);
      if ((puVar1 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xc0) = puVar4, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar9 = *(int **)(in_ECX + 0xc0);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x28))(1);
        FUN_006e5050(piVar9,0xffffffff);
      }
      piVar9 = (int *)(local_1c + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      local_8 = 0xffffffff;
      piVar9 = (int *)((int)pvVar5 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      if (in_ECX + 0x78 != 0) {
        FUN_004097d0(in_ECX + 0x78);
      }
    }
  }
  FUN_0044a8d0(*(undefined4 *)(in_ECX + 0x98),0);
LAB_0044b02e:
  if (*(int *)(in_ECX + 0x98) != 0) {
    iVar8 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0xc))
                      (*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x98),0);
    FUN_006e83a0(iVar8 + 1,0);
    if (*(int *)(in_ECX + 0xc0) != 0) {
      FUN_006e9390(-1 < iVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

