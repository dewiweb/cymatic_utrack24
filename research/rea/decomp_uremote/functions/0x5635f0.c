// rea decompile_all
// name: FUN_005635f0
// address: 0x5635f0
// body: available
// range: 0x5635f0-0x563679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005635f0(int *param_1)

{
  int in_ECX;
  int *local_14;
  int *local_c;
  undefined1 local_5;
  
  local_5 = 0;
  FUN_0054f6b0();
  if (in_ECX == 0x18c) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = (int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc));
  }
  local_c = local_14;
  do {
    if (local_c == (int *)0x0) {
LAB_00563663:
      FUN_0054f6f0();
      return local_5;
    }
    if (local_c == param_1) {
      local_5 = 1;
      goto LAB_00563663;
    }
    local_c = (int *)(**(code **)(*local_c + 0x68))();
  } while( true );
}

