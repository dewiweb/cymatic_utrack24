// rea decompile_all
// name: FUN_00472d15
// address: 0x472d15
// body: available
// range: 0x472d15-0x472d65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00472d15(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  while (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    puVar3 = *(undefined4 **)(*param_1 + param_1[2] * 4);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  _free((void *)*param_1);
  return;
}

