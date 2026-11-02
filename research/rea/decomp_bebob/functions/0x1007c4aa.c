// rea decompile_all
// name: CDockablePane::SetCaptionButtons
// address: 0x1007c4aa
// body: available
// range: 0x1007c4aa-0x1007c566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::SetCaptionButtons(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::SetCaptionButtons(CDockablePane *this)

{
  CMFCCaptionButton *pCVar1;
  CObject *pCVar2;
  CObArray *this_00;
  
  FUN_1007b153((int)this);
  pCVar1 = FUN_1000858a(0x30);
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = (CObject *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x13,0);
  }
  this_00 = (CObArray *)(this + 800);
  CObArray::SetAtGrow(this_00,*(int *)(this + 0x328),pCVar2);
  pCVar1 = FUN_1000858a(0x30);
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = (CObject *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,9,0);
  }
  CObArray::SetAtGrow(this_00,*(int *)(this + 0x328),pCVar2);
  pCVar1 = FUN_1000858a(0x30);
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = (CObject *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,8,0);
  }
  CObArray::SetAtGrow(this_00,*(int *)(this + 0x328),pCVar2);
  return;
}

