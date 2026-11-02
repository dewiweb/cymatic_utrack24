// rea decompile_all
// name: CMFCMenuBar::SetMaximizeMode
// address: 0x1006eff1
// body: available
// range: 0x1006eff1-0x1006f2f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCMenuBar::SetMaximizeMode(int,class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMenuBar::SetMaximizeMode(CMFCMenuBar *this,int param_1,CWnd *param_2,int param_3)

{
  CObject *pCVar1;
  HMENU pHVar2;
  BOOL BVar3;
  ulong uVar4;
  LRESULT LVar5;
  DWORD DVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  tagMENUITEMINFOW local_224;
  CMenu *local_1f4;
  int local_1f0;
  CMFCToolBarSystemMenuButton local_1ec [240];
  CMFCToolBarMenuButtonsButton local_fc [116];
  CMFCToolBarMenuButtonsButton local_88 [36];
  uint local_64;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x214;
  local_8 = 0x1006f000;
  if (*(int *)(this + 0xcf8) != param_1) {
    if (param_1 == 0) {
      *(undefined4 *)(this + 0xcf0) = *(undefined4 *)(this + 0xcec);
      if (*(int *)(this + 0xcdc) != 0) {
        (**(code **)(*(int *)this + 0x34c))(0);
      }
      iVar9 = *(int *)(this + 0xbd4) + -1;
      if (*(int *)(this + 0xca0) != 0) {
        iVar9 = *(int *)(this + 0xbd4) + -2;
      }
      iVar10 = 0;
      if (0 < *(int *)(this + 0xcec)) {
        do {
          local_1f0 = iVar9;
          (**(code **)(*(int *)this + 0x34c))(local_1f0);
          iVar10 = iVar10 + 1;
          local_1f0 = local_1f0 + -1;
          iVar9 = local_1f0;
        } while (iVar10 < *(int *)(this + 0xcec));
      }
      *(undefined4 *)(this + 0xcec) = 0;
    }
    else if (param_2 == (CWnd *)0x0) {
      param_1 = 0;
    }
    else {
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)param_2);
      if ((pCVar1 == (CObject *)0x0) || (local_1f0 = 1, *(int *)(pCVar1 + 0xa0) == 0)) {
        local_1f0 = 0;
      }
      *(undefined4 *)(this + 0xcdc) = 0;
      pHVar2 = ::GetSystemMenu(*(HWND *)(param_2 + 0x20),0);
      local_1f4 = CMenu::FromHandle(pHVar2);
      if ((local_1f4 != (CMenu *)0x0) && (BVar3 = IsMenu(*(HMENU *)(local_1f4 + 4)), BVar3 != 0)) {
        pHVar2 = *(HMENU *)(local_1f4 + 4);
        *(HMENU *)(this + 0xcdc) = pHVar2;
        BVar3 = IsMenu(pHVar2);
        if ((BVar3 == 0) ||
           ((uVar4 = CWnd::GetExStyle(param_2), (uVar4 & 0x80000) == 0 && (local_1f0 == 0)))) {
          *(undefined4 *)(this + 0xcdc) = 0;
        }
      }
      if (*(int *)(this + 0xcdc) != 0) {
        LVar5 = SendMessageW(*(HWND *)(param_2 + 0x20),0x7f,0,0);
        *(LRESULT *)(this + 0xce0) = LVar5;
        if (LVar5 == 0) {
          DVar6 = GetClassLongW(*(HWND *)(param_2 + 0x20),-0x22);
          *(DWORD *)(this + 0xce0) = DVar6;
        }
        uVar7 = CMFCToolBarSystemMenuButton::CMFCToolBarSystemMenuButton
                          (local_1ec,*(HMENU__ **)(this + 0xcdc),*(HICON__ **)(this + 0xce0));
        local_8 = 0;
        (**(code **)(*(int *)this + 0x344))(uVar7,0);
        local_8 = 0xffffffff;
        FUN_10091e59((CMFCToolBarMenuButton *)local_1ec);
      }
      uVar8 = GetWindowLongW(*(HWND *)(param_2 + 0x20),-0x10);
      *(undefined4 *)(this + 0xcec) = 0;
      if (*(int *)(this + 0xcdc) != 0) {
        if ((uVar8 & 0x20000) != 0) {
          uVar7 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf020);
          local_8 = 1;
          (**(code **)(*(int *)this + 0x344))(uVar7,0xffffffff);
          local_8 = 0xffffffff;
          FUN_10098ac1((CMFCToolBarButton *)local_fc);
          *(int *)(this + 0xcec) = *(int *)(this + 0xcec) + 1;
        }
        if ((uVar8 & 0x10000) != 0) {
          uVar7 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf120);
          local_8 = 2;
          (**(code **)(*(int *)this + 0x344))(uVar7,0xffffffff);
          local_8 = 0xffffffff;
          FUN_10098ac1((CMFCToolBarButton *)local_fc);
          *(int *)(this + 0xcec) = *(int *)(this + 0xcec) + 1;
        }
        CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_88,0xf060);
        local_8 = 3;
        if (*(int *)(this + 0xcdc) != 0) {
          _memset(&local_224,0,0x30);
          local_224.cbSize = 0x30;
          local_224.fMask = 1;
          BVar3 = GetMenuItemInfoW(*(HMENU *)(this + 0xcdc),0xf060,0,&local_224);
          if ((BVar3 == 0) || (((byte)local_224.fState & 3) != 0)) {
            local_64 = local_64 | 0x40000;
          }
        }
        (**(code **)(*(int *)this + 0x344))(local_88,0xffffffff);
        *(int *)(this + 0xcec) = *(int *)(this + 0xcec) + 1;
        local_8 = 0xffffffff;
        FUN_10098ac1((CMFCToolBarButton *)local_88);
      }
    }
    *(int *)(this + 0xcf8) = param_1;
    if (param_3 != 0) {
      (**(code **)(*(int *)this + 0x208))();
    }
    if ((*(int *)(this + 0x168) == 0) && (param_3 != 0)) {
      (**(code **)(*(int *)this + 0x2d4))(param_3);
    }
  }
  FUN_100f90cf();
  return;
}

