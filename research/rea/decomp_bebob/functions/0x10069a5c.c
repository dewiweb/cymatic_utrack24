// rea decompile_all
// name: COleIPFrameWnd::BuildSharedMenu
// address: 0x10069a5c
// body: available
// range: 0x10069a5c-0x10069b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall COleIPFrameWnd::BuildSharedMenu(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall COleIPFrameWnd::BuildSharedMenu(COleIPFrameWnd *this)

{
  COleIPFrameWnd *lpMenuWidths;
  HMENU__ *pHVar1;
  HMENU pHVar2;
  int iVar3;
  uint uVar4;
  HOLEMENU pvVar5;
  
  pHVar1 = (HMENU__ *)(**(code **)(*(int *)this + 0x1d0))();
  pHVar2 = CreateMenu();
  *(HMENU *)(this + 0x138) = pHVar2;
  uVar4 = 0;
  if (pHVar2 != (HMENU)0x0) {
    lpMenuWidths = this + 0x13c;
    _memset(lpMenuWidths,0,0x18);
    iVar3 = (**(code **)(**(int **)(this + 0x128) + 0x24))
                      (*(int **)(this + 0x128),*(undefined4 *)(this + 0x138),lpMenuWidths);
    if (iVar3 == 0) {
      if (pHVar1 == (HMENU__ *)0x0) {
        uVar4 = 1;
      }
      else {
        pHVar1 = AfxMergeMenus(*(HMENU__ **)(this + 0x138),pHVar1,(long *)lpMenuWidths,1,
                               (uint)(*(int *)(this + 0x150) != 0));
        *(HMENU__ **)(this + 0x180) = pHVar1;
        pvVar5 = OleCreateMenuDescriptor
                           (*(HMENU *)(this + 0x138),(LPOLEMENUGROUPWIDTHS)lpMenuWidths);
        uVar4 = (uint)(pvVar5 != (HOLEMENU)0x0);
        *(HOLEMENU *)(this + 0x154) = pvVar5;
      }
    }
    else {
      DestroyMenu(*(HMENU *)(this + 0x138));
      *(undefined4 *)(this + 0x138) = 0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

