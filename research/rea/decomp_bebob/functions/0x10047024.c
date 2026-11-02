// rea decompile_all
// name: CMFCShellTreeCtrl::OnShowContextMenu
// address: 0x10047024
// body: available
// range: 0x10047024-0x100472db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047143 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCShellTreeCtrl::OnShowContextMenu(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellTreeCtrl::OnShowContextMenu(CMFCShellTreeCtrl *this,int param_2,HWND param_3)

{
  HMENU pHVar1;
  _TREEITEM *p_Var2;
  int iVar3;
  LRESULT LVar4;
  HRESULT HVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  BOOL BVar8;
  AFX_MODULE_STATE *pAVar9;
  undefined4 local_80;
  _TREEITEM *local_7c;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  HWND local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CWaitCursor local_31;
  IShellFolder *local_30;
  int *local_2c;
  HMENU local_28;
  undefined1 local_24 [12];
  HWND local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x10047030;
  if (DAT_101681dc == (int *)0x0) {
    if (*(int *)(this + 0x74) == 0) {
      CWnd::Default((CWnd *)this);
    }
    else {
      if ((param_2 == -1) && (param_3 == (HWND)0xffffffff)) {
        local_24._0_4_ = 0;
        local_24._4_4_ = 0;
        local_24._8_4_ = 0;
        local_18 = (HWND)0x0;
        p_Var2 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,9,0);
        if (p_Var2 == (_TREEITEM *)0x0) goto LAB_100472d4;
        iVar3 = CTreeCtrl::GetItemRect((CTreeCtrl *)this,p_Var2,(tagRECT *)local_24,0);
        if (iVar3 != 0) {
          param_2 = local_24._0_4_;
          param_3 = (HWND)((int)&local_18->unused + 1);
          ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_2);
        }
      }
      else {
        local_24._8_4_ = param_2;
        local_18 = param_3;
        ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)(local_24 + 8));
        local_28 = (HMENU)0x0;
        p_Var2 = CTreeCtrl::HitTest((CTreeCtrl *)this,local_24._8_4_,local_18,&local_28);
      }
      if (p_Var2 != (_TREEITEM *)0x0) {
        _memset(&local_80,0,0x28);
        local_80 = 4;
        local_7c = p_Var2;
        LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x113e,0,(LPARAM)&local_80);
        if ((LVar4 != 0) && (local_5c != (undefined4 *)0x0)) {
          local_30 = (IShellFolder *)*local_5c;
          if (local_30 == (IShellFolder *)0x0) {
            HVar5 = SHGetDesktopFolder(&local_30);
            if (HVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
          }
          else {
            (*local_30->lpVtbl->AddRef)(local_30);
          }
          if (local_30 != (IShellFolder *)0x0) {
            pHVar6 = GetParent(*(HWND *)(this + 0x20));
            pCVar7 = CWnd::FromHandle(pHVar6);
            if (pCVar7 == (CWnd *)0x0) {
              local_18 = (HWND)0x0;
            }
            else {
              local_18 = *(HWND *)(pCVar7 + 0x20);
            }
            local_2c = (int *)0x0;
            HVar5 = (*local_30->lpVtbl->GetUIObjectOf)
                              (local_30,local_18,1,(LPCITEMIDLIST *)(local_5c + 2),
                               (IID *)&DAT_10144de4,(UINT *)0x0,&local_2c);
            if (-1 < HVar5) {
              local_28 = CreatePopupMenu();
              if (local_28 != (HMENU)0x0) {
                iVar3 = (**(code **)(*local_2c + 0xc))(local_2c,local_28,0,1,0x7fff,4);
                if (-1 < iVar3) {
                  (**(code **)*local_2c)(local_2c,&DAT_10144e04,&DAT_101681dc);
                  pHVar6 = *(HWND *)(this + 0x20);
                  local_28 = (HMENU)TrackPopupMenu(local_28,0x102,param_2,(int)param_3,0,pHVar6,
                                                   (RECT *)0x0);
                  BVar8 = IsWindow(pHVar6);
                  if (BVar8 != 0) {
                    if (DAT_101681dc != (int *)0x0) {
                      (**(code **)(*DAT_101681dc + 8))(DAT_101681dc);
                      DAT_101681dc = (int *)0x0;
                    }
                    pHVar1 = local_28;
                    if (local_28 != (HMENU)0x0) {
                      pAVar9 = AfxGetModuleState();
                      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar9 + 4));
                      local_50 = local_18;
                      local_4c = (undefined1 *)((int)&pHVar1[-1].unused + 3);
                      local_58 = 0x24;
                      local_54 = 0;
                      local_48 = 0;
                      local_44 = 0;
                      local_40 = 1;
                      local_3c = 0;
                      local_38 = 0;
                      local_8 = 0;
                      iVar3 = (**(code **)(*local_2c + 0x10))(local_2c,&local_58);
                      if (-1 < iVar3) {
                        pHVar6 = GetParent(*(HWND *)(this + 0x20));
                        pCVar7 = CWnd::FromHandle(pHVar6);
                        if (pCVar7 != (CWnd *)0x0) {
                          pHVar6 = GetParent(*(HWND *)(this + 0x20));
                          pCVar7 = CWnd::FromHandle(pHVar6);
                          SendMessageW(*(HWND *)(pCVar7 + 0x20),DAT_10169598,(WPARAM)local_28,0);
                        }
                      }
                      CWnd::SetFocus((CWnd *)this);
                      local_8 = 0xffffffff;
                      CWaitCursor::~CWaitCursor(&local_31);
                    }
                  }
                }
              }
              if (local_2c != (int *)0x0) {
                (**(code **)(*local_2c + 8))(local_2c);
                local_2c = (int *)0x0;
              }
            }
            if (local_30 != (IShellFolder *)0x0) {
              (*local_30->lpVtbl->Release)(local_30);
            }
          }
        }
      }
    }
  }
LAB_100472d4:
  FUN_100f90cf();
  return;
}

