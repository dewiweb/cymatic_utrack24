// rea decompile_all
// name: FUN_004edd2f
// address: 0x4edd2f
// body: available
// range: 0x4edd2f-0x4edd65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004edd2f(int param_1,int param_2)

{
  int *in_ECX;
  undefined1 local_10 [8];
  float local_8;
  
  local_8 = (float)param_2;
  (**(code **)(*in_ECX + 0x2c))(local_10,(float)param_1,local_8);
  FUN_004f5a5a();
  return;
}

