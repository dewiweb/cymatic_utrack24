// rea decompile_all
// name: FUN_0046cedf
// address: 0x46cedf
// body: available
// range: 0x46cedf-0x46cf3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046cedf(void)

{
  char cVar1;
  int iVar2;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = 1;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 1;
  unaff_EDI[3] = 0;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  _memset(unaff_EDI + 4,0,0x38);
  iVar2 = FUN_00469f82();
  cVar1 = '\x01' - (iVar2 != 0);
  unaff_EDI[3] = cVar1;
  unaff_EDI[2] = cVar1 == '\0';
  *unaff_EDI = cVar1 == '\0';
  return;
}

