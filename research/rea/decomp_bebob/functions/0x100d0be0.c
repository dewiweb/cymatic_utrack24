// rea decompile_all
// name: CMFCToolBarComboBoxButton::SelectItem
// address: 0x100d0be0
// body: available
// range: 0x100d0be0-0x100d0ce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarComboBoxButton::SelectItem(int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarComboBoxButton::SelectItem(CMFCToolBarComboBoxButton *this,int param_1,int param_2)

{
  CSimpleStringT<wchar_t,0> *this_00;
  CComboBox *this_01;
  int iVar1;
  undefined **ppuVar2;
  LRESULT LVar3;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100d0bec;
  if (param_1 < *(int *)(this + 200)) {
    iVar1 = -1;
    if (-2 < param_1) {
      iVar1 = param_1;
    }
    this_01 = *(CComboBox **)(this + 0xb4);
    *(int *)(this + 0x74) = iVar1;
    if ((this_01 != (CComboBox *)0x0) && (*(int *)(this_01 + 0x20) != 0)) {
      this_00 = (CSimpleStringT<wchar_t,0> *)(this + 0xb8);
      if (iVar1 < 0) {
        ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
      }
      else {
        CComboBox::GetLBText
                  (this_01,param_1,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00);
      }
      if (*(int *)(this + 0xb0) != 0) {
        ppuVar2 = FUN_1000ad47();
        FUN_10005e00(local_14,(int *)ppuVar2);
        local_8 = 0;
        CWnd::GetWindowTextW
                  (*(CWnd **)(this + 0xb0),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        iVar1 = FUN_10005720(local_14,*(ushort **)this_00);
        if (iVar1 != 0) {
          CWnd::SetWindowTextW(*(CWnd **)(this + 0xb0),*(wchar_t **)this_00);
        }
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
      }
      LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
      if (LVar3 != param_1) {
        LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14e,param_1,0);
        if (LVar3 == -1) goto LAB_100d0cdf;
        if (param_2 != 0) {
          (**(code **)(*(int *)this + 0x40))(9);
        }
      }
    }
    iVar1 = 1;
  }
  else {
LAB_100d0cdf:
    iVar1 = 0;
  }
  return iVar1;
}

