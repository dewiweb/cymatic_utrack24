// rea decompile_all
// name: FUN_0040e20b
// address: 0x40e20b
// body: available
// range: 0x40e20b-0x40e2b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040e20b(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x26;
  }
  piVar4 = piVar1 + *(int *)(param_1 + 0x24) + -1;
  if (piVar1 <= piVar4) {
    uVar5 = (int)piVar4 - (int)piVar1;
    piVar3 = piVar4;
    do {
      iVar2 = *piVar3;
      if ((*(int *)(iVar2 + 4) == 0x756e6963) &&
         ((((*(short *)(iVar2 + 8) == 3 && (*(short *)(iVar2 + 10) == 10)) ||
           ((*(short *)(iVar2 + 8) == 0 && (*(short *)(iVar2 + 10) == 4)))) &&
          ((int)(uVar5 & 0xfffffffc) < 0x3d)))) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
      piVar3 = piVar3 + -1;
      uVar5 = uVar5 - 4;
    } while (piVar1 <= piVar3);
  }
  if (piVar1 <= piVar4) {
    uVar5 = (int)piVar4 - (int)piVar1;
    do {
      if ((*(int *)(*piVar4 + 4) == 0x756e6963) && ((int)(uVar5 & 0xfffffffc) < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar4;
        return 0;
      }
      piVar4 = piVar4 + -1;
      uVar5 = uVar5 - 4;
    } while (piVar1 <= piVar4);
  }
  return 0x26;
}

