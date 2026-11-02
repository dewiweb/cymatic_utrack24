// rea decompile_all
// name: FUN_004d1116
// address: 0x4d1116
// body: available
// range: 0x4d1116-0x4d1173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1116(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int in_EAX;
  
  cVar1 = FUN_004f6530(param_1,param_2);
  if (cVar1 != '\0') {
    *(undefined8 *)(in_EAX + 0x90) = param_1;
    *(undefined8 *)(in_EAX + 0x98) = param_2;
    FUN_004d11a0(3,*(undefined8 *)(in_EAX + 0xa0),*(undefined8 *)(in_EAX + 0xa8));
    FUN_004d142f();
  }
  return;
}

