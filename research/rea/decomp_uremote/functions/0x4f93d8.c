// rea decompile_all
// name: FUN_004f93d8
// address: 0x4f93d8
// body: available
// range: 0x4f93d8-0x4f9430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f93d8(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(param_3 + 0xc) == param_2) {
    local_1c = *param_4;
    local_18 = param_4[1];
    local_14 = param_4[2];
    local_10 = param_4[3];
  }
  else {
    FUN_004f93d8(&local_1c,param_2,*(int *)(param_3 + 0xc),param_4);
  }
  FUN_004f9431();
  return param_1;
}

