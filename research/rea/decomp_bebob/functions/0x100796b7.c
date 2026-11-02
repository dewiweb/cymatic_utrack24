// rea decompile_all
// name: CDockablePane::OnMouseMove
// address: 0x100796b7
// body: available
// range: 0x100796b7-0x10079918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::OnMouseMove(CDockablePane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  ushort uVar1;
  uint uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  CObject *pCVar9;
  CDockingManager *pCVar10;
  int _X;
  int _X_00;
  tagPOINT local_30;
  tagPOINT local_28;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  uVar2 = (**(code **)(*(int *)this + 0x1b4))();
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*(int *)this + 0x1b4))();
    if (((uVar2 & 2) != 0) && (this[0x2b4] != (CDockablePane)0x0)) {
      CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
      goto LAB_10079908;
    }
  }
  else {
    if (this[0x160] == (CDockablePane)0x0) {
      pHVar3 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 != (CWnd *)this) {
        if (this[0x160] != (CDockablePane)0x0) goto LAB_10079716;
        goto LAB_10079722;
      }
LAB_10079734:
      if (*(int *)(this + 0x34c) == 0) {
        ReleaseCapture();
        this[0x160] = (CDockablePane)0x0;
        this[0x2b4] = (CDockablePane)0x0;
      }
    }
    else {
LAB_10079716:
      pHVar3 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 != (CWnd *)this) goto LAB_10079734;
LAB_10079722:
      uVar1 = GetAsyncKeyState(1);
      if ((uVar1 & 0x8000) == 0) goto LAB_10079734;
    }
    if (this[0x2b4] != (CDockablePane)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      if (this[0x2b5] == (CDockablePane)0x0) {
        pt.y = local_20.y;
        pt.x = local_20.x;
        BVar5 = PtInRect(&local_18,pt);
        this[0x2b5] = (CDockablePane)('\x01' - (BVar5 != 1));
      }
      iVar6 = local_20.x - *(int *)(this + 0x180);
      *(LONG *)(this + 0x180) = local_20.x;
      iVar7 = local_20.y - *(int *)(this + 0x184);
      *(LONG *)(this + 0x184) = local_20.y;
      local_30.x = *(LONG *)(this + 0x158);
      local_30.y = *(LONG *)(this + 0x15c);
      ClientToScreen(*(HWND *)(this + 0x20),&local_30);
      _X = local_20.x - local_30.x;
      _X_00 = local_20.y - local_30.y;
      CPane::UpdateVirtualRect((CPane *)this,iVar6,iVar7);
      lVar8 = _labs(_X);
      if (lVar8 <= DAT_10168810) {
        lVar8 = _labs(_X_00);
        if (lVar8 <= DAT_10168814) goto LAB_10079908;
      }
      if (this[0x2b5] != (CDockablePane)0x0) {
        iVar6 = (**(code **)(*(int *)this + 0x168))();
        if (iVar6 == 0) {
          (**(code **)(*(int *)this + 0x1f8))
                    (*(undefined4 *)(this + 0x1d8),*(undefined4 *)(this + 0x1dc),
                     *(undefined4 *)(this + 0x1e0),*(undefined4 *)(this + 0x1e4),1,1);
          pCVar4 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
          pCVar10 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar4);
          CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_10160f68,pCVar10,0,0);
        }
        else {
          pHVar3 = GetParent(*(HWND *)(this + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c,
                                      (CObject *)pCVar4);
          if (pCVar9 != (CObject *)0x0) {
            (**(code **)(*(int *)pCVar9 + 0x19c))(1,0xffffffff,0);
          }
        }
        *(undefined2 *)(this + 0x2b4) = 0;
      }
      goto LAB_10079908;
    }
  }
  local_28.x = param_3;
  local_28.y = param_4;
  ClientToScreen(*(HWND *)(this + 0x20),&local_28);
  (**(code **)(*(int *)this + 0x38c))(local_28.x,local_28.y);
LAB_10079908:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

