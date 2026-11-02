// rea decompile_all
// name: FUN_10003400
// address: 0x10003400
// body: available
// range: 0x10003400-0x100034a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003414 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000349e to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003400(CArchive *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = param_3;
  if ((param_3 != (void *)0x0) && (param_2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  param_3 = param_2;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    if (pvVar4 != (void *)0x0) {
      while( true ) {
        pvVar3 = pvVar4;
        if ((void *)0x1ffffffe < pvVar4) {
          pvVar3 = (void *)0x1fffffff;
        }
        uVar1 = (int)pvVar3 * 4;
        uVar2 = CArchive::Read(param_1,param_3,uVar1);
        if (uVar2 != uVar1) break;
        param_3 = (void *)((int)param_3 + uVar1);
        pvVar4 = (void *)((int)pvVar4 - (int)pvVar3);
        if (pvVar4 == (void *)0x0) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1000937c(3,(char *)0x0);
    }
  }
  else {
    for (; pvVar4 != (void *)0x0; pvVar4 = (void *)((int)pvVar4 - (int)pvVar3)) {
      pvVar3 = pvVar4;
      if ((void *)0x1ffffffe < pvVar4) {
        pvVar3 = (void *)0x1fffffff;
      }
      CArchive::Write(param_1,param_2,(int)pvVar3 * 4);
      param_2 = (void *)((int)param_2 + (int)pvVar3 * 4);
    }
  }
  return;
}

