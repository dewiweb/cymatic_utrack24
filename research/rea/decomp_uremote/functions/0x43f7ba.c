// rea decompile_all
// name: FUN_0043f7ba
// address: 0x43f7ba
// body: available
// range: 0x43f7ba-0x43f84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0043f7ba(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = PushButton::vftable;
  param_1[0x1c] = PushButton::vftable;
  local_8 = 8;
  auStack_24[0] = 0x43f7e4;
  FUN_004401b0();
  auStack_24[0] = 0x43f7ef;
  FUN_0047478c();
  auStack_24[0] = 0x43f7fa;
  FUN_0047478c();
  auStack_24[0] = 0x43f805;
  FUN_004652d6();
  puVar1 = auStack_24;
  auStack_24[0] = 0x43f810;
  FUN_004c4d7a();
  puVar1[-1] = 0x43f81b;
  FUN_004f7994();
  puVar1[-1] = 0x43f826;
  FUN_004f7994();
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar1[-1] = param_1[0x21];
  puVar1[-2] = 0x43f835;
  _free((void *)puVar1[-1]);
  puVar1[-1] = 0x43f83d;
  FUN_0047478c();
  local_8 = 0xffffffff;
  puVar1[-1] = 0x43f848;
  FUN_004bfe57();
  puVar1[-1] = 0x43f84d;
  return;
}

