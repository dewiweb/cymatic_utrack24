// rea decompile_all
// name: FUN_0050c040
// address: 0x50c040
// body: available
// range: 0x50c040-0x50c1be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c040(void)

{
  int in_ECX;
  int *local_18;
  ushort local_8;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0xe4))();
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  local_8 = 0;
  while( true ) {
    local_18 = (int *)0x0;
    if (local_8 < *(ushort *)(in_ECX + -0xa70)) {
      local_18 = *(int **)(*(int *)(in_ECX + -0xa74) + (uint)local_8 * 4);
    }
    local_8 = local_8 + 1;
    if (local_18 == (int *)0x0) break;
    FUN_00515830();
    (**(code **)(*local_18 + 4))();
    FUN_00515860();
  }
  FUN_00515af0();
  FUN_0050a700(0);
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  FUN_0050a630();
  if ((undefined4 *)(in_ECX + -0xb5c) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(in_ECX + -0xb5c))(1);
  }
  return;
}

