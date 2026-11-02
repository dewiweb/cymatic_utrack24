// rea decompile_all
// name: CPaneContainerManager::PaneFromPoint
// address: 0x100c5d42
// body: available
// range: 0x100c5d42-0x100c5f51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c5f48 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CPaneContainerManager::PaneFromPoint(class
   CPoint,int,int,int &,int &)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall
CPaneContainerManager::PaneFromPoint
          (CPaneContainerManager *this,LONG param_2,LONG param_3,int param_4,int param_5,
          uint *param_6,uint *param_7)

{
  undefined4 *puVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CDockingManager *pCVar7;
  uint *puVar8;
  CDockablePane *pCVar9;
  undefined4 *puVar10;
  RECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_6 = 0;
  puVar10 = *(undefined4 **)(this + 8);
  while( true ) {
    if (puVar10 == (undefined4 *)0x0) {
      if (param_5 == 0) {
        puVar10 = *(undefined4 **)(this + 8);
        goto LAB_100c5f31;
      }
      goto LAB_100c5f37;
    }
    puVar1 = puVar10 + 2;
    puVar10 = (undefined4 *)*puVar10;
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_28);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    (**(code **)(*(int *)pCVar2 + 0x32c))(&local_38,&local_18);
    pt.y = param_3;
    pt.x = param_2;
    BVar3 = PtInRect(&local_38,pt);
    puVar8 = param_6;
    if (((BVar3 != 0) ||
        (pt_00.y = param_3, pt_00.x = param_2, BVar3 = PtInRect(&local_18,pt_00), BVar3 != 0)) ||
       (iVar4 = (**(code **)(*(int *)pCVar2 + 0x334))(param_2,param_3,1), puVar8 = param_7,
       iVar4 == 2)) break;
    iVar4 = (**(code **)(*(int *)pCVar2 + 0x1a0))();
    local_28.top = local_28.top + iVar4;
    local_28.bottom = local_28.bottom + (local_18.top - local_18.bottom);
    pt_01.y = param_3;
    pt_01.x = param_2;
    BVar3 = PtInRect(&local_28,pt_01);
    if (BVar3 != 0) {
      pHVar5 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar6);
      if (((pCVar7 != (CDockingManager *)0x0) && (iVar4 = *(int *)(pCVar7 + 0x1b8), iVar4 != 0)) &&
         ((*(int *)(iVar4 + 8) != 0 && (*(int *)(iVar4 + 4) != 0)))) {
        if (*(int *)(iVar4 + 0x100) - 4U < 5) {
          *param_7 = (uint)(*(int *)(iVar4 + 0x100) == 8);
        }
        goto LAB_100c5f37;
      }
      InflateRect(&local_28,-param_4,-param_4);
      pt_02.y = param_3;
      pt_02.x = param_2;
      BVar3 = PtInRect(&local_28,pt_02);
      if ((BVar3 == 0) || (param_4 == 0)) goto LAB_100c5f37;
    }
  }
  *puVar8 = 1;
  goto LAB_100c5f37;
  while( true ) {
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    puVar1 = puVar10 + 2;
    puVar10 = (undefined4 *)*puVar10;
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18);
    InflateRect(&local_18,param_4,param_4);
    pt_03.y = param_3;
    pt_03.x = param_2;
    BVar3 = PtInRect(&local_18,pt_03);
    if (BVar3 != 0) break;
LAB_100c5f31:
    if (puVar10 == (undefined4 *)0x0) break;
  }
LAB_100c5f37:
  pCVar9 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar9;
}

