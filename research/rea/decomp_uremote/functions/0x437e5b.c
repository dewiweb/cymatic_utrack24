// rea decompile_all
// name: FUN_00437e5b
// address: 0x437e5b
// body: available
// range: 0x437e5b-0x437e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00437e5b(void)

{
  uint *puVar1;
  uint uVar2;
  uint extraout_EDX;
  int unaff_EBX;
  
  uVar2 = FUN_0041106d();
  if (uVar2 == 0) {
    FUN_00438273();
    puVar1 = (uint *)(unaff_EBX + 0x10b8);
    *puVar1 = *puVar1 & extraout_EDX;
    *(uint **)(unaff_EBX + 0x10c0) = puVar1;
    *(uint **)(unaff_EBX + 0x10bc) = puVar1;
    uVar2 = extraout_EDX;
  }
  return uVar2;
}

