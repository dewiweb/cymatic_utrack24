// rea decompile_all
// name: FUN_0044a727
// address: 0x44a727
// body: available
// range: 0x44a727-0x44a7b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0044a727(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *apuStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = RemoteDisplay::vftable;
  param_1[0x1c] = RemoteDisplay::vftable;
  param_1[0x1d] = RemoteDisplay::vftable;
  apuStack_24[0] = param_1 + 0x100;
  local_8 = 7;
  FUN_0044a59c();
  apuStack_24[0] = param_1 + 0x26;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00440e11();
  ppuVar1 = apuStack_24;
  apuStack_24[0] = (undefined4 *)0x44a778;
  FUN_004c4d7a();
  ppuVar2 = ppuVar1 + -1;
  ppuVar1[-1] = (undefined4 *)0x44a783;
  FUN_004c4d7a();
  puVar3 = (undefined1 *)((int)ppuVar2 + -4);
  *(undefined4 *)((int)ppuVar2 + -4) = 0x44a78e;
  FUN_004c4d7a();
  puVar4 = puVar3 + -4;
  *(undefined4 *)(puVar3 + -4) = 0x44a799;
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  param_1[0x1d] = uTrack::SettingsListener::vftable;
  param_1[0x1c] = uTrack::StatusListener::vftable;
  *(undefined4 *)(puVar4 + -4) = 0x44a7b2;
  FUN_004bfe57();
  *(undefined4 *)(puVar4 + -4) = 0x44a7b7;
  return;
}

