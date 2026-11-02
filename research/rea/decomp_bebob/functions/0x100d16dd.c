// rea decompile_all
// name: ExportToMenuButton
// address: 0x100d16dd
// body: available
// range: 0x100d16dd-0x100d1767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBarComboBoxButton::ExportToMenuButton(class
   CMFCToolBarMenuButton &)const 
    public: virtual int __thiscall CMFCToolBarDateTimeCtrl::ExportToMenuButton(class
   CMFCToolBarMenuButton &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall ExportToMenuButton(void *this,int param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100d16e9;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar2);
  uVar1 = *(uint *)((int)this + 0x20);
  local_8 = 0;
  pHVar3 = (HMODULE)FUN_1000ac62();
  if (pHVar3 != (HMODULE)0x0) {
    iVar4 = FUN_10006200(local_14,pHVar3,uVar1);
    if (iVar4 != 0) {
      iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_14,L'\n',0);
      if (iVar4 != -1) {
        puVar5 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            local_14,(int)&local_18);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_10007c90((void *)(param_1 + 0x2c),puVar5);
        FUN_10001030((undefined4 *)(local_18 + -0x10));
      }
    }
  }
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return 1;
}

