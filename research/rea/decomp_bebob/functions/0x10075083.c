// rea decompile_all
// name: CMFCTabCtrl::RecalcLayout
// address: 0x10075083
// body: available
// range: 0x10075083-0x10075615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075529 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTabCtrl::RecalcLayout(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::RecalcLayout(CMFCTabCtrl *this)

{
  CWnd *this_00;
  int iVar1;
  uint uVar2;
  CMFCVisualManager *pCVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  RECT *lpRect;
  int iVar8;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((this == (CMFCTabCtrl *)0x0) || (*(int *)(this + 0x20) == 0)) goto LAB_10075608;
  local_50 = (**(code **)(*(int *)this + 0x178))();
  local_4c = (**(code **)(*(int *)this + 0x244))();
  iVar1 = (**(code **)(*(int *)this + 0x1a0))();
  if (((*(int *)(this + 0x10c) == 0) || (1 < iVar1)) &&
     ((*(int *)(this + 0x238) == 0 || (iVar1 != 0)))) {
    local_54 = 0;
  }
  else {
    local_54 = 1;
  }
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_48);
  if (*(int *)(this + 0x27e4) == 1) {
    *(LONG *)(this + 0x2b0) = local_48.left;
    *(LONG *)(this + 0x2b4) = local_48.top;
    *(LONG *)(this + 0x2b8) = local_48.right;
    *(LONG *)(this + 700) = local_48.bottom;
    *(LONG *)(this + 0x2b0) = local_48.right + -5;
    local_48.right = local_48.right + -6;
  }
  else if (*(int *)(this + 0x27e4) == 2) {
    *(LONG *)(this + 0x2b0) = local_48.left;
    *(LONG *)(this + 0x2b4) = local_48.top;
    *(LONG *)(this + 0x2b8) = local_48.right;
    *(LONG *)(this + 700) = local_48.bottom;
    *(LONG *)(this + 0x2b4) = local_48.bottom + -5;
    local_48.bottom = local_48.bottom + -6;
  }
  else {
    SetRectEmpty((LPRECT)(this + 0x2b0));
  }
  ((LPRECT)(this + 0x290))->left = local_48.left;
  *(LONG *)(this + 0x294) = local_48.top;
  *(LONG *)(this + 0x298) = local_48.right;
  *(LONG *)(this + 0x29c) = local_48.bottom;
  InflateRect((LPRECT)(this + 0x290),-2,0);
  uVar2 = 0;
  local_58 = 0;
  local_18.bottom = 0;
  if (*(int *)(this + 0x218) != 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    piVar4 = (int *)(**(code **)(*(int *)pCVar3 + 0x13c))(&local_18.right);
    piVar5 = (int *)FUN_10037b18(&local_5c);
    local_58 = *piVar4 + 4 + *piVar5;
    if (*(int *)(this + 0x204) == 0) {
      local_58 = local_58 + 2;
      if (local_50 + -4 < local_58) {
        local_58 = local_50 + -4;
      }
    }
    iVar1 = *(int *)(this + 0x27f4);
    if ((*(int *)(this + 0x21c) == 0) || (*(int *)(this + 0x240) != 0)) {
      iVar1 = iVar1 + -1;
    }
    if (*(int *)(this + 0x244) != 0) {
      iVar1 = iVar1 + -1;
    }
    local_18.bottom = 3;
    uVar2 = ~-(uint)(local_54 != 0) & (local_58 + 3) * iVar1;
  }
  iVar1 = local_58;
  if (*(int *)(this + 0x204) == 0) {
    if (*(int *)(this + 0x84) == 0) {
      *(int *)(this + 0x294) = *(int *)(this + 0x29c) - local_50;
    }
    else {
      *(int *)(this + 0x29c) = *(int *)(this + 0x294) + local_50;
    }
    if (*(int *)(this + 0x218) != 0) {
      *(uint *)(this + 0x298) = *(int *)(this + 0x298) - uVar2;
      if ((((*(int *)(this + 0x208) != 0) || (*(int *)(this + 0x20c) != 0)) ||
          (*(int *)(this + 0x210) != 0)) && (*(int *)(this + 0x244) == 0)) {
        OffsetRect((LPRECT)(this + 0x290),local_58,0);
      }
      iVar6 = *(int *)(this + 0x298) + 1;
      iVar8 = (*(int *)(this + 0x29c) + *(int *)(this + 0x294)) / 2 - iVar1 / 2;
      iVar7 = iVar1;
      goto LAB_10075396;
    }
  }
  else {
    if (*(int *)(this + 0x84) == 0) {
      if (1 < local_4c) {
        *(int *)(this + 0x29c) = *(int *)(this + 0x29c) + (1 - local_4c);
      }
      *(int *)(this + 0x294) = *(int *)(this + 0x29c) - local_50;
    }
    else {
      if (1 < local_4c) {
        *(int *)(this + 0x294) = *(int *)(this + 0x294) + local_4c + -1;
      }
      *(int *)(this + 0x29c) = *(int *)(this + 0x294) + local_50;
    }
    *(uint *)(this + 0x290) = *(int *)(this + 0x290) + uVar2 + 1;
    *(int *)(this + 0x298) = *(int *)(this + 0x298) + -1;
    if (*(int *)(this + 0x298) < *(int *)(this + 0x290)) {
      if (local_4c < 1) {
        *(LONG *)(this + 0x290) = local_48.left;
        iVar6 = local_48.right;
      }
      else {
        *(LONG *)(this + 0x290) = local_48.left + 1 + local_4c;
        iVar6 = (local_48.right - local_4c) + -1;
      }
      *(int *)(this + 0x298) = iVar6;
    }
    iVar6 = *(int *)(this + 0x29c) - *(int *)(this + 0x294);
    if (local_48.bottom - local_48.top < iVar6 + local_4c) {
      iVar6 = 0;
      *(undefined4 *)(this + 0x290) = 0;
      *(undefined4 *)(this + 0x298) = 0;
    }
    iVar8 = *(int *)(this + 0x294);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar6 = (iVar6 - local_58) / 2;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iVar8 = iVar8 + iVar6;
      iVar7 = local_58;
    }
    iVar6 = local_48.left + 1 + local_4c;
