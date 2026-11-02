// rea decompile_all
// name: FUN_100a1e7f
// address: 0x100a1e7f
// body: available
// range: 0x100a1e7f-0x100a23f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a23ef to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100a23f4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100a1e7f(void *this,HMENU__ *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  CMFCPopupMenu *pCVar4;
  undefined **ppuVar5;
  int iVar6;
  uint *puVar7;
  CCommandManager *pCVar8;
  CObject *pCVar9;
  UINT UVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar11;
  uint uVar12;
  CFrameWnd *pCVar13;
  int iVar14;
  int iVar15;
  tagMENUITEMINFOW local_1d0;
  ULONG_PTR local_1a0;
  UINT local_19c;
  HMENU__ *local_198;
  uint local_194;
  int local_190;
  WCHAR local_18c [2];
  int local_188;
  HMENU__ *local_184;
  int local_180;
  CMenu *local_17c;
  int local_178;
  uint local_174;
  CFrameWnd *local_170;
  CMFCToolBarMenuButton local_16c [4];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_134;
  CMFCToolBarButton local_84 [16];
  undefined4 local_74;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c0;
  local_8 = 0x100a1e8e;
  local_184 = param_1;
  (**(code **)(*(int *)this + 0x350))();
  *(undefined4 *)((int)this + 0xcf0) = 1;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)((int)this + 0xd3c));
  if ((local_184 != (HMENU__ *)0x0) &&
     (local_17c = CMenu::FromHandle(local_184), local_17c != (CMenu *)0x0)) {
    local_170 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      local_170 = CWnd::GetTopLevelFrame(this);
    }
    if (local_170 == (CFrameWnd *)0x0) {
      local_170 = (CFrameWnd *)AfxGetMainWnd();
    }
    if (*(HWND *)((int)this + 0x20) != (HWND)0x0) {
      pHVar1 = GetParent(*(HWND *)((int)this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
      if ((pCVar3 != (CObject *)0x0) && (*(CFrameWnd **)(pCVar3 + 0x124) != (CFrameWnd *)0x0)) {
        local_170 = *(CFrameWnd **)(pCVar3 + 0x124);
      }
      if (((DAT_10166e78 != 0) && (pCVar3 != (CObject *)0x0)) &&
         (pCVar4 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar3),
         pCVar4 != (CMFCPopupMenu *)0x0)) {
        param_2 = 1;
      }
    }
    if (local_170 != (CFrameWnd *)0x0) {
      SendMessageW(*(HWND *)(local_170 + 0x20),0x117,(WPARAM)local_184,
                   (uint)*(ushort *)((int)this + 0xcd4));
    }
    local_180 = GetMenuItemCount(*(HMENU *)(local_17c + 4));
    local_178 = 0;
    local_188 = 1;
    local_190 = 1;
    if (*(int *)((int)this + 0xd00) != 0) {
      uVar11 = FUN_100f8660(extraout_ECX,extraout_EDX);
      local_190 = 1;
      if (0 < (int)uVar11) {
        local_190 = (int)uVar11;
      }
    }
    local_174 = 0;
    if (0 < local_180) {
      do {
        local_194 = 0;
        local_198 = (HMENU__ *)0x0;
        ppuVar5 = FUN_1000ad47();
        FUN_10005e00(&local_170,(int *)ppuVar5);
        local_8 = 0;
        CMenu::GetMenuStringW
                  (local_17c,local_174,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_170,
                   0x400);
        _memset(&local_1d0,0,0x30);
        local_1d0.cbSize = 0x30;
        local_1d0.cch = 0;
        local_1d0.dwTypeData = (LPWSTR)0x0;
        local_1d0.fMask = 0x37;
        GetMenuItemInfoW(*(HMENU *)(local_17c + 4),local_174,1,&local_1d0);
        UVar10 = local_1d0.wID;
        local_19c = GetMenuState(*(HMENU *)(local_17c + 4),local_174,0x400);
        local_1a0 = local_1d0.dwItemData;
        if (local_1d0.fType == 0x800) {
          if (((local_178 == 0) && (local_188 == 0)) &&
             ((local_174 != local_180 - 1U && (*(int *)((int)this + 0xd00) == 0)))) {
            (**(code **)(*(int *)this + 0x348))(0xffffffff);
            local_178 = 1;
            goto LAB_100a2397;
          }
        }
        else {
          if (local_1d0.hSubMenu != (HMENU__ *)0x0) {
            UVar10 = 0xffffffff;
            local_198 = local_1d0.hSubMenu;
            if (DAT_101697f4 != (CMenuTearOffManager *)0x0) {
              local_194 = CMenuTearOffManager::Parse
                                    (DAT_101697f4,
                                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      *)&local_170);
            }
          }
          if (((*(int *)((int)this + 0xcf8) == 0) && (param_2 == 0)) &&
             ((iVar6 = CMFCMenuBar::IsShowAllCommands(), iVar6 == 0 &&
              (iVar6 = CMFCToolBar::IsCommandRarelyUsed(UVar10), iVar6 != 0)))) {
            if (*(int *)((int)this + 0xd00) == 0) {
              iVar6 = CMFCToolBar::IsCommandRarelyUsed(UVar10);
              if ((iVar6 != 0) && (iVar6 = CMFCToolBar::IsCommandPermitted(UVar10), iVar6 != 0)) {
                *(undefined4 *)((int)this + 0xcf0) = 0;
                iVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_170,L'&',0);
                if ((-1 < iVar6) && (iVar6 < *(int *)(local_170 + -0xc) + -1)) {
                  iVar6 = iVar6 + 1;
                  if ((iVar6 < 0) || (*(int *)(local_170 + -0xc) < iVar6)) {
                    /* WARNING: Subroutine does not return */
                    FUN_10001000((undefined4 *)0x80070057);
                  }
                  local_18c[0] = *(WCHAR *)(local_170 + iVar6 * 2);
                  local_18c[1] = 0;
                  CharUpperW(local_18c);
                  puVar7 = (uint *)CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                             ((CMap<unsigned_int,unsigned_int,int,int> *)
                                              ((int)this + 0xd3c),(uint)(ushort)local_18c[0]);
                  *puVar7 = UVar10;
                }
              }
              goto LAB_100a239d;
            }
LAB_100a2202:
            iVar15 = 0;
            iVar14 = 0;
            iVar6 = 0;
            uVar12 = UVar10;
            pCVar13 = local_170;
            pCVar8 = (CCommandManager *)FUN_10037712();
            iVar6 = CCommandManager::GetCmdImage(pCVar8,uVar12,iVar6);
            CMFCToolBarButton::CMFCToolBarButton
                      (local_84,UVar10,iVar6,(wchar_t *)pCVar13,iVar14,iVar15);
            local_8._0_1_ = 1;
            if ((0 < (int)local_174) && ((int)(local_174 + 1) % local_190 == 0)) {
              local_74 = 1;
            }
            local_178 = (**(code **)(*(int *)this + 0x344))(local_84,0xffffffff);
            local_8 = (uint)local_8._1_3_ << 8;
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
          }
          else {
            if (*(int *)((int)this + 0xd00) != 0) goto LAB_100a2202;
            CMFCToolBarMenuButton::CMFCToolBarMenuButton
                      (local_16c,UVar10,local_198,-1,(wchar_t *)local_170,0);
            local_8._0_1_ = 2;
            local_164 = 1;
            local_160 = 0;
            uVar12 = UVar10;
            pCVar8 = (CCommandManager *)FUN_10037712();
            local_134 = CCommandManager::GetMenuUserImage(pCVar8,uVar12);
            if (local_134 != -1) {
              local_168 = 1;
            }
            local_178 = (**(code **)(*(int *)this + 0x344))(local_16c,0xffffffff);
            local_8 = (uint)local_8._1_3_ << 8;
            CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_16c);
          }
          if (-1 < local_178) {
            pCVar3 = (CObject *)FUN_100261ef(this,local_178);
            if (pCVar3 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            if (*(int *)(pCVar3 + 4) == 0) {
              iVar6 = *(int *)(pCVar3 + 0x34);
            }
            else {
              iVar6 = *(int *)(pCVar3 + 0x38);
            }
            *(ULONG_PTR *)(pCVar3 + 0x28) = local_1a0;
            *(uint *)(pCVar3 + 0xc) = (uint)(-1 < iVar6);
            if ((((DAT_101685b0 == 0) || (UVar10 < *(uint *)(DAT_101685b0 + 0x24))) ||
                (*(uint *)(DAT_101685b0 + 0x28) < UVar10)) && ((local_19c & 3) != 0)) {
              *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x24) | 0x40000;
            }
            pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                        pCVar3);
            if (pCVar9 != (CObject *)0x0) {
              (**(code **)(*(int *)pCVar9 + 0xf4))(local_194);
            }
            if ((local_19c & 8) != 0) {
              *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x24) | 0x10000;
            }
            if ((local_1d0.fType & 0x40) != 0) {
              *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x24) | 0x20000000;
            }
          }
          local_178 = 0;
LAB_100a2397:
          local_188 = 0;
        }
LAB_100a239d:
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_170 + -0x10));
        local_174 = local_174 + 1;
      } while ((int)local_174 < local_180);
    }
    UVar10 = GetMenuDefaultItem(local_184,0,1);
    *(UINT *)((int)this + 0xcd0) = UVar10;
  }
  FUN_100f90cf();
  return;
}

