// rea decompile_all
// name: FUN_00478390
// address: 0x478390
// body: available
// range: 0x478390-0x4786b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478390(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_18;
  
  local_18 = 0;
  piVar6 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar6;
      if (0 < iVar5 + -1) {
        uVar3 = piVar6[1];
        piVar7 = piVar6 + 1;
        iVar11 = 0;
        iVar9 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar9 + local_18) + *(int *)*param_1;
        param_1[6] = ((iVar9 + local_18) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1]
        ;
        for (iVar5 = iVar5 + -2; iVar9 = (int)uVar3 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar2 = piVar7[1];
          uVar10 = piVar7[2];
          piVar7 = piVar7 + 2;
          if ((int)uVar10 >> 8 == iVar9) {
            iVar11 = iVar11 + (uVar10 - uVar3) * iVar2;
          }
          else {
            iVar11 = (int)((0x100 - (uVar3 & 0xff)) * iVar2 + iVar11) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                uVar3 = (uint)*(byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) +
                                       param_1[6]);
                puVar8 = (uint *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar3 = (uVar3 << 0x10 | uVar3) * (param_1[2] * iVar11 >> 8);
              }
              else {
                uVar3 = (uint)*(byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) +
                                       param_1[6]);
                puVar8 = (uint *)(*(int *)(*param_1 + 0xc) * iVar9 + param_1[5]);
                uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
              }
              uVar12 = uVar3 >> 8 & 0xff00ff;
              iVar11 = 0x100 - (uVar3 >> 0x18);
              uVar3 = ((*puVar8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar12;
              uVar12 = uVar12 + ((*puVar8 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
              *puVar8 = (((0x100 - (uVar12 >> 8 & 0xff00ff)) * 0x100 | uVar12 * 0x100) ^
                        (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3)) & 0xff00ff ^
                        (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) << 8;
            }
            if (0 < iVar2) {
              iVar11 = ((int)uVar10 >> 8) - (iVar9 + 1);
              if (0 < iVar11) {
                FUN_00489960(iVar9 + 1,iVar11,iVar2);
              }
            }
            iVar11 = (uVar10 & 0xff) * iVar2;
          }
          uVar3 = uVar10;
        }
        iVar11 = iVar11 >> 8;
        if (0 < iVar11) {
          pbVar4 = (byte *)((iVar9 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
          if (iVar11 < 0xff) {
            iVar5 = param_1[5];
            uVar3 = (uint)*pbVar4;
            uVar3 = (uVar3 << 0x10 | uVar3) * (param_1[2] * iVar11 >> 8);
          }
          else {
            uVar3 = (uint)*pbVar4;
            iVar5 = param_1[5];
            uVar3 = (uVar3 << 0x10 | uVar3) * param_1[2];
          }
          puVar8 = (uint *)(*(int *)(*param_1 + 0xc) * iVar9 + iVar5);
          uVar12 = uVar3 >> 8 & 0xff00ff;
          iVar5 = 0x100 - (uVar3 >> 0x18);
          uVar3 = *puVar8;
          uVar10 = ((uVar3 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar12;
          uVar12 = uVar12 + ((uVar3 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          *puVar8 = (((0x100 - (uVar12 >> 8 & 0xff00ff)) * 0x100 | uVar12 * 0x100) ^
                    (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                    (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) << 8;
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_18 < (int)in_ECX[4]);
  }
  return;
}

