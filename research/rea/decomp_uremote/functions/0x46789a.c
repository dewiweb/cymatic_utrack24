// rea decompile_all
// name: thunk_FUN_0046783a
// address: 0x46789a
// body: available
// range: 0x46789a-0x46789e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void thunk_FUN_0046783a(void)

{
  char cVar1;
  int *in_ECX;
  
  FUN_004677a3();
  *(int **)(*(int *)ThreadLocalStoragePointer + 8) = in_ECX;
  cVar1 = FUN_0046d510(10000);
  if (cVar1 != '\0') {
    if (in_ECX[0xd] != 0) {
      FUN_0046d614(in_ECX[0xd]);
    }
    (**(code **)(*in_ECX + 4))();
  }
  FUN_0046d587();
  FUN_00474d0f();
  return;
}

