// rea decompile_all
// name: CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups
// address: 0x10064192
// body: available
// range: 0x10064192-0x100643f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10064294 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups(struct tagRECT
   *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups
          (CMDIClientAreaWnd *this,tagRECT *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  CObject *pCVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_10166638,param_1->left,param_1->top,
                     param_1->right - param_1->left,param_1->bottom - param_1->top,0x10);
  if (*(int *)(this + 0x28dc) != 0) {
    if (*(int *)(this + 0x28dc) == 1) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                  *(CObject **)(*(int *)(this + 0x28d4) + 8));
      CWnd::ShowWindow((CWnd *)pCVar4,8);
      CWnd::SetWindowPos((CWnd *)pCVar4,(CWnd *)0x0,0,0,param_1->right - param_1->left,
                         param_1->bottom - param_1->top,0x14);
      AdjustMDIChildren(this,(CMFCTabCtrl *)pCVar4);
    }
    else {
      local_24 = 0;
      puVar8 = *(undefined4 **)(this + 0x28d4);
      while (puVar8 != (undefined4 *)0x0) {
        if (puVar8 == (undefined4 *)0x0) goto LAB_10064294;
        puVar1 = puVar8 + 2;
        puVar8 = (undefined4 *)*puVar8;
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)*puVar1)
        ;
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
        if (*(int *)(this + 0x2968) == 1) {
          iVar5 = local_18.right - local_18.left;
        }
        else {
          iVar5 = local_18.bottom - local_18.top;
        }
        local_24 = local_24 + iVar5;
      }
      if (*(int *)(this + 0x2968) == 1) {
        iVar5 = param_1->right - param_1->left;
      }
      else {
        iVar5 = param_1->bottom - param_1->top;
      }
      iVar7 = *(int *)(this + 0x28dc);
      local_20 = (iVar5 - local_24) / iVar7;
      *(int *)(this + 0x2938) = *(int *)(this + 0x2938) + (iVar5 - local_24) % iVar7;
      lVar6 = _labs(*(long *)(this + 0x2938));
      if (iVar7 <= lVar6) {
        if (*(int *)(this + 0x2938) < 1) {
          local_20 = local_20 + -1;
        }
        else {
          local_20 = local_20 + 1;
        }
        *(undefined4 *)(this + 0x2938) = 0;
      }
      piVar3 = *(int **)(this + 0x28d4);
      local_1c = 0;
      while (piVar3 != (int *)0x0) {
        if (piVar3 == (int *)0x0) {
LAB_10064294:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        piVar2 = piVar3 + 2;
        piVar3 = (int *)*piVar3;
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)*piVar2)
        ;
        if ((pCVar4 != (CObject *)0x0) && (*(HWND *)(pCVar4 + 0x20) != (HWND)0x0)) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
          CWnd::ScreenToClient((CWnd *)this,&local_18);
          if (*(int *)(this + 0x2968) == 1) {
            iVar7 = (local_18.right - local_18.left) + local_20;
            if ((piVar3 == (int *)0x0) && ((iVar7 - local_1c) + iVar5 != 0)) {
              iVar7 = iVar5 - local_1c;
            }
            CWnd::SetWindowPos((CWnd *)pCVar4,(CWnd *)0x0,local_1c,0,iVar7,
                               param_1->bottom - param_1->top,0x14);
            iVar7 = local_18.right - local_18.left;
          }
          else {
            iVar7 = (local_18.bottom - local_18.top) + local_20;
            if ((piVar3 == (int *)0x0) && ((iVar7 - local_1c) + iVar5 != 0)) {
              iVar7 = iVar5 - local_1c;
            }
            CWnd::SetWindowPos((CWnd *)pCVar4,(CWnd *)0x0,0,local_1c,param_1->right - param_1->left,
                               iVar7,0x14);
            iVar7 = local_18.bottom - local_18.top;
          }
          local_1c = local_1c + iVar7 + local_20;
          AdjustMDIChildren(this,(CMFCTabCtrl *)pCVar4);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

