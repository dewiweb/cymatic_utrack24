// rea decompile_all
// name: FUN_0041b62e
// address: 0x41b62e
// body: available
// range: 0x41b62e-0x41b664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b62e(void)

{
  uint *in_EAX;
  int iVar1;
  byte *pbVar2;
  uint unaff_ESI;
  
  if (-1 < (int)unaff_ESI) {
    if (*in_EAX <= unaff_ESI) {
      iVar1 = FUN_0041b5a5();
      if (iVar1 != 0) {
        return iVar1;
      }
      *in_EAX = unaff_ESI + 1;
    }
    pbVar2 = (byte *)(((int)unaff_ESI >> 3) + in_EAX[2]);
    *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)unaff_ESI & 7));
  }
  return 0;
}

