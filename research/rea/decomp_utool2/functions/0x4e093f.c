// rea decompile_all
// name: FUN_004e093f
// address: 0x4e093f
// body: available
// range: 0x4e093f-0x4e09a1 inclusive
// range: 0x4e09ae-0x4e09b5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e099d to 0x4d4603 _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_004e093f(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d90bf();
  if (((*(uint *)(iVar1 + 0x350) & DAT_00c76494) == 0) ||
     (iVar2 = *(int *)(iVar1 + 0x4c), iVar2 == 0)) {
    ___acrt_lock(4);
    iVar2 = __updatetlocinfoEx_nolock(iVar1 + 0x4c,DAT_00c8a54c);
    FUN_004e09a5();
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return iVar2;
}

