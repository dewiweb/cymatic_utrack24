// rea decompile_all
// name: FUN_00411277
// address: 0x411277
// body: available
// range: 0x411277-0x41129e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00411277(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int in_EDX;
  
  puVar4 = *(undefined1 **)(in_EDX + 0x20);
  uVar2 = 0;
  if (puVar4 + 1 < *(undefined1 **)(in_EDX + 0x24)) {
    puVar3 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 2;
    uVar2 = CONCAT11(uVar1,*puVar3);
  }
  *(undefined1 **)(in_EDX + 0x20) = puVar4;
  return uVar2;
}

