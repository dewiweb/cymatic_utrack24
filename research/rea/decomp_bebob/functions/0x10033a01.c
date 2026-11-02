// rea decompile_all
// name: CMFCBaseVisualManager::CMFCBaseVisualManager
// address: 0x10033a01
// body: available
// range: 0x10033a01-0x10033ad8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CMFCBaseVisualManager::CMFCBaseVisualManager(void)
   
   Library: Visual Studio 2010 Release */

CMFCBaseVisualManager * __thiscall
CMFCBaseVisualManager::CMFCBaseVisualManager(CMFCBaseVisualManager *this)

{
  HINSTANCE__ *hModule;
  FARPROC pFVar1;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  hModule = AfxCtxLoadLibraryW(L"UxTheme.dll");
  *(HINSTANCE__ **)(this + 0x4c) = hModule;
  if (hModule == (HINSTANCE__ *)0x0) {
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"OpenThemeData");
    *(FARPROC *)(this + 0x50) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"CloseThemeData");
    *(FARPROC *)(this + 0x54) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"DrawThemeBackground");
    *(FARPROC *)(this + 0x58) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"GetThemeColor");
    *(FARPROC *)(this + 0x5c) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"GetThemeSysColor");
    *(FARPROC *)(this + 0x60) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"GetCurrentThemeName");
    *(FARPROC *)(this + 100) = pFVar1;
    pFVar1 = GetProcAddress(*(HMODULE *)(this + 0x4c),"GetWindowTheme");
    *(FARPROC *)(this + 0x68) = pFVar1;
    UpdateSystemColors(this);
  }
  return this;
}

