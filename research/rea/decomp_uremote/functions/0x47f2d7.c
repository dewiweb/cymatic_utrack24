// rea decompile_all
// name: FUN_0047f2d7
// address: 0x47f2d7
// body: available
// range: 0x47f2d7-0x47f33a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f2d7(void)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x51c) = in_ECX + 1;
  iVar1 = 1 << ((byte)in_ECX & 0x1f);
  *(int *)(unaff_ESI + 0x520) = in_ECX;
  *(undefined1 *)(unaff_ESI + 0x50d) = 1;
  *(int *)(unaff_ESI + 0x538) = iVar1 + 1;
  *(int *)(unaff_ESI + 0x534) = iVar1;
  *(int *)(unaff_ESI + 0x524) = iVar1 + 2;
  *(int *)(unaff_ESI + 0x528) = iVar1 * 2;
  *(undefined4 *)(unaff_ESI + 0x510) = 0;
  *(undefined4 *)(unaff_ESI + 0x514) = 0;
  *(undefined1 *)(unaff_ESI + 0x50e) = 0;
  FUN_0047f28d();
  *(int *)(unaff_ESI + 0x1053c) = unaff_ESI + 0x853c;
  return;
}

