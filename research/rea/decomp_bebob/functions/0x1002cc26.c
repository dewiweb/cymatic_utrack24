// rea decompile_all
// name: FUN_1002cc26
// address: 0x1002cc26
// body: available
// range: 0x1002cc26-0x1002cce5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cce1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cc26(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  CObject *pCVar5;
  CWnd *pCVar6;
  int iVar7;
  int *piVar8;
  
  puVar2 = DAT_10166ec0;
  do {
    do {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        if (puVar2 == (undefined4 *)0x0) {
LAB_1002cce1:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,(CObject *)*puVar1)
        ;
      } while ((pCVar5 == (CObject *)0x0) ||
              (pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar5 + 0x20)),
              pCVar6 == (CWnd *)0x0));
      piVar8 = *(int **)(pCVar5 + 0xbcc);
      bVar4 = false;
    } while (piVar8 == (int *)0x0);
    do {
      if (piVar8 == (int *)0x0) goto LAB_1002cce1;
      iVar3 = piVar8[2];
      piVar8 = (int *)*piVar8;
      if (iVar3 == 0) break;
      if ((((*(byte *)(iVar3 + 0x24) & 1) == 0) && (*(int *)(iVar3 + 8) != 0)) &&
         (iVar7 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (iVar3 + 0x2c),L'&',0), -1 < iVar7)) {
        InvalidateRect(*(HWND *)(pCVar5 + 0x20),(RECT *)(iVar3 + 0x54),1);
        bVar4 = true;
      }
    } while (piVar8 != (int *)0x0);
    if (bVar4) {
      UpdateWindow(*(HWND *)(pCVar5 + 0x20));
    }
  } while( true );
}

