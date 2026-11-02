// rea decompile_all
// name: AFX_GLOBAL_DATA::Resume
// address: 0x10018d45
// body: available
// range: 0x10018d45-0x10018e48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018de7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall AFX_GLOBAL_DATA::Resume(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall AFX_GLOBAL_DATA::Resume(AFX_GLOBAL_DATA *this)

{
  HINSTANCE__ *hModule;
  FARPROC pFVar1;
  HMODULE hModule_00;
  
  hModule = AfxCtxLoadLibraryW(L"UxTheme.dll");
  *(HINSTANCE__ **)(this + 0x1ec) = hModule;
  if (hModule == (HINSTANCE__ *)0x0) {
    *(undefined4 *)(this + 500) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    *(undefined4 *)(this + 0x204) = 0;
    *(undefined4 *)(this + 0x208) = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"DrawThemeParentBackground");
    *(FARPROC *)(this + 500) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"DrawThemeTextEx");
    *(FARPROC *)(this + 0x1f8) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"BeginBufferedPaint");
    *(FARPROC *)(this + 0x204) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"EndBufferedPaint");
    *(FARPROC *)(this + 0x208) = pFVar1;
  }
  if (*(int *)(this + 0x1f0) != 0) {
    hModule_00 = (HMODULE)FUN_10018a48(L"dwmapi.dll");
    *(HMODULE *)(this + 0x1f0) = hModule_00;
    if (hModule_00 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pFVar1 = GetProcAddress(hModule_00,"DwmExtendFrameIntoClientArea");
    *(FARPROC *)(this + 0x20c) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x1f0),"DwmDefWindowProc");
    *(FARPROC *)(this + 0x210) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x1f0),"DwmIsCompositionEnabled");
    *(FARPROC *)(this + 0x214) = pFVar1;
  }
  if (*(int *)(this + 0x19c) != 0) {
    *(int *)(this + 0x19c) = 1;
  }
  CMFCVisualManagerOffice2007::CleanStyle();
  if (DAT_10167850 != (CRuntimeClass *)0x0) {
    CMFCVisualManager::SetDefaultManager(DAT_10167850);
  }
  return 1;
}

