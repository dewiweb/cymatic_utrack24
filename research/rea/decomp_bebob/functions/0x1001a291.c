// rea decompile_all
// name: AFX_GLOBAL_DATA::AFX_GLOBAL_DATA
// address: 0x1001a291
// body: available
// range: 0x1001a291-0x1001a62e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall AFX_GLOBAL_DATA::AFX_GLOBAL_DATA(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall AFX_GLOBAL_DATA::AFX_GLOBAL_DATA(AFX_GLOBAL_DATA *this)

{
  int iVar1;
  undefined4 uVar2;
  HINSTANCE__ *hModule;
  FARPROC pFVar3;
  HMODULE hModule_00;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined ***)(this + 0x90) = CBrush::vftable;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined ***)(this + 0x98) = CBrush::vftable;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined ***)(this + 0xa0) = CBrush::vftable;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined ***)(this + 0xa8) = CBrush::vftable;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined ***)(this + 0xb0) = CBrush::vftable;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined ***)(this + 0xb8) = CBrush::vftable;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined ***)(this + 0xc0) = CBrush::vftable;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined ***)(this + 200) = CBrush::vftable;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)(this + 0xd0) = CPen::vftable;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)(this + 0xd8) = CPen::vftable;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)(this + 0xe0) = CPen::vftable;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined ***)(this + 0x114) = CFont::vftable;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined ***)(this + 0x11c) = CFont::vftable;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined ***)(this + 0x124) = CFont::vftable;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined ***)(this + 300) = CFont::vftable;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)(this + 0x134) = CFont::vftable;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)(this + 0x13c) = CFont::vftable;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)(this + 0x144) = CFont::vftable;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined ***)(this + 0x14c) = CFont::vftable;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined ***)(this + 0x154) = CFont::vftable;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined ***)(this + 0x15c) = CFont::vftable;
  local_8 = 0x14;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  iVar1 = GetSystemMetrics(0x1000);
  *(int *)(this + 0x180) = iVar1;
  *(uint *)(this + 0x174) = (uint)(5 < local_128.dwMajorVersion);
  if (((local_128.dwMajorVersion == 6) && (local_128.dwMinorVersion != 0)) ||
     (6 < local_128.dwMajorVersion)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(this + 0x178) = uVar2;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x1e4) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  UpdateSysColors(this);
  hModule = AfxCtxLoadLibraryW(L"UxTheme.dll");
  *(HINSTANCE__ **)(this + 0x1ec) = hModule;
  if (hModule == (HINSTANCE__ *)0x0) {
    *(undefined4 *)(this + 500) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    *(undefined4 *)(this + 0x1fc) = 0;
    *(undefined4 *)(this + 0x200) = 0;
    *(undefined4 *)(this + 0x204) = 0;
    *(undefined4 *)(this + 0x208) = 0;
  }
  else {
    pFVar3 = GetProcAddress(hModule,"DrawThemeParentBackground");
    *(FARPROC *)(this + 500) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"DrawThemeTextEx");
    *(FARPROC *)(this + 0x1f8) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"BufferedPaintInit");
    *(FARPROC *)(this + 0x1fc) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"BufferedPaintUnInit");
    *(FARPROC *)(this + 0x200) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"BeginBufferedPaint");
    *(FARPROC *)(this + 0x204) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1ec),"EndBufferedPaint");
    *(FARPROC *)(this + 0x208) = pFVar3;
  }
  hModule_00 = (HMODULE)FUN_10018a48(L"dwmapi.dll");
  *(HMODULE *)(this + 0x1f0) = hModule_00;
  if (hModule_00 == (HMODULE)0x0) {
    *(undefined4 *)(this + 0x20c) = 0;
    *(undefined4 *)(this + 0x210) = 0;
    *(undefined4 *)(this + 0x214) = 0;
  }
  else {
    pFVar3 = GetProcAddress(hModule_00,"DwmExtendFrameIntoClientArea");
    *(FARPROC *)(this + 0x20c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1f0),"DwmDefWindowProc");
    *(FARPROC *)(this + 0x210) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(this + 0x1f0),"DwmIsCompositionEnabled");
    *(FARPROC *)(this + 0x214) = pFVar3;
  }
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  FUN_10019d8d(this);
  OnSettingChange(this);
  *(undefined4 *)(this + 0x1c4) = 0xffffffff;
  *(undefined4 *)(this + 0x1b0) = 4;
  *(undefined4 *)(this + 0x1bc) = 4;
  *(undefined4 *)(this + 0x18c) = 1;
  *(undefined4 *)(this + 0x21c) = 1;
  *(undefined4 *)(this + 0x19c) = 1;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1b4) = 3;
  *(undefined4 *)(this + 0x1b8) = 0xe;
  *(undefined4 *)(this + 0x1c0) = 0x32;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  FUN_100f90cf();
  return;
}

