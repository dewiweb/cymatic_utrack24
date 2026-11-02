// rea decompile_all
// name: CPaneFrameWnd::AddButton
// address: 0x1003ad63
// body: available
// range: 0x1003ad63-0x1003ae00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::AddButton(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::AddButton(CPaneFrameWnd *this,uint param_1)

{
  CMFCCaptionButton *pCVar1;
  CMFCCaptionMenuButton *this_00;
  CObject *pCVar2;
  
  pCVar1 = FindButton(this,param_1);
  pCVar2 = (CObject *)0x0;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    if (param_1 == 0x19) {
      this_00 = FUN_1000858a(0x3c);
      if (this_00 != (CMFCCaptionMenuButton *)0x0) {
        pCVar2 = (CObject *)CMFCCaptionMenuButton::CMFCCaptionMenuButton(this_00);
      }
      *(undefined4 *)(pCVar2 + 0x34) = 0;
      *(undefined4 *)(pCVar2 + 0x1c) = 0x19;
      CObList::AddHead((CObList *)(this + 0xfc),pCVar2);
      *(undefined4 *)(pCVar2 + 0x2c) = 1;
    }
    else {
      pCVar1 = FUN_1000858a(0x30);
      if (pCVar1 != (CMFCCaptionButton *)0x0) {
        pCVar2 = (CObject *)CMFCCaptionButton::CMFCCaptionButton(pCVar1);
      }
      CObList::AddHead((CObList *)(this + 0xfc),pCVar2);
      *(uint *)(pCVar2 + 0x1c) = param_1;
      *(undefined4 *)(pCVar2 + 0x2c) = 1;
    }
  }
  return;
}

