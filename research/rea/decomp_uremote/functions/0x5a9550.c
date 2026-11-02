// rea decompile_all
// name: FUN_005a9550
// address: 0x5a9550
// body: available
// range: 0x5a9550-0x5a9632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9550(char param_1)

{
  int in_ECX;
  int local_28;
  int *local_10;
  ushort local_8;
  
  local_8 = 0;
  while( true ) {
    local_10 = (int *)0x0;
    if (local_8 < *(ushort *)(in_ECX + 0x114)) {
      local_10 = *(int **)(*(int *)(in_ECX + 0x110) + (uint)local_8 * 4);
    }
    local_8 = local_8 + 1;
    if (local_10 == (int *)0x0) break;
    FUN_00515830();
    if (in_ECX == 0) {
      local_28 = 0;
    }
    else {
      local_28 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10);
    }
    (**(code **)(*local_10 + 8))(local_28,&DAT_0095c854,(-(uint)(param_1 != '\0') & 0x1000) + 5);
    FUN_00515860();
  }
  return;
}

