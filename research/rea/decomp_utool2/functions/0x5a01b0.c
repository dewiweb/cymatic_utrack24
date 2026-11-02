// rea decompile_all
// name: FUN_005a01b0
// address: 0x5a01b0
// body: available
// range: 0x5a01b0-0x5a04bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a01b0(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  void **ppvVar13;
  void *local_34 [3];
  void *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00716170;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = "";
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 1;
  if (*(char *)(in_ECX + 0x30) == '\0') {
    uVar10 = 0;
    local_11 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      bVar11 = *(int *)(in_ECX + 0x14) != 0;
      do {
        if (bVar11) {
          iVar7 = *(int *)(*(int *)(in_ECX + 0xc) + uVar10 * 4);
        }
        else {
          iVar7 = 0;
        }
        ppvVar13 = local_34;
        uVar12 = 0x5a0230;
        uVar6 = FUN_0059bf00(ppvVar13);
        FUN_0062f290(uVar6,uVar12,ppvVar13);
        FUN_0040f7f0();
        FID_conflict__free(local_34[0]);
        uVar10 = uVar10 + 1;
        local_11 = local_11 | *(int *)(iVar7 + 0x40) != 0;
        bVar11 = uVar10 < *(uint *)(in_ECX + 0x14);
      } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x14));
    }
    FUN_0045c990("Import operation ",uVar5);
    piVar8 = (int *)(local_18 + -8);
    local_18 = local_1c;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    if (local_11 == 0) {
      pcVar1 = local_18 + 1;
      pcVar9 = local_18;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      FUN_00455850(local_18);
      local_18 = local_1c;
      builtin_strncpy(local_1c + ((int)pcVar9 - (int)pcVar1),"successfully ",0xe);
    }
    pcVar1 = local_18 + 1;
    pcVar9 = local_18;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_00455850(local_18);
    local_18 = local_1c;
    builtin_strncpy(local_1c + ((int)pcVar9 - (int)pcVar1),"finished.",10);
  }
  else {
    FUN_0045c990("Import Failed",uVar5);
    pcVar1 = local_18;
    local_18 = local_1c;
    piVar8 = (int *)(pcVar1 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    FUN_0045c990("Import operation canceled.");
    if (local_24 < local_20 + 1) {
      FUN_00409cf0((local_20 + 1) / 2 + local_20 + 9 & 0xfffffff8);
    }
    iVar7 = local_20 + 1;
    puVar4 = (undefined4 *)((int)local_28 + local_20 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_1c;
      local_1c = "";
    }
    piVar8 = (int *)(local_1c + -8);
    local_20 = iVar7;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  iVar7 = *(int *)(in_ECX + 0x14);
  while (0 < iVar7) {
    iVar7 = *(int *)(in_ECX + 0x14) + -1;
    *(int *)(in_ECX + 0x14) = iVar7;
    puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar7 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    iVar7 = *(int *)(in_ECX + 0x14);
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x18))();
  }
  iVar7 = 0;
  if (0 < local_20) {
    do {
      piVar8 = (int *)(*(int *)((int)local_28 + iVar7 * 4) + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_20);
  }
  FID_conflict__free(local_28);
  piVar8 = (int *)(local_18 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

