// rea decompile_all
// name: FUN_10040d81
// address: 0x10040d81
// body: available
// range: 0x10040d81-0x10040ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040eb7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10040d81(void *this,HWND param_1)

{
  int iVar1;
  BOOL BVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  __POSITION *p_Var5;
  HWND pHVar6;
  undefined4 *puVar7;
  
  if (*(CObject **)((int)this + 0xe4) != (CObject *)0x0) {
    iVar1 = CObject::IsKindOf(*(CObject **)((int)this + 0xe4),
                              (CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c);
    if (param_1 == (HWND)0x0) {
      puVar7 = *(undefined4 **)((int)this + 0xcc);
LAB_10040eaa:
      if (puVar7 != (undefined4 *)0x0) {
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pCVar4 = (CObject *)puVar7[2];
        puVar7 = (undefined4 *)*puVar7;
        if (pCVar4 == (CObject *)0x0) {
          pHVar6 = (HWND)0x0;
        }
        else {
          pHVar6 = *(HWND *)(pCVar4 + 0x20);
        }
        param_1 = pHVar6;
        BVar2 = IsWindow(pHVar6);
        if ((BVar2 != 0) && (BVar2 = IsWindowVisible(pHVar6), BVar2 != 0)) {
          if (iVar1 == 0) {
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,pCVar4);
            pCVar4 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x1a4))();
            pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8,pCVar4);
            if (pCVar4 == (CObject *)0x0) goto LAB_10040eaa;
          }
          ShowWindow(pHVar6,0);
          p_Var5 = CList<HWND__*,HWND__*&>::Find
                             ((CList<HWND__*,HWND__*&> *)((int)this + 0x164),&param_1,
                              (__POSITION *)0x0);
          if (p_Var5 == (__POSITION *)0x0) {
            CList<unsigned_int,unsigned_int&>::AddTail
                      ((CList<unsigned_int,unsigned_int&> *)((int)this + 0x164),(uint *)&param_1);
          }
        }
        goto LAB_10040eaa;
      }
    }
    else {
      puVar7 = *(undefined4 **)((int)this + 0x168);
      while (puVar7 != (undefined4 *)0x0) {
        pHVar6 = (HWND)puVar7[2];
        puVar7 = (undefined4 *)*puVar7;
        BVar2 = IsWindow(pHVar6);
        if (BVar2 != 0) {
          pCVar3 = CWnd::FromHandle(pHVar6);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,
                                      (CObject *)pCVar3);
          if ((pCVar4 != (CObject *)0x0) &&
             (iVar1 = (**(code **)(*(int *)pCVar4 + 0x19c))(), 0 < iVar1)) {
            ShowWindow(pHVar6,4);
          }
        }
      }
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)((int)this + 0x164));
    }
  }
  return;
}

