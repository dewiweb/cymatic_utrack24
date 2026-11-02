// rea decompile_all
// name: FUN_00464037
// address: 0x464037
// body: available
// range: 0x464037-0x46409d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00464037(undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  bVar2 = false;
  puVar3 = (undefined4 *)FUN_005af82d(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    in_ECX = param_1;
  }
  else {
    if (in_ECX != (undefined4 *)0x0) {
      in_ECX[1] = in_ECX[1] + 1;
    }
    puVar3[1] = 0;
    *puVar3 = juce::Expression::Helpers::Negate::vftable;
    bVar2 = true;
    puVar3[2] = in_ECX;
    if (in_ECX != (undefined4 *)0x0) {
      in_ECX[1] = in_ECX[1] + 1;
    }
  }
  *param_1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = puVar3[1] + 1;
  }
  if ((bVar2) && (in_ECX != (undefined4 *)0x0)) {
    piVar1 = in_ECX + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*in_ECX)(1);
    }
  }
  return param_1;
}

