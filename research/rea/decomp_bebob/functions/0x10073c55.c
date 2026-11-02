// rea decompile_all
// name: FUN_10073c55
// address: 0x10073c55
// body: available
// range: 0x10073c55-0x10073cd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073ccc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CWnd * __thiscall FUN_10073c55(void *this,POINT *param_1)

{
  int iVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  
  if (param_1->y < *(int *)((int)this + 0xf0)) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)((int)this + 0x9c)) {
      do {
        if ((iVar5 < 0) || (*(int *)((int)this + 0x90) <= iVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar1 = *(int *)(*(int *)((int)this + 0x8c) + iVar5 * 4);
        if ((*(int *)(iVar1 + 0x34) != 0) &&
           (BVar3 = PtInRect((RECT *)(iVar1 + 0x10),*param_1), BVar3 != 0)) {
          return (CWnd *)0x0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)this + 0x9c));
    }
    pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar4);
  }
  return pCVar2;
}

