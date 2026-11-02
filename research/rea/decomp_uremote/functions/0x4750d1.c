// rea decompile_all
// name: FUN_004750d1
// address: 0x4750d1
// body: available
// range: 0x4750d1-0x4750f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004750d1(void)

{
  int in_EAX;
  float10 fVar1;
  
  if (*(char *)(in_EAX + 0x20) == '\0') {
    fVar1 = (float10)FUN_0047767f();
    fVar1 = (float10)FUN_00474d74((float)fVar1);
  }
  else {
    fVar1 = (float10)1;
  }
  return (float10)(float)fVar1;
}

