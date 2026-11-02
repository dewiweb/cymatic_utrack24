// rea decompile_all
// name: FUN_0040f80d
// address: 0x40f80d
// body: available
// range: 0x40f80d-0x40f871 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f80d(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_EDX;
  int unaff_EDI;
  
  if (in_EDX == 0) {
    return 0x23;
  }
  if (unaff_EDI == 0) {
    return 6;
  }
  if (unaff_EDI == 0x756e6963) {
    uVar2 = FUN_0040e20b();
    return uVar2;
  }
  piVar3 = *(int **)(in_EDX + 0x28);
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(in_EDX + 0x24);
    if (piVar3 < piVar1) {
      iVar4 = 0;
      do {
        if ((*(int *)(*piVar3 + 4) == unaff_EDI) && (iVar4 < 0x3d)) {
          *(int *)(in_EDX + 0x5c) = *piVar3;
          return 0;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (piVar3 < piVar1);
    }
    return 6;
  }
  return 0x26;
}

