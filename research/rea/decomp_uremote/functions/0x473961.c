// rea decompile_all
// name: FUN_00473961
// address: 0x473961
// body: available
// range: 0x473961-0x4739d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00473961(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = juce::DeletedAtShutdown::vftable;
  FUN_00467a53();
  piVar3 = (int *)FUN_00473b0b();
  if (piVar3[1] < piVar3[2] + 1) {
    FUN_004f8197();
  }
  iVar2 = piVar3[2];
  piVar3[2] = iVar2 + 1;
  puVar1 = (undefined4 *)(*piVar3 + iVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  LOCK();
  DAT_0095d790 = 0;
  UNLOCK();
  return param_1;
}

