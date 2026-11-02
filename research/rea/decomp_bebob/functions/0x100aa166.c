// rea decompile_all
// name: CMFCToolBarColorButton::CMFCToolBarColorButton
// address: 0x100aa166
// body: available
// range: 0x100aa166-0x100aa1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CMFCToolBarColorButton::CMFCToolBarColorButton(unsigned long,int,int,char
   const *,int,int,int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarColorButton * __thiscall
CMFCToolBarColorButton::CMFCToolBarColorButton
          (CMFCToolBarColorButton *this,ulong param_1,int param_2,int param_3,char *param_4,
          int param_5,int param_6,int param_7)

{
  CMFCToolBarButton::CMFCToolBarButton((CMFCToolBarButton *)this);
  *(ulong *)(this + 0x70) = param_1;
  *(int *)(this + 0x74) = param_5;
  *(undefined ***)this = vftable;
  if (param_4 == (char *)0x0) {
    param_4 = (char *)&PTR_1011d390;
  }
  FUN_100022b0(this + 0x2c,(short *)param_4);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(int *)(this + 0x78) = param_2;
  *(int *)(this + 0x7c) = param_3;
  *(int *)(this + 0x84) = param_6;
  *(int *)(this + 0x88) = param_7;
  *(undefined4 *)(this + 0x3c) = 1;
  return this;
}

