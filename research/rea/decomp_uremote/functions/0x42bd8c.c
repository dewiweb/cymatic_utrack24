// rea decompile_all
// name: FUN_0042bd8c
// address: 0x42bd8c
// body: available
// range: 0x42bd8c-0x42bdcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bd8c(uint param_1)

{
  int *in_EAX;
  int iVar1;
  uint in_ECX;
  int *piVar2;
  uint in_EDX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = in_EAX[1];
  iVar1 = *(int *)(iVar3 + in_ECX * 8) - *(int *)(*in_EAX + in_ECX * 8);
  if (iVar1 != 0) {
    if (param_1 < in_ECX) {
      iVar4 = in_ECX - param_1;
      piVar2 = (int *)(iVar3 + param_1 * 8);
      do {
        *piVar2 = *piVar2 + iVar1;
        piVar2 = piVar2 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar5 = in_ECX + 1;
    if (uVar5 <= in_EDX) {
      piVar2 = (int *)(iVar3 + uVar5 * 8);
      iVar3 = (in_EDX - uVar5) + 1;
      do {
        *piVar2 = *piVar2 + iVar1;
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

