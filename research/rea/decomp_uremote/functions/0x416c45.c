// rea decompile_all
// name: FUN_00416c45
// address: 0x416c45
// body: available
// range: 0x416c45-0x416cb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416c45(int param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  psVar6 = (short *)(iVar4 + 0x38);
  if (*(char *)(param_1 + 0x20) != '\0') {
    sVar3 = *(short *)(iVar4 + 0x3a);
    iVar7 = sVar3 + -1;
    iVar8 = 0;
    if (0 < *psVar6) {
      iVar8 = (int)*(short *)(*(int *)(iVar4 + 0x44) + -2 + *psVar6 * 2);
    }
    iVar5 = iVar7 - iVar8;
    if (iVar8 < iVar7) {
      piVar1 = (int *)(*(int *)(iVar4 + 0x3c) + iVar8 * 8);
      piVar2 = (int *)(*(int *)(iVar4 + 0x3c) + iVar7 * 8);
      if ((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) {
        *(short *)(iVar4 + 0x3a) = *(short *)(iVar4 + 0x3a) + -1;
        iVar7 = sVar3 + -2;
      }
      iVar5 = iVar7 - iVar8;
    }
    if (SBORROW4(iVar7,iVar8) == iVar5 < 0) {
      *(short *)(*(int *)(iVar4 + 0x44) + *psVar6 * 2) = (short)iVar7;
      *psVar6 = *psVar6 + 1;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

