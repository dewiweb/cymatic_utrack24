// rea decompile_all
// name: FUN_00526760
// address: 0x526760
// body: available
// range: 0x526760-0x5267f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526760(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(uint *)(in_ECX + 0x38) < param_1)) {
    *(undefined4 *)(in_ECX + 0x38) = 0;
    if (*(int *)(in_ECX + 0x2c) == 0) {
      FUN_0050bef0(0xb,in_ECX + 0x1c);
    }
    else {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 0xc)) + 0x14c))();
    }
    FUN_00503de0(&DAT_0095c854);
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  return;
}

