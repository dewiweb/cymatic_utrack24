// rea decompile_all
// name: FUN_004f0064
// address: 0x4f0064
// body: available
// range: 0x4f0064-0x4f00c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004f0064(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = juce::ReferenceCountedObject::vftable;
  param_1[1] = 0;
  *param_1 = juce::ApplicationCommandTarget::CommandMessage::vftable;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004f7fc4(param_2);
  }
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  FUN_004effb3();
  return param_1;
}

