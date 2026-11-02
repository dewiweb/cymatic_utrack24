// rea decompile_all
// name: FUN_004796f0
// address: 0x4796f0
// body: available
// range: 0x4796f0-0x479ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004796f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  int local_10;
  
  local_10 = 0;
  piVar5 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar6 = *piVar5;
      if (0 < iVar6 + -1) {
        uVar4 = piVar5[1];
        puVar7 = (uint *)(piVar5 + 1);
        iVar12 = 0;
        iVar9 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar9 + local_10) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar9 + local_10) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar6 = iVar6 + -2; iVar9 = (int)uVar4 >> 8, -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar11 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar3 = *puVar7;
          if ((int)uVar3 >> 8 == iVar9) {
            iVar12 = iVar12 + (uVar3 - uVar4) * uVar11;
          }
          else {
            iVar12 = (int)((0x100 - (uVar4 & 0xff)) * uVar11 + iVar12) >> 8;
            if (0 < iVar12) {
              if (iVar12 < 0xff) {
                pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar4 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar10 = (uVar4 << 0x10 | uVar4) * (param_1[2] * iVar12 >> 8);
                uVar4 = uVar10 >> 8 & 0xff00ff;
                iVar12 = 0x100 - (uVar10 >> 0x18);
                iVar8 = ((uint)pbVar13[1] * iVar12 >> 8) + uVar4;
                uVar4 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar12 >> 8 & 0xff00ff) +
                        uVar4;
                uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
                *pbVar13 = (byte)uVar4;
                pbVar13[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
                pbVar13[2] = (byte)(uVar4 >> 0x10);
              }
              else {
                uVar4 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                        *(int *)(param_1[1] + 0xc) + param_1[6]);
                pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar10 = (uVar4 << 0x10 | uVar4) * param_1[2];
                uVar4 = uVar10 >> 8 & 0xff00ff;
                iVar12 = 0x100 - (uVar10 >> 0x18);
                iVar8 = ((uint)pbVar13[1] * iVar12 >> 8) + uVar4;
                uVar4 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar12 >> 8 & 0xff00ff) +
                        uVar4;
                uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
                *pbVar13 = (byte)uVar4;
                pbVar13[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
                pbVar13[2] = (byte)(uVar4 >> 0x10);
              }
            }
            if (0 < (int)uVar11) {
              iVar12 = ((int)uVar3 >> 8) - (iVar9 + 1);
              if (0 < iVar12) {
                FUN_004888b0(iVar9 + 1,iVar12,uVar11);
              }
            }
            iVar12 = (uVar3 & 0xff) * uVar11;
          }
          uVar4 = uVar3;
        }
        iVar12 = iVar12 >> 8;
        if (0 < iVar12) {
          if (iVar12 < 0xff) {
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            uVar4 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                    *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar11 = (uVar4 << 0x10 | uVar4) * (param_1[2] * iVar12 >> 8);
            uVar4 = uVar11 >> 8 & 0xff00ff;
            iVar6 = 0x100 - (uVar11 >> 0x18);
            iVar9 = ((uint)pbVar13[1] * iVar6 >> 8) + uVar4;
            uVar4 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar6 >> 8 & 0xff00ff) + uVar4;
            uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
            *pbVar13 = (byte)uVar4;
            pbVar13[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
            pbVar13[2] = (byte)(uVar4 >> 0x10);
          }
          else {
            uVar4 = (uint)*(byte *)(((iVar9 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                    *(int *)(param_1[1] + 0xc) + param_1[6]);
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            uVar11 = (uVar4 << 0x10 | uVar4) * param_1[2];
            uVar4 = uVar11 >> 8 & 0xff00ff;
            iVar6 = 0x100 - (uVar11 >> 0x18);
            iVar9 = ((uint)pbVar13[1] * iVar6 >> 8) + uVar4;
            uVar4 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar6 >> 8 & 0xff00ff) + uVar4;
            uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
            *pbVar13 = (byte)uVar4;
            pbVar13[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
            pbVar13[2] = (byte)(uVar4 >> 0x10);
          }
        }
      }
      local_10 = local_10 + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

