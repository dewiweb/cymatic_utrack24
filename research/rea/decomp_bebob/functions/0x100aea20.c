// rea decompile_all
// name: CMFCRibbonRichEditCtrl::PreTranslateMessage
// address: 0x100aea20
// body: available
// range: 0x100aea20-0x100aedc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonRichEditCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonRichEditCtrl::PreTranslateMessage(CMFCRibbonRichEditCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int *piVar6;
  CFrameWnd *pCVar7;
  undefined **ppuVar8;
  int iVar9;
  tagMSG *ptVar10;
  LPARAM LVar11;
  UINT Msg;
  WPARAM wParam;
  undefined4 local_20;
  undefined4 local_1c;
  tagPOINT local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  ptVar10 = param_1;
  uStack_4 = 0x10;
  local_8 = 0x100aea2c;
  if (param_1->message == 0x14) {
    return 1;
  }
  if (*(int *)(this + 0x80) == 0) {
    if ((((param_1->message == 0x201) && (piVar6 = *(int **)(this + 0x74), piVar6[0x61] != 0)) &&
        (piVar6[0x1c] == 0)) && (param_1->hwnd != *(HWND *)(this + 0x20))) {
      (**(code **)(*piVar6 + 0x184))();
    }
    if ((ptVar10->message == 0x200) &&
       (iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x38))(), iVar3 == 0)) {
      uVar2 = GetAsyncKeyState(1);
      if ((uVar2 & 0x8000) != 0) {
        pHVar4 = GetFocus();
        pCVar5 = CWnd::FromHandle(pHVar4);
        if (pCVar5 != (CWnd *)this) {
          return 1;
        }
      }
      if (*(int *)(this + 0x78) == 0) {
        local_18[0].x = *(LONG *)(this + 0x20);
        local_18[0].y = -1;
        *(undefined4 *)(this + 0x78) = 1;
        local_20 = 0x10;
        local_1c = 2;
        AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_20);
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      ptVar10 = param_1;
      if ((*(int *)(this + 0x7c) == 0) &&
         (iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x90))(), ptVar10 = param_1, iVar3 != 0)) {
        local_18[0].x = 0;
        local_18[0].y = 0;
        GetCursorPos(local_18);
        *(undefined4 *)(this + 0x7c) = 1;
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x90))();
        ScreenToClient(*(HWND *)(iVar3 + 0x20),local_18);
        LVar11 = CONCAT22((undefined2)local_18[0].y,(undefined2)local_18[0].x);
        iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x90))();
        SendMessageW(*(HWND *)(iVar3 + 0x20),0x200,0,LVar11);
        ptVar10 = param_1;
      }
    }
    if ((ptVar10->message != 0x100) ||
       (iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x38))(), iVar3 != 0)) goto LAB_100aedb5;
    iVar3 = ProcessClipboardAccelerators(this,ptVar10->wParam);
    if (iVar3 != 0) {
      return 1;
    }
    uVar1 = ptVar10->wParam;
    if (uVar1 == 9) {
      iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x30))();
      if (iVar3 == 0) {
        return 1;
      }
      goto LAB_100aedb5;
    }
    if (uVar1 != 0xd) {
      if (uVar1 == 0x1b) {
        iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))();
        if ((iVar3 != 0) && (DAT_1016843c != 0)) {
          LVar11 = 0;
          wParam = 0;
          Msg = 0x10;
          pHVar4 = *(HWND *)(DAT_1016843c + 0x20);
LAB_100aec23:
          SendMessageW(pHVar4,Msg,wParam,LVar11);
          return 1;
        }
        iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))();
        if (iVar3 == 0) {
          CWnd::SetWindowTextW((CWnd *)this,*(wchar_t **)(this + 0x84));
          local_18[0].y = (LONG)&stack0xffffffcc;
          piVar6 = FUN_10005e30((int *)(*(int *)(this + 0x84) + -0x10));
          FUN_100ae7c8(*(void **)(this + 0x74),(ushort *)(piVar6 + 4));
          ptVar10 = param_1;
        }
        pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
        if ((pCVar7 != (CFrameWnd *)0x0) &&
           (iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))(), iVar3 == 0)) {
          pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
          CWnd::SetFocus((CWnd *)pCVar7);
          return 1;
        }
      }
      else if (0x20 < uVar1) {
        if ((0x22 < uVar1) && (uVar1 != 0x26)) {
          if (uVar1 != 0x28) goto LAB_100aedb5;
          if (((*(int **)(this + 0x74))[0x5f] != 0) &&
             (iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))(), iVar3 == 0)) {
            (**(code **)(**(int **)(this + 0x74) + 500))();
            return 1;
          }
        }
        iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))();
        if (iVar3 != 0) {
          pHVar4 = (HWND)0x0;
          if (DAT_1016843c != 0) {
            pHVar4 = *(HWND *)(DAT_1016843c + 0x20);
          }
          LVar11 = ptVar10->lParam;
          wParam = ptVar10->wParam;
          Msg = 0x100;
          goto LAB_100aec23;
        }
      }
      goto LAB_100aedb5;
    }
    iVar3 = (**(code **)(**(int **)(this + 0x74) + 0x40))();
    if (iVar3 != 0) goto LAB_100aedb5;
    ppuVar8 = FUN_1000ad47();
    FUN_10005e00(&param_1,(int *)ppuVar8);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
    local_18[0].y = (LONG)&stack0xffffffcc;
    piVar6 = FUN_10005e30(&param_1[-1].lParam);
    FUN_100ae7c8(*(void **)(this + 0x74),(ushort *)(piVar6 + 4));
    CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x74),1);
    if (*(int *)(*(int *)(this + 0x74) + 0x38) != 0) {
      pHVar4 = GetParent(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0x38) + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      if (pCVar5 == (CWnd *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(pCVar5 + 0x20);
      }
      iVar9 = 0;
      if (DAT_1016843c != 0) {
        iVar9 = *(int *)(DAT_1016843c + 0x20);
      }
      if (iVar3 == iVar9) {
        pCVar7 = AFXGetParentFrame(*(CWnd **)(*(int *)(this + 0x74) + 0x38));
        (**(code **)(*(int *)pCVar7 + 0x60))();
        goto LAB_100aed5d;
      }
    }
    pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
    if (pCVar7 != (CFrameWnd *)0x0) {
      *(undefined4 *)(*(int *)(this + 0x74) + 0x188) = 0;
      pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
      CWnd::SetFocus((CWnd *)pCVar7);
LAB_100aed5d:
      FUN_10001030(&param_1[-1].lParam);
      return 1;
    }
    local_8 = 0xffffffff;
    FUN_10001030(&param_1[-1].lParam);
  }
LAB_100aedb5:
  iVar3 = CWnd::PreTranslateMessage((CWnd *)this,ptVar10);
  return iVar3;
}

