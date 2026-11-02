// rea decompile_all
// name: FUN_00516de0
// address: 0x516de0
// body: available
// range: 0x516de0-0x516e06 inclusive
// range: 0x516e09-0x516e66 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516de0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)*in_ECX;
  while (local_8 != (undefined4 *)0x0) {
    if (local_8 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)*in_ECX;
    }
    else {
      puVar1 = (undefined4 *)local_8[2];
      (**(code **)*local_8)(1);
      local_8 = puVar1;
    }
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}

