// rea decompile_all
// name: CMFCPopupMenu::TearOff
// address: 0x1005ecfa
// body: available
// range: 0x1005ecfa-0x1005f00a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenu::TearOff(class CPoint)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenu::TearOff(CMFCPopupMenu *this,int param_2,int param_3)

{
  uint uVar1;
  CObject *pCVar2;
  CBasePane *pCVar3;
  int iVar4;
  int *piVar5;
  CPaneFrameWnd *this_00;
  undefined1 local_44 [4];
  CObject *local_40;
  uint local_3c;
  CMFCPopupMenu *local_38;
  tagPOINT local_34;
  int *local_2c;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1005ed06;
  local_38 = this;
  if ((*(int *)(this + 0x148) == 0) ||
     (uVar1 = *(uint *)(*(int *)(this + 0x148) + 0xbc), local_3c = uVar1, uVar1 == 0))
  goto LAB_1005eedf;
  local_34.x = param_2;
  local_34.y = param_3;
  ClientToScreen(*(HWND *)(this + 0x20),&local_34);
  local_28 = DAT_10168578;
  if (DAT_10168578 == (CObject *)0x0) {
    local_28 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if (local_28 == (CObject *)0x0) goto LAB_1005eedf;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,local_28);
  local_40 = pCVar2;
  if (pCVar2 == (CObject *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,local_28);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,local_28);
      if (pCVar2 == (CObject *)0x0) {
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,local_28);
        if (pCVar2 == (CObject *)0x0) goto LAB_1005eedf;
        pCVar3 = COleDocIPFrameWndEx::GetPane((COleDocIPFrameWndEx *)pCVar2,uVar1);
        pCVar2 = pCVar2 + 0x194;
      }
      else {
        pCVar3 = (CBasePane *)GetPane(pCVar2,uVar1);
        pCVar2 = pCVar2 + 0x198;
      }
    }
    else {
      pCVar3 = CFrameWndEx::GetPane((CFrameWndEx *)pCVar2,uVar1);
      pCVar2 = pCVar2 + 0x124;
    }
  }
  else {
    pCVar3 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)pCVar2,uVar1);
    pCVar2 = pCVar2 + 0x33c;
  }
  if (pCVar2 == (CObject *)0x0) goto LAB_1005eedf;
  if (pCVar3 == (CBasePane *)0x0) {
    local_2c = FUN_10005e30((int *)(*(int *)(*(int *)(this + 0x148) + 0x2c) + -0x10));
    local_2c = local_2c + 4;
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c,L'&')
    ;
    pCVar3 = (CBasePane *)(**(code **)(*(int *)this + 500))(local_28,local_3c,local_2c);
    if (pCVar3 == (CBasePane *)0x0) {
      FUN_10001030(local_2c + -4);
      goto LAB_1005eedf;
    }
    FUN_1005fe0d(pCVar2,(CObject *)pCVar3);
    local_8 = 0xffffffff;
    FUN_10001030(local_2c + -4);
  }
  else {
    (**(code **)(*(int *)pCVar3 + 0x220))(1,0,1);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_24);
    local_24.right = local_24.right - local_24.left;
    local_24.left = local_34.x;
    local_24.right = local_34.x + local_24.right;
    local_24.bottom = local_24.bottom - local_24.top;
    local_24.top = local_34.y;
    local_24.bottom = local_34.y + local_24.bottom;
    iVar4 = (**(code **)(*(int *)pCVar3 + 0x164))();
    if (iVar4 == 0) {
      (**(code **)(*(int *)pCVar3 + 0x230))(&local_24,1,0);
    }
    else {
      (**(code **)(*(int *)pCVar3 + 0x1f8))
                (local_24.left,local_24.top,local_24.right,local_24.bottom,3,1);
      this = local_38;
    }
  }
  if (local_40 == (CObject *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,local_28);
    if (pCVar2 != (CObject *)0x0) {
      iVar4 = (**(code **)(*(int *)pCVar2 + 0x1e4))(this,pCVar3);
      goto LAB_1005ef64;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,local_28);
    if ((pCVar2 != (CObject *)0x0) ||
       (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,local_28),
       pCVar2 != (CObject *)0x0)) {
      iVar4 = (**(code **)(*(int *)pCVar2 + 0x200))(this,pCVar3);
      goto LAB_1005ef64;
    }
  }
  else {
    iVar4 = (**(code **)(*(int *)local_40 + 0x200))(this,pCVar3);
LAB_1005ef64:
    if (iVar4 == 0) {
      (**(code **)(*(int *)pCVar3 + 0x60))();
      (**(code **)(*(int *)pCVar3 + 4))(1);
      goto LAB_1005eedf;
    }
  }
  (**(code **)(*(int *)pCVar3 + 0x240))(local_28,1);
  piVar5 = (int *)(**(code **)(*(int *)pCVar3 + 0x2a4))(local_44,0);
  local_24.right = *piVar5 + local_34.x;
  local_24.top = local_34.y;
  local_24.bottom = piVar5[1] + local_34.y;
  local_24.left = local_34.x;
  (**(code **)(*(int *)pCVar3 + 0x1f8))(local_34.x,local_34.y,local_24.right,local_24.bottom,3,1);
  (**(code **)(*(int *)pCVar3 + 0x20c))();
  (**(code **)(*(int *)local_28 + 0x174))(1);
  this_00 = (CPaneFrameWnd *)(**(code **)(*(int *)pCVar3 + 0x224))(1);
  if (this_00 != (CPaneFrameWnd *)0x0) {
    CPaneFrameWnd::StartTearOff(this_00,local_38);
  }
LAB_1005eedf:
  iVar4 = FUN_100f90cf();
  return iVar4;
}

