// rea decompile_all
// name: CMFCTabCtrl::SetScrollButtons
// address: 0x10073087
// body: available
// range: 0x10073087-0x10073188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::SetScrollButtons(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::SetScrollButtons(CMFCTabCtrl *this)

{
  IMAGE_STATE IVar1;
  IMAGES_IDS IVar2;
  IMAGES_IDS IVar3;
  int local_8;
  
  if ((*(int *)(this + 0x208) != 0) || (local_8 = 0x32, *(int *)(this + 0x244) != 0)) {
    local_8 = 0;
  }
  CMFCButton::SetAutorepeatMode((CMFCButton *)(this + 0x354),local_8);
  CMFCButton::SetAutorepeatMode((CMFCButton *)(this + 0xaa4),local_8);
  if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
     (*(int *)(this + 0x210) == 0)) {
    IVar1 = 4;
  }
  else {
    IVar1 = 0;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x354),0x15,IVar1,0x17);
  if (*(int *)(this + 0x244) == 0) {
    if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) {
      IVar1 = 4;
    }
    else {
      IVar1 = 0;
    }
    IVar3 = 0x16;
    IVar2 = 0x14;
  }
  else {
    if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) {
      IVar1 = 4;
    }
    else {
      IVar1 = 0;
    }
    IVar3 = 0xd;
    IVar2 = 0xd;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0xaa4),IVar2,IVar1,IVar3);
  if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
     (*(int *)(this + 0x210) == 0)) {
    IVar1 = 4;
  }
  else {
    IVar1 = 0;
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x2094),5,IVar1,0);
  return;
}

