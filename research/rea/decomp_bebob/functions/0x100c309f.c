// rea decompile_all
// name: CBaseTabbedPane::SetAutoHideMode
// address: 0x100c309f
// body: available
// range: 0x100c309f-0x100c33d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c3338 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCAutoHideBar * __thiscall CBaseTabbedPane::SetAutoHideMode(int,unsigned
   long,class CMFCAutoHideBar *,int)
   
   Library: Visual Studio 2010 Release */

CMFCAutoHideBar * __thiscall
CBaseTabbedPane::SetAutoHideMode
          (CBaseTabbedPane *this,int param_1,ulong param_2,CMFCAutoHideBar *param_3,int param_4)

{
  int iVar1;
  CObject *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined4 uVar5;
  int *piVar6;
  CMFCAutoHideBar *pCVar7;
  CObList local_6c [4];
  CWnd *local_68;
  int local_64;
  int local_50;
  CMFCAutoHideBar *local_4c;
  int local_48;
  int local_44;
  int local_40;
  ulong local_3c;
  int local_38;
  CObject *local_34;
  CMFCAutoHideBar *local_30;
  CWnd *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100c30ab;
  local_44 = param_1;
  local_40 = param_4;
  local_3c = param_2;
  local_4c = param_3;
  local_48 = DAT_101689e0;
  if (DAT_101689e0 != 0) {
    DAT_101689e0 = 0;
  }
  local_30 = param_3;
  local_34 = (CObject *)0x0;
  local_50 = (**(code **)(**(int **)(this + 0x358) + 0x208))();
  iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a8))();
  CObList::CObList(local_6c,10);
  local_8 = 0;
  (**(code **)(*(int *)this + 0x220))(0,1,0);
  local_38 = 0;
  local_28 = iVar1;
  while (local_28 = local_28 + -1, -1 < local_28) {
    pCVar2 = (CObject *)(**(code **)(**(int **)(this + 0x358) + 0x1ac))(local_28);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
    local_2c = (CWnd *)(**(code **)(**(int **)(this + 0x358) + 0x278))(local_28);
    iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1ec))(local_28);
    if (((pCVar2 == (CObject *)0x0) || (local_2c == (CWnd *)0x0)) || (iVar1 == 0)) {
      local_38 = local_38 + 1;
    }
    else {
      (**(code **)(**(int **)(this + 0x358) + 0x194))(local_28,0);
      (**(code **)(*(int *)pCVar2 + 0x1ec))(1);
      (**(code **)(*(int *)pCVar2 + 0x37c))();
      pHVar3 = GetParent(*(HWND *)(pCVar2 + 0x20));
      local_2c = CWnd::FromHandle(pHVar3);
      (**(code **)(*(int *)pCVar2 + 0x218))(*(undefined4 *)(this + 0x98),0);
      CWnd::SetParent((CWnd *)pCVar2,*(CWnd **)(this + 0x98));
      if (*(int *)(this + 0x98) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(this + 0x98) + 0x20);
      }
      *(undefined4 *)(pCVar2 + 0x54) = uVar5;
      (**(code **)(*(int *)pCVar2 + 0x21c))(local_2c);
      CObList::AddHead(local_6c,pCVar2);
      if (local_28 == local_50) {
        local_34 = pCVar2;
      }
    }
  }
  local_28 = 0;
  pCVar4 = local_68;
  if (local_68 != (CWnd *)0x0) {
    do {
      if (pCVar4 == (CWnd *)0x0) {
LAB_100c3338:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_2c = *(CWnd **)pCVar4;
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                  *(CObject **)(pCVar4 + 8));
      if (pCVar2 == (CObject *)0x0) goto LAB_100c3338;
      if ((pCVar2 == local_34) && (local_40 != 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      piVar6 = (int *)(**(code **)(*(int *)pCVar2 + 0x368))(1,local_3c,0,uVar5);
      if (piVar6 != (int *)0x0) {
        piVar6[0x41] = (uint)(*(CObject **)(local_68 + 8) == pCVar2);
        piVar6[0x42] = (uint)(*(CObject **)(local_64 + 8) == pCVar2);
        piVar6[0x43] = (uint)(pCVar2 == local_34);
        if ((local_28 == 0) && ((pCVar2 == local_34) != 0)) {
          local_28 = 1;
        }
      }
      pCVar4 = local_2c;
    } while (local_2c != (CWnd *)0x0);
    if (piVar6 != (int *)0x0) {
      if (local_28 == 0) {
        piVar6[0x43] = 1;
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x19c))();
      (**(code **)(*piVar6 + 0x294))(&local_24);
    }
  }
  if (0 < local_38) {
    iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a0))();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x220))(0,1,0);
    }
    else {
      iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x208))();
      if (iVar1 == -1) {
        local_2c = (CWnd *)0xffffffff;
        (**(code **)(*(int *)this + 0x3d4))(&local_2c);
        (**(code **)(**(int **)(this + 0x358) + 0x210))(local_2c);
      }
      (**(code **)(**(int **)(this + 0x358) + 0x180))();
      (**(code **)(*(int *)this + 0x220))(1,1,0);
      local_30 = CDockablePane::SetAutoHideMode
                           ((CDockablePane *)this,local_44,local_3c,local_4c,local_40);
    }
  }
  if (local_30 != (CMFCAutoHideBar *)0x0) {
    CMFCAutoHideBar::UpdateVisibleState(local_30);
  }
  local_8 = 0xffffffff;
  DAT_101689e0 = local_48;
  FUN_1001e259(local_6c);
  pCVar7 = (CMFCAutoHideBar *)FUN_100f90cf();
  return pCVar7;
}

