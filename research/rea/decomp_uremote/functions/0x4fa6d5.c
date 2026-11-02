// rea decompile_all
// name: FUN_004fa6d5
// address: 0x4fa6d5
// body: available
// range: 0x4fa6d5-0x4fa704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa6d5(void)

{
  char cVar1;
  undefined4 uStack_c;
  undefined1 *local_8;
  
  uStack_c = 0x4fa6e1;
  cVar1 = FUN_004fa680();
  if (cVar1 != '\0') {
    local_8 = (undefined1 *)&uStack_c;
    FUN_004d076d();
    FUN_004fc6c6();
    uStack_c = 0x4fa701;
    FUN_004fa6be();
  }
  return;
}

