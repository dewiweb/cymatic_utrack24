// rea decompile_all
// name: CMFCTabCtrl::AdjustTabs
// address: 0x1007631d
// body: available
// range: 0x1007631d-0x10076c49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100763b3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::AdjustTabs(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::AdjustTabs(CMFCTabCtrl *this)

{
  LPRECT lprc;
  CToolTipCtrl *pCVar1;
  bool bVar2;
  int iVar3;
  LRESULT LVar4;
  CPen *pCVar5;
  int iVar6;
  int *piVar7;
  tagRECT *ptVar8;
  CMFCVisualManager *pCVar9;
  BOOL BVar10;
  int iVar11;
  CClientDC local_a0 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_8c [4];
  int local_88;
  CPen *local_84;
  tagRECT *local_80;
  uint local_7c;
  int local_78;
  LPRECT local_74;
  int local_70;
  int local_6c;
  tagRECT *local_68;
  RECT local_64;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x1007632c;
  *(undefined4 *)(this + 0x248) = 0;
  SetRectEmpty((LPRECT)(this + 0x1f0));
  local_80 = (tagRECT *)(**(code **)(*(int *)this + 0x1a0))();
  if ((local_80 != (tagRECT *)0x0) && (iVar3 = (**(code **)(*(int *)this + 0x178))(), iVar3 != 0)) {
    if ((*(int *)(this + 0x10c) == 0) || (1 < (int)local_80)) {
      iVar3 = *(int *)(this + 0xdc);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
         (LVar4 = SendMessageW(*(HWND *)(iVar3 + 0x20),0x40d,0,0), LVar4 == 0)) {
        local_44.left = 0;
        local_44.top = 0;
        local_44.right = 0;
        local_44.bottom = 0;
        CToolTipCtrl::AddTool
                  (*(CToolTipCtrl **)(this + 0xdc),(CWnd *)this,(wchar_t *)0xffffffff,&local_44,1);
      }
      local_64.left = 0;
      local_64.top = 0;
      local_64.right = 0;
      local_64.bottom = 0;
      CClientDC::CClientDC(local_a0,(CWnd *)this);
      local_8 = 0;
      pCVar5 = (CPen *)(this + 0x134);
      if (*(int *)(this + 0x204) == 0) {
        pCVar5 = (CPen *)&DAT_10166bb4;
      }
      local_84 = CDC::SelectObject((CDC *)local_a0,pCVar5);
      if (local_84 == (CPen *)0x0) {
LAB_100763b3:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_6c = *(int *)(this + 0x290) - *(int *)(this + 600);
      *(undefined4 *)(this + 0x260) = 0;
      local_70 = 0;
      if (0 < *(int *)(this + 0x9c)) {
        do {
          if ((local_70 < 0) || (*(int *)(this + 0x90) <= local_70)) goto LAB_100763b3;
          iVar3 = *(int *)(*(int *)(this + 0x8c) + local_70 * 4);
          iVar11 = 0;
          if ((*(int *)(iVar3 + 0xc) != 0) || (*(int *)(iVar3 + 8) != -1)) {
            local_44.bottom = *(LONG *)(this + 0xb8);
            iVar11 = *(int *)(this + 0xb4);
          }
          local_78 = iVar3;
          if ((*(int *)(this + 0x23c) != 0) &&
             (((*(int *)(this + 0x208) != 0 || (*(int *)(this + 0x20c) != 0)) ||
              (local_70 == *(int *)(this + 0xa0))))) {
            CDC::SelectObject((CDC *)local_a0,(CPen *)&DAT_10166bc4);
          }
          iVar6 = 0;
          local_68 = (tagRECT *)0x0;
          if (*(int *)(iVar3 + 0x34) == 0) {
            *(undefined4 *)(iVar3 + 0x24) = 0;
          }
          else {
            if (*(int *)(iVar3 + 0x3c) == 0) {
              piVar7 = (int *)CDC::GetTextExtent((CDC *)local_a0,local_8c);
              iVar6 = *piVar7;
            }
            iVar11 = iVar6 + DAT_10161740 * 2 + DAT_10161744 + iVar11;
            *(int *)(iVar3 + 0x24) = iVar11;
            if (*(int *)(this + 0x210) == 0) {
              if (*(int *)(this + 0x208) == 0) {
                if (*(int *)(this + 0x20c) == 0) goto LAB_100765a6;
                *(int *)(iVar3 + 0x24) =
                     ((iVar11 - *(int *)(this + 0x294)) - DAT_10161744) + *(int *)(this + 0x29c);
              }
              else {
                *(int *)(iVar3 + 0x24) =
                     (DAT_10161744 * 2 - *(int *)(this + 0x294)) + iVar11 + *(int *)(this + 0x29c);
              }
              local_68 = (tagRECT *)
                         (((*(int *)(this + 0x29c) - *(int *)(this + 0x294)) - DAT_10161744) + -1);
            }
            else {
              *(int *)(iVar3 + 0x24) =
                   (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2 + iVar11;
              local_68 = (tagRECT *)((*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2);
            }
LAB_100765a6:
            if ((*(int *)(this + 0x240) != 0) && (local_70 == *(int *)(this + 0xa0))) {
              *(int *)(iVar3 + 0x24) =
                   *(int *)(iVar3 + 0x24) + (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) + -2;
            }
          }
          if ((*(int *)(this + 0x23c) != 0) && (local_70 == *(int *)(this + 0xa0))) {
            CDC::SelectObject((CDC *)local_a0,(CPen *)&DAT_10166bb4);
          }
          local_34.right = *(int *)(iVar3 + 0x24);
          if (((*(int *)(this + 0x218) != 0) && (iVar3 = *(int *)(this + 0x26c), 0 < iVar3)) &&
             (iVar3 <= local_34.right)) {
            local_34.right = iVar3;
          }
          local_34.top = *(LONG *)(this + 0x294);
          local_34.right = local_34.right + local_6c;
          local_34.bottom = (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) + -2 + local_34.top;
          iVar3 = *(int *)(local_78 + 0x34);
          local_34.left = local_6c;
          local_74 = (LPRECT)(local_78 + 0x10);
          local_74->left = local_6c;
          *(LONG *)(local_78 + 0x14) = local_34.top;
          *(LONG *)(local_78 + 0x18) = local_34.right;
          *(LONG *)(local_78 + 0x1c) = local_34.bottom;
          if (iVar3 == 0) {
            pCVar1 = *(CToolTipCtrl **)(this + 0xd8);
            if ((pCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
              local_54.left = 0;
              local_54.top = 0;
              local_54.right = 0;
              local_54.bottom = 0;
              CToolTipCtrl::SetToolRect(pCVar1,(CWnd *)this,*(uint *)(local_78 + 0x28),&local_54);
            }
          }
          else {
            if (*(int *)(this + 0x84) == 1) {
              OffsetRect(local_74,0,2);
            }
            if ((*(int *)(this + 0x244) != 0) &&
               (iVar3 = *(int *)(this + 0x298), iVar3 < *(int *)(local_78 + 0x18))) {
              if ((local_70 != *(int *)(this + 0xa0)) ||
                 ((local_70 != 0 ||
                  (iVar3 - local_74->left < (int)&local_68->left + DAT_10161740 * 2)))) {
                *(undefined4 *)(local_78 + 0x24) = 0;
                SetRectEmpty(local_74);
                *(undefined4 *)(this + 0x248) = 1;
                goto LAB_100767fb;
              }
              *(int *)(local_78 + 0x18) = iVar3;
            }
            if ((*(int *)(this + 0xd8) != 0) && (*(int *)(*(int *)(this + 0xd8) + 0x20) != 0)) {
              if ((*(int *)(local_78 + 0x40) == 0) && (*(int *)(this + 0xe0) == 0)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((local_74->left < *(int *)(this + 0x290)) ||
                 (*(int *)(this + 0x298) < *(int *)(local_78 + 0x18))) {
                bVar2 = true;
              }
              if (((*(int *)(this + 0x218) != 0) && (0 < *(int *)(this + 0x26c))) &&
                 (local_74->right - local_74->left < *(int *)(local_78 + 0x24))) {
                bVar2 = true;
              }
              ptVar8 = local_74;
              if (!bVar2) {
                local_24.left = 0;
                local_24.top = 0;
                local_24.right = 0;
                local_24.bottom = 0;
                ptVar8 = &local_24;
              }
              CToolTipCtrl::SetToolRect
                        (*(CToolTipCtrl **)(this + 0xd8),(CWnd *)this,*(uint *)(local_78 + 0x28),
                         ptVar8);
              if ((bVar2) && (local_70 == *(int *)(this + 0xa0))) {
                local_64.left = local_74->left;
                local_64.top = local_74->top;
                local_64.right = local_74->right;
                local_64.bottom = local_74->bottom;
              }
            }
            iVar3 = local_74->right;
            iVar11 = local_74->left;
            *(int *)(this + 0x260) = *(int *)(this + 0x260) + (iVar3 - iVar11) + 1;
            local_6c = local_6c + 1 + ((iVar3 - iVar11) - (int)local_68);
            if (0 < local_70) {
              *(int *)(this + 0x260) = *(int *)(this + 0x260) - (int)local_68;
            }
            if (*(int *)(this + 0x204) != 0) {
              *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + *(int *)(this + 0xf0) / 2;
            }
          }
LAB_100767fb:
          local_70 = local_70 + 1;
        } while (local_70 < *(int *)(this + 0x9c));
      }
      if ((*(int *)(this + 0x218) == 0) && (*(int *)(this + 0x298) <= local_6c)) {
        iVar3 = (*(int *)(this + 0x298) - *(int *)(this + 0x290)) / (int)local_80 + -1;
        if (*(int *)(this + 0x210) != 0) {
          iVar3 = ((*(int *)(this + 0x298) - *(int *)(this + 0x290)) -
                  (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 3) / (int)local_80;
          if (iVar3 < (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2 + *(int *)(this + 0xb4))
          {
            iVar3 = (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2 + *(int *)(this + 0xb4);
          }
        }
        iVar11 = 0;
        local_74 = (LPRECT)0x0;
        local_68 = local_80;
        if (0 < *(int *)(this + 0x9c)) {
          do {
            if ((iVar11 < 0) || (*(int *)(this + 0x90) <= iVar11)) goto LAB_100763b3;
            iVar6 = *(int *)(*(int *)(this + 0x8c) + iVar11 * 4);
            if ((*(int *)(iVar6 + 0x34) != 0) && (iVar6 = *(int *)(iVar6 + 0x24), iVar6 < iVar3)) {
              local_74 = (LPRECT)((int)local_74 + (iVar3 - iVar6));
              local_68 = (tagRECT *)((int)&local_68[-1].bottom + 3);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(this + 0x9c));
        }
        if (0 < (int)local_68) {
          local_88 = iVar3 + (int)local_74 / (int)local_68;
          local_6c = *(int *)(this + 0x290);
          local_70 = 0;
          if (0 < *(int *)(this + 0x9c)) {
            do {
              if ((local_70 < 0) || (*(int *)(this + 0x90) <= local_70)) goto LAB_100763b3;
              local_78 = *(int *)(*(int *)(this + 0x8c) + local_70 * 4);
              if (*(int *)(local_78 + 0x34) == 0) {
                pCVar1 = *(CToolTipCtrl **)(this + 0xd8);
                if ((pCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
                  local_24.left = 0;
                  local_24.top = 0;
                  local_24.right = 0;
                  local_24.bottom = 0;
                  CToolTipCtrl::SetToolRect
                            (pCVar1,(CWnd *)this,*(uint *)(local_78 + 0x28),&local_24);
                }
              }
              else {
                local_44.right = 0;
                if ((*(int *)(local_78 + 0xc) != 0) || (*(int *)(local_78 + 8) != -1)) {
                  local_44.right = *(LONG *)(this + 0xb4);
                  local_44.bottom = *(LONG *)(this + 0xb8);
                }
                local_7c = (uint)(local_88 < *(int *)(local_78 + 0x24));
                local_68 = (tagRECT *)local_88;
                if (local_7c == 0) {
                  local_68 = (tagRECT *)*(int *)(local_78 + 0x24);
                }
                if (local_88 < DAT_10161744 + local_44.right) {
                  local_68 = (tagRECT *)
                             (((*(int *)(this + 0xec) * 2 - *(int *)(this + 0x290)) +
                              *(int *)(this + 0x298)) / (int)local_80);
                }
                else if ((*(int *)(*(int *)(local_78 + 4) + -0xc) == 0) ||
                        (*(int *)(local_78 + 0x3c) != 0)) {
                  local_68 = (tagRECT *)(local_44.right + DAT_10161740 * 2);
                }
                if (*(int *)(this + 0x210) != 0) {
                  local_68 = (tagRECT *)
                             ((int)local_68 + -1 +
                             (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2);
                }
                local_54.top = *(LONG *)(this + 0x294);
                local_54.left = local_6c;
                local_54.right = local_6c + (int)local_68;
                local_68 = (tagRECT *)(local_78 + 0x10);
                local_54.bottom =
                     (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) + -2 + local_54.top;
                local_68->left = local_6c;
                *(LONG *)(local_78 + 0x14) = local_54.top;
                *(LONG *)(local_78 + 0x18) = local_54.right;
                *(LONG *)(local_78 + 0x1c) = local_54.bottom;
                local_6c = local_54.right;
                if (*(int *)(this + 0x204) == 0) {
                  if (*(int *)(this + 0x84) == 1) {
                    OffsetRect(local_68,0,2);
                  }
                  pCVar1 = *(CToolTipCtrl **)(this + 0xd8);
                  if ((pCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
                    if ((local_7c == 0) &&
                       ((*(int *)(local_78 + 0x40) == 0 && (*(int *)(this + 0xe0) == 0)))) {
                      local_34.left = 0;
                      local_34.top = 0;
                      local_34.right = 0;
                      local_34.bottom = 0;
                      bVar2 = false;
                      ptVar8 = &local_34;
                    }
                    else {
                      bVar2 = true;
                      ptVar8 = local_68;
                    }
                    CToolTipCtrl::SetToolRect(pCVar1,(CWnd *)this,*(uint *)(local_78 + 0x28),ptVar8)
                    ;
                    if ((bVar2) && (local_70 == *(int *)(this + 0xa0))) {
                      local_64.left = local_68->left;
                      local_64.top = local_68->top;
                      local_64.right = local_68->right;
                      local_64.bottom = local_68->bottom;
                    }
                  }
                }
                if (*(int *)(this + 0x210) != 0) {
                  local_6c = local_6c - (*(int *)(this + 0x29c) - *(int *)(this + 0x294)) / 2;
                }
                if (0 < (int)local_74) {
                  local_6c = local_6c + 1;
                }
              }
              local_70 = local_70 + 1;
            } while (local_70 < *(int *)(this + 0x9c));
          }
        }
      }
      else {
        *(int *)(this + 0x260) = *(int *)(this + 0x260) + *(int *)(this + 0xf0) / 2;
      }
      CDC::SelectObject((CDC *)local_a0,local_84);
      if ((*(int *)(this + 0x240) != 0) && (-1 < *(int *)(this + 0xa0))) {
        lprc = (LPRECT)(this + 0x1f0);
        (**(code **)(*(int *)this + 0x1b4))(*(int *)(this + 0xa0),lprc);
        lprc->left = (*(int *)(this + 500) - *(int *)(this + 0x1fc)) + *(int *)(this + 0x1f8);
        InflateRect(lprc,-2,-2);
        pCVar9 = CMFCVisualManager::GetInstance();
        local_84 = *(CPen **)(this + 0x84);
        iVar3 = (**(code **)(*(int *)pCVar9 + 0x120))(this);
        OffsetRect(lprc,-iVar3,(uint)(local_84 == (CPen *)0x1) * 2 + -1);
        pCVar1 = *(CToolTipCtrl **)(this + 0xdc);
        if ((pCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
          CToolTipCtrl::SetToolRect(pCVar1,(CWnd *)this,1,lprc);
          iVar3 = *(int *)(this + 0xa0);
          if ((iVar3 < 0) || (*(int *)(this + 0x90) <= iVar3)) goto LAB_100763b3;
          local_7c = *(uint *)(*(int *)(this + 0x8c) + iVar3 * 4);
          if ((*(int *)(this + 0xd8) != 0) &&
             (((*(int *)(*(int *)(this + 0xd8) + 0x20) != 0 && (local_7c != 0)) &&
              (BVar10 = IsRectEmpty(&local_64), BVar10 == 0)))) {
            local_64.right = lprc->left + -1;
            CToolTipCtrl::SetToolRect
                      (*(CToolTipCtrl **)(this + 0xd8),(CWnd *)this,*(uint *)(local_7c + 0x28),
                       &local_64);
          }
        }
      }
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_a0);
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(this + 0x9c)) {
        do {
          if ((iVar3 < 0) || (*(int *)(this + 0x90) <= iVar3)) goto LAB_100763b3;
          SetRectEmpty((LPRECT)(*(int *)(*(int *)(this + 0x8c) + iVar3 * 4) + 0x10));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(this + 0x9c));
      }
    }
  }
  FUN_100f90cf();
  return;
}

