// rea decompile_all
// name: FUN_004ead12
// address: 0x4ead12
// body: available
// range: 0x4ead12-0x4ead69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ead12(int param_1)

{
  undefined4 in_ECX;
  
  if (param_1 == 0x1002) {
    FUN_004ea628();
  }
  else if (param_1 == 0x1003) {
    FUN_004eb49d();
  }
  else if (param_1 == 0x1004) {
    FUN_004eb486(in_ECX);
  }
  else if (param_1 == 0x1005) {
    FUN_004eb4b5();
  }
  else if (param_1 == 0x1006) {
    FUN_004eb4c6();
  }
  else if (param_1 == 0x1008) {
    FUN_004e97d8();
  }
  else if (param_1 == 0x1009) {
    FUN_004e97e0();
  }
  return;
}

