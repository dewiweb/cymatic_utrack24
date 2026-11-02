// rea decompile_all
// name: FUN_00546a30
// address: 0x546a30
// body: available
// range: 0x546a30-0x546e60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546a30(undefined4 *param_1)

{
  char cVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int *piVar5;
  int *in_EDX;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f363;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 1;
  cVar1 = FUN_005b4fa0();
  if (cVar1 == '\0') {
    FUN_0045c990();
    local_8._0_1_ = 2;
    FUN_0045c990();
    local_8._0_1_ = 3;
    FUN_0045c990();
    local_8._0_1_ = 4;
    FUN_004ecce0();
    piVar5 = (int *)(local_1c + -8);
    local_24 = local_18;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  else {
    piVar5 = (int *)FUN_00410ea0();
    if (*in_EDX == *piVar5) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_00448730();
    }
    piVar5 = (int *)(local_20 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    if (local_18 == 0) goto LAB_00546e26;
    FUN_00410ea0();
    local_8._0_1_ = 5;
    FUN_00636040();
    local_8._0_1_ = 6;
    FUN_0045c990();
    local_8._0_1_ = 7;
    piVar5 = (int *)(*in_EDX + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    FUN_00637730();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00635a10();
    piVar5 = (int *)(local_2c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)FUN_00410ea0();
    if (*in_EDX == *piVar5) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_0045c1e0();
    }
    piVar5 = (int *)(local_20 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    cVar1 = FUN_005b5020();
    if ((cVar1 == '\0') || (local_18 == 0)) {
      FUN_0054bb90();
      iVar2 = FUN_0054b040();
      FUN_00411300();
      local_8._0_1_ = 0xf;
      FUN_0045c990();
      local_8._0_1_ = 0x10;
      FUN_0045c990("Playlist Project Error");
      local_8._0_1_ = 0xb;
      FUN_005bd5a0();
      if ((iVar2 == 0) && (*local_14 != '\0')) {
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if (((DVar4 & 0x10) == 0) && (local_18 != 0)) {
          FUN_00635980();
        }
      }
    }
    else {
      FUN_0045c990();
      local_8._0_1_ = 0xc;
      FUN_0045c990();
      local_8._0_1_ = 0xd;
      FUN_00637690();
      FUN_006377c0();
      local_8._0_1_ = 0xe;
      FUN_004ecce0();
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
    }
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  piVar5 = (int *)(local_24 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_00548700();
LAB_00546e26:
  FUN_00411300();
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = param_1 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

