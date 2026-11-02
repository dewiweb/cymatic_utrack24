// rea decompile_all
// name: FUN_00472018
// address: 0x472018
// body: available
// range: 0x472018-0x472090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00472018(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,byte param_6)

{
  byte in_CL;
  
  *param_1 = juce::ValueTree::SharedObject::SetPropertyAction::vftable;
  param_1[1] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    UNLOCK();
  }
  FUN_0046504a(param_1 + 2,param_3);
  FUN_00461605();
  FUN_00461605();
  *(byte *)(param_1 + 0xc) = (in_CL & 1) * '\x02' | *(byte *)(param_1 + 0xc) & 0xfc | param_6 & 1;
  return param_1;
}

