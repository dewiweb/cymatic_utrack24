// rea decompile_all
// name: FUN_00547af0
// address: 0x547af0
// body: available
// range: 0x547af0-0x548145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00547bba) */
/* WARNING: Removing unreachable block (ram,0x00547bd2) */
/* WARNING: Removing unreachable block (ram,0x00547bd5) */
/* WARNING: Removing unreachable block (ram,0x00547c33) */
/* WARNING: Removing unreachable block (ram,0x00547c3f) */
/* WARNING: Removing unreachable block (ram,0x00547c48) */
/* WARNING: Removing unreachable block (ram,0x00547c5a) */
/* WARNING: Removing unreachable block (ram,0x00547c66) */
/* WARNING: Removing unreachable block (ram,0x00547c6f) */
/* WARNING: Removing unreachable block (ram,0x00547ca5) */
/* WARNING: Removing unreachable block (ram,0x00547cb1) */
/* WARNING: Removing unreachable block (ram,0x00547cba) */
/* WARNING: Removing unreachable block (ram,0x00547ccb) */
/* WARNING: Removing unreachable block (ram,0x00547cce) */
/* WARNING: Removing unreachable block (ram,0x00547d14) */
/* WARNING: Removing unreachable block (ram,0x00547d20) */
/* WARNING: Removing unreachable block (ram,0x00547d29) */
/* WARNING: Removing unreachable block (ram,0x00547d3b) */
/* WARNING: Removing unreachable block (ram,0x00547d47) */
/* WARNING: Removing unreachable block (ram,0x00547d50) */
/* WARNING: Removing unreachable block (ram,0x00547db9) */
/* WARNING: Removing unreachable block (ram,0x00547dc5) */
/* WARNING: Removing unreachable block (ram,0x00547dce) */
/* WARNING: Removing unreachable block (ram,0x00547ddc) */
/* WARNING: Removing unreachable block (ram,0x00547de8) */
/* WARNING: Removing unreachable block (ram,0x00547df1) */
/* WARNING: Removing unreachable block (ram,0x00547e03) */
/* WARNING: Removing unreachable block (ram,0x00547e0f) */
/* WARNING: Removing unreachable block (ram,0x00547e18) */
/* WARNING: Removing unreachable block (ram,0x00547e1e) */
/* WARNING: Removing unreachable block (ram,0x00547e30) */
/* WARNING: Removing unreachable block (ram,0x00547e40) */
/* WARNING: Removing unreachable block (ram,0x00547e4e) */
/* WARNING: Removing unreachable block (ram,0x00547e60) */
/* WARNING: Removing unreachable block (ram,0x00547e6c) */
/* WARNING: Removing unreachable block (ram,0x00547e80) */
/* WARNING: Removing unreachable block (ram,0x00547e90) */
/* WARNING: Removing unreachable block (ram,0x00547eab) */
/* WARNING: Removing unreachable block (ram,0x00547eba) */
/* WARNING: Removing unreachable block (ram,0x00547ec0) */
/* WARNING: Removing unreachable block (ram,0x00547ece) */
/* WARNING: Removing unreachable block (ram,0x00547f23) */

void FUN_00547af0(void)

{
  undefined1 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  char in_DL;
  int *piVar3;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f5d7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_11 = in_DL;
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  FUN_00410a10();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_005b48e0();
  piVar3 = (int *)(local_2c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8._0_1_ = 2;
  FUN_005437e0();
  local_8._0_1_ = 3;
  if (local_11 == '\0') {
    local_8._0_1_ = 3;
    uVar1 = (undefined1)local_8;
  }
  else {
    FUN_00410ad0();
    local_8._0_1_ = 0xf;
    FUN_00637690();
    FUN_006377c0();
    local_8._0_1_ = 0x11;
    piVar3 = (int *)(local_28 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_00621830();
    FUN_0045c990();
    local_8._0_1_ = 0x12;
    FUN_0045c990();
    local_8._0_1_ = 0x13;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x14);
    iVar2 = FUN_004ed1f0(&local_28);
    local_11 = iVar2 == 0;
    piVar3 = (int *)(local_2c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_28 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    local_8._0_1_ = 0x11;
    piVar3 = (int *)(local_24 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (local_11 != '\0') {
      piVar3 = (int *)(local_18 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      goto LAB_00547f6f;
    }
    local_8._0_1_ = 3;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 3;
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      uVar1 = (undefined1)local_8;
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
        uVar1 = (undefined1)local_8;
      }
    }
  }
  local_8._0_1_ = uVar1;
  FUN_00410a10();
  local_8._0_1_ = 0x17;
  FUN_00635980();
  piVar3 = (int *)(local_2c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_00548700();
LAB_00547f6f:
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_20 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_20)();
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)0x0);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

