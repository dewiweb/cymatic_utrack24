// rea decompile_all
// name: FUN_0043ced7
// address: 0x43ced7
// body: available
// range: 0x43ced7-0x43cf32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ced7(int param_1)

{
  int in_ECX;
  undefined4 uVar1;
  
  if (param_1 == in_ECX + 0x20) {
    uVar1 = 1;
  }
  else {
    if (param_1 != in_ECX + 0x198) {
      if (param_1 == in_ECX + 0x310) {
        (**(code **)(**(int **)(in_ECX + 0x1c) + 8))(in_ECX + -0x70);
        return;
      }
      if (param_1 != in_ECX + 0x488) {
        return;
      }
      (**(code **)(**(int **)(in_ECX + 0x1c) + 0xc))(in_ECX + -0x70);
      return;
    }
    uVar1 = 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x1c) + 4))(in_ECX + -0x70,uVar1);
  return;
}

