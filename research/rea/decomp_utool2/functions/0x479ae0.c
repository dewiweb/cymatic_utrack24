// rea decompile_all
// name: FUN_00479ae0
// address: 0x479ae0
// body: available
// range: 0x479ae0-0x479da9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00479ae0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int local_10;
  
  local_10 = 0;
  piVar4 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar6 = *piVar4;
      if (0 < iVar6 + -1) {
        uVar3 = piVar4[1];
        puVar7 = (uint *)(piVar4 + 1);
        iVar10 = 0;
        iVar9 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar9 + local_10) + *(int *)*param_1;
        param_1[6] = ((iVar9 + local_10) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1]
        ;
        for (iVar6 = iVar6 + -2; iVar9 = (int)uVar3 >> 8, -1 < iVar6; iVar6 = iVar6 + -1) {
          uVar12 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar2 = *puVar7;
          if ((int)uVar2 >> 8 == iVar9) {
            iVar10 = iVar10 + (uVar2 - uVar3) * uVar12;
          }
          else {
            iVar10 = (int)((0x100 - (uVar3 & 0xff)) * uVar12 + iVar10) >> 8;
            if (0 < iVar10) {
              if (iVar10 < 0xff) {
                uVar3 = (uint)*(byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) +
                                       param_1[6]);
                pbVar5 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar3 = (uVar3 << 0x10 | uVar3) * (param_1[2] * iVar10 >> 8);
              }
              else {
                uVar3 = (uint)*(byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) +
                                       param_1[6]);
                pbVar5 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
              }
              uVar11 = uVar3 >> 8 & 0xff00ff;
              iVar10 = 0x100 - (uVar3 >> 0x18);
              iVar8 = ((uint)pbVar5[1] * iVar10 >> 8) + uVar11;
              uVar11 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10 >> 8 & 0xff00ff) + uVar11
              ;
              uVar3 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
              pbVar5[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
              pbVar5[2] = (byte)(uVar3 >> 0x10);
              *pbVar5 = (byte)uVar3;
            }
            if (0 < (int)uVar12) {
              iVar10 = ((int)uVar2 >> 8) - (iVar9 + 1);
              if (0 < iVar10) {
                FUN_00488550(iVar9 + 1,iVar10,uVar12);
              }
            }
            iVar10 = (uVar2 & 0xff) * uVar12;
          }
          uVar3 = uVar2;
        }
        iVar10 = iVar10 >> 8;
        if (0 < iVar10) {
          pbVar5 = (byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
          if (iVar10 < 0xff) {
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            uVar3 = (uint)*pbVar5;
            uVar3 = (uVar3 << 0x10 | uVar3) * (param_1[2] * iVar10 >> 8);
          }
          else {
            uVar3 = (uint)*pbVar5;
            pbVar13 = (byte *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
            uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
          }
          uVar12 = uVar3 >> 8 & 0xff00ff;
          iVar6 = 0x100 - (uVar3 >> 0x18);
          iVar9 = ((uint)pbVar13[1] * iVar6 >> 8) + uVar12;
          uVar12 = (((uint)pbVar13[2] << 0x10 | (uint)*pbVar13) * iVar6 >> 8 & 0xff00ff) + uVar12;
          uVar3 = (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) & 0xff00ff;
          pbVar13[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
          *pbVar13 = (byte)uVar3;
          pbVar13[2] = (byte)(uVar3 >> 0x10);
        }
      }
      local_10 = local_10 + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

