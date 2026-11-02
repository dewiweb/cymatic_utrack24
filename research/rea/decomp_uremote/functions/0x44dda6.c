// rea decompile_all
// name: FUN_0044dda6
// address: 0x44dda6
// body: available
// range: 0x44dda6-0x44de31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044dda6(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  FUN_004f0392();
  FUN_004dff2a();
  puVar1 = (undefined4 *)FUN_00474777();
  *puVar1 = uTrack24RemoteApplication::vftable;
  *param_1 = uTrack24RemoteApplication::vftable;
  param_1[4] = uTrack24RemoteApplication::vftable;
  param_1[6] = uTrack24RemoteApplication::vftable;
  param_1[8] = uTrack24RemoteApplication::vftable;
  FUN_0044d7b7(param_1 + 0x12);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_0045b595(param_1 + 0x3c);
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  return param_1;
}

