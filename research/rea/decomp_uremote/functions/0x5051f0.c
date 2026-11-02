// rea decompile_all
// name: FUN_005051f0
// address: 0x5051f0
// body: available
// range: 0x5051f0-0x5052c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005051f0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00505330();
  if (*(int *)(param_1 + 0x14) == 1) {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
    FUN_00501e80(param_1 + 0xc);
  }
  else if (*(int *)(param_1 + 0x14) == 2) {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = FUN_005b04d6(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(in_ECX + 4) = uVar1;
    if (*(int *)(in_ECX + 4) != 0) {
      _memcpy(*(void **)(in_ECX + 4),*(void **)(param_1 + 4),*(size_t *)(param_1 + 8));
      *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
      FUN_00501e80(param_1 + 0xc);
    }
  }
  return in_ECX;
}

