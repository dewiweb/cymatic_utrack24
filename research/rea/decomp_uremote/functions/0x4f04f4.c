// rea decompile_all
// name: FUN_004f04f4
// address: 0x4f04f4
// body: available
// range: 0x4f04f4-0x4f0593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004f04f4(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  FUN_004bfd7b();
  *param_1 = juce::DropShadower::ShadowWindow::vftable;
  FUN_004f5fb6();
  uVar4 = FUN_004d076d();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  FUN_004c0040(1);
  FUN_004c0e0e(0);
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    if (*(int *)(in_ECX + 0xc) != 0) {
      FUN_004c1055(param_1);
    }
  }
  else {
    FUN_004c0be5(1);
    FUN_004c01b6(0x406,0);
  }
  return param_1;
}

