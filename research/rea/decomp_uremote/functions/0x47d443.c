// rea decompile_all
// name: FUN_0047d443
// address: 0x47d443
// body: available
// range: 0x47d443-0x47d49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047d443(void)

{
  undefined4 *extraout_EDX;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined *local_48;
  undefined1 local_34 [32];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x47d44f;
  local_48 = (undefined *)0x47d457;
  FUN_0047888f();
  local_8 = 0;
  local_54 = *extraout_EDX;
  local_14 = (undefined1 *)&local_54;
  local_50 = extraout_EDX[1];
  local_4c = (undefined1 *)extraout_EDX[2];
  local_48 = (undefined *)extraout_EDX[3];
  FUN_00479493();
  local_48 = &DAT_0095d798;
  local_4c = local_34;
  local_50 = 0x47d48e;
  FUN_0047d2ae();
  local_48 = (undefined *)0x47d496;
  FUN_004f7994();
  return;
}

