// rea decompile_all
// name: FUN_00463eb2
// address: 0x463eb2
// body: available
// range: 0x463eb2-0x463f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00463eb2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  *param_1 = 0;
  local_8 = 0;
  FUN_004652cd();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00463088(local_18);
  FUN_0046e4a0();
  if (local_18[0] != (undefined4 *)0x0) {
    piVar1 = local_18[0] + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_18[0])(1);
    }
  }
  FUN_00465317(param_3);
  FUN_004652d6();
  return param_1;
}

