// rea decompile_all
// name: FUN_004e3079
// address: 0x4e3079
// body: available
// range: 0x4e3079-0x4e30d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e30d4 to 0x4642a4 FUN_004642a4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e3079(undefined4 param_1,int *param_2)

{
  char cVar1;
  int in_ECX;
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4e3085;
  cVar1 = FUN_00465948();
  if ((cVar1 != '\0') && (*(int *)(*(int *)(in_ECX + 4) + 0xc) != 0)) {
    FUN_004640ba();
    local_18[0] = juce::MarkerListScope::vftable;
    local_8 = 0;
    (**(code **)(*param_2 + 4))(local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004642a4(param_1,param_2);
}

