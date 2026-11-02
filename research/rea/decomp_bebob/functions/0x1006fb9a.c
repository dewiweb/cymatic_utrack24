// rea decompile_all
// name: CMFCMenuBar::PreTranslateMessage
// address: 0x1006fb9a
// body: available
// range: 0x1006fb9a-0x1006fd3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMenuBar::PreTranslateMessage(CMFCMenuBar *this,tagMSG *param_1)

{
  CMFCMenuBar *pCVar1;
  int iVar2;
  ushort uVar3;
  CMFCToolBarMenuButton *pCVar4;
  int iVar5;
  ulong uVar6;
  CMFCToolBarButton *pCVar7;
  WPARAM WVar8;
  
  if (param_1->message == 0x100) {
    pCVar4 = CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)this,(int *)0x0);
    if (pCVar4 != (CMFCToolBarMenuButton *)0x0) {
      iVar5 = CBasePane::PreTranslateMessage((CBasePane *)this,param_1);
      return iVar5;
    }
    iVar5 = FUN_100268b9((int)this);
    if (*(int *)(this + 0xcf8) != 0) {
      iVar5 = iVar5 - *(int *)(this + 0xcec);
    }
    iVar2 = *(int *)(this + 0xb7c);
    if ((-1 < iVar2) && (iVar2 < iVar5)) {
      WVar8 = param_1->wParam;
      if (WVar8 == 9) {
        uVar3 = GetKeyState(0x10);
        WVar8 = (uint)((uVar3 & 0x80) == 0) * 2 + 0x25;
      }
      uVar6 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar6 & 0x400000) != 0) {
        if (WVar8 == 0x25) {
          WVar8 = 0x27;
        }
        else if (WVar8 == 0x27) {
          WVar8 = 0x25;
        }
      }
      if (WVar8 == 0xd) {
        pCVar7 = (CMFCToolBarButton *)FUN_100261ef(this,*(int *)(this + 0xb7c));
        iVar5 = CMFCToolBar::DropDownMenu((CMFCToolBar *)this,pCVar7);
        if (iVar5 == 0) {
          pCVar7 = (CMFCToolBarButton *)FUN_100261ef(this,*(int *)(this + 0xb7c));
          CMFCToolBar::ProcessCommand((CMFCToolBar *)this,pCVar7);
        }
        return 1;
      }
      if (WVar8 == 0x1b) {
        (**(code **)(*(int *)this + 0x360))();
        (**(code **)(*(int *)this + 0x364))();
        DAT_10168708 = 0;
      }
      else {
        if (WVar8 == 0x25) {
          pCVar1 = this + 0xb7c;
          *(int *)pCVar1 = *(int *)pCVar1 + -1;
          if (*(int *)pCVar1 < 0) {
            *(int *)(this + 0xb7c) = iVar5 + -1;
          }
        }
        else {
          if (WVar8 != 0x27) {
            if (WVar8 == 0x28) {
              pCVar7 = (CMFCToolBarButton *)FUN_100261ef(this,*(int *)(this + 0xb7c));
              CMFCToolBar::DropDownMenu((CMFCToolBar *)this,pCVar7);
              return 1;
            }
            iVar5 = (**(code **)(*(int *)this + 0x394))(param_1->wParam);
            if (iVar5 != 0) {
              return 1;
            }
            goto LAB_1006fc65;
          }
          *(int *)(this + 0xb7c) = *(int *)(this + 0xb7c) + 1;
          if (iVar5 <= *(int *)(this + 0xb7c)) {
            *(undefined4 *)(this + 0xb7c) = 0;
          }
        }
        CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar2);
        CMFCToolBar::InvalidateButton((CMFCToolBar *)this,*(int *)(this + 0xb7c));
        UpdateWindow(*(HWND *)(this + 0x20));
        (**(code **)(*(int *)this + 600))(*(undefined4 *)(this + 0xb7c));
      }
    }
  }
LAB_1006fc65:
  iVar5 = CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  return iVar5;
}

