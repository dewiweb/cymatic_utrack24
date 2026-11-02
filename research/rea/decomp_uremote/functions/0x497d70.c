// rea decompile_all
// name: FUN_00497d70
// address: 0x497d70
// body: available
// range: 0x497d70-0x497da2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497d9e to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497d70(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  while ((uVar1 = param_2 & 0xff, uVar1 - 0x41 < 0x3a && ((uVar1 < 0x5b || (0x60 < uVar1))))) {
    param_2 = param_2 >> 8;
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

