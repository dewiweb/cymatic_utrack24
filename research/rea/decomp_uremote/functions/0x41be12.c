// rea decompile_all
// name: FUN_0041be12
// address: 0x41be12
// body: available
// range: 0x41be12-0x41be49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041be12(void)

{
  void *unaff_ESI;
  
  _memset(unaff_ESI,0,0x1c);
  *(undefined1 **)((int)unaff_ESI + 4) = &LAB_0041bdce;
  *(undefined1 **)((int)unaff_ESI + 8) = &LAB_0041bd9c;
  *(code **)((int)unaff_ESI + 0xc) = FUN_0041bdda;
  *(code **)((int)unaff_ESI + 0x10) = FUN_0041bbf1;
  *(code **)((int)unaff_ESI + 0x14) = FUN_0041bc9e;
  *(code **)((int)unaff_ESI + 0x18) = FUN_0041d918;
  return;
}

