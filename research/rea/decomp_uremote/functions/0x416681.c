// rea decompile_all
// name: FUN_00416681
// address: 0x416681
// body: available
// range: 0x416681-0x416738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416681(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x50));
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x54));
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x58));
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x4c));
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 100));
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x80));
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_ESI + 0x6c));
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  puVar2 = *(undefined4 **)(unaff_ESI + 0x88);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00411a5c(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  return;
}

