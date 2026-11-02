// rea decompile_all
// name: FUN_004e36ca
// address: 0x4e36ca
// body: available
// range: 0x4e36ca-0x4e371f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e36ca(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x18) + -1;
  if (-1 < iVar1) {
    do {
      FUN_004c2119(unaff_EDI + 8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = *(int *)(unaff_EDI + 0x24) + -1;
  if (-1 < iVar1) {
    do {
      FUN_004e2b26(unaff_EDI + 0xc);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  FUN_0043f3c8();
  if (*(int *)(unaff_EDI + 0x20) != 0) {
    _free(*(void **)(unaff_EDI + 0x1c));
    *(undefined4 *)(unaff_EDI + 0x1c) = 0;
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  return;
}

