// rea decompile_all
// name: FUN_1009695f
// address: 0x1009695f
// body: available
// range: 0x1009695f-0x10096b69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10096b65 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_1009695f(void *this,WPARAM param_1)

{
  undefined4 *puVar1;
  AFX_MODULE_STATE *pAVar2;
  CRuntimeClass *this_00;
  HWND pHVar3;
  CWnd *this_01;
  CObject *pCVar4;
  CObject *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  UINT uCmd;
  
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uCmd = 5;
  pHVar3 = *(HWND *)(*(int *)((int)this + 0x140) + 0x20);
  while( true ) {
    pHVar3 = GetWindow(pHVar3,uCmd);
    this_01 = CWnd::FromHandle(pHVar3);
    if (this_01 == (CWnd *)0x0) break;
    this_00 = (CRuntimeClass *)(*(code *)**(undefined4 **)this_01)();
    if (this_00 == (CRuntimeClass *)0x0) {
LAB_100969f2:
      CWnd::EnableWindow(this_01,(uint)(param_1 == 0));
    }
    else {
      iVar6 = CRuntimeClass::IsDerivedFrom(this_00,(CRuntimeClass *)&PTR_s_CDockBar_10137990);
      if (iVar6 == 0) {
        iVar6 = CRuntimeClass::IsDerivedFrom(this_00,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
        if (iVar6 == 0) {
          iVar6 = CRuntimeClass::IsDerivedFrom
                            (this_00,(CRuntimeClass *)&PTR_s_CMFCOutlookBar_10135f0e_2_101623c0);
          if (iVar6 == 0) {
            iVar6 = CRuntimeClass::IsDerivedFrom(this_00,(CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8)
            ;
            if (iVar6 == 0) {
              iVar6 = CRuntimeClass::IsDerivedFrom
                                (this_00,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
              if (iVar6 == 0) goto LAB_100969f2;
            }
          }
        }
      }
    }
    pHVar3 = *(HWND *)(this_01 + 0x20);
    uCmd = 2;
  }
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                              *(CObject **)((int)this + 0x140));
  if (pCVar4 == (CObject *)0x0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,
                                *(CObject **)((int)this + 0x140));
    if (pCVar4 == (CObject *)0x0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,
                                  *(CObject **)((int)this + 0x140));
      if (pCVar4 == (CObject *)0x0) {
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,
                                    *(CObject **)((int)this + 0x140));
        if (pCVar4 == (CObject *)0x0) goto LAB_10096ae6;
        pCVar4 = pCVar4 + 0x298;
      }
      else {
        pCVar4 = pCVar4 + 0x29c;
      }
    }
    else {
      pCVar4 = pCVar4 + 0x228;
    }
  }
  else {
    pCVar4 = pCVar4 + 0x14c;
  }
  if (pCVar4 != (CObject *)0x0) {
    puVar7 = *(undefined4 **)(pCVar4 + 0xcc);
    while (puVar7 != (undefined4 *)0x0) {
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1)
      ;
      if (pCVar4 != (CObject *)0x0) {
        pCVar5 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x1a4))();
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8,pCVar5);
        if (pCVar5 == (CObject *)0x0) {
          CWnd::EnableWindow((CWnd *)pCVar4,(uint)(param_1 == 0));
        }
      }
    }
  }
LAB_10096ae6:
  LockWindowUpdate(*(HWND *)(*(int *)((int)this + 0x140) + 0x20));
  CMFCToolBar::SetCustomizeMode(param_1);
  SendMessageW(*(HWND *)(*(int *)((int)this + 0x140) + 0x20),DAT_10166e94,param_1,0);
  LockWindowUpdate((HWND)0x0);
  if (param_1 == 0) {
    iVar6 = (**(code **)(**(int **)((int)this + 0x140) + 0x16c))();
    if (iVar6 != 0) {
      iVar6 = (**(code **)(**(int **)((int)this + 0x140) + 0x16c))();
      PostMessageW(*(HWND *)(iVar6 + 0x20),7,0,0);
    }
  }
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&param_1 + 3));
  return;
}

