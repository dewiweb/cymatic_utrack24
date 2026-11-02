// rea decompile_all
// name: FUN_00548be0
// address: 0x548be0
// body: available
// range: 0x548be0-0x548c30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00548be0(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_ECX;
  
  cVar1 = (**(code **)(*(int *)(in_ECX + -0x8c + *(int *)(*(int *)(in_ECX + -0x8c) + 0x10)) + 8))();
  if (cVar1 == '\0') {
    uVar2 = 0xfffe;
  }
  else {
    uVar2 = *(undefined2 *)(in_ECX + -0x38);
  }
  return uVar2;
}

