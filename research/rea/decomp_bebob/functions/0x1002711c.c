// rea decompile_all
// name: CMFCToolBar::GetImageList
// address: 0x1002711c
// body: available
// range: 0x1002711c-0x1002716a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCToolBarImages * __thiscall CMFCToolBar::GetImageList(class
   CMFCToolBarImages &,class CMFCToolBarImages &,class CMFCToolBarImages &,class CMFCToolBarImages
   &)const 
   
   Library: Visual Studio 2010 Release */

CMFCToolBarImages * __thiscall
CMFCToolBar::GetImageList
          (CMFCToolBar *this,CMFCToolBarImages *param_1,CMFCToolBarImages *param_2,
          CMFCToolBarImages *param_3,CMFCToolBarImages *param_4)

{
  if (*(int *)(this + 0xb04) == 0) {
    if (((*(int *)(this + 0xb38) != 0) || (DAT_10166e5c == 0)) ||
       (param_4 = param_3, *(int *)(param_3 + 4) < 1)) {
      param_4 = param_1;
    }
  }
  else if (((*(int *)(this + 0xb38) != 0) || (DAT_10166e5c == 0)) || (*(int *)(param_4 + 4) < 1)) {
    param_4 = param_2;
  }
  return param_4;
}

