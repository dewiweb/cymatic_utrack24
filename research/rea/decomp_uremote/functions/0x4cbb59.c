// rea decompile_all
// name: FUN_004cbb59
// address: 0x4cbb59
// body: available
// range: 0x4cbb59-0x4cbbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004cbb59(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0;
  local_14 = 0;
  FUN_004721d6(&DAT_0095daa0);
  local_14 = 1;
  thunk_FUN_00472232();
  local_8 = 1;
  FUN_004c902b(local_24,in_ECX + 8);
  FUN_004cc0bf(local_24,param_2);
  FUN_004cb882(in_ECX + 0x144);
  FUN_004cb99b();
  FUN_004722b6();
  return param_1;
}

