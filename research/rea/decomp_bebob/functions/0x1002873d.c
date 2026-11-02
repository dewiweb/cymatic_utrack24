// rea decompile_all
// name: CMFCToolBar::SetCustomizeMode
// address: 0x1002873d
// body: available
// range: 0x1002873d-0x1002887b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100287ba to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __stdcall CMFCToolBar::SetCustomizeMode(int)
   
   Library: Visual Studio 2010 Release */

int CMFCToolBar::SetCustomizeMode(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  CWnd *pCVar4;
  ulong uVar5;
  CObject *pCVar6;
  CWnd *pCVar7;
  int *piVar8;
  
  if (DAT_10166e54 == param_1) {
    iVar3 = 0;
  }
  else {
LAB_10028757:
    do {
      iVar3 = DAT_10166ec8;
      bVar2 = false;
      piVar8 = DAT_10166ec0;
      if (DAT_10166ec0 == (int *)0x0) break;
      do {
        if (bVar2) goto LAB_10028757;
        if (piVar8 == (int *)0x0) goto LAB_100287ba;
        piVar1 = (int *)piVar8[2];
        piVar8 = (int *)*piVar8;
        if (piVar1 == (int *)0x0) goto LAB_100287ba;
        pCVar4 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
        if ((pCVar4 != (CWnd *)0x0) &&
           ((**(code **)(*piVar1 + 0x400))(param_1), DAT_10166ec8 != iVar3)) {
          bVar2 = true;
        }
      } while (piVar8 != (int *)0x0);
    } while (bVar2);
    DAT_10166e54 = param_1;
    piVar8 = DAT_10166ec0;
    while (piVar8 != (int *)0x0) {
      if (piVar8 == (int *)0x0) goto LAB_100287ba;
      piVar1 = (int *)piVar8[2];
      piVar8 = (int *)*piVar8;
      if (piVar1 == (int *)0x0) goto LAB_100287ba;
      pCVar4 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
      if ((pCVar4 != (CWnd *)0x0) && (piVar1[0x2c1] == 0)) {
        (**(code **)(*piVar1 + 0x208))();
      }
    }
    bVar2 = false;
    piVar8 = DAT_10166ec0;
    while (piVar8 != (int *)0x0) {
      if (piVar8 == (int *)0x0) {
LAB_100287ba:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar4 = (CWnd *)piVar8[2];
      piVar8 = (int *)*piVar8;
      if (pCVar4 == (CWnd *)0x0) goto LAB_100287ba;
      uVar5 = CWnd::GetExStyle(pCVar4);
      if ((uVar5 & 0x10000000) != 0) {
        pCVar6 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x198))();
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,pCVar6);
        if ((pCVar6 != (CObject *)0x0) && (!bVar2)) {
          bVar2 = true;
          (**(code **)(*(int *)pCVar6 + 0x174))(1);
        }
        pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar4 + 0x20));
        if (pCVar7 != (CWnd *)0x0) {
          RedrawWindow(*(HWND *)(pCVar4 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
        }
      }
    }
    if (param_1 == 0) {
      DAT_10166e84 = 0;
    }
    iVar3 = 1;
  }
  return iVar3;
}

