// rea decompile_all
// name: FUN_0041022b
// address: 0x41022b
// body: available
// range: 0x41022b-0x410272 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041022b(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(*(int *)(*(int *)(*param_1 + 0x60) + 0xc) + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    local_14 = param_2 << 6;
    local_18 = 0;
    local_c = 0;
    local_8 = 0;
    local_10 = param_3 << 6;
    uVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x60) + 0xc) + 0x60))(param_1,&local_18);
  }
  return uVar1;
}

