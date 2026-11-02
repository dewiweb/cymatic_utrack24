// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory
// address: 0x100e4c8a
// body: available
// range: 0x100e4c8a-0x100e4ede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e4d81 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory(CMFCToolBarsKeyboardPropertyPage *this)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  CFont *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int *piVar7;
  int iVar8;
  WPARAM wParam;
  WPARAM *pWVar9;
  CClientDC local_54 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_40 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_38 [8];
  CPen *local_30;
  CObject *local_2c;
  undefined4 *local_28;
  LRESULT local_24;
  int local_20;
  WPARAM local_1c;
  int local_18;
  ushort *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x100e4c96;
  CWnd::UpdateData((CWnd *)this,1);
  local_1c = SendMessageW(*(HWND *)(this + 0x40c),0x147,0,0);
  if (local_1c != 0xffffffff) {
    SendMessageW(*(HWND *)(this + 0x398),0x184,0,0);
    SendMessageW(*(HWND *)(this + 0x324),0x184,0,0);
    local_24 = SendMessageW(*(HWND *)(this + 0x40c),0x150,local_1c,0);
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_20,(int *)ppuVar2);
    local_8 = 0;
    CComboBox::GetLBText
              ((CComboBox *)(this + 0x3ec),local_1c,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_20);
    iVar3 = FUN_10005720(&local_20,*(ushort **)(this + 0x4fc));
    CClientDC::CClientDC(local_54,(CWnd *)(this + 0x378));
    local_8 = CONCAT31(local_8._1_3_,1);
    pCVar4 = CWnd::GetFont((CWnd *)(this + 0x378));
    local_30 = CDC::SelectObject((CDC *)local_54,(CPen *)pCVar4);
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                  (CObject *)pCVar6);
    if (local_2c == (CObject *)0x0) {
LAB_100e4d81:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_1c = 0;
    puVar1 = *(undefined4 **)(local_24 + 4);
    while (puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_100e4d81;
      local_28 = (undefined4 *)*puVar1;
      local_18 = puVar1[2];
      if (local_18 == 0) goto LAB_100e4d81;
      puVar1 = local_28;
      if ((*(int *)(local_18 + 0x20) != 0) && (*(int *)(local_18 + 0x20) != -1)) {
        piVar7 = FUN_10005e30((int *)(*(int *)(local_18 + 0x2c) + -0x10));
        local_14[0] = (ushort *)(piVar7 + 4);
        local_8 = CONCAT31(local_8._1_3_,2);
        if ((*(int *)(*(int *)(local_18 + 0x30) + -0xc) != 0) &&
           ((iVar3 == 0 || (iVar8 = FUN_1009636e(local_14[0],local_24), 1 < iVar8)))) {
          FUN_10007c90(local_14,(undefined4 *)(local_18 + 0x30));
        }
        wParam = SendMessageW(*(HWND *)(this + 0x398),0x180,0,(LPARAM)local_14[0]);
        SendMessageW(*(HWND *)(this + 0x398),0x19a,wParam,local_18);
        piVar7 = (int *)CDC::GetTextExtent((CDC *)local_54,local_38);
        if ((int)local_1c <= *piVar7) {
          pWVar9 = (WPARAM *)CDC::GetTextExtent((CDC *)local_54,local_40);
          local_1c = *pWVar9;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_10001030((undefined4 *)(local_14[0] + -8));
        puVar1 = local_28;
      }
    }
    iVar3 = GetSystemMetrics(0x15);
    SendMessageW(*(HWND *)(this + 0x398),0x194,iVar3 + local_1c,0);
    CDC::SelectObject((CDC *)local_54,local_30);
    CWnd::EnableWindow((CWnd *)(this + 0x11c),0);
    SendMessageW(*(HWND *)(this + 0x398),0x186,0,0);
    OnSelchangeCommandsList(this);
    local_8 = local_8 & 0xffffff00;
    CClientDC::~CClientDC(local_54);
    FUN_10001030((undefined4 *)(local_20 + -0x10));
  }
  return;
}