LAB_10075396:
    FUN_10074717(this,iVar6,iVar8,iVar1,iVar7,local_54,local_18.bottom);
  }
  *(LONG *)(this + 0x2a0) = local_48.left;
  *(LONG *)(this + 0x2a4) = local_48.top;
  *(LONG *)(this + 0x2a8) = local_48.right;
  *(LONG *)(this + 0x2ac) = local_48.bottom;
  iVar6 = GetSystemMetrics(2);
  iVar1 = local_4c;
  *(int *)(this + 0x254) = *(int *)(this + 0x298) - iVar6;
  if (0 < local_4c) {
    InflateRect((LPRECT)(this + 0x2a0),-1 - local_4c,-1 - local_4c);
    if (*(int *)(this + 0x27e4) == 1) {
      *(int *)(this + 0x2a8) = *(int *)(this + 0x2a8) + iVar1 + 2;
    }
    else if (*(int *)(this + 0x27e4) == 2) {
      *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) + iVar1 + 2;
    }
  }
  if (*(int *)(this + 0x204) == 0) {
    if (*(int *)(this + 0x84) == 0) {
      *(int *)(this + 0x2ac) = *(int *)(this + 0x294) - iVar1;
    }
    else {
      *(int *)(this + 0x2a4) = *(int *)(this + 0x29c) + iVar1;
    }
  }
  else if (*(int *)(this + 0x84) == 0) {
    *(undefined4 *)(this + 0x2ac) = *(undefined4 *)(this + 0x294);
    if (iVar1 == 0) {
      *(int *)(this + 0x2a4) = *(int *)(this + 0x2a4) + 1;
LAB_1007543e:
      *(int *)(this + 0x2a0) = *(int *)(this + 0x2a0) + 1;
    }
  }
  else {
    *(int *)(this + 0x2a4) = *(int *)(this + 0x29c) + iVar1;
    if (iVar1 == 0) {
      *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) + -1;
      goto LAB_1007543e;
    }
  }
  if ((*(int *)(this + 0x228) != 0) && (iVar1 = 0, 0 < *(int *)(this + 0x9c))) {
    do {
      if ((iVar1 < 0) || (*(int *)(this + 0x90) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar6 = *(int *)(*(int *)(this + 0x8c) + iVar1 * 4);
      if (((*(int *)(iVar6 + 0x34) != 0) &&
          (this_00 = *(CWnd **)(iVar6 + 0x20), this_00 != (CWnd *)0x0)) &&
         (*(int *)(this_00 + 0x20) != 0)) {
        CWnd::SetWindowPos(this_00,(CWnd *)0x0,*(int *)(this + 0x2a0),*(int *)(this + 0x2a4),
                           *(int *)(this + 0x2a8) - *(int *)(this + 0x2a0),
                           *(int *)(this + 0x2ac) - *(int *)(this + 0x2a4),0x14);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x9c));
  }
  (**(code **)(*(int *)this + 0x2d4))();
  (**(code **)(*(int *)this + 0x2cc))();
  (**(code **)(*(int *)this + 0x2d0))();
  local_28.left = local_48.left;
  local_28.top = local_48.top;
  local_28.right = local_48.right;
  local_28.bottom = local_48.bottom;
  if (local_4c == 0) {
    if (*(int *)(this + 0x84) == 0) {
      local_28.bottom = *(int *)(this + 0x294) + 1;
    }
    else {
      local_28.top = *(int *)(this + 0x29c) + -1;
    }
LAB_100755a9:
    lpRect = &local_28;
  }
  else {
    if (*(int *)(this + 0x204) == 0) {
      if (*(int *)(this + 0x84) == 0) {
        local_28.bottom = *(LONG *)(this + 0x294);
      }
      else {
        local_28.top = *(LONG *)(this + 0x29c);
      }
    }
    if (*(int *)(this + 0x224) == 0) {
      InflateRect(&local_28,-1,-1);
      goto LAB_100755a9;
    }
    local_18.left = local_48.left;
    local_18.top = local_28.top;
    local_18.right = local_48.right;
    local_18.bottom = local_28.bottom;
    if (*(int *)(this + 0x204) != 0) {
      if (*(int *)(this + 0x84) == 0) {
        local_18.bottom = *(int *)(this + 0x294) + 1;
      }
      else {
        local_18.top = *(int *)(this + 0x29c) + -1;
      }
    }
    lpRect = &local_18;
  }
  InvalidateRect(*(HWND *)(this + 0x20),lpRect,1);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_38);
  if (*(int *)(this + 0x84) == 0) {
    local_38.top = *(LONG *)(this + 0x2a4);
  }
  else {
    local_38.bottom = *(LONG *)(this + 0x2ac);
  }
  InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_10075608:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

