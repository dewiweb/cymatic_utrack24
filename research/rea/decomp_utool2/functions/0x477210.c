// rea decompile_all
// name: FUN_00477210
// address: 0x477210
// body: available
// range: 0x477210-0x47766b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477210(int *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *local_28;
  uint *local_24;
  int local_10;
  
  local_10 = 0;
  piVar2 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar3 = *piVar2;
      if (0 < iVar3 + -1) {
        uVar12 = piVar2[1];
        puVar4 = (uint *)(piVar2 + 1);
        iVar9 = 0;
        iVar5 = in_ECX[2];
        param_1[5] = ((int *)*param_1)[2] * (iVar5 + local_10) + *(int *)*param_1;
        param_1[6] = ((iVar5 + local_10) - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1]
        ;
        for (iVar3 = iVar3 + -2; iVar5 = (int)uVar12 >> 8, -1 < iVar3; iVar3 = iVar3 + -1) {
          uVar7 = puVar4[1];
          puVar4 = puVar4 + 2;
          uVar8 = *puVar4;
          if ((int)uVar8 >> 8 == iVar5) {
            iVar9 = iVar9 + (uVar8 - uVar12) * uVar7;
          }
          else {
            iVar9 = (int)((0x100 - (uVar12 & 0xff)) * uVar7 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                iVar10 = param_1[2] * iVar9 >> 8;
                local_24 = (uint *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
                uVar12 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                uVar6 = (uVar12 >> 8 & 0xff00ff) * iVar10;
                iVar9 = 0x100 - (uVar6 >> 0x18);
                uVar11 = ((uVar12 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) +
                         ((*local_24 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar12 = (uVar6 >> 8 & 0xff00ff) +
                         ((*local_24 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
              }
              else {
                uVar12 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
                local_24 = (uint *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
                uVar6 = (uVar12 >> 8 & 0xff00ff) * param_1[2];
                iVar9 = 0x100 - (uVar6 >> 0x18);
                uVar11 = ((*local_24 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) +
                         ((uVar12 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
                uVar12 = (uVar6 >> 8 & 0xff00ff) +
                         ((*local_24 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
              }
              *local_24 = (((0x100 - (uVar12 >> 8 & 0xff00ff)) * 0x100 | uVar12 << 8) ^
                          (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11)) & 0xff00ff ^
                          (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) << 8;
            }
            if (0 < (int)uVar7) {
              iVar9 = ((int)uVar8 >> 8) - (iVar5 + 1);
              if (0 < iVar9) {
                FUN_0048b190(iVar5 + 1,iVar9,uVar7);
              }
            }
            iVar9 = (uVar8 & 0xff) * uVar7;
          }
          uVar12 = uVar8;
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          if (iVar9 < 0xff) {
            iVar9 = param_1[2] * iVar9 >> 8;
            local_28 = (uint *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
            uVar12 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar7 = (uVar12 >> 8 & 0xff00ff) * iVar9;
            iVar3 = 0x100 - (uVar7 >> 0x18);
            uVar8 = (uVar7 >> 8 & 0xff00ff) + ((*local_28 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
            uVar12 = ((*local_28 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) +
                     ((uVar12 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar7 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
            uVar12 = 0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12;
          }
          else {
            uVar12 = *(uint *)((iVar5 - param_1[3]) * *(int *)(param_1[1] + 0xc) + param_1[6]);
            uVar7 = (uVar12 >> 8 & 0xff00ff) * param_1[2];
            local_28 = (uint *)(*(int *)(*param_1 + 0xc) * iVar5 + param_1[5]);
            iVar3 = 0x100 - (uVar7 >> 0x18);
            uVar8 = (uVar7 >> 8 & 0xff00ff) + ((*local_28 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
            uVar12 = ((*local_28 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) +
                     ((uVar12 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
            uVar7 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
            uVar12 = 0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12;
          }
          *local_28 = (uVar7 ^ uVar12) & 0xff00ff ^ (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
        }
      }
      local_10 = local_10 + 1;
      piVar2 = piVar2 + iVar1;
    } while (local_10 < (int)in_ECX[4]);
  }
  return;
}

