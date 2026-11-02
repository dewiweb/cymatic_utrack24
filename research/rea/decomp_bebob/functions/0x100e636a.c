// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::OnInitDialog
// address: 0x100e636a
// body: available
// range: 0x100e636a-0x100e649c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e637f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsToolsPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarsToolsPropertyPage::OnInitDialog(CMFCToolBarsToolsPropertyPage *this)

{
  int *piVar1;
  uint uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  CDialog::OnInitDialog((CDialog *)this);
  if (DAT_101685b0 != 0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                (CObject *)pCVar4);
    *(CObject **)(this + 0x133c) = pCVar5;
    if (pCVar5 != (CObject *)0x0) {
      CVSListBoxBase::SetStandardButtons((CVSListBoxBase *)(this + 0x1158),0xf);
      (**(code **)(**(int **)(this + 0x133c) + 0x174))();
      puVar9 = *(undefined4 **)(DAT_101685b0 + 8);
      while( true ) {
        if (puVar9 == (undefined4 *)0x0) {
          uVar2 = *(uint *)(DAT_101685b0 + 0x3c);
          if (uVar2 != 0) {
            CWnd::ShowWindow((CWnd *)(this + 0xa8),5);
            CMenu::LoadMenuA((CMenu *)(this + 0x1348),uVar2);
            pHVar6 = GetSubMenu(*(HMENU *)(this + 0x134c),0);
            pCVar7 = CMenu::FromHandle(pHVar6);
            uVar8 = 0;
            if (pCVar7 != (CMenu *)0x0) {
              uVar8 = *(undefined4 *)(pCVar7 + 4);
            }
            *(undefined4 *)(this + 0x7fc) = uVar8;
          }
          uVar2 = *(uint *)(DAT_101685b0 + 0x38);
          if (uVar2 != 0) {
            CWnd::ShowWindow((CWnd *)(this + 0x818),5);
            CMenu::LoadMenuA((CMenu *)(this + 0x1340),uVar2);
            pHVar6 = GetSubMenu(*(HMENU *)(this + 0x1344),0);
            pCVar7 = CMenu::FromHandle(pHVar6);
            uVar8 = 0;
            if (pCVar7 != (CMenu *)0x0) {
              uVar8 = *(undefined4 *)(pCVar7 + 4);
            }
            *(undefined4 *)(this + 0xf6c) = uVar8;
          }
          *(undefined4 *)(this + 0x7f8) = 1;
          *(undefined4 *)(this + 0xf68) = 1;
          EnableControls(this);
          return 1;
        }
        if (puVar9 == (undefined4 *)0x0) break;
        piVar1 = puVar9 + 2;
        puVar9 = (undefined4 *)*puVar9;
        (**(code **)(*(int *)(this + 0x1158) + 0x168))(*piVar1 + 4,*piVar1,0xffffffff);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

