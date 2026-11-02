// rea decompile_all
// name: FUN_0047d80e
// address: 0x47d80e
// body: available
// range: 0x47d80e-0x47d84e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d80e(undefined4 *param_1,int param_2,float param_3,float param_4)

{
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  if (param_3 < param_4) {
    local_14 = (float)param_2;
    local_10 = param_3;
    local_c = 0x3f800000;
    local_8 = param_4 - param_3;
    (**(code **)(*(int *)*param_1 + 0x50))(&local_14);
  }
  return;
}

