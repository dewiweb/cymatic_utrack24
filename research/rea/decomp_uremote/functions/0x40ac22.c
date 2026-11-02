// rea decompile_all
// name: FUN_0040ac22
// address: 0x40ac22
// body: available
// range: 0x40ac22-0x40ac5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ac22(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x214) != 0) {
      (**(code **)(*(int *)(param_1 + 0x214) + 0xc))(param_1);
    }
    piVar1 = (int *)(param_1 + 0x2b4);
    if (*piVar1 != 0) {
      FUN_00409dca();
      FUN_00411a5c(*piVar1);
      *piVar1 = 0;
    }
  }
  return;
}

