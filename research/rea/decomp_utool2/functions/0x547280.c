// rea decompile_all
// name: FUN_00547280
// address: 0x547280
// body: available
// range: 0x547280-0x54749c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00547280(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *piVar4;
  char in_DL;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f449;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (in_DL != '\0') {
    uVar2 = FUN_00410ea0(&local_20);
    local_8._0_1_ = 1;
    uVar5 = extraout_ECX;
    FUN_00637690(uVar2);
    FUN_006377c0(uVar5);
    local_8._0_1_ = 3;
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_00621830("\nDo you confirm this Playlist deletion?");
    FUN_0045c990("Yes, delete the Playlist");
    local_8._0_1_ = 4;
    FUN_0045c990("No, cancel");
    local_8._0_1_ = 5;
    FUN_0045c990("Delete Playlist");
    local_8 = CONCAT31(local_8._1_3_,6);
    iVar3 = FUN_004ed1f0(&local_20,&local_24,0);
    local_11 = iVar3 == 0;
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_20 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (local_11 != '\0') {
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      goto LAB_00547484;
    }
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  FUN_00411300(&local_24);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00635980(uVar1);
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00548700();
LAB_00547484:
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

