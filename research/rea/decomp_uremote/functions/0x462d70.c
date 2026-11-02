// rea decompile_all
// name: FUN_00462d70
// address: 0x462d70
// body: available
// range: 0x462d70-0x462dc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00462d70(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar2 = (undefined4 *)FUN_005af82d(0x10);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = *(int **)(in_ECX + 8);
    (**(code **)(**(int **)(in_ECX + 0xc) + 8))();
    (**(code **)(*piVar1 + 8))();
    FUN_00461e31();
    *puVar2 = juce::Expression::Helpers::Multiply::vftable;
    puVar3 = puVar2;
  }
  return puVar3;
}

