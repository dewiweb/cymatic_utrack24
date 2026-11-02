// rea decompile_all
// name: CMFCMenuBar::RestoreMaximizeMode
// address: 0x1006f2f7
// body: available
// range: 0x1006f2f7-0x1006f4e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::RestoreMaximizeMode(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCMenuBar::RestoreMaximizeMode(CMFCMenuBar *this,int param_1)

{
  CObject *this_00;
  CMDIChildWnd *pCVar1;
  HWND hWnd;
  uint uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  tagMENUITEMINFOW local_21c;
  CMFCToolBarSystemMenuButton local_1ec [240];
  CMFCToolBarMenuButtonsButton local_fc [116];
  CMFCToolBarMenuButtonsButton local_88 [36];
  uint local_64;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20c;
  local_8 = 0x1006f306;
  if (*(int *)(this + 0xcf8) == 0) {
    if (*(int *)(this + 0xcdc) != 0) {
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_10127cb4,
                                   *(CObject **)(this + 0xcd0));
      if (this_00 != (CObject *)0x0) {
        pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
        if (pCVar1 != (CMDIChildWnd *)0x0) {
          pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
          if (pCVar1 == (CMDIChildWnd *)0x0) {
            hWnd = (HWND)0x0;
          }
          else {
            hWnd = *(HWND *)(pCVar1 + 0x20);
          }
          uVar2 = GetWindowLongW(hWnd,-0x10);
          CMFCToolBarSystemMenuButton::CMFCToolBarSystemMenuButton
                    (local_1ec,*(HMENU__ **)(this + 0xcdc),*(HICON__ **)(this + 0xce0));
          local_8 = 0;
          (**(code **)(*(int *)this + 0x344))(local_1ec,0);
          if ((uVar2 & 0x20000) != 0) {
            uVar3 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf020);
            local_8._0_1_ = 1;
            (**(code **)(*(int *)this + 0x344))(uVar3,0xffffffff);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10098ac1((CMFCToolBarButton *)local_fc);
          }
          if ((uVar2 & 0x10000) != 0) {
            uVar3 = CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_fc,0xf120);
            local_8._0_1_ = 2;
            (**(code **)(*(int *)this + 0x344))(uVar3,0xffffffff);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10098ac1((CMFCToolBarButton *)local_fc);
          }
          CMFCToolBarMenuButtonsButton::CMFCToolBarMenuButtonsButton(local_88,0xf060);
          local_8._0_1_ = 3;
          _memset(&local_21c,0,0x30);
          local_21c.cbSize = 0x30;
          local_21c.fMask = 1;
          BVar4 = GetMenuItemInfoW(*(HMENU *)(this + 0xcdc),0xf060,0,&local_21c);
          if ((BVar4 == 0) || (((byte)local_21c.fState & 3) != 0)) {
            local_64 = local_64 | 0x40000;
          }
          (**(code **)(*(int *)this + 0x344))(local_88,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10098ac1((CMFCToolBarButton *)local_88);
          local_8 = 0xffffffff;
          FUN_10091e59((CMFCToolBarMenuButton *)local_1ec);
        }
      }
    }
    *(undefined4 *)(this + 0xcf8) = 1;
    *(undefined4 *)(this + 0xcec) = *(undefined4 *)(this + 0xcf0);
    if (param_1 != 0) {
      pCVar5 = CWnd::GetParentFrame((CWnd *)this);
      (**(code **)(*(int *)pCVar5 + 0x174))(1);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  FUN_100f90cf();
  return;
}

