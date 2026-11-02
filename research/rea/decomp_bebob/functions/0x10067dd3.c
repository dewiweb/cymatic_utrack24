// rea decompile_all
// name: CGlobalUtils::CalcExpectedDockedRect
// address: 0x10067dd3
// body: available
// range: 0x10067dd3-0x1006808f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067e0c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CGlobalUtils::CalcExpectedDockedRect(class CPaneContainerManager &,class
   CWnd *,class CPoint,class CRect &,int &,class CDockablePane * *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CGlobalUtils::CalcExpectedDockedRect
          (undefined4 param_1_00,CPaneContainerManager *param_1,CWnd *param_2,undefined4 param_4,
          undefined4 param_5,LPRECT param_6,uint *param_7,int *param_8)

{
  int *piVar1;
  SHORT SVar2;
  int iVar3;
  CObject *pCVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_68 [4];
  LPRECT local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  CPaneContainerManager *local_50;
  uint local_4c;
  CWnd *local_48;
  CGlobalUtils *local_44;
  uint *local_40;
  CObject *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  local_48 = param_2;
  local_64 = param_6;
  local_40 = param_7;
  if (param_8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  *param_7 = 0;
  local_5c = 0x1000;
  local_58 = 0;
  local_54 = 0;
  *param_8 = 0;
  SetRectEmpty(param_6);
  SVar2 = GetKeyState(0x11);
  if (((SVar2 < 0) ||
      (iVar3 = GetPaneAndAlignFromPoint
                         (local_44,local_50,param_4,param_5,param_8,&local_5c,&local_58,&local_54),
      iVar3 == 0)) || (*param_8 == 0)) goto LAB_1006807f;
  iVar3 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
  pCVar4 = (CObject *)param_2;
  if (iVar3 != 0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)param_2);
    pCVar4 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x1a8))();
  }
  local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar4);
  if ((int *)*param_8 != (int *)0x0) {
    local_60 = (**(code **)(*(int *)*param_8 + 0x194))();
    local_4c = (**(code **)(*(int *)*param_8 + 400))();
    iVar3 = (**(code **)(*(int *)*param_8 + 0x224))(0);
    param_2 = local_48;
    if ((local_3c != (CObject *)0x0) &&
       (((iVar5 = (**(code **)(*(int *)local_3c + 0x194))(), iVar5 != local_60 && (iVar3 != 0)) ||
        ((uVar6 = (**(code **)(*(int *)local_3c + 0x194))(), param_2 = local_48,
         (local_4c & uVar6) == 0 && (iVar3 == 0)))))) goto LAB_1006807f;
  }
  if ((local_58 != 0) || (local_54 != 0)) {
    iVar3 = *param_8;
    *local_40 = (uint)(iVar3 != 0);
    if ((iVar3 != 0) == 0) goto LAB_1006807f;
    iVar3 = (**(code **)(*(int *)*param_8 + 0x188))();
    if (((iVar3 == 0) || (iVar3 = CanBeAttached(local_44,param_2), iVar3 == 0)) ||
       (local_3c == (CObject *)0x0)) {
LAB_10067f6c:
      uVar6 = 0;
    }
    else {
      piVar1 = (int *)*param_8;
      local_4c = (**(code **)(*(int *)local_3c + 0x194))();
      uVar6 = (**(code **)(*piVar1 + 0x194))();
      param_2 = local_48;
      if (uVar6 != local_4c) goto LAB_10067f6c;
      uVar6 = 1;
    }
    *local_40 = uVar6;
    if (uVar6 == 0) goto LAB_1006807f;
  }
  if (((int *)*param_8 == (int *)0x0) ||
     (((iVar3 = (**(code **)(*(int *)*param_8 + 0x224))(0), iVar3 == 0 ||
       (iVar3 = CanPaneBeInFloatingMultiPaneFrameWnd(local_44,param_2), iVar3 != 0)) &&
      ((*param_8 == 0 ||
       ((iVar3 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CBasePane_1012a214),
        iVar3 == 0 || (iVar3 = (**(code **)(*(int *)*param_8 + 0x180))(param_2), iVar3 != 0))))))))
  {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(*param_8 + 0x20),&local_28);
    if (((CObject *)*param_8 != (CObject *)param_2) &&
       ((iVar3 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0
                                  ), iVar3 == 0 ||
        (pCVar4 = (CObject *)(**(code **)(*(int *)*param_8 + 0x224))(0),
        pCVar4 != (CObject *)param_2)))) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      GetWindowRect(*(HWND *)(param_2 + 0x20),&local_18);
      if ((local_3c != (CObject *)0x0) &&
         ((uVar6 = (**(code **)(*(int *)local_3c + 0x194))(), (local_5c & uVar6) != 0 ||
          (DAT_10168108 != 0)))) {
        CPaneContainerManager::CalcRects
                  (local_50,&local_28,&local_18,&local_38,local_68,local_5c,0,0,0,0);
        local_64->left = local_18.left;
        local_64->top = local_18.top;
        local_64->right = local_18.right;
        local_64->bottom = local_18.bottom;
      }
      goto LAB_1006807f;
    }
  }
  *local_40 = 0;
LAB_1006807f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

