// rea decompile_all
// name: FUN_00476d90
// address: 0x476d90
// body: available
// range: 0x476d90-0x477205 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476d90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *local_28;
  int local_10;
  uint *local_8;
  
  local_10 = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar4 = *piVar3;
      if (0 < iVar4 + -1) {
        uVar13 = piVar3[1];
        puVar5 = (uint *)(piVar3 + 1);
        iVar10 = 0;
        iVar6 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar6 + local_10) + *(int *)*param_1;
        piVar2 = (int *)param_1[1];
        param_1[6] = (((iVar6 + local_10) - param_1[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        for (iVar4 = iVar4 + -2; iVar6 = (int)uVar13 >> 8, -1 < iVar4; iVar4 = iVar4 + -1) {
          uVar8 = puVar5[1];
          puVar5 = puVar5 + 2;
          uVar9 = *puVar5;
          if ((int)uVar9 >> 8 == iVar6) {
            iVar10 = iVar10 + (uVar9 - uVar13) * uVar8;
          }
          else {
            iVar10 = (int)((0x100 - (uVar13 & 0xff)) * uVar8 + iVar10) >> 8;
            if (0 < iVar10) {
              if (iVar10 < 0xff) {
                iVar11 = param_1[2] * iVar10 >> 8;
                local_8 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[5]);
                uVar13 = *(uint *)(((iVar6 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                   *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar12 = (uVar13 >> 8 & 0xff00ff) * iVar11;
                iVar10 = 0x100 - (uVar12 >> 0x18);
                uVar12 = ((uVar13 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                         ((*local_8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
                uVar13 = (uVar12 >> 8 & 0xff00ff) +
                         ((*local_8 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
              }
              else {
                local_8 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[5]);
                uVar13 = *(uint *)(((iVar6 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                                   *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar7 = (uVar13 >> 8 & 0xff00ff) * param_1[2];
                iVar10 = 0x100 - (uVar7 >> 0x18);
                uVar12 = ((*local_8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) +
                         ((uVar13 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
                uVar13 = (uVar7 >> 8 & 0xff00ff) +
                         ((*local_8 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
              }
              *local_8 = (((0x100 - (uVar13 >> 8 & 0xff00ff)) * 0x100 | uVar13 << 8) ^
                         (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12)) & 0xff00ff ^
                         (0x100 - (uVar13 >> 8 & 0xff00ff) | uVar13) << 8;
            }
            if (0 < (int)uVar8) {
              iVar10 = ((int)uVar9 >> 8) - (iVar6 + 1);
              if (0 < iVar10) {
                FUN_0048a830(iVar6 + 1,iVar10,uVar8);
              }
            }
            iVar10 = (uVar9 & 0xff) * uVar8;
          }
          uVar13 = uVar9;
        }
        iVar10 = iVar10 >> 8;
        if (0 < iVar10) {
          if (iVar10 < 0xff) {
            iVar10 = param_1[2] * iVar10 >> 8;
            uVar13 = *(uint *)(((iVar6 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                               *(int *)(param_1[1] + 0xc) + param_1[6]);
            local_28 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[5]);
            uVar8 = (uVar13 >> 8 & 0xff00ff) * iVar10;
            iVar4 = 0x100 - (uVar8 >> 0x18);
            uVar9 = (uVar8 >> 8 & 0xff00ff) + ((*local_28 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar13 = ((*local_28 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) +
                     ((uVar13 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
            uVar8 = (0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100;
            uVar13 = 0x100 - (uVar13 >> 8 & 0xff00ff) | uVar13;
          }
          else {
            uVar13 = *(uint *)(((iVar6 - param_1[3]) % *(int *)(param_1[1] + 0x10)) *
                               *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar8 = (uVar13 >> 8 & 0xff00ff) * param_1[2];
            local_28 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[5]);
            iVar4 = 0x100 - (uVar8 >> 0x18);
            uVar9 = (uVar8 >> 8 & 0xff00ff) + ((*local_28 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar13 = ((*local_28 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) +
                     ((uVar13 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
            uVar8 = (0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100;
            uVar13 = 0x100 - (uVar13 >> 8 & 0xff00ff) | uVar13;
          }
          *local_28 = (uVar8 ^ uVar13) & 0xff00ff ^ (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
        }
      }
      local_10 = local_10 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

