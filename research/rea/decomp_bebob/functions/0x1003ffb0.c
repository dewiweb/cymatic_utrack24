// rea decompile_all
// name: CDockingManager::LockUpdate
// address: 0x1003ffb0
// body: available
// range: 0x1003ffb0-0x1004008d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040050 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::LockUpdate(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::LockUpdate(CDockingManager *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CObject *pCVar3;
  undefined4 *puVar4;
  HWND pHVar5;
  
  if ((((param_1 == 0) || (iVar2 = *(int *)(this + 0x1b8), iVar2 == 0)) ||
      (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    *(int *)(this + 8) = param_1;
    if (param_1 == 0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(*(int *)(this + 0xe4) + 0x20);
    }
    LockWindowUpdate(pHVar5);
    puVar4 = *(undefined4 **)(this + 0xcc);
    while (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) goto LAB_10040050;
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1)
      ;
      ValidateRect(*(HWND *)(pCVar3 + 0x20),(RECT *)0x0);
      UpdateWindow(*(HWND *)(pCVar3 + 0x20));
      if (param_1 == 0) {
        pHVar5 = (HWND)0x0;
      }
      else {
        pHVar5 = *(HWND *)(pCVar3 + 0x20);
      }
      LockWindowUpdate(pHVar5);
    }
    puVar4 = *(undefined4 **)(this + 0x24);
    while (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
LAB_10040050:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar2 = puVar4[2];
      puVar4 = (undefined4 *)*puVar4;
      ValidateRect(*(HWND *)(iVar2 + 0x20),(RECT *)0x0);
      UpdateWindow(*(HWND *)(iVar2 + 0x20));
      if (param_1 == 0) {
        pHVar5 = (HWND)0x0;
      }
      else {
        pHVar5 = *(HWND *)(iVar2 + 0x20);
      }
      LockWindowUpdate(pHVar5);
    }
  }
  return;
}

