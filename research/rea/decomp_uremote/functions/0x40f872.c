// rea decompile_all
// name: FUN_0040f872
// address: 0x40f872
// body: available
// range: 0x40f872-0x40f8c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f872(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  undefined4 uStack_c;
  
  if (unaff_EBX == 0) {
    return 0x23;
  }
  piVar3 = *(int **)(unaff_EBX + 0x28);
  if (piVar3 == (int *)0x0) {
    uStack_c = 0x26;
  }
  else {
    iVar2 = FUN_0040fad3();
    if (iVar2 != 0xe) {
      piVar1 = piVar3 + *(int *)(unaff_EBX + 0x24);
      for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
        if ((*piVar3 == in_EAX) &&
           ((int)((int)piVar3 - *(int *)(unaff_EBX + 0x28) & 0xfffffffcU) < 0x3d)) {
          *(int *)(unaff_EBX + 0x5c) = *piVar3;
          return 0;
        }
      }
    }
    uStack_c = 6;
  }
  return uStack_c;
}

