// rea decompile_all
// name: CMFCToolBarButtonsListButton::OnCtlColor
// address: 0x100dfd15
// body: available
// range: 0x100dfd15-0x100dfd97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100dfd78 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HBRUSH__ * __thiscall CMFCToolBarButtonsListButton::OnCtlColor(class CDC
   *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2010 Release */

HBRUSH__ * __thiscall
CMFCToolBarButtonsListButton::OnCtlColor
          (CMFCToolBarButtonsListButton *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int *piVar1;
  HBRUSH__ *pHVar2;
  HWND hWndParent;
  BOOL BVar3;
  HBRUSH__ *pHVar4;
  HWND pHVar5;
  undefined4 *puVar6;
  
  pHVar2 = CWnd::OnCtlColor((CWnd *)this,param_1,param_2,param_3);
  puVar6 = *(undefined4 **)(this + 0x78);
  do {
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_100dfd8e;
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = (int *)puVar6[2];
      puVar6 = (undefined4 *)*puVar6;
      hWndParent = (HWND)(**(code **)(*piVar1 + 0x38))();
    } while (hWndParent == (HWND)0x0);
    if (param_2 == (CWnd *)0x0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(param_2 + 0x20);
    }
    if (hWndParent == pHVar5) break;
    if (param_2 == (CWnd *)0x0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(param_2 + 0x20);
    }
    BVar3 = IsChild(hWndParent,pHVar5);
  } while (BVar3 == 0);
  pHVar4 = (HBRUSH__ *)(**(code **)(*piVar1 + 0x48))(param_1,param_3);
  if (pHVar4 == (HBRUSH__ *)0x0) {
LAB_100dfd8e:
    pHVar4 = pHVar2;
  }
  return pHVar4;
}

