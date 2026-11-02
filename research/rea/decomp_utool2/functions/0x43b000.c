// rea decompile_all
// name: FUN_0043b000
// address: 0x43b000
// body: available
// range: 0x43b000-0x43b175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0043b000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(in_ECX + 0x28) != '\0') {
    if (0 < param_2) {
      iVar3 = FUN_005e8980();
      iVar7 = *(int *)(in_ECX + 0x10) + -1;
      if (-1 < iVar7) {
        piVar4 = (int *)(param_1 + iVar7 * 4);
        do {
          iVar1 = *piVar4;
          iVar2 = *(int *)((iVar3 - param_1) + (int)piVar4);
          if ((iVar1 != 0) && (iVar2 != 0)) {
            iVar8 = 0;
            if (3 < param_2) {
              iVar9 = (param_2 - 4U >> 2) + 1;
              iVar8 = iVar9 * 4;
              pfVar5 = (float *)(iVar2 + 4);
              piVar6 = (int *)(iVar1 + 0xc);
              do {
                pfVar5[-1] = (float)piVar6[-3] * 4.656613e-10;
                *pfVar5 = (float)*(int *)((iVar1 - iVar2) + -0x10 + (int)(pfVar5 + 4)) *
                          4.656613e-10;
                pfVar5[1] = (float)piVar6[-1] * 4.656613e-10;
                pfVar5[2] = (float)*piVar6 * 4.656613e-10;
                iVar9 = iVar9 + -1;
                pfVar5 = pfVar5 + 4;
                piVar6 = piVar6 + 4;
              } while (iVar9 != 0);
            }
            if (iVar8 < param_2) {
              iVar9 = param_2 - iVar8;
              pfVar5 = (float *)(iVar2 + iVar8 * 4);
              do {
                *pfVar5 = (float)*(int *)((int)pfVar5 + (iVar1 - iVar2)) * 4.656613e-10;
                iVar9 = iVar9 + -1;
                pfVar5 = pfVar5 + 1;
              } while (iVar9 != 0);
            }
          }
          iVar7 = iVar7 + -1;
          piVar4 = piVar4 + -1;
        } while (-1 < iVar7);
      }
    }
    FUN_0043b180(param_2);
  }
  return *(undefined1 *)(in_ECX + 0x28);
}

