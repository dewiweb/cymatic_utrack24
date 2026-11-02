// rea decompile_all
// name: OnAddToCustomizePage
// address: 0x100cf661
// body: available
// range: 0x100cf661-0x100cf6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnAddToCustomizePage(void)
    public: virtual void __thiscall CMFCToolBarDateTimeCtrl::OnAddToCustomizePage(void)
    public: virtual void __thiscall CMFCToolBarEditBoxButton::OnAddToCustomizePage(void)
   
   Library: Visual Studio 2010 Release */

void __fastcall OnAddToCustomizePage(int *param_1)

{
  int iVar1;
  CObList local_2c [4];
  int local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100cf66d;
  CObList::CObList(local_2c,10);
  local_8 = 0;
  iVar1 = FUN_1002643c(param_1[8],local_2c);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x14))(*(undefined4 *)(local_28 + 8));
  }
  local_8 = 0xffffffff;
  FUN_1001e259(local_2c);
  return;
}

