// rea decompile_all
// name: FUN_0042ab66
// address: 0x42ab66
// body: available
// range: 0x42ab66-0x42ab98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ab66(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = in_ECX[1];
  if (iVar1 - 1U < 2) {
    iVar2 = 0;
    if (*in_ECX != 0) {
      iVar2 = iVar1;
    }
    *(byte *)(unaff_ESI + 0x150) = ~(byte)iVar1 & *(byte *)(unaff_ESI + 0x150) | (byte)iVar2;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}

