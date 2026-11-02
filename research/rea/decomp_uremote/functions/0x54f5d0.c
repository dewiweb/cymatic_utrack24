// rea decompile_all
// name: FUN_0054f5d0
// address: 0x54f5d0
// body: available
// range: 0x54f5d0-0x54f6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f5d0(void)

{
  int *in_ECX;
  int local_20;
  undefined4 *local_10;
  ushort local_8;
  
  (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  while( true ) {
    local_10 = (undefined4 *)0x0;
    if (local_8 < *(ushort *)(in_ECX + 0x10)) {
      local_10 = *(undefined4 **)(in_ECX[0xf] + (uint)local_8 * 4);
    }
    local_8 = local_8 + 1;
    if (local_10 == (undefined4 *)0x0) break;
    FUN_00515830();
    if (in_ECX == (int *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = (int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28;
    }
    (**(code **)*local_10)(local_20);
    FUN_00515860();
  }
  FUN_00515e80(in_ECX);
  return;
}

