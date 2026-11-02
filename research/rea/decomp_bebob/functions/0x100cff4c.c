// rea decompile_all
// name: CMFCToolBarComboBoxEdit::PreTranslateMessage
// address: 0x100cff4c
// body: available
// range: 0x100cff4c-0x100d01f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxEdit::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarComboBoxEdit::PreTranslateMessage(CMFCToolBarComboBoxEdit *this,tagMSG *param_1)

{
  ushort uVar1;
  uint uVar2;
  SHORT SVar3;
  LRESULT LVar4;
  int iVar5;
  CWnd *pCVar6;
  HWND pHVar7;
  CFrameWnd *pCVar8;
  LPARAM LVar9;
  WPARAM WVar10;
  
  if ((param_1->message == 0x20a) && (*(int *)(*(int *)(this + 0x74) + 0xb4) != 0)) {
    LVar4 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x157,0,0);
    if (LVar4 == 0) goto LAB_100cffaa;
    LVar9 = param_1->lParam;
    WVar10 = param_1->wParam;
LAB_100cff91:
    SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),param_1->message,WVar10,
                 LVar9);
LAB_100cffa2:
    iVar5 = 1;
  }
  else {
LAB_100cffaa:
    if (param_1->message == 0x100) {
      SVar3 = GetKeyState(0x12);
      if (-1 < SVar3) {
        SVar3 = GetKeyState(0x11);
        if ((-1 < SVar3) && (*(int *)(*(int *)(this + 0x74) + 0xb4) != 0)) {
          uVar2 = param_1->wParam;
          if (uVar2 == 0xd) {
LAB_100d0026:
            CWnd::SetFocus((CWnd *)this);
            LVar4 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x157,0,0)
            ;
            if (LVar4 != 0) {
              LVar9 = param_1->lParam;
              WVar10 = param_1->wParam;
              goto LAB_100cff91;
            }
            pCVar6 = CWnd::GetOwner(*(CWnd **)(*(int *)(this + 0x74) + 0xb4));
            if (pCVar6 != (CWnd *)0x0) {
              CWnd::GetWindowTextW
                        ((CWnd *)this,
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (*(int *)(this + 0x74) + 0xb8));
              if (*(int *)(*(int *)(this + 0x74) + 0xb4) == 0) {
                LVar9 = 0;
              }
              else {
                LVar9 = *(LPARAM *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20);
              }
              uVar1 = *(ushort *)(*(int *)(this + 0x74) + 0x20);
              pCVar6 = CWnd::GetOwner(*(CWnd **)(*(int *)(this + 0x74) + 0xb4));
              PostMessageW(*(HWND *)(pCVar6 + 0x20),0x111,(uint)uVar1,LVar9);
            }
            goto LAB_100cffa2;
          }
          if ((0x20 < uVar2) && (((uVar2 < 0x25 || (uVar2 == 0x26)) || (uVar2 == 0x28)))) {
            LVar4 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x157,0,0)
            ;
            if (LVar4 != 0) goto LAB_100d0026;
          }
        }
      }
      WVar10 = param_1->wParam;
      if (WVar10 == 9) {
        pHVar7 = GetParent(*(HWND *)(this + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar7);
        if (pCVar6 != (CWnd *)0x0) {
          pHVar7 = GetParent(*(HWND *)(this + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar7);
          pCVar6 = CWnd::GetNextDlgTabItem(pCVar6,(CWnd *)this,0);
LAB_100d01d9:
          CWnd::SetFocus(pCVar6);
          goto LAB_100cffa2;
        }
      }
      else if (WVar10 == 0x1b) {
        if (*(int *)(*(int *)(this + 0x74) + 0xb4) != 0) {
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x14f,0,0);
        }
        pCVar8 = CWnd::GetTopLevelFrame((CWnd *)this);
        if (pCVar8 != (CFrameWnd *)0x0) {
          pCVar6 = (CWnd *)CWnd::GetTopLevelFrame((CWnd *)this);
          goto LAB_100d01d9;
        }
      }
      else if ((WVar10 == 0x26) || (WVar10 == 0x28)) {
        SVar3 = GetKeyState(0x12);
        if (-1 < SVar3) {
          SVar3 = GetKeyState(0x11);
          if ((-1 < SVar3) && (*(int *)(*(int *)(this + 0x74) + 0xb4) != 0)) {
            LVar4 = SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x157,0,0)
            ;
            if (LVar4 == 0) {
              SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20),0x14f,1,0);
              pHVar7 = GetParent(*(HWND *)(*(int *)(*(int *)(this + 0x74) + 0xb4) + 0x20));
              pCVar6 = CWnd::FromHandle(pHVar7);
              if (pCVar6 != (CWnd *)0x0) {
                iVar5 = *(int *)(this + 0x74);
                pHVar7 = GetParent(*(HWND *)(*(int *)(iVar5 + 0xb4) + 0x20));
                pCVar6 = CWnd::FromHandle(pHVar7);
                InvalidateRect(*(HWND *)(pCVar6 + 0x20),(RECT *)(iVar5 + 0x90),1);
              }
            }
            goto LAB_100cffa2;
          }
        }
      }
    }
    iVar5 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  return iVar5;
}

