// rea decompile_all
// name: CMFCRibbonGallery::Clear
// address: 0x100b014b
// body: available
// range: 0x100b014b-0x100b01bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonGallery::Clear(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonGallery::Clear(CMFCRibbonGallery *this)

{
  CWnd *pCVar1;
  
  pCVar1 = *(CWnd **)(this + 0x2c0);
  if (pCVar1 == (CWnd *)0x0) {
    pCVar1 = *(CWnd **)(this + 0x48);
  }
  CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
            ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)&PTR_vftable_10161f68,pCVar1);
  FUN_100af852((int)this);
  CStringArray::SetSize((CStringArray *)(this + 0x178),0,-1);
  CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x18c),0,-1);
  CStringArray::SetSize((CStringArray *)(this + 0x2ac),0,-1);
  FUN_100822ef((int)(this + 0x1a0));
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  return;
}

