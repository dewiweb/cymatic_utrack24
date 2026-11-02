// rea decompile_all
// name: FUN_0052f300
// address: 0x52f300
// body: available
// range: 0x52f300-0x52f390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052f300(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined2 *)(in_ECX + 0x4e) = 0;
  FUN_005376f0();
  FUN_005376f0();
  FUN_0052f6b0();
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_0052f1a0();
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  return 0;
}

