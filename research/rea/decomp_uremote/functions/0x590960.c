// rea decompile_all
// name: FUN_00590960
// address: 0x590960
// body: available
// range: 0x590960-0x590a0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00590960(ushort param_1,int param_2,char param_3,undefined1 param_4)

{
  int *piVar1;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_c;
  
  local_c = 0;
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28 +
                                       *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc)) +
                              0x100))(param_1 + 2);
  if (param_3 != '\0') {
    local_c = (**(code **)(*piVar1 + 0x74))();
  }
  if (local_c == 0) {
    if (param_2 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc);
    }
    local_c = (**(code **)(*piVar1 + 0x70))(local_18,param_4);
  }
  return local_c;
}

