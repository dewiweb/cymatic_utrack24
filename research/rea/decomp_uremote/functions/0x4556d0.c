// rea decompile_all
// name: FUN_004556d0
// address: 0x4556d0
// body: available
// range: 0x4556d0-0x455784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004556d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = MenusPanel::vftable;
  param_1[0x26] = MenusPanel::vftable;
  param_1[0x27] = MenusPanel::vftable;
  param_1[0x28] = MenusPanel::vftable;
  param_1[0x29] = MenusPanel::vftable;
  local_8 = 6;
  puVar1 = auStack_24;
  auStack_24[0] = 0x455721;
  FUN_004c4d7a();
  puVar1[-1] = param_1 + 0x124;
  puVar1[-2] = 0x45572d;
  FUN_0043f7ba();
  puVar1[-1] = param_1 + 0x4a;
  local_8._0_1_ = 5;
  puVar1[-2] = 0x45573d;
  FUN_00440e11();
  puVar1[-1] = param_1 + 0x2e;
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar1[-2] = 0x45574d;
  FUN_004561cf();
  puVar1[-1] = 0x455754;
  FUN_0047478c();
  local_8 = 0xffffffff;
  param_1[0x28] = PushButton::Listener::vftable;
  param_1[0x27] = uTrack::StatusListener::vftable;
  param_1[0x26] = uTrack::SettingsListener::vftable;
  puVar2 = puVar1 + -1;
  puVar1[-1] = 0x45577d;
  FUN_00445695();
  *(undefined4 *)((int)puVar2 + -4) = 0x455782;
  return;
}

