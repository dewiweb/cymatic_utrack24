// rea decompile_all
// name: FUN_004fab4f
// address: 0x4fab4f
// body: available
// range: 0x4fab4f-0x4fab97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fab4f(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int extraout_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x10) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*(int *)(in_ECX + 8) + iVar3 * 4);
    do {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 4) == param_1) {
        iVar3 = FUN_004fe21f();
        if (iVar3 == *(int *)(extraout_ECX + 4)) {
          *(int *)(extraout_ECX + 0x14) = *(int *)(extraout_ECX + 0x14) - *(int *)(iVar1 + 0x20);
          FUN_004fe8af();
          return;
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        return;
      }
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar3);
  }
  return;
}

