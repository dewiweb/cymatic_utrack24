// rea decompile_all
// name: FUN_0050b5e0
// address: 0x50b5e0
// body: available
// range: 0x50b5e0-0x50b698 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b5e0(void)

{
  int in_ECX;
  undefined2 in_stack_00000010;
  undefined4 *local_14;
  ushort local_8;
  
  if ((*(ushort *)(in_ECX + 0xe4) & 1) != 0) {
    local_8 = 0;
    while( true ) {
      local_14 = (undefined4 *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 0xe0)) {
        local_14 = *(undefined4 **)(*(int *)(in_ECX + 0xdc) + (uint)local_8 * 4);
      }
      local_8 = local_8 + 1;
      if (local_14 == (undefined4 *)0x0) break;
      FUN_00515830();
      FUN_005033e0(&stack0x00000004);
      (**(code **)*local_14)();
      FUN_00515860();
    }
  }
  return;
}

