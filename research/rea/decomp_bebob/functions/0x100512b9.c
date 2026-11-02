// rea decompile_all
// name: CMFCColorButton::RebuildPalette
// address: 0x100512b9
// body: available
// range: 0x100512b9-0x1005139b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorButton::RebuildPalette(class CPalette *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorButton::RebuildPalette(CMFCColorButton *this,CPalette *param_1)

{
  CMenu *this_00;
  undefined4 *puVar1;
  LOGPALETTE *plpal;
  UINT cEntries;
  HPALETTE pHVar2;
  CClientDC local_24 [4];
  HDC local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100512c5;
  if (*(int **)(this + 0x7a8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7a8) + 4))(1);
  }
  puVar1 = FUN_1000858a(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = CPalette::vftable;
  }
  *(undefined4 **)(this + 0x7a8) = puVar1;
  CClientDC::CClientDC(local_24,(CWnd *)this);
  local_8 = 0;
  if (param_1 == (CPalette *)0x0) {
    plpal = FUN_1000858a(0x408);
    GetSystemPaletteEntries(local_20,0,0x100,plpal->palPalEntry);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = 0x100;
  }
  else {
    cEntries = CPalette::GetEntryCount(param_1);
    plpal = FUN_1000858a(cEntries * 4 + 8);
    GetPaletteEntries(*(HPALETTE *)(param_1 + 4),0,cEntries,plpal->palPalEntry);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = (WORD)cEntries;
  }
  this_00 = *(CMenu **)(this + 0x7a8);
  pHVar2 = CreatePalette(plpal);
  CMenu::Attach(this_00,(HMENU__ *)pHVar2);
  FUN_100085b9(plpal);
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_24);
  return;
}

