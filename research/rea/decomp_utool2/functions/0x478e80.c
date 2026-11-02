// rea decompile_all
// name: FUN_00478e80
// address: 0x478e80
// body: available
// range: 0x478e80-0x4792be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478e80(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  int local_1c;
  
  local_1c = 0;
  piVar7 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar6 = *piVar7;
      if (0 < iVar6 + -1) {
        puVar11 = (uint *)(piVar7 + 1);
        iVar14 = 0;
        iVar10 = in_ECX[2];
        uVar8 = *puVar11;
        param_1[5] = ((int *)*param_1)[2] * (iVar10 + local_1c) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar10 + local_1c) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar6 = iVar6 + -2; iVar10 = (int)uVar8 >> 8, -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar3 = puVar11[1];
          uVar4 = puVar11[2];
          puVar11 = puVar11 + 2;
          if ((int)uVar4 >> 8 == iVar10) {
            iVar14 = iVar14 + (uVar4 - uVar8) * uVar3;
          }
          else {
            iVar14 = (int)((0x100 - (uVar8 & 0xff)) * uVar3 + iVar14) >> 8;
            if (0 < iVar14) {
              if (iVar14 < 0xff) {
                iVar9 = param_1[2] * iVar14 >> 8;
                pbVar13 = (byte *)(((iVar10 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                   *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar8 = (pbVar13[1] | 0xff0000) * iVar9;
                pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar10 + param_1[5]);
                iVar14 = 0x100 - (uVar8 >> 0x18);
                iVar12 = ((uint)pbVar15[1] * iVar14 >> 8) + (uVar8 >> 8 & 0xff00ff);
                uVar8 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar9 >> 8 & 0xff00ff) +
                        (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar14 >> 8 & 0xff00ff);
                bVar5 = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
              }
              else {
                pbVar13 = (byte *)(((iVar10 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                   *(int *)(param_1[1] + 0xc) + param_1[6]);
                pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar10 + param_1[5]);
                uVar8 = (pbVar13[1] | 0xff0000) * param_1[2];
                iVar9 = 0x100 - (uVar8 >> 0x18);
                iVar14 = ((uint)pbVar15[1] * iVar9 >> 8) + (uVar8 >> 8 & 0xff00ff);
                uVar8 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * param_1[2] >> 8 & 0xff00ff) +
                        (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar9 >> 8 & 0xff00ff);
                bVar5 = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
              }
              uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
              pbVar15[1] = bVar5;
              pbVar15[2] = (byte)(uVar8 >> 0x10);
              *pbVar15 = (byte)uVar8;
            }
            if (0 < (int)uVar3) {
              iVar14 = ((int)uVar4 >> 8) - (iVar10 + 1);
              if (0 < iVar14) {
                FUN_00488ea0(iVar10 + 1,iVar14,uVar3);
              }
            }
            iVar14 = (uVar4 & 0xff) * uVar3;
          }
          uVar8 = uVar4;
        }
        iVar14 = iVar14 >> 8;
        if (0 < iVar14) {
          iVar6 = param_1[1];
          iVar9 = (iVar10 - param_1[3]) % *(int *)(iVar6 + 0x10);
          if (iVar14 < 0xff) {
            pbVar13 = (byte *)(iVar9 * *(int *)(iVar6 + 0xc) + param_1[6]);
            iVar14 = param_1[2] * iVar14 >> 8;
            pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar10 + param_1[5]);
            uVar8 = (pbVar13[1] | 0xff0000) * iVar14;
            iVar6 = 0x100 - (uVar8 >> 0x18);
            iVar10 = ((uint)pbVar15[1] * iVar6 >> 8) + (uVar8 >> 8 & 0xff00ff);
            uVar8 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar14 >> 8 & 0xff00ff) +
                    (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar6 >> 8 & 0xff00ff);
            bVar5 = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
          }
          else {
            pbVar13 = (byte *)(iVar9 * *(int *)(iVar6 + 0xc) + param_1[6]);
            pbVar15 = (byte *)(*(int *)(*param_1 + 0xc) * iVar10 + param_1[5]);
            uVar8 = (pbVar13[1] | 0xff0000) * param_1[2];
            iVar10 = 0x100 - (uVar8 >> 0x18);
            iVar6 = ((uint)pbVar15[1] * iVar10 >> 8) + (uVar8 >> 8 & 0xff00ff);
            uVar8 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * param_1[2] >> 8 & 0xff00ff) +
                    (((uint)pbVar15[2] << 0x10 | (uint)*pbVar15) * iVar10 >> 8 & 0xff00ff);
            bVar5 = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
          }
          pbVar15[1] = bVar5;
          uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
          *pbVar15 = (byte)uVar8;
          pbVar15[2] = (byte)(uVar8 >> 0x10);
        }
      }
      local_1c = local_1c + 1;
      piVar7 = piVar7 + iVar1;
    } while (local_1c < (int)in_ECX[4]);
  }
  return;
}

