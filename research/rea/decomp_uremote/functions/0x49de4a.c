// rea decompile_all
// name: FUN_0049de4a
// address: 0x49de4a
// body: available
// range: 0x49de4a-0x49de9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined * FUN_0049de4a(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_0049f6e8();
  FUN_0049defb(&DAT_0095dc7c,uVar1);
  uVar1 = FUN_0049f729();
  FUN_0049defb(&DAT_0095dc80,uVar1);
  uVar1 = FUN_0049f732();
  FUN_0049defb(&DAT_0095dc84,uVar1);
  return &DAT_0095dc7c;
}

