// rea decompile_all
// name: FUN_0062f450
// address: 0x62f450
// body: available
// range: 0x62f450-0x62f54c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f450(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  DWORD DVar3;
  HANDLE hThread;
  int in_ECX;
  int iVar4;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + iVar1 * 4);
    DVar3 = GetCurrentThreadId();
    if (DVar3 == *(DWORD *)(iVar4 + 0xc)) {
      iVar4 = 0xf;
      if (param_1 < 1) {
        iVar4 = -0xf;
      }
      else if (param_1 < 2) {
        iVar4 = -2;
      }
      else if (param_1 < 5) {
        iVar4 = -1;
      }
      else if (param_1 < 7) {
        iVar4 = 0;
      }
      else if (param_1 < 9) {
        iVar4 = 1;
      }
      else if (param_1 < 10) {
        iVar4 = 2;
      }
      hThread = GetCurrentThread();
      SetThreadPriority(hThread,iVar4);
    }
    else {
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar4 + 0x10);
      EnterCriticalSection(lpCriticalSection);
      if ((*(int *)(iVar4 + 8) == 0) || (cVar2 = FUN_00611960(), cVar2 != '\0')) {
        *(int *)(iVar4 + 0x30) = param_1;
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return;
}

