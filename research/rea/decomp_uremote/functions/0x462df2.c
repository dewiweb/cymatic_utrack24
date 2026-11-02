// rea decompile_all
// name: FUN_00462df2
// address: 0x462df2
// body: available
// range: 0x462df2-0x462e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00462df2(undefined4 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  FUN_0046207d(param_2,param_4,param_5);
  if (param_5 == (undefined4 *)0x0) {
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_005af82d(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      piVar2 = (int *)(in_ECX + 8);
      if (param_3 == *piVar2) {
        piVar2 = (int *)(in_ECX + 0xc);
      }
      (**(code **)(*(int *)*piVar2 + 8))();
      FUN_00461e31();
      *puVar1 = juce::Expression::Helpers::Divide::vftable;
    }
    *param_1 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = puVar1[1] + 1;
    }
    if (param_5 != (undefined4 *)0x0) {
      piVar2 = param_5 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*param_5)(1);
      }
    }
  }
  return param_1;
}

