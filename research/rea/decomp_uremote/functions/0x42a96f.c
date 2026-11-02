// rea decompile_all
// name: FUN_0042a96f
// address: 0x42a96f
// body: available
// range: 0x42a96f-0x42aa35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a96f(void)

{
  ushort *in_EAX;
  int unaff_ESI;
  
  if ((*in_EAX < *(ushort *)(unaff_ESI + 0x50)) && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x74))) {
    FUN_0042a025(unaff_ESI + 0x122);
    FUN_0042a025(unaff_ESI + 0x126);
    FUN_00429edf();
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}

