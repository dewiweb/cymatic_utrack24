// rea decompile_all
// name: FUN_004e9780
// address: 0x4e9780
// body: available
// range: 0x4e9780-0x4e97d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e9780(char param_1)

{
  char cVar1;
  undefined4 in_EAX;
  
  cVar1 = FUN_004e97f3();
  if (cVar1 == '\0') {
    FUN_004e9764();
    if (param_1 == '\0') {
      cVar1 = FUN_00472af3();
    }
    else {
      cVar1 = FUN_00472a81();
    }
    if (cVar1 != '\0') {
      FUN_004ea08f();
      FUN_004c1613(in_EAX);
      FUN_004e9c5e();
      return 1;
    }
  }
  return 0;
}

