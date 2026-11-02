// rea decompile_all
// name: FUN_004e55ec
// address: 0x4e55ec
// body: available
// range: 0x4e55ec-0x4e563f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e55ec(int param_1)

{
  char cVar1;
  int in_ECX;
  
  FUN_004c2c15(300);
  cVar1 = FUN_004c3153();
  if ((cVar1 == '\0') || (cVar1 = '\x01', (*(uint *)(param_1 + 0x10) >> 5 & 1) != 0)) {
    cVar1 = '\0';
  }
  *(char *)(in_ECX + 0xa8) = cVar1;
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0x14) != in_ECX) && (cVar1 = FUN_004bf53c(), cVar1 != '\0')) {
      return;
    }
    FUN_004e53cb();
  }
  return;
}

