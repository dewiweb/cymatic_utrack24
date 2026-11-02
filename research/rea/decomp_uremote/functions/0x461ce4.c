// rea decompile_all
// name: FUN_00461ce4
// address: 0x461ce4
// body: available
// range: 0x461ce4-0x461d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x461d2b with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00461ce4(void)

{
  code *pcVar1;
  undefined **local_24 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x461cf0;
  FUN_0046537e(local_14);
  local_8 = 0;
  std::exception::exception((exception *)local_24);
  local_24[0] = juce::Expression::Helpers::EvaluationError::vftable;
  FUN_004652e4(local_14);
  __CxxThrowException_8(local_24,&DAT_009416d8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

