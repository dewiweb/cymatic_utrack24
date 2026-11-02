// rea decompile_all
// name: FUN_0059f3c0
// address: 0x59f3c0
// body: available
// range: 0x59f3c0-0x59f71e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059f3c0(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  LPCRITICAL_SECTION local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715fa2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990();
  local_8 = 0;
  FUN_005899e0();
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (*(char *)(in_ECX + 0x84) != '\0') {
    if (**(char **)(in_ECX + 0x90) != '\0') {
      puVar3 = (undefined4 *)FUN_00458890();
      DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
      if (((DVar4 & 0x10) == 0) && (*(int *)(in_ECX + 0x80) != 1)) {
        FUN_0045c990();
        local_8 = 1;
        FUN_00589130();
        piVar5 = (int *)(local_18 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        ExceptionList = local_10;
        return 0;
      }
    }
    local_11 = 0;
    FUN_00636040(&stack0xffffffc4);
    FUN_005bd0c0();
    FUN_00636040();
    FUN_0041cef0();
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  piVar5 = (int *)(*(int *)(in_ECX + 0x94) + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  cVar2 = FUN_005b5020();
  if ((cVar2 != '\0') &&
     ((((iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0x30), iVar1 == 0 ||
        (*(int *)(iVar1 + 0x2c) == 0)) || (*(int *)(in_ECX + 0x80) == 0)) ||
      (*(int *)(in_ECX + 0x80) == 2)))) {
    local_28 = (void *)0x0;
    local_24 = 0;
    local_20 = 0;
    local_8 = 2;
    FUN_0045c990();
    local_8._0_1_ = 3;
    local_1c = (LPCRITICAL_SECTION)FUN_00635ea0(&local_28,2,0);
    local_8._0_1_ = 2;
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (local_1c != (LPCRITICAL_SECTION)0x0) {
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00589130();
      piVar5 = (int *)(local_18 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_28);
      ExceptionList = local_10;
      return 0;
    }
    local_8 = 0xffffffff;
    FUN_0040f7f0();
    FID_conflict__free(local_28);
  }
  piVar5 = (int *)(*(int *)(in_ECX + 0x94) + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_005bd0c0();
  FUN_0041cef0();
  FUN_0045c990();
  local_8 = 5;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  local_1c = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&local_18);
    FUN_0062f940();
  }
  LeaveCriticalSection(lpCriticalSection);
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return 1;
}

