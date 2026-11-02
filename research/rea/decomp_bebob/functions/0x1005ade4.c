// rea decompile_all
// name: CMFCPopupMenu::RecalcLayout
// address: 0x1005ade4
// body: available
// range: 0x1005ade4-0x1005bbc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCPopupMenu::RecalcLayout(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::RecalcLayout(CMFCPopupMenu *this,int param_1)

{
  CToolTipCtrl *this_00;
  CWnd *pCVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  HMONITOR hMonitor;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  CObject *this_01;
  CMFCVisualManager *pCVar9;
  CMFCPopupMenu *pCVar10;
  LONG LVar11;
  ANIMATION_TYPE AVar12;
  undefined4 uVar13;
  uint uVar14;
  tagMONITORINFO *lpmi;
  uint uVar15;
  tagPOINT local_a8;
  CMFCPopupMenu *local_a0;
  int local_9c;
  CObject *local_98;
  uint local_94;
  tagMONITORINFO local_90;
  tagRECT local_68;
  tagRECT local_58;
  undefined1 local_48 [12];
  int local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x1c0))();
  BVar3 = IsWindow(*(HWND *)(this + 0x20));
  if ((((BVar3 == 0) || (piVar2 == (int *)0x0)) || (BVar3 = IsWindow((HWND)piVar2[8]), BVar3 == 0))
     || (piVar2[0x2da] != 0)) goto LAB_1005bbb2;
  if (((*(int **)(this + 0x148) == (int *)0x0) ||
      (iVar4 = (**(code **)(**(int **)(this + 0x148) + 0xf0))(), iVar4 == 0)) ||
     (local_98 = (CObject *)0x1, DAT_10166e54 != 0)) {
    local_98 = (CObject *)0x0;
  }
  lpmi = &local_90;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_90.cbSize = 0x28;
  hMonitor = MonitorFromPoint(*(POINT *)(this + 0x128),2);
  BVar3 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar3 == 0) {
    SystemParametersInfoW(0x30,0,&local_28,0);
  }
  else {
    CopyRect(&local_28,&local_90.rcWork);
  }
  iVar4 = (**(code **)(*(int *)this + 0x204))();
  local_9c = iVar4;
  uVar5 = CWnd::GetExStyle((CWnd *)this);
  local_94 = uVar5 & 0x400000;
  if (*(int *)(this + 0x1080) != 0) {
    if (local_94 == 0) {
      iVar6 = (local_28.right + iVar4 * -2) - *(int *)(this + 0x128);
    }
    else {
      iVar6 = (*(int *)(this + 0x128) + iVar4 * -2) - local_28.left;
    }
    if (*(int *)(this + 0x1098) < iVar6) {
      iVar6 = *(int *)(this + 0x1098);
    }
    *(int *)(this + 0x1098) = iVar6;
    iVar6 = local_28.bottom +
            ((*(int *)(this + 0x10a4) - *(int *)(this + 300)) - *(int *)(this + 0x10ac)) +
            iVar4 * -2;
    if (*(int *)(this + 0x109c) < iVar6) {
      iVar6 = *(int *)(this + 0x109c);
    }
    *(int *)(this + 0x109c) = iVar6;
  }
  iVar6 = *(int *)(this + 0x128);
  iVar8 = iVar6;
  if (local_28.right <= iVar6) {
    iVar8 = local_28.right;
  }
  LVar11 = local_28.left;
  if ((local_28.left <= iVar8) && (LVar11 = iVar6, local_28.right <= iVar6)) {
    LVar11 = local_28.right;
  }
  *(LONG *)(this + 0x128) = LVar11;
  if (*(int *)(this + 0x148) == 0) {
    iVar6 = *(int *)(this + 300);
    iVar8 = iVar6;
    if (local_28.bottom <= iVar6) {
      iVar8 = local_28.bottom;
    }
    LVar11 = local_28.top;
    if ((local_28.top <= iVar8) && (LVar11 = iVar6, local_28.bottom <= iVar6)) {
      LVar11 = local_28.bottom;
    }
    *(LONG *)(this + 300) = LVar11;
  }
  local_18.right = *(LONG *)(this + 0x1098);
  local_18.bottom = *(LONG *)(this + 0x109c);
  if ((*(int *)(this + 0x1080) == 0) && (*(int *)(this + 0x1084) == 0)) {
    puVar7 = (uint *)(**(code **)(*piVar2 + 0x2a4))(local_48 + 8,1);
    local_18.right = *puVar7;
    local_18.bottom = puVar7[1];
  }
  if ((*(int *)(this + 0x1080) == 0) && (*(int *)(this + 0x1084) == 0)) {
    local_18.bottom = local_18.bottom + iVar4 * 2;
    iVar6 = *(int *)(this + 0xed4);
    local_18.right = local_18.right + iVar4 * 2;
    if (-1 < iVar6) {
      if (iVar6 < 2) {
        local_18.right = local_18.right + *(int *)(this + 0xecc);
      }
      else if (iVar6 < 4) {
        local_18.bottom = local_18.bottom + *(int *)(this + 0xecc);
      }
    }
  }
  LVar11 = local_18.bottom;
  if (*(int *)(this + 0x144) == 0) {
    if (local_98 != (CObject *)0x0) {
      local_18.bottom = local_18.bottom + 10;
      local_38.right = local_18.right - local_9c;
      local_38.left = local_9c;
      local_38.top = local_9c;
      local_38.bottom = local_9c + 10;
      *(int *)(this + 0xfe0) = local_9c;
      *(int *)(this + 0xfe4) = local_9c;
      *(LONG *)(this + 0xfe8) = local_38.right;
      *(LONG *)(this + 0xfec) = local_38.bottom;
      if ((DAT_10166e54 == 0) &&
         ((this_00 = (CToolTipCtrl *)(this + 0xff0), this_00 == (CToolTipCtrl *)0x0 ||
          (*(int *)(this + 0x1010) == 0)))) {
        (**(code **)(*(int *)this_00 + 0x160))(this,0);
        SendMessageW(*(HWND *)(this + 0x1010),0x401,1,0);
        if (DAT_10166c64 != -1) {
          SendMessageW(*(HWND *)(this + 0x1010),0x418,0,DAT_10166c64);
        }
        CToolTipCtrl::AddTool(this_00,(CWnd *)this,0x3e9c,(tagRECT *)(this + 0xfe0),1);
      }
    }
  }
  else {
    iVar4 = GetSystemMetrics(0x33);
    iVar6 = GetSystemMetrics(6);
    local_18.bottom = LVar11 + iVar4 + 5 + iVar6 * 2;
  }
  iVar4 = *(int *)(this + 0xf20);
  if ((iVar4 != -1) && (iVar4 < local_18.bottom)) {
    if ((*(int *)(this + 0x1080) == 0) && (*(int *)(this + 0x1084) == 0)) {
      iVar6 = local_9c * 2;
      iVar4 = iVar4 + local_9c * -2;
      iVar8 = (**(code **)(*piVar2 + 0x354))();
      *(undefined4 *)(this + 0xeb4) = 1;
      local_18.bottom = (iVar6 - iVar4 % iVar8) + 2 + iVar4;
    }
    *(undefined4 *)(this + 0xef0) = 1;
  }
  if (*(int *)(this + 0x108c) != 0) {
    iVar4 = ((*(int *)(this + 0x1090) < 1) - 1 & 3) + 9;
    local_38.top = local_9c;
    if (*(int *)(this + 0x1088) == 0) {
      local_38.top = local_18.bottom - local_9c;
    }
    local_38.bottom = local_38.top + iVar4;
    local_38.right = local_18.right - local_9c;
    local_18.bottom = local_18.bottom + iVar4;
    *(int *)(this + 0x10a0) = local_9c;
    *(LONG *)(this + 0x10a4) = local_38.top;
    *(LONG *)(this + 0x10a8) = local_38.right;
    *(LONG *)(this + 0x10ac) = local_38.bottom;
    local_38.left = local_9c;
  }
  if ((local_94 != 0) || (local_a0 = (CMFCPopupMenu *)0x0, *(int *)(this + 0xeb8) != 0)) {
    local_a0 = (CMFCPopupMenu *)0x1;
  }
  if (*(int *)(this + 0x148) == 0) {
    local_98 = (CObject *)0x0;
  }
  else {
    this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1012aa4e_2_101611d0,
                                 *(CObject **)(*(int *)(this + 0x148) + 0x6c));
    local_98 = this_01;
    if ((this_01 != (CObject *)0x0) &&
       (iVar4 = (**(code **)(*(int *)this_01 + 0x16c))(), iVar4 != 0)) {
      iVar4 = CMFCMenuBar::GetFloatPopupDirection
                        ((CMFCMenuBar *)this_01,*(CMFCToolBarMenuButton **)(this + 0x148));
      if (iVar4 == 2) {
        iVar4 = *(int *)(*(int *)(this + 0x148) + 0x60);
        iVar6 = *(int *)(*(int *)(this + 0x148) + 0x58);
        *(undefined4 *)(this + 0xea4) = 2;
        *(int *)(this + 300) = (((*(int *)(this + 0x134) - iVar4) + iVar6) - local_18.bottom) + 1;
      }
      else if (iVar4 == 3) {
        iVar4 = *(int *)(this + 0x148);
        if (local_94 == 0) {
          iVar6 = (*(int *)(this + 0x130) + *(int *)(iVar4 + 0x5c)) - *(int *)(iVar4 + 0x54);
        }
        else {
          iVar6 = (*(int *)(this + 0x130) - *(int *)(iVar4 + 0x5c)) + *(int *)(iVar4 + 0x54);
        }
        *(int *)(this + 0x128) = iVar6;
        *(int *)(this + 300) =
             (*(int *)(this + 0x134) - *(int *)(iVar4 + 0x60)) + 1 + *(int *)(iVar4 + 0x58);
        *(undefined4 *)(this + 0xea4) = 3;
      }
      else if (iVar4 == 4) {
        *(int *)(this + 300) =
             (*(int *)(this + 0x134) - *(int *)(*(int *)(this + 0x148) + 0x60)) + 1 +
             *(int *)(*(int *)(this + 0x148) + 0x58);
        *(undefined4 *)(this + 0xea4) = 4;
        if (local_94 == 0) {
          iVar4 = *(int *)(this + 0x130) - local_18.right;
          *(int *)(this + 0x128) = iVar4;
          LVar11 = local_28.left;
          if (iVar4 < local_28.left) goto LAB_1005b2c7;
        }
        else {
          iVar4 = *(int *)(this + 0x130) + local_18.right;
          *(int *)(this + 0x128) = iVar4;
          LVar11 = local_28.right;
          if (local_28.right < iVar4) {
LAB_1005b2c7:
            *(LONG *)(this + 0x128) = LVar11;
            *(undefined4 *)(this + 0xea4) = 0;
          }
        }
      }
    }
  }
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  SetRectEmpty(&local_58);
  local_a8.y = 0;
  pCVar9 = CMFCVisualManager::GetInstance();
  iVar4 = (**(code **)(*(int *)pCVar9 + 0x2e4))();
  if ((((iVar4 != 0) && (pCVar10 = GetParentPopupMenu(this), pCVar10 != (CMFCPopupMenu *)0x0)) &&
      (iVar4 = *(int *)(this + 0x148), iVar4 != 0)) && (*(int *)(iVar4 + 0xb4) != 0)) {
    if (local_94 == 0) {
      RedrawWindow(*(HWND *)(pCVar10 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
    if ((*(int *)(pCVar10 + 0x10b0) != 0) && (*(int *)(this + 0x10b0) == 0)) {
      local_58.left = *(int *)(iVar4 + 0x54);
      local_58.top = *(LONG *)(iVar4 + 0x58);
      local_58.right = *(int *)(iVar4 + 0x5c);
      local_58.bottom = *(int *)(iVar4 + 0x60);
      pCVar1 = *(CWnd **)(iVar4 + 0x6c);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        CWnd::ClientToScreen(pCVar1,&local_58);
        *(LONG *)(this + 300) = local_58.top;
        local_a8.y = 1;
        if (*(int *)(this + 0xea4) == 4) {
          LVar11 = local_58.left;
          if (local_94 == 0) {
            LVar11 = local_58.left - local_18.right;
          }
        }
        else {
          LVar11 = local_58.right;
          if (local_94 != 0) {
            LVar11 = local_58.right + local_18.right;
          }
        }
        *(LONG *)(this + 0x128) = LVar11;
      }
    }
  }
  LVar11 = local_18.right;
  if (((local_94 != 0) && (*(int *)(this + 0x128) - local_18.right < local_28.left)) ||
     ((local_a0 == (CMFCPopupMenu *)0x0 &&
      (local_28.right < *(int *)(this + 0x128) + local_18.right)))) {
    local_a0 = GetParentPopupMenu(this);
    if (local_a0 == (CMFCPopupMenu *)0x0) {
      if ((local_98 == (CObject *)0x0) ||
         (iVar4 = (**(code **)(*(int *)local_98 + 0x160))(), iVar4 != 0)) {
        if (local_94 == 0) {
          if (*(int *)(this + 0xeb8) == 0) {
            iVar4 = (local_28.right - LVar11) + -1;
          }
          else {
            iVar4 = local_28.left + 1;
          }
        }
        else {
          iVar4 = LVar11 + 1U + local_28.left;
        }
        *(int *)(this + 0x128) = iVar4;
        *(undefined4 *)(this + 0xea4) = 0;
      }
      else {
        iVar4 = *(int *)(this + 0x148);
        local_38.left = *(int *)(iVar4 + 0x54);
        local_38.top = *(int *)(iVar4 + 0x58);
        local_38.right = *(int *)(iVar4 + 0x5c);
        local_38.bottom = *(int *)(iVar4 + 0x60);
        CWnd::ClientToScreen((CWnd *)local_98,&local_38);
        if (local_94 == 0) {
          iVar4 = local_38.left - local_18.right;
        }
        else {
          iVar4 = local_38.right + local_18.right;
        }
        *(int *)(this + 0x128) = iVar4;
        if (local_28.right <= iVar4 + local_18.right) {
          *(LONG *)(this + 0x128) = (local_28.right - local_18.right) + -1;
        }
        *(undefined4 *)(this + 0xea4) = 4;
      }
    }
    else {
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      local_48._8_4_ = 0;
      local_3c = 0;
      GetWindowRect(*(HWND *)(local_a0 + 0x20),(LPRECT)local_48);
      if (local_94 == 0) {
        iVar4 = local_48._0_4_ - LVar11;
      }
      else {
        iVar4 = local_48._8_4_ + LVar11;
      }
      *(int *)(this + 0x128) = iVar4;
      if ((*(CMFCRibbonBaseElement **)(this + 0x10bc) != (CMFCRibbonBaseElement *)0x0) &&
         (iVar4 = CMFCRibbonBaseElement::IsMenuMode(*(CMFCRibbonBaseElement **)(this + 0x10bc)),
         iVar4 == 0)) {
        iVar4 = *(int *)(this + 0x10bc);
        local_48._0_4_ = *(int *)(iVar4 + 0x18);
        local_48._4_4_ = *(int *)(iVar4 + 0x1c);
        local_48._8_4_ = *(int *)(iVar4 + 0x20);
        local_3c = *(int *)(iVar4 + 0x24);
        CWnd::ClientToScreen((CWnd *)local_a0,(tagRECT *)local_48);
        if (local_94 == 0) {
          iVar4 = local_48._8_4_ - local_18.right;
        }
        else {
          iVar4 = local_48._0_4_ + local_18.right;
        }
        *(int *)(this + 0x128) = iVar4;
      }
      *(uint *)(this + 0xea4) = 4 - (uint)(local_94 != 0);
    }
    if (local_94 == 0) {
      if (*(int *)(this + 0x128) < local_28.left) {
        *(LONG *)(this + 0x128) = local_28.left;
LAB_1005b5f3:
        *(undefined4 *)(this + 0xea4) = 0;
      }
    }
    else if (local_28.right < *(int *)(this + 0x128)) {
      *(LONG *)(this + 0x128) = local_28.right;
      goto LAB_1005b5f3;
    }
    if (*(int *)(this + 0xeec) == 0) {
      AVar12 = GetAnimationType(0);
      if (AVar12 != 1) {
        if (AVar12 != 3) goto LAB_1005b61d;
        *(undefined4 *)(this + 0xee4) = 0;
      }
      *(undefined4 *)(this + 0xee0) = 0;
    }
  }
LAB_1005b61d:
  uVar14 = local_18.bottom;
  iVar4 = *(int *)(this + 300);
  if (local_28.bottom < iVar4 + local_18.bottom) {
    iVar4 = *(int *)(this + 0x10ac) - *(int *)(this + 0x10a4);
    if (*(int *)(this + 0x108c) != 0) {
      local_38.right = local_18.right - local_9c;
      local_38.left = local_9c;
      local_38.top = local_9c;
      local_38.bottom = iVar4 + local_9c;
      *(int *)(this + 0x10a0) = local_9c;
      *(int *)(this + 0x10a4) = local_9c;
      *(LONG *)(this + 0x10a8) = local_38.right;
      *(LONG *)(this + 0x10ac) = local_38.bottom;
      *(undefined4 *)(this + 0x1088) = 1;
    }
    *(undefined4 *)(this + 0xee4) = 0;
    local_68.left = 0;
    local_68.top = 0;
    local_68.right = 0;
    local_68.bottom = 0;
    local_a0 = (CMFCPopupMenu *)(**(code **)(*(int *)this + 0x1cc))(&local_68);
    if (((local_a0 == (CMFCPopupMenu *)0x0) || (*(int *)(this + 0xea4) == 4)) ||
       (*(int *)(this + 0xea4) == 3)) {
      if (local_a8.y == 0) {
        *(uint *)(this + 300) = *(int *)(this + 300) - uVar14;
        pCVar10 = GetParentPopupMenu(this);
        if (pCVar10 != (CMFCPopupMenu *)0x0) {
          iVar4 = (**(code **)(*piVar2 + 0x354))();
          *(int *)(this + 300) = *(int *)(this + 300) + iVar4 + local_9c * 2;
        }
      }
      else {
        *(uint *)(this + 300) = (local_58.bottom - uVar14) + -1;
      }
    }
    else {
      local_48._8_4_ = local_68.right;
      local_3c = 0;
      ClientToScreen(*(HWND *)(local_a0 + 0x20),(LPPOINT)(local_48 + 8));
      local_a8.y = local_68.top - uVar14;
      local_a8.x = 0;
      ClientToScreen(*(HWND *)(local_a0 + 0x20),&local_a8);
      if (local_a8.y < 0) {
        uVar14 = uVar14 + local_a8.y;
        if ((int)(local_28.bottom - uVar14) < (int)(uVar14 - local_28.top)) {
          *(LONG *)(this + 300) = local_28.top;
          *(undefined4 *)(this + 0xea4) = 0;
        }
        else {
          uVar14 = local_28.bottom - *(int *)(this + 300);
          *(undefined4 *)(this + 0xee4) = 1;
          local_18.bottom = uVar14;
          if (*(int *)(this + 0x108c) != 0) {
            *(undefined4 *)(this + 0x1088) = 0;
            local_38.right = local_18.right - local_9c;
            local_38.top = (uVar14 - iVar4) - local_9c;
            local_38.bottom = local_38.top + iVar4;
            local_38.left = local_9c;
            *(int *)(this + 0x10a0) = local_9c;
            *(LONG *)(this + 0x10a4) = local_38.top;
            *(LONG *)(this + 0x10a8) = local_38.right;
            *(LONG *)(this + 0x10ac) = local_38.bottom;
          }
        }
        *(undefined4 *)(this + 0xeb4) = 1;
        *(undefined4 *)(this + 0xef0) = 1;
      }
      else {
        *(LONG *)(this + 300) = local_a8.y;
        if ((local_98 == (CObject *)0x0) ||
           (iVar4 = (**(code **)(*(int *)local_98 + 0x160))(), iVar4 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 2;
        }
        *(undefined4 *)(this + 0xea4) = uVar13;
      }
    }
    if (*(int *)(this + 300) < local_28.top) {
      *(LONG *)(this + 300) = local_28.top;
      *(undefined4 *)(this + 0xea4) = 0;
    }
    iVar4 = *(int *)(this + 300);
    if (local_28.bottom < (int)(iVar4 + uVar14)) {
      *(undefined4 *)(this + 0xeb4) = 1;
      *(undefined4 *)(this + 0xef0) = 1;
      uVar14 = local_28.bottom - iVar4;
    }
  }
  if (iVar4 < local_28.top) {
    if (((*(int *)(this + 0x148) == 0) || (*(int *)(*(int *)(this + 0x148) + 0x6c) == 0)) ||
       (pCVar10 = GetParentPopupMenu(this), pCVar10 != (CMFCPopupMenu *)0x0)) {
      *(LONG *)(this + 300) = local_28.top;
    }
    else {
      local_48._8_4_ = *(int *)(*(int *)(this + 0x148) + 0x5c);
      local_3c = 0;
      ClientToScreen(*(HWND *)(*(int *)(*(int *)(this + 0x148) + 0x6c) + 0x20),
                     (LPPOINT)(local_48 + 8));
      local_a8.y = *(int *)(*(int *)(this + 0x148) + 0x60);
      local_a8.x = 0;
      ClientToScreen(*(HWND *)(*(int *)(*(int *)(this + 0x148) + 0x6c) + 0x20),&local_a8);
      *(LONG *)(this + 300) = local_a8.y;
      if ((local_98 == (CObject *)0x0) ||
         (iVar4 = (**(code **)(*(int *)local_98 + 0x160))(), iVar4 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      *(undefined4 *)(this + 0xea4) = uVar13;
    }
    if (local_28.bottom < (int)(*(int *)(this + 300) + uVar14)) {
      *(LONG *)(this + 300) = local_28.top;
      if (local_28.bottom - local_28.top < (int)uVar14) {
        *(undefined4 *)(this + 0xeb4) = 1;
        *(undefined4 *)(this + 0xef0) = 1;
        uVar14 = local_28.bottom - local_28.top;
      }
      *(undefined4 *)(this + 0xea4) = 0;
    }
  }
  if ((((*(int *)(this + 0xef0) != 0) && (*(int *)(this + 0xef4) != 0)) &&
      (*(int *)(this + 0x1080) == 0)) && (*(int *)(this + 0x1084) == 0)) {
    iVar4 = GetSystemMetrics(2);
    local_18.right = local_18.right + iVar4;
    BVar3 = IsRectEmpty((RECT *)(this + 0x10a0));
    if (BVar3 == 0) {
      iVar4 = GetSystemMetrics(2);
      *(int *)(this + 0x10a8) = *(int *)(this + 0x10a8) + iVar4;
    }
  }
  *(LONG *)(this + 0x138) = local_18.right;
  *(uint *)(this + 0x13c) = uVar14;
  AVar12 = GetAnimationType(0);
  if (((AVar12 != 0) || (*(int *)(this + 0xee8) != 0)) || (DAT_10166e54 != 0)) {
    if (DAT_10166e54 == 0) {
      local_18.right = local_18.right + *(int *)(this + 0xfc0);
      uVar14 = uVar14 + *(int *)(this + 0xfc0);
    }
    if (*(int *)(this + 0x144) == 0) {
      uVar15 = 0x14;
      iVar4 = *(int *)(this + 300);
      iVar6 = *(int *)(this + 0x128) - (-(uint)(local_94 != 0) & local_18.right);
    }
    else {
      uVar15 = 0x16;
      iVar4 = -1;
      iVar6 = -1;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar6,iVar4,local_18.right,uVar14,uVar15);
    if (DAT_10166e54 != 0) {
      (**(code **)(*piVar2 + 0x3e0))();
    }
  }
  if (((*(int *)(this + 0xfc0) != 0) && (DAT_10166e54 == 0)) &&
     ((iVar4 = *(int *)(this + 0x148), iVar4 != 0 && (*(int *)(iVar4 + 0x6c) != 0)))) {
    local_a8.y = *(LONG *)(this + 0xebc);
    *(undefined4 *)(this + 0xebc) = 1;
    pCVar1 = *(CWnd **)(iVar4 + 0x6c);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_48._8_4_ = 0;
    local_3c = 0;
    GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)local_48);
    if (local_94 == 0) {
      local_68.left = local_48._8_4_ + 1;
    }
    else {
      local_68.left = (local_48._0_4_ - *(int *)(this + 0xfc0)) + -1;
    }
    local_68.bottom = *(int *)(this + 0xfc0) + local_3c;
    local_68.top = local_48._4_4_;
    local_68.right = *(int *)(this + 0xfc0) + local_68.left;
    CWnd::ScreenToClient(pCVar1,&local_68);
    BVar3 = IntersectRect(&local_38,&local_68,(RECT *)(*(int *)(this + 0x148) + 0x54));
    if (BVar3 != 0) {
      InvalidateRect(*(HWND *)(pCVar1 + 0x20),(RECT *)(*(int *)(this + 0x148) + 0x54),1);
      UpdateWindow(*(HWND *)(pCVar1 + 0x20));
    }
    local_18.right = local_48._8_4_ + *(int *)(this + 0xfc0);
    local_18.top = local_3c + 1;
    local_18.bottom = local_18.top + *(int *)(this + 0xfc0);
    local_18.left = local_48._0_4_;
    CWnd::ScreenToClient(pCVar1,&local_18);
    BVar3 = IntersectRect(&local_38,&local_18,(RECT *)(*(int *)(this + 0x148) + 0x54));
    if (BVar3 != 0) {
      InvalidateRect(*(HWND *)(pCVar1 + 0x20),(RECT *)(*(int *)(this + 0x148) + 0x54),1);
      UpdateWindow(*(HWND *)(pCVar1 + 0x20));
    }
    *(LONG *)(this + 0xebc) = local_a8.y;
  }
  if ((((*(int *)(this + 0xef0) != 0) && (*(int *)(this + 0xef4) != 0)) &&
      (*(int *)(this + 0x1080) == 0)) && (*(int *)(this + 0x1084) == 0)) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
LAB_1005bbb2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

