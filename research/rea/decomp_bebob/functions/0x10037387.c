// rea decompile_all
// name: CKeyboardManager::UpdateAccelTable
// address: 0x10037387
// body: available
// range: 0x10037387-0x10037453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037396 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CKeyboardManager::UpdateAccelTable(class CMultiDocTemplate *,struct
   HACCEL__ *,class CFrameWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CKeyboardManager::UpdateAccelTable
          (CKeyboardManager *this,CMultiDocTemplate *param_1,HACCEL__ *param_2,CFrameWnd *param_3)

{
  CMultiDocTemplate *pCVar1;
  HACCEL__ *pHVar2;
  int *piVar3;
  CWnd *pCVar4;
  CFrameWnd *pCVar5;
  HACCEL hAccel;
  
  pHVar2 = param_2;
  pCVar1 = param_1;
  if (param_2 != (HACCEL__ *)0x0) {
    if (param_1 == (CMultiDocTemplate *)0x0) {
      pCVar5 = param_3;
      if (param_3 == (CFrameWnd *)0x0) {
        pCVar4 = AfxGetMainWnd();
        pCVar5 = (CFrameWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar4);
        if (pCVar5 == (CFrameWnd *)0x0) {
          return 0;
        }
      }
      hAccel = *(HACCEL *)(pCVar5 + 0x80);
      *(HACCEL__ **)(pCVar5 + 0x80) = pHVar2;
    }
    else {
      if ((param_3 != (CFrameWnd *)0x0) ||
         (hAccel = *(HACCEL *)(param_1 + 0x8c), hAccel == (HACCEL)0x0)) goto LAB_10037396;
      *(HACCEL__ **)(param_1 + 0x8c) = param_2;
      param_1 = (CMultiDocTemplate *)(**(code **)(*(int *)param_1 + 0x54))();
      if (param_1 != (CMultiDocTemplate *)0x0) {
        do {
          piVar3 = (int *)(**(code **)(*(int *)pCVar1 + 0x58))(&param_1);
          param_3 = (CFrameWnd *)(**(code **)(*piVar3 + 0x68))();
          while (param_3 != (CFrameWnd *)0x0) {
            pCVar4 = (CWnd *)(**(code **)(*piVar3 + 0x6c))(&param_3);
            pCVar5 = CWnd::GetParentFrame(pCVar4);
            if (*(HACCEL *)(pCVar5 + 0x80) == hAccel) {
              *(HACCEL__ **)(pCVar5 + 0x80) = param_2;
            }
          }
          param_3 = (CFrameWnd *)0x0;
        } while (param_1 != (CMultiDocTemplate *)0x0);
        param_3 = (CFrameWnd *)0x0;
        param_1 = (CMultiDocTemplate *)0x0;
      }
    }
    if (hAccel == (HACCEL)0x0) {
      return 0;
    }
    DestroyAcceleratorTable(hAccel);
    return 1;
  }
LAB_10037396:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

