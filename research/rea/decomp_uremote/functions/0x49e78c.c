// rea decompile_all
// name: FUN_0049e78c
// address: 0x49e78c
// body: available
// range: 0x49e78c-0x49e7c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0049e78c(void)

{
  float fVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  int unaff_EDI;
  
  if ((unaff_EDI != 0) && (iVar2 = *(int *)(in_EDX + 0x30) + -1, -1 < iVar2)) {
    piVar3 = (int *)(*(int *)(in_EDX + 0x28) + iVar2 * 8);
    do {
      if (*piVar3 == unaff_EDI) {
        fVar1 = *(float *)(*(int *)(in_EDX + 0x28) + 4 + iVar2 * 8) + *(float *)(in_EDX + 0x24);
        goto LAB_0049e7b0;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -2;
    } while (-1 < iVar2);
  }
  fVar1 = *(float *)(in_EDX + 0x24);
LAB_0049e7b0:
  return (float10)fVar1;
}

