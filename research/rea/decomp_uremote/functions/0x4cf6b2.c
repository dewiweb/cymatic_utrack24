// rea decompile_all
// name: FUN_004cf6b2
// address: 0x4cf6b2
// body: available
// range: 0x4cf6b2-0x4cf6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004cf6b2(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x38);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    iVar2 = **(int **)(*(int *)(in_EDX + 0x30) + iVar1 * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
  } while (param_1 != iVar2);
  return *(undefined4 *)(*(int *)(in_EDX + 0x30) + iVar1 * 4);
}

