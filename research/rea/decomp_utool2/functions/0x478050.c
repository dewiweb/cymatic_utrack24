// rea decompile_all
// name: FUN_00478050
// address: 0x478050
// body: available
// range: 0x478050-0x47838d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478050(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_14;
  
  local_14 = 0;
  piVar5 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar6 = *piVar5;
      if (0 < iVar6 + -1) {
        uVar4 = piVar5[1];
        piVar10 = piVar5 + 1;
        iVar8 = 0;
        iVar11 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar11 + local_14) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar11 + local_14) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar6 = iVar6 + -2; iVar11 = (int)uVar4 >> 8, -1 < iVar6; iVar6 = iVar6 + -1) {
          iVar3 = piVar10[1];
          uVar13 = piVar10[2];
          piVar10 = piVar10 + 2;
          if ((int)uVar13 >> 8 == iVar11) {
            iVar8 = iVar8 + (uVar13 - uVar4) * iVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar4 & 0xff)) * iVar3 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                puVar9 = (uint *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[5]);
                uVar4 = (uint)*(byte *)(((iVar11 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar4 = (uVar4 << 0x10 | uVar4) * (param_1[2] * iVar8 >> 8);
              }
              else {
                uVar4 = (uint)*(byte *)(((iVar11 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]);
                puVar9 = (uint *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[5]);
                uVar4 = (uVar4 << 0x10 | uVar4) * param_1[2];
              }
              uVar12 = uVar4 >> 8 & 0xff00ff;
              iVar8 = 0x100 - (uVar4 >> 0x18);
              uVar4 = ((*puVar9 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar12;
              uVar12 = uVar12 + ((*puVar9 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
              *puVar9 = (((0x100 - (uVar12 >> 8 & 0xff00ff)) * 0x100 | uVar12 * 0x100) ^
                        (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                        (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) << 8;
            }
            if (0 < iVar3) {
              iVar8 = ((int)uVar13 >> 8) - (iVar11 + 1);
              if (0 < iVar8) {
                FUN_00489d80(iVar11 + 1,iVar8,iVar3);
              }
            }
            iVar8 = (uVar13 & 0xff) * iVar3;
          }
          uVar4 = uVar13;
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          pbVar7 = (byte *)(((iVar11 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                            *(int *)(param_1[1] + 0xc) + param_1[6]);
          if (iVar8 < 0xff) {
            puVar9 = (uint *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[5]);
            uVar4 = (uint)*pbVar7;
            uVar4 = (uVar4 << 0x10 | uVar4) * (param_1[2] * iVar8 >> 8);
          }
          else {
            uVar4 = (uint)*pbVar7;
            puVar9 = (uint *)(*(int *)(*param_1 + 0xc) * iVar11 + param_1[5]);
            uVar4 = (uVar4 << 0x10 | uVar4) * param_1[2];
          }
          uVar13 = uVar4 >> 8 & 0xff00ff;
          iVar6 = 0x100 - (uVar4 >> 0x18);
          uVar4 = ((*puVar9 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) + uVar13;
          uVar13 = uVar13 + ((*puVar9 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
          *puVar9 = (((0x100 - (uVar13 >> 8 & 0xff00ff)) * 0x100 | uVar13 * 0x100) ^
                    (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                    (0x100 - (uVar13 >> 8 & 0xff00ff) | uVar13) << 8;
        }
      }
      local_14 = local_14 + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_14 < (int)in_ECX[4]);
  }
  return;
}

