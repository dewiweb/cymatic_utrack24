// rea decompile_all
// name: FUN_00596dd0
// address: 0x596dd0
// body: available
// range: 0x596dd0-0x596e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00596dd0(void)

{
  uint uVar1;
  uint in_ECX;
  
  if ((*(char *)(in_ECX + 0xc5d) == '\0') && (*(int *)(in_ECX + 0xc58) != 2)) {
    *(undefined4 *)(in_ECX + 0xc58) = 2;
    if (*(int *)(in_ECX + 0x100) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(0);
    }
    uVar1 = FUN_00597280(0x9000,0,0,0);
  }
  else {
    uVar1 = in_ECX & 0xffffff00;
  }
  return uVar1;
}

