// rea decompile_all
// name: CMFCBaseTabCtrl::RenameTab
// address: 0x10094eb0
// body: available
// range: 0x10094eb0-0x10094f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::RenameTab(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseTabCtrl::RenameTab(CMFCBaseTabCtrl *this)

{
  undefined **ppuVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10094ebc;
  if (*(int *)(this + 0x140) == 0) {
    return 0;
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            (*(CWnd **)(this + 0x140),
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  if ((*(int *)(local_14[0] + -0xc) != 0) &&
     (iVar2 = (**(code **)(*(int *)this + 0x1fc))(*(undefined4 *)(this + 0x13c),local_14),
     iVar6 = local_14[0], iVar2 != 0)) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    LVar5 = SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_10168b3c,*(WPARAM *)(this + 0x13c),iVar6);
    if (LVar5 == 0) {
      iVar6 = (**(code **)(*(int *)this + 0x1bc))(*(undefined4 *)(this + 0x13c),local_14);
      goto LAB_10094f54;
    }
  }
  iVar6 = 0;
LAB_10094f54:
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return iVar6;
}

