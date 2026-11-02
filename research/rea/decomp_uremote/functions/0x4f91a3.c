// rea decompile_all
// name: FUN_004f91a3
// address: 0x4f91a3
// body: available
// range: 0x4f91a3-0x4f91e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f91a3(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(param_3 + 0xc) == param_2) {
    local_14 = *param_4;
    local_10 = param_4[1];
  }
  else {
    FUN_004f91a3(&local_14,param_2,*(int *)(param_3 + 0xc),param_4);
  }
  FUN_004f92e9(param_1);
  return param_1;
}

