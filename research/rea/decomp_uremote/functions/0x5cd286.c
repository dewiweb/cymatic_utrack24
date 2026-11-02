// rea decompile_all
// name: FUN_005cd286
// address: 0x5cd286
// body: available
// range: 0x5cd286-0x5cd2ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cd286(void)

{
  LONG LVar1;
  undefined *puVar2;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_009573d0);
  if (LVar1 < 0) {
    puVar2 = &DAT_0095d498;
    do {
      FUN_005cd868(puVar2);
      puVar2 = puVar2 + 0x18;
    } while ((int)puVar2 < 0x95d4f8);
  }
  return;
}

