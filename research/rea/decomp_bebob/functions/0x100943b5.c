// rea decompile_all
// name: CMFCBaseTabCtrl::OnLButtonUp
// address: 0x100943b5
// body: available
// range: 0x100943b5-0x1009465f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCBaseTabCtrl::OnLButtonUp(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  int iVar1;
  int iVar2;
  POINT pt;
  BOOL BVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *this_00;
  CFrameWnd *pCVar6;
  int iVar7;
  int iVar8;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1ec) != 0) {
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x1e8) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x1f0),(HRGN)0x0,0x105);
    pt.y = param_4;
    pt.x = param_3;
    BVar3 = PtInRect((RECT *)(this + 0x1f0),pt);
    if (BVar3 != 0) {
      iVar4 = (**(code **)(*(int *)this + 0x20c))();
      if (iVar4 != 0) {
        SendMessageW(*(HWND *)(iVar4 + 0x20),0x10,0,0);
      }
      goto LAB_1009464f;
    }
  }
  if (*(int *)(this + 0xa4) != *(int *)(this + 0xa0)) {
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    this_00 = CWnd::FromHandle(pHVar5);
    SendMessageW(*(HWND *)(this_00 + 0x20),DAT_10168b44,*(WPARAM *)(this + 0xa4),
                 *(LPARAM *)(this + 0xa0));
    iVar4 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
    if (iVar4 == 0) {
      iVar4 = CObject::IsKindOf((CObject *)this_00,
                                (CRuntimeClass *)&PTR_s_CMDIClientAreaWnd_10128a0c);
      if (iVar4 == 0) goto LAB_100944b0;
    }
    pCVar6 = AFXGetParentFrame(this_00);
    if (pCVar6 != (CFrameWnd *)0x0) {
      SendMessageW(*(HWND *)(pCVar6 + 0x20),DAT_10168b44,*(WPARAM *)(this + 0xa4),
                   *(LPARAM *)(this + 0xa0));
    }
  }
LAB_100944b0:
  if (*(int *)(this + 0x148) != 0) {
    *(undefined4 *)(this + 0x148) = 0;
    ReleaseCapture();
    iVar4 = (**(code **)(*(int *)this + 0x2c8))();
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0xf8) = 0xffffffff;
      *(undefined4 *)(this + 0xf4) = 0xffffffff;
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0x2c8))();
  if (iVar4 != 0) {
    iVar4 = *(int *)(this + 0xf4);
    iVar1 = *(int *)(this + 0xa0);
    if (((iVar4 == *(int *)(this + 0xf8)) && (-1 < iVar4)) && (iVar4 != iVar1)) {
      *(int *)(this + 0x1d4) = iVar1;
      *(undefined4 *)(this + 0x1e0) = 1;
      *(undefined4 *)(this + 0x200) = 0;
      iVar7 = (**(code **)(*(int *)this + 0x210))(iVar4);
      if (iVar7 == 0) {
        *(undefined4 *)(this + 0xf8) = 0xffffffff;
        *(undefined4 *)(this + 0x1e0) = 0;
        *(undefined4 *)(this + 0x200) = 0;
        iVar4 = (**(code **)(*(int *)this + 0x284))();
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0xf4) = 0xffffffff;
        }
        ReleaseCapture();
        goto LAB_1009464f;
      }
      (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)(this + 0xa0));
      *(undefined4 *)(this + 0x1e0) = 0;
      *(undefined4 *)(this + 0x200) = 0;
    }
    iVar7 = *(int *)(this + 0xf8);
    iVar2 = *(int *)(this + 0xf4);
    *(undefined4 *)(this + 0xf8) = 0xffffffff;
    iVar8 = (**(code **)(*(int *)this + 0x284))();
    if (iVar8 == 0) {
      *(undefined4 *)(this + 0xf4) = 0xffffffff;
    }
    ReleaseCapture();
    if (iVar1 != iVar4) {
      InvalidateTab(this,iVar2);
      if (iVar7 != iVar2) {
        InvalidateTab(this,iVar7);
      }
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0x284))();
  if (iVar4 != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    (**(code **)(*(int *)this + 0x164))(&local_18,&local_28);
    BVar3 = IsRectEmpty(&local_18);
    if (BVar3 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,0);
    }
    BVar3 = IsRectEmpty(&local_28);
    if (BVar3 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,0);
    }
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  CWnd::Default((CWnd *)this);
LAB_1009464f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

