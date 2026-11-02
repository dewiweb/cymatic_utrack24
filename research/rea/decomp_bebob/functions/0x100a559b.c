// rea decompile_all
// name: CMFCOutlookBarToolBar::CMFCOutlookBarToolBar
// address: 0x100a559b
// body: available
// range: 0x100a559b-0x100a55d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CMFCOutlookBarToolBar::CMFCOutlookBarToolBar(class CMFCOutlookBarTabCtrl *)
   
   Library: Visual Studio 2010 Release */

CMFCOutlookBarToolBar * __thiscall
CMFCOutlookBarToolBar::CMFCOutlookBarToolBar
          (CMFCOutlookBarToolBar *this,CMFCOutlookBarTabCtrl *param_1)

{
  CMFCToolBar::CMFCToolBar((CMFCToolBar *)this);
  *(undefined ***)this = vftable;
  CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)(this + 0xcc8),10);
  *(CMFCOutlookBarTabCtrl **)(this + 0xce4) = param_1;
  *(undefined4 *)(this + 0xb04) = 1;
  return this;
}

