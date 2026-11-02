// rea decompile_all
// name: CMFCRibbonButton
// address: 0x100bbcde
// body: available
// range: 0x100bbcde-0x100bbdd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMFCRibbonButton::CMFCRibbonButton(unsigned int,char const *,int,int,int)
    public: __thiscall CMFCRibbonButton::CMFCRibbonButton(unsigned int,wchar_t const *,int,int,int)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonButton(void *this,undefined4 param_1,wchar_t *param_2,undefined4 param_3,
                undefined4 param_4,undefined4 param_5)

{
  CMFCRibbonBaseElement::CMFCRibbonBaseElement(this);
  *(undefined ***)this = CMFCRibbonButton::vftable;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined ***)((int)this + 0x13c) = CArray<int,int>::vftable;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined ***)((int)this + 0x150) =
       CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  CMFCRibbonButton::CommonInit(this);
  *(undefined4 *)((int)this + 0x48) = param_1;
  CMFCRibbonButton::SetText(this,param_2);
  *(undefined4 *)((int)this + 0xe4) = param_3;
  *(undefined4 *)((int)this + 0xe8) = param_4;
  *(undefined4 *)((int)this + 300) = param_5;
  return this;
}

