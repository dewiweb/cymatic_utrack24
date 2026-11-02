// rea decompile_all
// name: FUN_0044a5f5
// address: 0x44a5f5
// body: available
// range: 0x44a5f5-0x44a709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044a5f5(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *extraout_EDX;
  
  FUN_004bfd7b();
  param_1[0x1c] = uTrack::StatusListener::vftable;
  param_1[0x1d] = uTrack::SettingsListener::vftable;
  *param_1 = RemoteDisplay::vftable;
  param_1[0x1c] = RemoteDisplay::vftable;
  param_1[0x1d] = RemoteDisplay::vftable;
  param_1[0x1e] = param_2;
  FUN_0049f4b3();
  FUN_0049f4b3();
  FUN_0049f4b3();
  FUN_0049f4b3();
  FUN_00440cef(param_1 + 0x26);
  FUN_004bfd7b();
  *extraout_EDX = RemoteDisplay::MyView::vftable;
  FUN_0049f4b3();
  FUN_0043e015();
  FUN_0044a54a();
  FUN_00440ea9(param_1 + 0x100);
  FUN_00440efe(0);
  FUN_004c1055(param_1 + 0x26);
  FUN_004c0483();
  FUN_0044a7ba();
  return param_1;
}

