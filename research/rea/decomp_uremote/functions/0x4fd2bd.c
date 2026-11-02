// rea decompile_all
// name: FUN_004fd2bd
// address: 0x4fd2bd
// body: available
// range: 0x4fd2bd-0x4fd33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd2bd(void)

{
  undefined2 *unaff_ESI;
  char *unaff_EDI;
  
  _memset(unaff_ESI,0,0x28);
  *(undefined4 *)(unaff_ESI + 2) = 0x25;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  *(undefined1 *)(unaff_ESI + 0xd) = 0;
  *unaff_ESI = 0x28;
  unaff_ESI[1] = 1;
  *(char *)((int)unaff_ESI + 9) = unaff_EDI[4] + unaff_EDI[8] + *unaff_EDI;
  *(char *)(unaff_ESI + 5) = *unaff_EDI;
  *(char *)(unaff_ESI + 6) = unaff_EDI[4];
  *(char *)(unaff_ESI + 7) = unaff_EDI[8];
  *(char *)(unaff_ESI + 8) = unaff_EDI[0xc];
  *(char *)((int)unaff_ESI + 0x17) = unaff_EDI[0x10];
  *(char *)(unaff_ESI + 0xc) = unaff_EDI[0x14];
  *(char *)(unaff_ESI + 9) = unaff_EDI[0x20] + unaff_EDI[0x24] + unaff_EDI[0x1c] + unaff_EDI[0x18];
  *(char *)((int)unaff_ESI + 0x13) = unaff_EDI[0x18];
  *(char *)(unaff_ESI + 10) = unaff_EDI[0x1c];
  *(char *)((int)unaff_ESI + 0x15) = unaff_EDI[0x20];
  *(char *)(unaff_ESI + 0xb) = unaff_EDI[0x24];
  return;
}

