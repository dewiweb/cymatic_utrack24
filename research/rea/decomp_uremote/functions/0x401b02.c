// rea decompile_all
// name: FUN_00401b02
// address: 0x401b02
// body: available
// range: 0x401b02-0x401b45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401b02(uint param_1)

{
  int iVar1;
  int *piVar2;
  uint in_EDX;
  uint unaff_ESI;
  int iVar3;
  
  iVar3 = *(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x1c);
  if (iVar3 != 0) {
    if (in_EDX < unaff_ESI) {
      piVar2 = (int *)(in_EDX + 0x18);
      iVar1 = ((unaff_ESI - in_EDX) - 1) / 0x28 + 1;
      do {
        *piVar2 = piVar2[1] + iVar3;
        piVar2 = piVar2 + 10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    while (unaff_ESI + 0x28 <= param_1) {
      *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x44) + iVar3;
      unaff_ESI = unaff_ESI + 0x28;
    }
  }
  return;
}

