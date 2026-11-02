// rea decompile_all
// name: FUN_004f063a
// address: 0x4f063a
// body: available
// range: 0x4f063a-0x4f0674 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f063a(void)

{
  int iVar1;
  undefined4 *in_EDX;
  int iVar2;
  int unaff_ESI;
  undefined8 uVar3;
  
  *in_EDX = juce::DropShadower::vftable;
  in_EDX[1] = 0;
  in_EDX[2] = 0;
  in_EDX[3] = 0;
  in_EDX[4] = 0;
  uVar3 = FUN_004d076d();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = (int)uVar3;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  return iVar2;
}

