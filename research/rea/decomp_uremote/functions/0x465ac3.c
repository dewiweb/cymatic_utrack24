// rea decompile_all
// name: FUN_00465ac3
// address: 0x465ac3
// body: available
// range: 0x465ac3-0x465b21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00465ac3(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 local_28 [5];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x465acf;
  if (*(char *)*in_ECX == '\0') {
    in_ECX = (undefined4 *)FUN_00465317();
  }
  else if (in_ECX == param_1) {
    local_28[0] = FUN_004652e4();
    local_8 = 0;
    in_ECX = (undefined4 *)FUN_00465ac3();
    local_28[0] = 0x465b06;
    FUN_004652d6();
  }
  else {
    local_14 = (undefined1 *)local_28;
    local_28[0] = *param_1;
    FUN_00465a48(in_ECX);
  }
  return in_ECX;
}

