// rea decompile_all
// name: CDockingManager::CalcExpectedDockedRect
// address: 0x1003e9f3
// body: available
// range: 0x1003e9f3-0x1003ecc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::CalcExpectedDockedRect(class CWnd *,class CPoint,class
   CRect &,int &,class CDockablePane * *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingManager::CalcExpectedDockedRect
          (CDockingManager *this,CObject *param_1,undefined4 param_3,undefined4 param_4,
          LPRECT param_5,undefined4 param_6,undefined4 *param_7)

{
  SHORT SVar1;
  CObject *pCVar2;
  int *piVar3;
  BOOL BVar4;
  CPaneDivider *pCVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  CDockingManager *pCVar9;
  undefined4 uVar10;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_24;
  CObject *local_20;
  LPRECT local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_6;
  local_1c = param_5;
  local_24 = param_7;
  SetRectEmpty(param_5);
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) goto LAB_1003ecb9;
  local_20 = *(CObject **)this;
  local_30 = 0;
  local_28 = 0;
  uVar10 = 1;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,param_1);
  piVar3 = (int *)(**(code **)(local_20 + 0x14))(param_3,param_4,pCVar2,uVar10);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1bc))(param_1,param_3,param_4,local_1c,local_2c,local_24);
    BVar4 = IsRectEmpty(local_1c);
    if (BVar4 == 0) goto LAB_1003ecb9;
  }
  iVar6 = *(int *)(this + 0x1b8);
  if (((iVar6 == 0) || (*(int *)(iVar6 + 8) == 0)) || (*(int *)(iVar6 + 4) == 0)) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,param_1);
    pCVar2 = (CObject *)(**(code **)(*(int *)pCVar2 + 0x1a4))();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar2);
  }
  pCVar2 = (CObject *)(**(code **)(*(int *)this + 0x10))(param_3,param_4,DAT_10160710,1,0,1,pCVar2);
  local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
  if ((local_20 != (CObject *)0x0) &&
     (pCVar5 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)local_20),
     pCVar5 != (CPaneDivider *)0x0)) {
    iVar6 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
    if (iVar6 != 0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,param_1);
      iVar6 = (**(code **)(*(int *)local_20 + 0x338))(pCVar2);
      if (iVar6 == 0) goto LAB_1003ecb9;
    }
    pCVar5 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)local_20);
    (**(code **)(*(int *)pCVar5 + 0x298))(param_1,param_3,param_4,local_1c,local_2c,local_24);
    goto LAB_1003ecb9;
  }
  iVar6 = IsPointNearDockSite(this,param_3,param_4,&local_28,&local_30);
  if (iVar6 == 0) {
    *local_24 = 0;
    goto LAB_1003ecb9;
  }
  *local_24 = 0;
  iVar6 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
  if (iVar6 == 0) {
    iVar6 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
    if (iVar6 != 0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,param_1);
      uVar7 = (**(code **)(*(int *)pCVar2 + 0x194))();
      uVar7 = local_28 & uVar7;
      goto joined_r0x1003ebe6;
    }
  }
  else {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,param_1);
    pCVar2 = (CObject *)(**(code **)(*(int *)pCVar2 + 0x1a4))();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar2);
    if (pCVar2 != (CObject *)0x0) {
      uVar7 = (**(code **)(*(int *)pCVar2 + 0x194))();
      uVar7 = local_28 & uVar7;
joined_r0x1003ebe6:
      if (uVar7 == 0) goto LAB_1003ecb9;
    }
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  pCVar9 = this + 0x108;
  if (local_30 == 0) {
    pCVar9 = this + 0xf8;
  }
  local_1c->left = *(LONG *)pCVar9;
  local_1c->top = *(LONG *)(pCVar9 + 4);
  local_1c->right = *(LONG *)(pCVar9 + 8);
  local_1c->bottom = *(LONG *)(pCVar9 + 0xc);
  uVar8 = CWnd::GetExStyle(*(CWnd **)(this + 0xe4));
  if (local_28 == 0x1000) {
    if ((uVar8 & 0x400000) == 0) {
LAB_1003ec6a:
      local_1c->right = (local_1c->left - local_18.left) + local_18.right;
    }
    else {
LAB_1003eca8:
      local_1c->left = (local_1c->right - local_18.right) + local_18.left;
    }
  }
  else if (local_28 == 0x2000) {
    local_1c->bottom = (local_1c->top - local_18.top) + local_18.bottom;
  }
  else {
    if (local_28 == 0x4000) {
      if ((uVar8 & 0x400000) == 0) goto LAB_1003eca8;
      goto LAB_1003ec6a;
    }
    if (local_28 == 0x8000) {
      local_1c->top = (local_1c->bottom - local_18.bottom) + local_18.top;
    }
  }
  (**(code **)(*(int *)this + 0x5c))(local_1c,local_28);
  CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),local_1c);
LAB_1003ecb9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

