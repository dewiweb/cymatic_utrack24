// rea decompile_all
// name: FUN_0062ce30
// address: 0x62ce30
// body: available
// range: 0x62ce30-0x62d1a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0062ce30(void)

{
  int iVar1;
  void *_Memory;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  void *local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e02c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = false;
  local_1c = 0;
  puVar3 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
  if (((DVar4 & 0x10) == 0) || (DVar4 == 0xffffffff)) {
LAB_0062ce98:
    local_11 = '\0';
  }
  else {
    puVar3 = (undefined4 *)FUN_00634890(&local_18);
    bVar7 = true;
    local_11 = '\x01';
    if (*(char *)*puVar3 != '\0') goto LAB_0062ce98;
  }
  if ((bVar7) && (piVar6 = (int *)(local_18 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (local_11 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  FUN_0045c990(&DAT_00c00e04);
  local_8._0_1_ = 1;
  FUN_00635ea0(&local_30,2,0,&local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar9 = local_28;
  iVar10 = 0;
  if (0 < local_28) {
    do {
      puVar3 = (undefined4 *)FUN_00636a10(&local_1c);
      local_8._0_1_ = 2;
      uVar5 = FUN_00635a10(&local_18,*puVar3);
      local_8 = CONCAT31(local_8._1_3_,3);
      cVar2 = FUN_0062d1b0(uVar5);
      local_11 = cVar2 == '\0';
      piVar6 = (int *)(local_18 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (local_11 != '\0') goto LAB_0062d18d;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  _Memory = local_30;
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      piVar6 = (int *)(*(int *)((int)_Memory + iVar10 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  if (local_2c != 0) {
    FID_conflict__free(_Memory);
    local_30 = (void *)0x0;
    local_2c = 0;
  }
  local_28 = 0;
  FUN_0045c990(&DAT_00c00e00);
  local_8._0_1_ = 4;
  FUN_00635ea0(&local_30,1,0,&local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar9 = local_28;
  iVar10 = 0;
  if (0 < local_28) {
    do {
      puVar3 = (undefined4 *)FUN_00636a10(&local_1c);
      local_8._0_1_ = 5;
      uVar5 = FUN_00635a10(&local_20,*puVar3);
      local_8 = CONCAT31(local_8._1_3_,6);
      cVar2 = FUN_0062ce30(uVar5);
      local_11 = cVar2 == '\0';
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (local_11 != '\0') goto LAB_0062d18d;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  uVar8 = 1;
LAB_0062d135:
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      piVar6 = (int *)(*(int *)((int)local_30 + iVar10 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  FID_conflict__free(local_30);
  ExceptionList = local_10;
  return uVar8;
LAB_0062d18d:
  uVar8 = 0;
  goto LAB_0062d135;
}

