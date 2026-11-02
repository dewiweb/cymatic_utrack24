// rea decompile_all
// name: FUN_005893a0
// address: 0x5893a0
// body: available
// range: 0x5893a0-0x5894f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005893a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_58;
  undefined4 uStack_54;
  LARGE_INTEGER local_30;
  LPCRITICAL_SECTION local_24;
  int local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a5d8 != 0) {
    local_24 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
    EnterCriticalSection(local_24);
    local_8 = 0;
    FUN_00633420();
    local_14 = &stack0xffffffb4;
    uStack_54 = 0x589402;
    QueryPerformanceCounter(&local_30);
    FUN_006f5730();
    uStack_54 = 0x58942e;
    FUN_00637cf0();
    local_8._0_1_ = 1;
    FUN_00636ad0(&uStack_58,0,1,1,1);
    FUN_006377c0();
    uStack_58 = 0x589463;
    FUN_00637730();
    uStack_54 = 0x589470;
    FUN_006377c0();
    FUN_00637730();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (DAT_00c8a648 == 0) {
      FUN_00611d40();
    }
    else {
      FUN_0062fc40();
    }
    piVar2 = (int *)(local_1c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_20 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    LeaveCriticalSection(local_24);
  }
  ExceptionList = local_10;
  return;
}

