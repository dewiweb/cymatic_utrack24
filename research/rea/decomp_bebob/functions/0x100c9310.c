// rea decompile_all
// name: CPaneContainer::AddPane
// address: 0x100c9310
// body: available
// range: 0x100c9310-0x100c995c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: class CDockablePane * __thiscall CPaneContainer::AddPane(class CDockablePane *)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall CPaneContainer::AddPane(CPaneContainer *this,CDockablePane *param_1)

{
  int iVar1;
  CRect *pCVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  CPaneContainer *pCVar6;
  CPaneContainer *pCVar7;
  CDockablePane *pCVar8;
  int *piVar9;
  CObject *pCVar10;
  CObject *local_80;
  int local_7c;
  CRecentDockSiteInfo *local_78;
  CPaneContainer *local_74;
  CObject *local_70;
  int local_6c;
  CDockablePane *local_68;
  HDWP local_64;
  uint local_60;
  CObject *local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_68 = param_1;
  local_70 = (CObject *)(**(code **)(**(int **)(this + 0x1c) + 0x74))();
  iVar1 = CObject::IsKindOf(local_70,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
  local_60 = (uint)(iVar1 == 0);
  pCVar2 = CRecentDockSiteInfo::GetRecentDockedRect
                     ((CRecentDockSiteInfo *)(param_1 + 0x1d4),local_60);
  local_28.left = *(LONG *)pCVar2;
  local_28.top = *(LONG *)(pCVar2 + 4);
  local_28.right = *(LONG *)(pCVar2 + 8);
  local_28.bottom = *(LONG *)(pCVar2 + 0xc);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  (**(code **)(*(int *)this + 0xc))(&local_18,0);
  CWnd::ScreenToClient((CWnd *)local_70,&local_18);
  iVar1 = IsEmpty(this);
  pCVar7 = *(CPaneContainer **)(this + 0x18);
  while ((local_74 = pCVar7, pCVar7 != (CPaneContainer *)0x0 &&
         (iVar3 = IsEmpty(pCVar7), iVar3 != 0))) {
    pCVar7 = *(CPaneContainer **)(pCVar7 + 0x18);
  }
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  SetRectEmpty(&local_58);
  if (pCVar7 != (CPaneContainer *)0x0) {
    (**(code **)(*(int *)pCVar7 + 0xc))(&local_58,0);
    CWnd::ScreenToClient((CWnd *)local_70,&local_58);
  }
  local_5c = (CObject *)(local_18.right + -local_18.left);
  if ((int)local_5c < 1) {
    local_5c = (CObject *)(local_58.right - local_58.left);
  }
  local_6c = local_18.bottom - local_18.top;
  if (local_6c < 1) {
    local_6c = local_58.bottom - local_58.top;
  }
  if (local_5c == (CObject *)0x0) {
    local_5c = (CObject *)(local_28.right - local_28.left);
  }
  pCVar10 = local_5c;
  if (local_6c == 0) {
    local_6c = local_28.bottom - local_28.top;
  }
  BVar4 = IsRectEmpty(&local_18);
  if (BVar4 == 0) {
    local_28.left = local_18.left;
    local_28.top = local_18.top;
  }
  else {
    BVar4 = IsRectEmpty(&local_58);
    if (BVar4 == 0) {
      local_28.left = local_58.left;
      local_28.top = local_58.top;
    }
  }
  pCVar8 = local_68;
  local_80 = (CObject *)0x0;
  local_7c = 0;
  (**(code **)(*(int *)local_68 + 0x26c))(&local_80);
  if ((int)pCVar10 < (int)local_80) {
    local_5c = local_80;
  }
  if (local_6c < local_7c) {
    local_6c = local_7c;
  }
  local_78 = (CRecentDockSiteInfo *)(pCVar8 + 0x1d4);
  iVar3 = CRecentDockSiteInfo::GetRecentDockedPercent(local_78,local_60);
  if ((iVar3 == 100) || (iVar3 == 0)) {
    iVar3 = 0x32;
  }
  iVar5 = IsEmpty(this);
  if ((iVar5 == 0) && (*(int *)(this + 0xc) != 0)) {
    iVar5 = IsPaneDividerHorz(this);
    if (iVar5 == 0) {
      iVar5 = CRecentDockSiteInfo::IsRecentLeftPane(local_78,local_60);
      if (iVar5 == 0) {
        local_5c = (CObject *)
                   (local_18.right +
                   ((-*(int *)(*(int *)(this + 0xc) + 0x108) -
                    ((local_18.right - local_18.left) * (100 - iVar3)) / 100) - local_18.left));
        local_28.left = local_18.right + -(int)local_5c;
      }
      else {
        local_5c = (CObject *)(((local_18.right - local_18.left) * iVar3) / 100);
        local_28.left = local_18.left;
      }
    }
    else {
      iVar5 = CRecentDockSiteInfo::IsRecentLeftPane(local_78,local_60);
      if (iVar5 == 0) {
        local_6c = ((local_18.bottom - ((local_18.bottom - local_18.top) * (100 - iVar3)) / 100) -
                   *(int *)(*(int *)(this + 0xc) + 0x108)) - local_18.top;
        local_28.top = local_18.bottom - local_6c;
      }
      else {
        local_6c = ((local_18.bottom - local_18.top) * iVar3) / 100;
        local_28.top = local_18.top;
      }
    }
  }
  local_28.bottom = local_28.top + local_6c;
  local_28.right = local_28.left + (int)local_5c;
  local_64 = BeginDeferWindowPos(10);
  local_64 = (HDWP)(**(code **)(*(int *)local_68 + 0x230))(&local_28,0,local_64);
  local_38.left = local_28.left;
  local_38.top = local_28.top;
  local_38.right = local_28.right;
  local_38.bottom = local_28.bottom;
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  iVar3 = CRecentDockSiteInfo::IsRecentLeftPane((CRecentDockSiteInfo *)(local_68 + 0x1d4),local_60);
  if (iVar3 == 0) {
    pCVar7 = *(CPaneContainer **)(this + 0x14);
    if (pCVar7 == (CPaneContainer *)0x0) {
      if (*(int *)(this + 8) != 0) {
        local_5c = (CObject *)0x0;
        (**(code **)(*(int *)local_68 + 0x34c))(*(int *)(this + 8),2,1,&local_5c);
        if (local_5c == (CObject *)0x0) goto LAB_100c994c;
        iVar1 = *(int *)(this + 8);
        piVar9 = *(int **)(this + 0x1c);
        if (iVar1 == 0) {
          FUN_100c4e55(piVar9,local_5c);
          *(CObject **)(this + 8) = local_5c;
          goto LAB_100c994c;
        }
        goto LAB_100c9661;
      }
      *(CDockablePane **)(this + 8) = local_68;
      iVar3 = *(int *)(this + 4);
      if ((iVar3 != 0) || (local_60 = 0, *(int *)(this + 0x10) != 0)) {
        local_60 = 1;
      }
      if (iVar3 == 0) {
        if (*(int **)(this + 0x10) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x10) + 0xc))(&local_48,0);
        }
      }
      else {
        ::GetWindowRect(*(HWND *)(iVar3 + 0x20),&local_48);
      }
      CWnd::ScreenToClient((CWnd *)local_70,&local_48);
      if (*(int *)(this + 0xc) != 0) {
        iVar3 = IsPaneDividerHorz(this);
        if (iVar3 == 0) {
          local_38.right = local_28.left;
          local_48.right = local_28.left + -*(int *)(*(int *)(this + 0xc) + 0x108);
          local_38.left = local_48.right;
        }
        else {
          local_38.bottom = local_28.top;
          local_48.bottom = local_28.top - *(int *)(*(int *)(this + 0xc) + 0x108);
          local_38.top = local_48.bottom;
        }
      }
      piVar9 = *(int **)(this + 4);
      if (piVar9 != (int *)0x0) goto LAB_100c97a4;
      piVar9 = *(int **)(this + 0x10);
LAB_100c97bc:
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x48))
                  (local_48.left,local_48.top,local_48.right,local_48.bottom,&local_64,0);
      }
      goto LAB_100c97d7;
    }
  }
  else {
    pCVar7 = *(CPaneContainer **)(this + 0x10);
    if (pCVar7 == (CPaneContainer *)0x0) {
      if (*(int *)(this + 4) != 0) {
        local_5c = (CObject *)0x0;
        (**(code **)(*(int *)local_68 + 0x34c))(*(int *)(this + 4),2,1,&local_5c);
        if (local_5c == (CObject *)0x0) goto LAB_100c994c;
        iVar1 = *(int *)(this + 4);
        piVar9 = *(int **)(this + 0x1c);
        if (iVar1 == 0) {
          FUN_100c4e55(piVar9,local_5c);
          *(CObject **)(this + 4) = local_5c;
          goto LAB_100c994c;
        }
LAB_100c9661:
        (**(code **)(*piVar9 + 0x40))(iVar1);
        goto LAB_100c994c;
      }
      *(CDockablePane **)(this + 4) = local_68;
      iVar3 = *(int *)(this + 8);
      if ((iVar3 != 0) || (local_60 = 0, *(int *)(this + 0x14) != 0)) {
        local_60 = 1;
      }
      if (iVar3 == 0) {
        if (*(int **)(this + 0x14) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x14) + 0xc))(&local_48,0);
        }
      }
      else {
        ::GetWindowRect(*(HWND *)(iVar3 + 0x20),&local_48);
      }
      CWnd::ScreenToClient((CWnd *)local_70,&local_48);
      if (*(int *)(this + 0xc) != 0) {
        iVar3 = IsPaneDividerHorz(this);
        if (iVar3 == 0) {
          local_38.left = local_28.right;
          local_48.left = local_28.right + *(int *)(*(int *)(this + 0xc) + 0x108);
          local_38.right = local_48.left;
        }
        else {
          local_38.top = local_28.bottom;
          local_48.top = *(int *)(*(int *)(this + 0xc) + 0x108) + local_28.bottom;
          local_38.bottom = local_48.top;
        }
      }
      piVar9 = *(int **)(this + 8);
      if (piVar9 == (int *)0x0) {
        piVar9 = *(int **)(this + 0x14);
        goto LAB_100c97bc;
      }
