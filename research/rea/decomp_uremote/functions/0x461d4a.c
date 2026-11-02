// rea decompile_all
// name: FUN_00461d4a
// address: 0x461d4a
// body: available
// range: 0x461d4a-0x461d74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00461d4a(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar3 = (undefined4 *)FUN_005af82d(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = *(undefined1 *)(in_ECX + 0x10);
    uVar1 = *(undefined8 *)(in_ECX + 8);
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 2) = uVar1;
    *puVar3 = juce::Expression::Helpers::Constant::vftable;
    *(undefined1 *)(puVar3 + 4) = uVar2;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

