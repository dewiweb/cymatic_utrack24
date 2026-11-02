// rea decompile_all
// name: FUN_00477e77
// address: 0x477e77
// body: available
// range: 0x477e77-0x477f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477e77(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_10;
  
  iVar2 = param_1[4];
  piVar3 = (int *)*param_1;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    local_10 = *piVar3;
    if (0 < local_10) {
      piVar8 = piVar3 + 1;
      piVar1 = piVar8 + local_10 * 2;
      FUN_004a9aba(piVar8,piVar1,(int)piVar1 - (int)piVar8 >> 3);
      iVar7 = 0;
      piVar9 = piVar8;
      while (piVar9 < piVar1) {
        iVar4 = *piVar9;
        iVar7 = iVar7 + piVar9[1];
        piVar10 = piVar9;
        while ((piVar9 = piVar10 + 2, piVar9 < piVar1 && (*piVar9 == iVar4))) {
          iVar7 = iVar7 + piVar10[3];
          local_10 = local_10 + -1;
          piVar10 = piVar9;
        }
        uVar5 = FUN_005af9e1(iVar7);
        uVar6 = uVar5;
        if ((uVar5 & 0xffffff00) != 0) {
          if (param_2 == '\0') {
            uVar6 = uVar5 & 0x1ff;
            if ((uVar5 & 0x100) != 0) {
              uVar6 = 0x1ff - uVar6;
            }
          }
          else {
            uVar6 = 0xff;
          }
        }
        *piVar8 = iVar4;
        piVar8[1] = uVar6;
        piVar8 = piVar8 + 2;
      }
      *piVar3 = local_10;
      piVar8[-1] = 0;
    }
    piVar3 = piVar3 + param_1[6];
  }
  return;
}

