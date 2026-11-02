// rea decompile_all
// name: FUN_004e7e90
// address: 0x4e7e90
// body: available
// range: 0x4e7e90-0x4e7f08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e7e90(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 unaff_ESI;
  
  if (in_ECX == 0) {
    FUN_0046642b(unaff_ESI,param_1);
  }
  else {
    cVar1 = FUN_004e7e03();
    if (cVar1 == '\0') {
      FUN_00465544();
      FUN_004d076d();
      FUN_00465f7f();
      FUN_004652d6();
    }
    else {
      FUN_004652e4();
    }
  }
  return param_1;
}

