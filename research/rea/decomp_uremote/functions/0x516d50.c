// rea decompile_all
// name: FUN_00516d50
// address: 0x516d50
// body: available
// range: 0x516d50-0x516dc4 inclusive
// range: 0x516dc7-0x516dd7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516d50(int param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int local_8;
  
  local_8 = *in_ECX;
  while( true ) {
    if (local_8 == 0) {
      return;
    }
    if (*(int *)(local_8 + 0x10) == param_1) break;
    if (local_8 == 0) {
      local_8 = *in_ECX;
    }
    else {
      local_8 = *(int *)(local_8 + 8);
    }
  }
  puVar1 = (undefined4 *)FUN_0054d810(local_8);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(1);
  return;
}

