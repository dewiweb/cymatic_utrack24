// rea decompile_all
// name: FUN_10063d75
// address: 0x10063d75
// body: available
// range: 0x10063d75-0x10063e66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063e62 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_10063d75(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CObject *pCVar3;
  HWND pHVar4;
  CObject *pCVar5;
  CObList local_2c [4];
  undefined4 *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10063d81;
  if (param_1 == (int *)0x0) {
    CObList::CObList(local_2c,10);
    local_8 = 0;
    pHVar4 = GetWindow(*(HWND *)((int)this + 0x20),5);
    pCVar3 = (CObject *)CWnd::FromHandle(pHVar4);
    while (pCVar3 != (CObject *)0x0) {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar3);
      if (pCVar5 != (CObject *)0x0) {
        CObList::AddTail(local_2c,pCVar5);
      }
      pHVar4 = GetWindow(*(HWND *)(pCVar3 + 0x20),2);
      pCVar3 = (CObject *)CWnd::FromHandle(pHVar4);
    }
    while (local_28 != (undefined4 *)0x0) {
      if (local_28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = (undefined4 *)*local_28;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                  (CObject *)local_28[2]);
      SendMessageW(*(HWND *)(pCVar3 + 0x20),0x10,0,0);
      local_28 = puVar1;
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_2c);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x1a8))();
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      pCVar3 = (CObject *)(**(code **)(*param_1 + 0x1ac))(iVar2);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar3);
      if (pCVar3 != (CObject *)0x0) {
        SendMessageW(*(HWND *)(pCVar3 + 0x20),0x10,0,0);
      }
    }
  }
  return;
}

