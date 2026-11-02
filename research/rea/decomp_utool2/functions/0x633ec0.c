// rea decompile_all
// name: FUN_00633ec0
// address: 0x633ec0
// body: available
// range: 0x633ec0-0x634084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00633ec0(void)

{
  FARPROC pFVar1;
  uint uVar2;
  undefined4 *puVar3;
  HMODULE hModule;
  int iVar4;
  int *piVar5;
  FARPROC local_1c;
  FARPROC local_18;
  FARPROC local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pFVar1 = local_1c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e92a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("Shell32.dll",uVar2);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  hModule = LoadLibraryW((LPCWSTR)*puVar3);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar5 = (int *)((int)local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("ILCreateFromPathW",uVar2);
  if (hModule == (HMODULE)0x0) {
    local_18 = (FARPROC)0x0;
  }
  else {
    local_18 = GetProcAddress(hModule,(LPCSTR)local_1c);
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("ILFree");
  if (hModule == (HMODULE)0x0) {
    local_14 = (FARPROC)0x0;
  }
  else {
    local_14 = GetProcAddress(hModule,(LPCSTR)local_1c);
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("SHOpenFolderAndSelectItems");
  if (hModule == (HMODULE)0x0) {
    local_1c = (FARPROC)0x0;
  }
  else {
    local_1c = GetProcAddress(hModule,(LPCSTR)local_1c);
  }
  piVar5 = (int *)(pFVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (((local_18 != (FARPROC)0x0) && (local_1c != (FARPROC)0x0)) && (local_14 != (FARPROC)0x0)) {
    puVar3 = (undefined4 *)FUN_00458890();
    iVar4 = (*local_18)(*puVar3);
    if (iVar4 != 0) {
      (*local_1c)(iVar4,0,0,0);
      (*local_14)(iVar4);
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  ExceptionList = local_10;
  return;
}

