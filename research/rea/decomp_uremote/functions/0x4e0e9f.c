// rea decompile_all
// name: FUN_004e0e9f
// address: 0x4e0e9f
// body: available
// range: 0x4e0e9f-0x4e0f2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004e0e9f(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0xf8) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(*(int *)(unaff_EDI + 0xf0) + iVar3 * 4);
    do {
      if (((undefined4 *)*piVar4)[6] == param_1) {
        return (undefined4 *)*piVar4;
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -1;
    } while (-1 < iVar3);
  }
  puVar1 = (undefined4 *)FUN_005af82d(0x40);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004d076d();
    FUN_00474777();
    *puVar1 = juce::PopupMenu::HelperClasses::MouseSourceState::vftable;
    puVar1[5] = unaff_EDI;
    FUN_004d076d();
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined8 *)(puVar1 + 10) = 0x3ff0000000000000;
    uVar2 = FUN_00467ec4();
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xc] = uVar2;
    puVar5 = puVar1;
  }
  FUN_004f6e80(puVar5);
  return puVar5;
}

