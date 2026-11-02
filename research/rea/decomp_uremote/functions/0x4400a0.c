// rea decompile_all
// name: FUN_004400a0
// address: 0x4400a0
// body: available
// range: 0x4400a0-0x4400f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004400a0(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_004c3153();
  if ((cVar1 == '\0') || (*(char *)(in_ECX + 300) != '\0')) {
    FUN_004401b0();
  }
  else {
    if (-1 < *(int *)(in_ECX + 0x114)) {
      FUN_0044016b(0);
    }
    FUN_004f8c45(FUN_004f9c53,in_ECX);
    FUN_004c1613(in_ECX);
  }
  return;
}

