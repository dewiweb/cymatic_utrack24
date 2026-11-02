// rea decompile_all
// name: GetToolTipText
// address: 0x100b43f9
// body: available
// range: 0x100b43f9-0x100b449f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CMFCRibbonDefaultPanelButton::GetToolTipText(void)const 
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonDefaultPanelButton::GetToolTipText(void)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall GetToolTipText(void *this,undefined4 *param_1)

{
  uint uVar1;
  BOOL BVar2;
  undefined **ppuVar3;
  int *piVar4;
  int *local_18;
  uint local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100b4405;
  local_14 = 0;
  BVar2 = IsRectEmpty((RECT *)((int)this + 0x18));
  if (BVar2 == 0) {
    local_18 = FUN_10005e30((int *)(*(int *)((int)this + 4) + -0x10));
    local_18 = local_18 + 4;
    local_14 = 2;
  }
  else {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&local_18,(int *)ppuVar3);
    local_14 = 1;
  }
  local_8 = (uint)(BVar2 == 0);
  piVar4 = FUN_10005e30(local_18 + -4);
  *param_1 = piVar4 + 4;
  uVar1 = local_14 | 4;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd | 4;
    FUN_10001030(local_18 + -4);
    uVar1 = local_14;
  }
  local_14 = uVar1;
  if ((local_14 & 1) != 0) {
    FUN_10001030(local_18 + -4);
  }
  return param_1;
}

