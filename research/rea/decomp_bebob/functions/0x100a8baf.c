// rea decompile_all
// name: FUN_100a8baf
// address: 0x100a8baf
// body: available
// range: 0x100a8baf-0x100a8c45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a8c41 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100a8baf(CPalette *param_1,void *param_2)

{
  HGDIOBJ pvVar1;
  CPalette *pCVar2;
  UINT iStart;
  tagPALETTEENTRY local_8;
  
  pCVar2 = param_1;
  if (param_1 == (CPalette *)0x0) {
    param_1 = (CPalette *)0x14;
  }
  else {
    param_1 = (CPalette *)CPalette::GetEntryCount(param_1);
  }
  FUN_10005790(param_2,(int)param_1,-1);
  if (pCVar2 == (CPalette *)0x0) {
    pvVar1 = GetStockObject(0xf);
    pCVar2 = (CPalette *)CGdiObject::FromHandle(pvVar1);
  }
  iStart = 0;
  if (0 < (int)param_1) {
    do {
      GetPaletteEntries(*(HPALETTE *)(pCVar2 + 4),iStart,1,&local_8);
      if (((int)iStart < 0) || (*(int *)((int)param_2 + 8) <= (int)iStart)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      *(uint *)(*(int *)((int)param_2 + 4) + iStart * 4) = (uint)local_8 & 0xffffff;
      iStart = iStart + 1;
    } while ((int)iStart < (int)param_1);
  }
  return (int)param_1;
}

