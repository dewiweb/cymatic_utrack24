// rea decompile_all
// name: CMFCToolBarColorButton::CMFCToolBarColorButton
// address: 0x100aa23b
// body: available
// range: 0x100aa23b-0x100aa2a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100aa261 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CMFCToolBarColorButton::CMFCToolBarColorButton(char const *,int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarColorButton * __thiscall
CMFCToolBarColorButton::CMFCToolBarColorButton
          (CMFCToolBarColorButton *this,char *param_1,int param_2)

{
  CMFCToolBarButton::CMFCToolBarButton((CMFCToolBarButton *)this);
  *(undefined ***)this = vftable;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0;
  FUN_100022b0(this + 0x2c,(short *)param_1);
  *(undefined4 *)(this + 0x80) = 1;
  *(undefined4 *)(this + 0x3c) = 1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(int *)(this + 0x84) = param_2;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  return this;
}

