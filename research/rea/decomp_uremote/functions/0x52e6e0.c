// rea decompile_all
// name: FUN_0052e6e0
// address: 0x52e6e0
// body: available
// range: 0x52e6e0-0x52e725 inclusive
// range: 0x52e728-0x52e731 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e6e0(void)

{
  undefined8 uVar1;
  LARGE_INTEGER local_c;
  
  if (DAT_0095c938 == '\0') {
    GetTickCount();
  }
  else {
    QueryPerformanceCounter(&local_c);
    uVar1 = __allmul(local_c.s.LowPart,local_c.s.HighPart,1000,0);
    __alldiv(uVar1,DAT_0095c940,DAT_0095c944);
  }
  return;
}

