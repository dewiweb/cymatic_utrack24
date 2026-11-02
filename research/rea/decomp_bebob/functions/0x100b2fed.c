// rea decompile_all
// name: CMFCRibbonPanel::InsertSeparator
// address: 0x100b2fed
// body: available
// range: 0x100b2fed-0x100b306a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanel::InsertSeparator(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonPanel::InsertSeparator(CMFCRibbonPanel *this,int param_1)

{
  CMFCRibbonSeparator *this_00;
  int iVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x25c) < param_1)) {
    iVar1 = 0;
  }
  else {
    this_00 = FUN_1000858a(0xb0);
    if (this_00 == (CMFCRibbonSeparator *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CMFCRibbonSeparator::CMFCRibbonSeparator(this_00,0);
    }
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(this + 0xa8);
    if (param_1 == *(int *)(this + 0x25c)) {
      CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x254),*(int *)(this + 0x25c),iVar1);
    }
    else {
      FUN_1006cf3f((CArray<int,int> *)(this + 0x254),param_1,iVar1,1);
    }
    iVar1 = 1;
  }
  return iVar1;
}

