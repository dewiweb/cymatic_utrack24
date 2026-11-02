// rea decompile_all
// name: FUN_0043ed56
// address: 0x43ed56
// body: available
// range: 0x43ed56-0x43eded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0043ed56(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  float10 extraout_ST0;
  
  FUN_004652cd();
  if (*(float *)(in_ECX + 0x78) != 0.0) {
    iVar1 = FUN_005b3fb0();
    if (extraout_ST0 - (float10)iVar1 == (float10)0.0) {
      FUN_004658d9(param_2,0);
      goto LAB_0043edc9;
    }
  }
  FUN_00465896(param_2);
LAB_0043edc9:
  FUN_00465317(param_1);
  FUN_004652d6();
  FUN_00465ac3(in_ECX + 0x80);
  return param_1;
}

