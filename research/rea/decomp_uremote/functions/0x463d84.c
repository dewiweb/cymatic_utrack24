// rea decompile_all
// name: FUN_00463d84
// address: 0x463d84
// body: available
// range: 0x463d84-0x463db2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463d84(byte param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  puVar2 = (undefined4 *)in_ECX[1];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *in_ECX = juce::Expression::Scope::Visitor::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005af7b6();
  }
  return;
}

