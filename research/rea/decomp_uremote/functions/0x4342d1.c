// rea decompile_all
// name: FUN_004342d1
// address: 0x4342d1
// body: available
// range: 0x4342d1-0x434330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004342d1(void)

{
  int unaff_ESI;
  
  FUN_0040db0e();
  _memset((void *)(unaff_ESI + 0x18),0,0x20);
  _memset((void *)(unaff_ESI + 0x6c),0,0x14);
  _memset((void *)(unaff_ESI + 0x4c),0,0x18);
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}

