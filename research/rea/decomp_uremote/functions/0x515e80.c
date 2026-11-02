// rea decompile_all
// name: FUN_00515e80
// address: 0x515e80
// body: available
// range: 0x515e80-0x515edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515e80(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = FUN_005160b0(); local_8 != 0; local_8 = FUN_00516110(local_8)) {
    if (*(int *)(local_8 + 0x14) == param_1) {
      *(undefined1 *)(*(int *)(local_8 + 0x14) + 0x44) = 1;
      *(undefined1 *)(local_8 + 0x1c) = 1;
      *(undefined4 *)(local_8 + 0x18) = 0;
    }
  }
  return;
}

