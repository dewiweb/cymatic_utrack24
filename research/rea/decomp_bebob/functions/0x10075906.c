// rea decompile_all
// name: CMFCTabCtrl::OnCommand
// address: 0x10075906
// body: available
// range: 0x10075906-0x10075c18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100759eb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCTabCtrl::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::OnCommand(CMFCTabCtrl *this,uint param_1,long param_2)

{
  HWND hWnd;
  LONG LVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  LONG LVar8;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar6 = *(int *)(this + 600);
  if (this == (CMFCTabCtrl *)0xfffffcac) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x374);
  }
  if (param_2 == iVar2) {
    if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
       (*(int *)(this + 0x210) == 0)) {
      iVar2 = iVar6 + -0x14;
LAB_1007595d:
      *(int *)(this + 600) = iVar2;
    }
    else if (0 < *(int *)(this + 0x264)) {
      iVar2 = *(int *)(this + 0x264) + -1;
      if ((iVar2 < 0) || (*(int *)(this + 0x90) <= iVar2)) {
LAB_100759eb:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar3 = *(int *)(*(int *)(this + 0x8c) + iVar2 * 4);
      iVar3 = (((*(int *)(this + 0x29c) - *(int *)(this + 0x294)) - *(int *)(iVar3 + 0x18)) -
              DAT_10161744) + iVar6 + -2 + *(int *)(iVar3 + 0x10);
LAB_100759da:
      *(int *)(this + 600) = iVar3;
      *(int *)(this + 0x264) = iVar2;
    }
  }
  else {
    if ((CMFCTabButton *)(this + 0xaa4) == (CMFCTabButton *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0xac4);
    }
    if (param_2 == iVar2) {
      if (*(int *)(this + 0x244) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0xac4),&local_18);
        CMFCTabButton::SetPressed((CMFCTabButton *)(this + 0xaa4),1);
        LVar1 = local_18.bottom;
        LVar8 = local_18.left;
        uVar4 = CWnd::GetExStyle((CWnd *)this);
        if ((uVar4 & 0x400000) != 0) {
          LVar8 = LVar8 + (local_18.right - local_18.left);
        }
        SendMessageW(*(HWND *)(this + 0xac4),0x1f,0,0);
        hWnd = *(HWND *)(this + 0x20);
        CMFCTabButton::SetPressed((CMFCTabButton *)(this + 0xaa4),1);
        (**(code **)(*(int *)this + 0x2dc))(LVar8,LVar1);
        BVar5 = IsWindow(hWnd);
        if (BVar5 == 0) goto LAB_10075ab2;
        CMFCTabButton::SetPressed((CMFCTabButton *)(this + 0xaa4),0);
LAB_10075aa5:
        CWnd::OnCommand((CWnd *)this,param_1,param_2);
        goto LAB_10075ab2;
      }
      if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
         (*(int *)(this + 0x210) == 0)) {
        iVar2 = iVar6 + 0x14;
        goto LAB_1007595d;
      }
      iVar2 = *(int *)(this + 0x264);
      if (iVar2 < *(int *)(this + 0x9c)) {
        if ((iVar2 < 0) || (*(int *)(this + 0x90) <= iVar2)) goto LAB_100759eb;
        iVar3 = *(int *)(*(int *)(this + 0x8c) + iVar2 * 4);
        iVar3 = (((*(int *)(this + 0x294) - *(int *)(this + 0x29c)) + *(int *)(iVar3 + 0x18)) -
                *(int *)(iVar3 + 0x10)) + iVar6 + 1 + DAT_10161744;
        iVar2 = iVar2 + 1;
        goto LAB_100759da;
      }
    }
    else {
      if (this == (CMFCTabCtrl *)0xffffee0c) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(this + 0x1214);
      }
      if (param_2 == iVar2) {
        *(undefined4 *)(this + 600) = 0;
      }
      else {
        if (this == (CMFCTabCtrl *)0xffffe6bc) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(this + 0x1964);
        }
        if (param_2 != iVar2) {
          if (this == (CMFCTabCtrl *)0xffffdf6c) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(this + 0x20b4);
          }
          if (param_2 == iVar6) {
            iVar6 = (**(code **)(*(int *)this + 0x20c))();
            if (iVar6 != 0) {
              SendMessageW(*(HWND *)(iVar6 + 0x20),0x10,0,0);
            }
            goto LAB_10075ab2;
          }
          goto LAB_10075aa5;
        }
        *(undefined4 *)(this + 600) = *(undefined4 *)(this + 0x25c);
      }
    }
  }
  if (((*(int *)(this + 0x208) == 0) && (*(int *)(this + 0x20c) == 0)) &&
     (*(int *)(this + 0x210) == 0)) {
    iVar2 = *(int *)(this + 600);
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    iVar7 = *(int *)(this + 0x25c);
    if (iVar3 < iVar7) goto joined_r0x10075bd5;
  }
  else {
    iVar2 = *(int *)(this + 600);
joined_r0x10075bd5:
    iVar7 = iVar2;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  *(int *)(this + 600) = iVar7;
  if (iVar6 != *(int *)(this + 600)) {
    (**(code **)(*(int *)this + 0x2cc))();
    FUN_10074833((int)this);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
LAB_10075ab2:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

