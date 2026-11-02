// rea decompile_all
// name: FUN_004382d0
// address: 0x4382d0
// body: available
// range: 0x4382d0-0x438318 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004382d0(void)

{
  void *unaff_ESI;
  
  FUN_00438273();
  if (*(int *)((int)unaff_ESI + 0x58) != (int)unaff_ESI + 100) {
    FUN_00411a5c(*(int *)((int)unaff_ESI + 0x58));
    *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  }
  FUN_00411a5c(*(undefined4 *)((int)unaff_ESI + 0x4c));
  *(undefined4 *)((int)unaff_ESI + 0x4c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x50) = 0;
  _memset(unaff_ESI,0,0xac);
  return;
}

