// rea decompile_all
// name: CMFCTabCtrl::OnMouseMove
// address: 0x10073e96
// body: available
// range: 0x10073e96-0x100741ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::OnMouseMove(CMFCTabCtrl *this,WPARAM param_1,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  long lVar5;
  LRESULT LVar6;
  CMFCVisualManager *pCVar7;
  undefined4 uVar8;
  int iVar9;
  tagRECT local_28;
  undefined1 local_18 [12];
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x250) == 0) {
    if (*(int *)(this + 0x220) == 0) {
      pHVar3 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 == (CWnd *)this) {
        iVar2 = (**(code **)(*(int *)this + 0x2e0))();
        if ((iVar2 != 0) && (*(int *)(this + 0x148) != 0)) {
          local_18._8_4_ = 0;
          local_c = 0;
          GetCursorPos((LPPOINT)(local_18 + 8));
          local_18._8_4_ = *(int *)(this + 0x14c) - local_18._8_4_;
          local_c = *(int *)(this + 0x150) - local_c;
          iVar2 = GetSystemMetrics(0x44);
          pHVar3 = GetCapture();
          pCVar4 = CWnd::FromHandle(pHVar3);
          if ((pCVar4 == (CWnd *)this) && (*(int *)(this + 0x148) != 0)) {
            lVar5 = _labs(local_18._8_4_);
            if (lVar5 < iVar2) {
              lVar5 = _labs(local_c);
              if (lVar5 < iVar2) goto LAB_1007419d;
            }
          }
          pHVar3 = GetParent(*(HWND *)(this + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
          LVar6 = SendMessageW(*(HWND *)(pCVar4 + 0x20),DAT_101687c0,param_1,
                               CONCAT22((undefined2)param_4,(undefined2)param_3));
          if (LVar6 != 0) goto LAB_1007419d;
        }
      }
    }
    else {
      iVar2 = *(int *)(this + 0x270);
      local_c = *(int *)(this + 0x254) - param_3;
      iVar9 = (*(int *)(this + 0x254) - *(int *)(this + 0x290)) + -5;
      if (iVar9 < local_c) {
        local_c = iVar9;
      }
      *(int *)(this + 0x268) = local_c;
      iVar1 = GetSystemMetrics(0x15);
      iVar9 = local_c;
      if (local_c < iVar1 * 2) {
        iVar9 = GetSystemMetrics(0x15);
        iVar9 = iVar9 * 2;
      }
      *(int *)(this + 0x268) = iVar9;
      (**(code **)(*(int *)this + 0x2d4))();
      iVar9 = *(int *)(this + 0x270);
      if (iVar2 < iVar9) {
        local_18._4_4_ = *(undefined4 *)(this + 0x274);
        local_18._0_4_ = iVar2 + -0x14;
        local_c = *(int *)(this + 0x27c);
        local_18._8_4_ = iVar9;
        iVar2 = (**(code **)(*(int *)this + 0x244))();
        InflateRect((LPRECT)local_18,0,iVar2 + 1);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)local_18,1);
      }
      local_28.left = *(LONG *)(this + 0x270);
      local_28.top = *(LONG *)(this + 0x274);
      local_28.right = *(LONG *)(this + 0x278);
      local_28.bottom = *(LONG *)(this + 0x27c);
      iVar2 = (**(code **)(*(int *)this + 0x244))();
      InflateRect(&local_28,0,iVar2);
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      UpdateWindow(*(HWND *)(this + 0x20));
      (**(code **)(*(int *)this + 0x2d0))();
    }
    if (*(int *)(this + 0x204) == 0) {
      pCVar7 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar7 + 0x118))();
      if (iVar2 == 0) {
        if (*(int *)(this + 0x208) != 0) {
          pCVar7 = CMFCVisualManager::GetInstance();
          uVar8 = (**(code **)(*(int *)pCVar7 + 0x114))();
          *(undefined4 *)(this + 0x7c) = uVar8;
        }
      }
      else {
        *(undefined4 *)(this + 0x7c) = 1;
      }
    }
    CMFCBaseTabCtrl::OnMouseMove((CMFCBaseTabCtrl *)this,param_1,param_3,param_4);
  }
  else {
    local_18._0_4_ = *(undefined4 *)(this + 0x2c0);
    local_18._4_4_ = *(undefined4 *)(this + 0x2c4);
    local_18._8_4_ = *(undefined4 *)(this + 0x2c8);
    local_c = *(int *)(this + 0x2cc);
    ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
    if (*(int *)(this + 0x27e4) == 1) {
      iVar9 = local_18._8_4_ - local_18._0_4_;
      local_18._0_4_ = param_3 - iVar9 / 2;
      iVar2 = *(int *)(this + 0x2d0);
      if ((int)local_18._0_4_ < iVar2) {
        local_18._0_4_ = iVar2;
        local_18._8_4_ = iVar2 + iVar9;
      }
      else {
        iVar2 = *(int *)(this + 0x2d8);
        local_18._8_4_ = local_18._0_4_ + iVar9;
        if (iVar2 < local_18._0_4_ + iVar9) {
          local_18._0_4_ = iVar2 - iVar9;
          local_18._8_4_ = iVar2;
        }
      }
    }
    else if (*(int *)(this + 0x27e4) == 2) {
      iVar9 = local_c - local_18._4_4_;
      local_18._4_4_ = param_4 - iVar9 / 2;
      iVar2 = *(int *)(this + 0x2d4);
      if ((int)local_18._4_4_ < iVar2) {
        local_18._4_4_ = iVar2;
        local_c = iVar2 + iVar9;
      }
      else {
        iVar2 = *(int *)(this + 0x2dc);
        local_c = local_18._4_4_ + iVar9;
        if (iVar2 < local_18._4_4_ + iVar9) {
          local_18._4_4_ = iVar2 - iVar9;
          local_c = iVar2;
        }
      }
    }
    (**(code **)(*(int *)this + 0x2ec))(local_18,this + 0x2c0);
    *(undefined4 *)(this + 0x2c0) = local_18._0_4_;
    *(undefined4 *)(this + 0x2c4) = local_18._4_4_;
    *(undefined4 *)(this + 0x2c8) = local_18._8_4_;
    *(int *)(this + 0x2cc) = local_c;
  }
LAB_1007419d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

