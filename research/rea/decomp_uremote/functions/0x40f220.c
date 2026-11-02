// rea decompile_all
// name: FUN_0040f220
// address: 0x40f220
// body: available
// range: 0x40f220-0x40f2e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040f220(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar4 = param_1;
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    uVar9 = 0x23;
  }
  else if (*in_ECX == 0) {
    iVar2 = in_ECX[1];
    iVar8 = iVar2;
    if (in_ECX[3] != 0) {
      iVar8 = (iVar2 * in_ECX[3] + 0x24) / 0x48;
    }
    iVar3 = in_ECX[2];
    iVar5 = iVar3;
    if (in_ECX[4] != 0) {
      iVar5 = (iVar3 * in_ECX[4] + 0x24) / 0x48;
    }
    if (((iVar2 == 0) || ((iVar6 = iVar8, iVar3 != 0 && (iVar6 = iVar5, iVar2 == 0)))) &&
       (iVar6 = iVar5, iVar3 != 0)) {
      iVar8 = iVar5;
    }
    piVar1 = (int *)(param_1 + 0x1c);
    param_1 = 0;
    if (0 < *piVar1) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x20) + 8);
      do {
        if (((iVar6 + 0x20U & 0xffffffc0) == (piVar7[1] + 0x20U & 0xffffffc0)) &&
           ((iVar8 + 0x20U & 0xffffffc0) == (*piVar7 + 0x20U & 0xffffffc0))) {
          if (param_2 != (int *)0x0) {
            *param_2 = param_1;
          }
          return 0;
        }
        param_1 = param_1 + 1;
        piVar7 = piVar7 + 4;
      } while (param_1 < *piVar1);
    }
    uVar9 = 0x17;
  }
  else {
    uVar9 = 7;
  }
  return uVar9;
}

