// rea decompile_all
// name: FUN_004596cc
// address: 0x4596cc
// body: available
// range: 0x4596cc-0x4598e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004596cc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_004bfd7b();
  param_1[0x1c] = uTrack::StatusListener::vftable;
  param_1[0x1d] = uTrack::SettingsListener::vftable;
  puVar1 = (undefined4 *)FUN_00474777();
  *puVar1 = StatusHeader::vftable;
  *param_1 = StatusHeader::vftable;
  param_1[0x1c] = StatusHeader::vftable;
  param_1[0x1d] = StatusHeader::vftable;
  param_1[0x23] = param_2;
  FUN_0049f4b3();
  FUN_0049f4b3();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_004652cd();
  FUN_0047888f();
  FUN_0047888f();
  FUN_0045a667(param_1);
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 1;
  FUN_00479464(param_1 + 0x35,0,0,0x42200000,0x42200000);
  FUN_00478a11(param_1 + 0x35,0,0x3e4ccccd,0x3f800000,0x3f19999a);
  FUN_00479368(param_1 + 0x3d,0,0,0x42200000,0x41a00000,0,0x42200000);
  FUN_00478a11(param_1 + 0x3d,0,0x3e4ccccd,0x3f800000,0x3f19999a);
  FUN_0043e015();
  FUN_0044a54a();
  FUN_0045a1c5();
  FUN_0045a33a();
  return param_1;
}

