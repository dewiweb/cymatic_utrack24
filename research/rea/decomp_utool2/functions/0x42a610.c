// rea decompile_all
// name: FUN_0042a610
// address: 0x42a610
// body: available
// range: 0x42a610-0x42a775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a610(void)

{
  FARPROC pFVar1;
  uint uVar2;
  undefined4 *puVar3;
  HMODULE hModule;
  int iVar4;
  int *_Memory;
  code *pcVar5;
  FARPROC local_18;
  FARPROC local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd9a0;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("avrt.dll",uVar2);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  hModule = LoadLibraryW((LPCWSTR)*puVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  _Memory = (int *)((int)local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_0045c990("AvSetMmThreadCharacteristicsW",uVar2);
  pFVar1 = local_18;
  if (hModule == (HMODULE)0x0) {
    local_14 = (FARPROC)0x0;
  }
  else {
    local_14 = GetProcAddress(hModule,(LPCSTR)local_18);
  }
  pcVar5 = pFVar1 + -8;
  if (pcVar5 != (code *)&DAT_00bfe124) {
    LOCK();
    iVar4 = *(int *)pcVar5;
    *(int *)pcVar5 = *(int *)pcVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(pcVar5);
    }
  }
  FUN_0045c990("AvSetMmThreadPriority");
  pFVar1 = local_18;
  if (hModule == (HMODULE)0x0) {
    local_18 = (FARPROC)0x0;
  }
  else {
    local_18 = GetProcAddress(hModule,(LPCSTR)local_18);
  }
  pcVar5 = pFVar1 + -8;
  if (pcVar5 != (code *)&DAT_00bfe124) {
    LOCK();
    iVar4 = *(int *)pcVar5;
    *(int *)pcVar5 = *(int *)pcVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(pcVar5);
    }
  }
  pFVar1 = local_18;
  if ((local_14 != (FARPROC)0x0) && (local_18 != (FARPROC)0x0)) {
    local_18 = (FARPROC)0x0;
    iVar4 = (*local_14)(L"Pro Audio",&local_18);
    if (iVar4 != 0) {
      (*pFVar1)(iVar4,0);
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  ExceptionList = local_10;
  return;
}

