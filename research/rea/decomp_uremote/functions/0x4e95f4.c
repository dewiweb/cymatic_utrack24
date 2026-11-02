// rea decompile_all
// name: FUN_004e95f4
// address: 0x4e95f4
// body: available
// range: 0x4e95f4-0x4e9763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e95f4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = juce::TextEditor::vftable;
  param_1[0x1c] = juce::TextEditor::vftable;
  param_1[0x1d] = juce::TextEditor::vftable;
  if ((*(byte *)(param_1 + 0x25) & 0x80) != 0) {
    piVar2 = (int *)FUN_004c0453();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x6c))();
    }
  }
  if (param_1[0x20] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x20] + 0x84;
  }
  FUN_004719b3(iVar3);
  FUN_004717a6();
  FUN_0047190d();
  FUN_00471876();
  puVar1 = (undefined4 *)param_1[0x1f];
  if ((puVar1 != (undefined4 *)0x0) && (param_1[0x1f] = 0, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1[0x20] = 0;
  _free((void *)param_1[0x50]);
  _free((void *)param_1[0x4d]);
  FUN_00471876();
  if (*(char *)(param_1 + 0x46) == '\0') {
    param_1[0x45] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x45];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_004652d6();
  FUN_004f667a();
  FUN_004c4d7a();
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  FUN_0047278f(param_1 + 0x26);
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
  }
  FUN_004bf31a();
  param_1[0x1c] = juce::TextInputTarget::vftable;
  FUN_004bfe57();
  return;
}

