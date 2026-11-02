// rea decompile_all
// name: FUN_004e2934
// address: 0x4e2934
// body: available
// range: 0x4e2934-0x4e2977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e2934(undefined4 param_1)

{
  char cVar1;
  undefined4 *in_EAX;
  
  cVar1 = FUN_004e2a0a(param_1);
  if (cVar1 != '\0') {
    FUN_004f790c();
    if (in_EAX[1] != 0) {
      _free((void *)*in_EAX);
      *in_EAX = 0;
      in_EAX[1] = 0;
    }
    in_EAX[2] = 0;
    FUN_004f8bc1(param_1);
    FUN_004e2b04();
  }
  return;
}

