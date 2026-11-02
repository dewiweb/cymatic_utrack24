// rea decompile_all
// name: CMDIFrameWndEx::ShowPopupMenu
// address: 0x10023ede
// body: available
// range: 0x10023ede-0x100241bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMDIFrameWndEx::ShowPopupMenu(class CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIFrameWndEx::ShowPopupMenu(CMDIFrameWndEx *this,CMFCPopupMenu *param_1)

{
  int iVar1;
  UINT UVar2;
  CMenu *this_00;
  undefined **ppuVar3;
  CMFCToolBarMenuButton *pCVar4;
  bool bVar5;
  wchar_t *local_1fc;
  int local_1f8;
  HMENU local_1f4;
  CMFCPopupMenu *local_1f0;
  CMDIFrameWndEx *local_1ec;
  uint local_1e8;
  CMFCToolBarMenuButton local_1e4 [232];
  CMFCToolBarMenuButton local_fc [36];
  uint local_d8;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 500;
  local_8 = 0x10023eed;
  local_1f0 = param_1;
  local_1ec = this;
  iVar1 = CFrameImpl::OnShowPopupMenu((CFrameImpl *)(this + 0x33c),param_1,(CFrameWnd *)this);
  if (iVar1 == 0) goto LAB_100241b8;
  if ((DAT_10166e54 == 0) && (*(int *)(this + 0x118) != 0)) {
    if (param_1 != (CMFCPopupMenu *)0x0) {
      local_1f4 = *(HMENU *)(param_1 + 0xea8);
      if (local_1f4 != (HMENU)0x0) {
        bVar5 = false;
        local_1f8 = GetMenuItemCount(local_1f4);
        local_1e8 = 0;
        do {
          if (local_1f8 <= (int)local_1e8) break;
          UVar2 = GetMenuItemID(local_1f4,local_1e8);
          bVar5 = UVar2 - 0xe130 < 0x10;
          local_1e8 = local_1e8 + 1;
        } while (!bVar5);
        param_1 = local_1f0;
        if ((bVar5) &&
           (this_00 = CMenu::FromHandle(*(HMENU__ **)(local_1ec + 0x118)), param_1 = local_1f0,
           this_00 != (CMenu *)0x0)) {
          iVar1 = GetMenuItemCount(*(HMENU *)(this_00 + 4));
          local_1f4 = (HMENU)0x1;
          local_1f8 = 0;
          local_1e8 = 0;
          if (0 < iVar1) {
            do {
              UVar2 = GetMenuItemID(*(HMENU *)(this_00 + 4),local_1e8);
              if ((0xfeff < UVar2) && (UVar2 != 0xffffffff)) {
                if ((*(int *)(local_1ec + 0x11c) == 0) || (UVar2 != 0xff09)) {
                  if (local_1f4 != (HMENU)0x0) {
                    CMFCPopupMenu::InsertSeparator(local_1f0,-1);
                    local_1f4 = (HMENU)0x0;
                    SendMessageW(*(HWND *)(local_1ec + 0x110),0x234,0,0);
                  }
                  ppuVar3 = FUN_1000ad47();
                  FUN_10005e00(&local_1fc,(int *)ppuVar3);
                  local_8 = 0;
                  CMenu::GetMenuStringW
                            (this_00,local_1e8,
                             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_1fc,0x400);
                  CMFCToolBarMenuButton::CMFCToolBarMenuButton
                            (local_fc,UVar2,(HMENU__ *)0x0,-1,local_1fc,0);
                  local_8._0_1_ = 1;
                  UVar2 = GetMenuState(*(HMENU *)(this_00 + 4),local_1e8,0x400);
                  if ((UVar2 & 8) != 0) {
                    local_d8 = local_d8 | 0x10000;
                  }
                  CMFCPopupMenu::InsertItem(local_1f0,local_fc,-1);
                  local_8 = (uint)local_8._1_3_ << 8;
                  CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
                  local_8 = 0xffffffff;
                  FUN_10001030((undefined4 *)(local_1fc + -8));
                }
                else {
                  local_1f8 = 1;
                }
              }
              local_1e8 = local_1e8 + 1;
            } while ((int)local_1e8 < iVar1);
          }
          param_1 = local_1f0;
          if ((*(uint *)(local_1ec + 0x11c) != 0) &&
             ((local_1f8 != 0 || (*(int *)(local_1ec + 300) != 0)))) {
            if (DAT_10160460 != 0) {
              CMFCToolBar::AddBasicCommand(*(uint *)(local_1ec + 0x11c));
            }
            pCVar4 = (CMFCToolBarMenuButton *)
                     CMFCToolBarMenuButton::CMFCToolBarMenuButton
                               (local_1e4,*(uint *)(local_1ec + 0x11c),(HMENU__ *)0x0,-1,
                                *(wchar_t **)(local_1ec + 0x114),0);
            local_8 = 2;
            CMFCPopupMenu::InsertItem(local_1f0,pCVar4,-1);
            local_8 = 0xffffffff;
            CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_1e4);
            param_1 = local_1f0;
          }
        }
      }
      goto LAB_10024196;
    }
  }
  else {
LAB_10024196:
    this = local_1ec;
    if ((param_1 != (CMFCPopupMenu *)0x0) && (*(int *)(param_1 + 0xebc) != 0)) goto LAB_100241b8;
  }
  (**(code **)(*(int *)this + 0x1dc))(param_1);
LAB_100241b8:
  iVar1 = FUN_100f90cf();
  return iVar1;
}

