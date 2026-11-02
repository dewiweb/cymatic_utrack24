// rea decompile_all
// name: FUN_0066b7b0
// address: 0x66b7b0
// body: available
// range: 0x66b7b0-0x66b995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0066b7b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = param_2;
  iVar2 = param_1[0x4c];
  iVar3 = param_1[0x57];
  iVar4 = param_1[0x4e];
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar3 + 0x44) == 0)) {
    FUN_0066bb00();
  }
  param_2 = (int *)0x0;
  iVar5 = *piVar1;
  iVar6 = param_1[0x4b];
  if (iVar6 <= iVar2) {
    do {
      iVar9 = (int)*(short *)(iVar5 + (&DAT_00c02140)[iVar6] * 2);
      if (iVar9 == 0) {
        param_2 = (int *)((int)param_2 + 1);
      }
      else {
        if (iVar9 < 0) {
          iVar9 = -iVar9 >> ((byte)iVar4 & 0x1f);
        }
        else {
          iVar9 = iVar9 >> ((byte)iVar4 & 0x1f);
        }
        if (iVar9 == 0) {
          param_2 = (int *)((int)param_2 + 1);
        }
        else {
          if (*(int *)(iVar3 + 0x38) != 0) {
            FUN_0066bbb0();
          }
          if (0xf < (int)param_2) {
            iVar8 = ((int)param_2 - 0x10U >> 4) + 1;
            param_2 = (int *)((int)param_2 + iVar8 * -0x10);
            do {
              if (*(char *)(iVar3 + 0xc) == '\0') {
                FUN_0066be00((int)*(char *)(*(int *)(iVar3 + 0x4c + *(int *)(iVar3 + 0x34) * 4) +
                                           0x4f0));
              }
              else {
                piVar1 = (int *)(*(int *)(iVar3 + 0x5c + *(int *)(iVar3 + 0x34) * 4) + 0x3c0);
                *piVar1 = *piVar1 + 1;
              }
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar9 = iVar9 >> 1;
          iVar8 = 1;
          if (iVar9 != 0) {
            do {
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 >> 1;
            } while (iVar9 != 0);
            if (10 < iVar8) {
              *(undefined4 *)(*param_1 + 0x14) = 6;
              (**(code **)*param_1)(param_1);
            }
          }
          iVar9 = (int)param_2 * 0x10 + iVar8;
          if (*(char *)(iVar3 + 0xc) == '\0') {
            FUN_0066be00((int)*(char *)(*(int *)(iVar3 + 0x4c + *(int *)(iVar3 + 0x34) * 4) + 0x400
                                       + iVar9));
          }
          else {
            piVar1 = (int *)(*(int *)(iVar3 + 0x5c + *(int *)(iVar3 + 0x34) * 4) + iVar9 * 4);
            *piVar1 = *piVar1 + 1;
          }
          FUN_0066be00(iVar8);
          param_2 = (int *)0x0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar2);
    if ((0 < (int)param_2) &&
       (*(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1, *(int *)(iVar3 + 0x38) == 0x7fff)) {
      FUN_0066bbb0();
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar3 + 0x14);
  uVar7 = param_1[0x2f];
  if (uVar7 != 0) {
    if (*(int *)(iVar3 + 0x44) == 0) {
      *(uint *)(iVar3 + 0x44) = uVar7;
      uVar7 = *(int *)(iVar3 + 0x48) + 1U & 7;
      *(uint *)(iVar3 + 0x48) = uVar7;
    }
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar7 >> 8),1);
}

