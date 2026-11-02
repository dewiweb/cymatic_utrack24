// rea decompile_all
// name: FUN_00459901
// address: 0x459901
// body: available
// range: 0x459901-0x459a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00459901(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = StatusHeader::vftable;
  param_1[0x1c] = StatusHeader::vftable;
  param_1[0x1d] = StatusHeader::vftable;
  param_1[0x1e] = StatusHeader::vftable;
  local_8 = 0x14;
  auStack_24[0] = 0x45993f;
  FUN_004bfe57();
  auStack_24[0] = 0x45994a;
  FUN_004f7994();
  auStack_24[0] = 0x459955;
  FUN_004f7994();
  auStack_24[0] = 0x459960;
  FUN_004652d6();
  auStack_24[0] = 0x45996b;
  FUN_004652d6();
  auStack_24[0] = 0x459976;
  FUN_004652d6();
  auStack_24[0] = 0x459981;
  FUN_004652d6();
  auStack_24[0] = 0x45998c;
  FUN_004652d6();
  auStack_24[0] = 0x459997;
  FUN_004652d6();
  auStack_24[0] = 0x4599a2;
  FUN_004652d6();
  auStack_24[0] = 0x4599ad;
  FUN_004652d6();
  auStack_24[0] = 0x4599b8;
  FUN_004652d6();
  auStack_24[0] = 0x4599c3;
  FUN_004652d6();
  auStack_24[0] = 0x4599ce;
  FUN_004652d6();
  auStack_24[0] = 0x4599d9;
  FUN_004652d6();
  auStack_24[0] = 0x4599e4;
  FUN_004652d6();
  puVar1 = auStack_24;
  auStack_24[0] = 0x4599ef;
  FUN_004c4d7a();
  puVar2 = puVar1 + -1;
  puVar1[-1] = 0x4599fa;
  FUN_004c4d7a();
  *(undefined4 *)((int)puVar2 + -4) = 0x459a01;
  FUN_0047478c();
  local_8 = 0xffffffff;
  param_1[0x1d] = uTrack::SettingsListener::vftable;
  param_1[0x1c] = uTrack::StatusListener::vftable;
  *(undefined4 *)((int)puVar2 + -4) = 0x459a1a;
  FUN_004bfe57();
  *(undefined4 *)((int)puVar2 + -4) = 0x459a1f;
  return;
}

