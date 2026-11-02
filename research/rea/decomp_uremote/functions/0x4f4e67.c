// rea decompile_all
// name: FUN_004f4e67
// address: 0x4f4e67
// body: available
// range: 0x4f4e67-0x4f4ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004f4e67(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0095da90;
  uStack_4 = 0;
  puVar1 = (undefined4 *)&LAB_005dea6b;
  local_8 = 0x4f4e73;
  puVar3 = (undefined4 *)auStack_20;
  if (param_1 == '\0') {
    if (DAT_0095da90 == (undefined4 *)0x0) {
      uStack_24 = 0x14;
      uStack_28 = 0x4f4ea7;
      puVar2 = (undefined4 *)FUN_005af82d();
      puVar3 = (undefined4 *)auStack_20;
      local_8 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        uStack_24 = 0x4f4eba;
        FUN_00474777();
        local_8 = CONCAT31(local_8._1_3_,1);
        *puVar2 = juce::ScreenSaverDefeater::vftable;
        uStack_24 = 0x4f4ece;
        FUN_0047479c();
        uStack_24 = 0x4f4ed5;
        FUN_004f4e1a();
      }
      local_8 = 0xffffffff;
      uStack_24 = 0x4f4ee4;
      puVar1 = (undefined4 *)FUN_004f7458();
    }
  }
  else {
    puVar1 = puVar2;
    if ((DAT_0095da90 != (undefined4 *)0x0) &&
       (DAT_0095da90 = (undefined4 *)0x0, puVar2 != (undefined4 *)0x0)) {
      uStack_24 = 1;
      puVar3 = &uStack_28;
      uStack_28 = 0x4f4e95;
      puVar1 = (undefined4 *)(**(code **)*puVar2)();
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x4f4ee9;
  return puVar1;
}

