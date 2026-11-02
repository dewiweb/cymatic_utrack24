// rea decompile_all
// name: FUN_004ef95e
// address: 0x4ef95e
// body: available
// range: 0x4ef95e-0x4efa26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004ef95e(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_004bfde7(param_2);
  *param_1 = juce::TopLevelWindow::vftable;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((int)param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  param_1[0x1d] = 0;
  FUN_004c0483();
  if (param_3 == '\0') {
    FUN_004efb88();
  }
  else {
    uVar6 = 0;
    uVar4 = FUN_004efb70(0);
    FUN_004c01b6(uVar4,uVar6);
  }
  FUN_004c2ddc();
  FUN_004c1523();
  iVar5 = FUN_004ef786();
  if (*(int *)(iVar5 + 0x1c) < *(int *)(iVar5 + 0x20) + 1) {
    FUN_004f8197();
  }
  iVar2 = *(int *)(iVar5 + 0x20);
  *(int *)(iVar5 + 0x20) = iVar2 + 1;
  puVar1 = (undefined4 *)(*(int *)(iVar5 + 0x18) + iVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  FUN_0047479c();
  uVar3 = FUN_004ef830();
  *(undefined1 *)((int)param_1 + 0x72) = uVar3;
  return param_1;
}

