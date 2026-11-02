// rea decompile_all
// name: FUN_004cbd5a
// address: 0x4cbd5a
// body: available
// range: 0x4cbd5a-0x4cbdd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004cbd5a(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar3 = (undefined4 *)auStack_20;
  *param_1 = juce::DrawableShape::vftable;
  local_8 = 5;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    uStack_24 = 1;
    puVar3 = &uStack_28;
    uStack_28 = 0x4cbd86;
    (*(code *)**(undefined4 **)param_1[0x50])();
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((undefined4 *)param_1[0x4f] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x4f];
    *(undefined4 *)((int)puVar3 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar4 = (undefined4 *)((int)puVar3 + -8);
    puVar3 = (undefined4 *)((int)puVar3 + -8);
    *puVar4 = 0x4cbd9a;
    (*pcVar2)();
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbda5;
  FUN_004cbcb4();
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbdb0;
  FUN_004cbcb4();
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbdbb;
  FUN_004f7994();
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbdc6;
  FUN_004f7994();
  local_8 = 0xffffffff;
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbdd1;
  FUN_004c8bcc();
  *(undefined4 *)((int)puVar3 + -4) = 0x4cbdd6;
  return;
}

