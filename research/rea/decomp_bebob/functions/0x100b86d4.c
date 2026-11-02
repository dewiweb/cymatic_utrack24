// rea decompile_all
// name: CMFCRibbonBaseElement::GetItemIDsList
// address: 0x100b86d4
// body: available
// range: 0x100b86d4-0x100b8706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonBaseElement::GetItemIDsList(class CList<unsigned
   int,unsigned int> &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonBaseElement::GetItemIDsList
          (CMFCRibbonBaseElement *this,CList<unsigned_int,unsigned_int> *param_1)

{
  uint uVar1;
  __POSITION *p_Var2;
  
  uVar1 = *(uint *)(this + 0x48);
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    p_Var2 = CList<unsigned_int,unsigned_int>::Find(param_1,uVar1,(__POSITION *)0x0);
    if (p_Var2 == (__POSITION *)0x0) {
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)param_1,*(HWND__ **)(this + 0x48));
    }
  }
  return;
}

