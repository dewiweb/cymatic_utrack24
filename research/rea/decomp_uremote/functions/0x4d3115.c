// rea decompile_all
// name: FUN_004d3115
// address: 0x4d3115
// body: available
// range: 0x4d3115-0x4d3192 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004d3115(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  
  if (**(char **)(in_ECX + 0x80) != '\0') {
    thunk_FUN_0049f6e8();
    FUN_0049f744();
    cVar1 = FUN_00465948();
    if (cVar1 != '\0') {
      FUN_0049f50b();
      FUN_0049f750((undefined4 *)(in_ECX + 0x80));
      FUN_004a4900(param_1,&param_2);
      FUN_004c4d7a();
      return param_1;
    }
  }
  FUN_004a3fa2(param_1,param_2);
  return param_1;
}

