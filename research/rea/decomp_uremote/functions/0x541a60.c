// rea decompile_all
// name: FUN_00541a60
// address: 0x541a60
// body: available
// range: 0x541a60-0x541b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00541a60(undefined4 param_1,short param_2)

{
  int in_ECX;
  undefined4 in_stack_00000024;
  undefined4 local_30;
  undefined4 local_10;
  undefined2 local_8;
  
  if (param_2 == 0x2020) {
    local_8 = 0;
    while( true ) {
      local_10 = (undefined4 *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 8)) {
        local_10 = *(undefined4 **)(*(int *)(in_ECX + 4) + (uint)local_8 * 4);
      }
      local_8 = local_8 + 1;
      if (local_10 == (undefined4 *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0x178) {
        local_30 = 0;
      }
      else {
        local_30 = in_ECX + -0x150 + *(int *)(*(int *)(in_ECX + -0x150) + 0x10);
      }
      (**(code **)*local_10)(local_30,in_stack_00000024);
      FUN_00515860();
    }
  }
  return;
}

