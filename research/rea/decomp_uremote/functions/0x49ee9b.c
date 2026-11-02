// rea decompile_all
// name: FUN_0049ee9b
// address: 0x49ee9b
// body: available
// range: 0x49ee9b-0x49ef1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049ee9b(void)

{
  int in_ECX;
  
  FUN_00467647();
  FUN_004a8124();
  if (*(int *)(in_ECX + 0x2c) != 0) {
    _free(*(void **)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  FUN_004652cd();
  FUN_004652cd();
  FUN_004a6802();
  FUN_00474d0f();
  FUN_004652d6();
  FUN_004652d6();
  FUN_004676ca();
  return;
}

