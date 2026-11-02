// rea decompile_all
// name: CMFCRibbonButton::FillWindowList
// address: 0x100bbdd7
// body: available
// range: 0x100bbdd7-0x100bc08e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bbea6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonButton::FillWindowList(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonButton::FillWindowList(CMFCRibbonButton *this)

{
  int *piVar1;
  CMFCRibbonBar *this_00;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  HWND hWnd;
  CWnd *pCVar4;
  CObject *pCVar5;
  CMFCRibbonSeparator *this_01;
  undefined **ppuVar6;
  void *pvVar7;
  CMFCRibbonBaseElement *pCVar8;
  int iVar9;
  wchar_t *local_21c;
  int local_218;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x214;
  local_8 = 0x100bbde6;
  if ((0 < *(int *)(this + 0xf0)) && (local_218 = 0, 0 < *(int *)(this + 0xf0))) {
    do {
      iVar9 = *(int *)(this + 0x158) + -1;
      if ((iVar9 < 0) || (*(int *)(this + 0x158) <= iVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)(this + 0x154) + iVar9 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      FUN_1006cfdb(this + 0x150,iVar9,1);
      local_218 = local_218 + 1;
    } while (local_218 < *(int *)(this + 0xf0));
  }
  *(undefined4 *)(this + 0xf0) = 0;
  this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
  if (this_00 != (CMFCRibbonBar *)0x0) {
    pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this_00);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar2);
    if (pCVar3 != (CObject *)0x0) {
      hWnd = GetWindow(*(HWND *)(pCVar3 + 0x110),5);
      for (local_218 = 0; (hWnd != (HWND__ *)0x0 && (local_218 < 9)); local_218 = local_218 + 1) {
        pCVar4 = CWnd::FromHandle(hWnd);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                    (CObject *)pCVar4);
        if (pCVar5 == (CObject *)0x0) {
LAB_100bbecf:
          hWnd = GetWindow(hWnd,2);
        }
        else {
          iVar9 = (**(code **)(*(int *)pCVar5 + 0x1dc))();
          if (iVar9 == 0) goto LAB_100bbecf;
          if (local_218 == 0) {
            this_01 = FUN_1000858a(0xb0);
            local_8 = 0;
            if (this_01 == (CMFCRibbonSeparator *)0x0) {
              pCVar8 = (CMFCRibbonBaseElement *)0x0;
            }
            else {
              pCVar8 = (CMFCRibbonBaseElement *)CMFCRibbonSeparator::CMFCRibbonSeparator(this_01,1);
            }
            local_8 = 0xffffffff;
            *(undefined4 *)(pCVar8 + 0x90) = 1;
            AddSubItem(this,pCVar8,-1);
            *(undefined4 *)(this + 0xf0) = 1;
          }
          GetWindowTextW(hWnd,local_214,0x100);
          ppuVar6 = FUN_1000ad47();
          FUN_10005e00(&local_21c,(int *)ppuVar6);
          local_8 = 1;
          FUN_100022f0(&local_21c,L"&%d %s");
          pvVar7 = FUN_1000858a(0x164);
          local_8._0_1_ = 2;
          if (pvVar7 == (void *)0x0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = ::CMFCRibbonButton(pvVar7,0xff00,local_21c,0xffffffff,0xffffffff,0);
          }
          *(HWND *)(pCVar8 + 0x44) = hWnd;
          *(undefined4 *)(pCVar8 + 0x90) = 1;
          *(undefined4 *)(pCVar8 + 0x28) = *(undefined4 *)(this + 0x28);
          local_8 = CONCAT31(local_8._1_3_,1);
          AddSubItem(this,pCVar8,-1);
          hWnd = GetWindow(hWnd,2);
          *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
          local_8 = 0xffffffff;
          FUN_10001030((undefined4 *)(local_21c + -8));
        }
      }
      if ((*(int *)(pCVar3 + 0x11c) != 0) && ((local_218 == 9 || (*(int *)(pCVar3 + 300) != 0)))) {
        pvVar7 = FUN_1000858a(0x164);
        local_8 = 3;
        if (pvVar7 == (void *)0x0) {
          pCVar8 = (CMFCRibbonBaseElement *)0x0;
        }
        else {
          pCVar8 = ::CMFCRibbonButton(pvVar7,*(undefined4 *)(pCVar3 + 0x11c),
                                      *(wchar_t **)(pCVar3 + 0x114),0xffffffff,0xffffffff,0);
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(pCVar8 + 0x90) = 1;
        *(undefined4 *)(pCVar8 + 0x28) = *(undefined4 *)(this + 0x28);
        AddSubItem(this,pCVar8,-1);
        *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
      }
    }
  }
  FUN_100f90cf();
  return;
}

