// rea decompile_all
// name: FUN_004480dc
// address: 0x4480dc
// body: available
// range: 0x4480dc-0x448115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004480dc(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x34);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x38);
    for (piVar3 = piVar2; piVar3 != piVar2 + *(int *)(iVar1 + 0x40); piVar3 = piVar3 + 1) {
      if (unaff_EDI == *piVar3) {
        iVar4 = (int)piVar3 - (int)piVar2 >> 2;
        goto LAB_004480ff;
      }
    }
    iVar4 = -1;
LAB_004480ff:
    if (iVar4 + 1U < *(uint *)(iVar1 + 0x40)) {
      return piVar2[iVar4 + 1U];
    }
  }
  return 0;
}

