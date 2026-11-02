// rea decompile_all
// name: FUN_0047564a
// address: 0x47564a
// body: available
// range: 0x47564a-0x4756cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_0047564a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005af82d();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004a824e();
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_00474f39();
  FUN_00476c45();
  param_1[0x14] = 0x3f800000;
  param_1[0x13] = 1;
  FUN_0049f50b();
  FUN_0049f4b3();
  return param_1;
}

