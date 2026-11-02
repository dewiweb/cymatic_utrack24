// rea decompile_all
// name: FUN_0041001f
// address: 0x41001f
// body: available
// range: 0x41001f-0x41006d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041001f(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (in_ECX == 0) {
    return 0x21;
  }
  if (in_EAX != 0) {
    piVar3 = (int *)(in_ECX + 0x14);
    piVar2 = piVar3 + *(int *)(in_ECX + 0x10);
    for (; piVar3 < piVar2; piVar3 = piVar3 + 1) {
      if (*piVar3 == in_EAX) {
        piVar2 = piVar2 + -1;
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        if (piVar3 < piVar2) {
          piVar4 = piVar3;
          for (iVar1 = ((uint)((int)piVar2 + (-1 - (int)piVar3)) >> 2) + 1; piVar3 = piVar3 + 1,
              iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar4 = *piVar3;
            piVar4 = piVar4 + 1;
          }
        }
        *piVar2 = 0;
        FUN_0040fdae();
        return 0;
      }
    }
  }
  return 0x22;
}

