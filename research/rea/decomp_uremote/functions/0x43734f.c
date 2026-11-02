// rea decompile_all
// name: FUN_0043734f
// address: 0x43734f
// body: available
// range: 0x43734f-0x437383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043734f(void)

{
  int unaff_ESI;
  
  if (((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x1c) != 0)) && (*(int *)(unaff_ESI + 0x24) != 0))
  {
    if (*(int *)(*(int *)(unaff_ESI + 0x1c) + 0x14) != 0) {
      FUN_004372e4();
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

