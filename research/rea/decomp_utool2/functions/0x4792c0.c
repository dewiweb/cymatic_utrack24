// rea decompile_all
// name: FUN_004792c0
// address: 0x4792c0
// body: available
// range: 0x4792c0-0x4796ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004792c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *in_ECX;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int local_18;
  
  local_18 = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar12 = *piVar6;
      if (0 < iVar12 + -1) {
        uVar5 = piVar6[1];
        piVar9 = piVar6 + 1;
        iVar14 = 0;
        iVar8 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar8 + local_18) + *(int *)*param_1;
        param_1[6] = ((iVar8 + local_18) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1]
        ;
        for (iVar12 = iVar12 + -2; iVar8 = (int)uVar5 >> 8, -1 < iVar12; iVar12 = iVar12 + -1) {
          iVar2 = piVar9[1];
          uVar3 = piVar9[2];
          piVar9 = piVar9 + 2;
          if ((int)uVar3 >> 8 == iVar8) {
            iVar14 = iVar14 + (uVar3 - uVar5) * iVar2;
          }
          else {
            iVar14 = (int)((0x100 - (uVar5 & 0xff)) * iVar2 + iVar14) >> 8;
            if (0 < iVar14) {
              if (iVar14 < 0xff) {
                iVar14 = param_1[2] * iVar14 >> 8;
                pbVar11 = (byte *)((iVar8 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[5]);
                uVar5 = (pbVar11[1] | 0xff0000) * iVar14;
                iVar7 = 0x100 - (uVar5 >> 0x18);
                iVar10 = ((uint)pbVar13[1] * iVar7 >> 8) + (uVar5 >> 8 & 0xff00ff);
                uVar5 = (((uint)pbVar11[2] << 0x10 | (uint)*pbVar11) * iVar14 >> 8 & 0xff00ff) +
                        (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar7 >> 8 & 0xff00ff);
                bVar4 = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
              }
              else {
                pbVar11 = (byte *)((iVar8 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[5]);
                uVar5 = (pbVar11[1] | 0xff0000) * param_1[2];
                iVar7 = 0x100 - (uVar5 >> 0x18);
                iVar14 = ((uint)pbVar13[1] * iVar7 >> 8) + (uVar5 >> 8 & 0xff00ff);
                uVar5 = (((uint)pbVar11[2] << 0x10 | (uint)*pbVar11) * param_1[2] >> 8 & 0xff00ff) +
                        (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar7 >> 8 & 0xff00ff);
                bVar4 = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
              }
              uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
              pbVar13[1] = bVar4;
              *pbVar13 = (byte)uVar5;
              pbVar13[2] = (byte)(uVar5 >> 0x10);
            }
            if (0 < iVar2) {
              iVar14 = ((int)uVar3 >> 8) - (iVar8 + 1);
              if (0 < iVar14) {
                FUN_00488bc0(iVar8 + 1,iVar14,iVar2);
              }
            }
            iVar14 = (uVar3 & 0xff) * iVar2;
          }
          uVar5 = uVar3;
        }
        iVar14 = iVar14 >> 8;
        if (0 < iVar14) {
          if (iVar14 < 0xff) {
            iVar12 = param_1[2] * iVar14 >> 8;
            pbVar11 = (byte *)((iVar8 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[5]);
            uVar5 = (pbVar11[1] | 0xff0000) * iVar12;
            iVar8 = 0x100 - (uVar5 >> 0x18);
            iVar14 = ((uint)pbVar13[1] * iVar8 >> 8) + (uVar5 >> 8 & 0xff00ff);
            uVar5 = (((uint)pbVar11[2] << 0x10 | (uint)*pbVar11) * iVar12 >> 8 & 0xff00ff) +
                    (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar8 >> 8 & 0xff00ff);
            bVar4 = -(char)((uint)iVar14 >> 8) | (byte)iVar14;
          }
          else {
            pbVar11 = (byte *)((iVar8 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar8 + param_1[5]);
            uVar5 = (pbVar11[1] | 0xff0000) * param_1[2];
            iVar8 = 0x100 - (uVar5 >> 0x18);
            iVar12 = ((uint)pbVar13[1] * iVar8 >> 8) + (uVar5 >> 8 & 0xff00ff);
            uVar5 = (((uint)pbVar11[2] << 0x10 | (uint)*pbVar11) * param_1[2] >> 8 & 0xff00ff) +
                    (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar8 >> 8 & 0xff00ff);
            bVar4 = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
          }
          pbVar13[1] = bVar4;
          uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
          *pbVar13 = (byte)uVar5;
          pbVar13[2] = (byte)(uVar5 >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