LAB_100c97a4:
      local_64 = (HDWP)(**(code **)(*piVar9 + 0x230))(&local_48,0,local_64);
LAB_100c97d7:
      piVar9 = *(int **)(this + 0xc);
      if (piVar9 != (int *)0x0) {
        if (local_60 == 0) {
          FUN_1007169e(piVar9,0);
        }
        else {
          local_64 = (HDWP)(**(code **)(*piVar9 + 0x230))(&local_38,0,local_64);
        }
      }
      UnionRect(&local_18,&local_28,&local_48);
      CWnd::ClientToScreen((CWnd *)local_70,&local_18);
      if (((iVar1 != 0) && (local_74 != (CPaneContainer *)0x0)) &&
         (piVar9 = *(int **)(local_74 + 0xc), piVar9 != (int *)0x0)) {
        pCVar7 = *(CPaneContainer **)(local_74 + 0x14);
        if ((*(CPaneContainer **)(local_74 + 0x10) == (CPaneContainer *)0x0) ||
           (pCVar6 = FindSubPaneContainer(*(CPaneContainer **)(local_74 + 0x10),(CObject *)this,3),
           pCVar6 == (CPaneContainer *)0x0)) {
          if ((pCVar7 == (CPaneContainer *)0x0) ||
             (pCVar7 = FindSubPaneContainer(pCVar7,(CObject *)this,3),
             pCVar7 == (CPaneContainer *)0x0)) goto LAB_100c994c;
          local_60 = 0;
        }
        else {
          local_60 = 1;
        }
        ::GetWindowRect((HWND)piVar9[8],&local_38);
        iVar1 = piVar9[0x42];
        iVar3 = (**(code **)(*piVar9 + 0x160))();
        if (local_60 == 0) {
          if (iVar3 == 0) {
            pCVar10 = (CObject *)-(int)(local_5c + piVar9[0x42]);
            local_38.right = local_18.left;
            local_38.left = local_18.left + -piVar9[0x42];
          }
          else {
            pCVar10 = (CObject *)-(piVar9[0x42] + local_6c);
            local_38.bottom = local_18.top;
            local_38.top = local_18.top - piVar9[0x42];
          }
        }
        else if (iVar3 == 0) {
          pCVar10 = local_5c + iVar1;
          local_38.left = local_18.right;
          local_38.right = local_18.right + piVar9[0x42];
        }
        else {
          pCVar10 = (CObject *)(iVar1 + local_6c);
          local_38.top = local_18.bottom;
          local_38.bottom = piVar9[0x42] + local_18.bottom;
        }
        CWnd::ScreenToClient((CWnd *)local_70,&local_38);
        if (*(int **)(this + 0xc) != (int *)0x0) {
          local_64 = (HDWP)(**(code **)(**(int **)(this + 0xc) + 0x230))(&local_38,0,local_64);
        }
        (**(code **)(*(int *)local_74 + 0x4c))(pCVar10,local_60 == 0,&local_64);
      }
      EndDeferWindowPos(local_64);
      goto LAB_100c994c;
    }
  }
  AddPane(pCVar7,local_68);
LAB_100c994c:
  pCVar8 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar8;
}

