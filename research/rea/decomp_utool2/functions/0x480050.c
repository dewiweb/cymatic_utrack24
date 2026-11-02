// rea decompile_all
// name: FUN_00480050
// address: 0x480050
// body: available
// range: 0x480050-0x48046a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480050(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_c;
  
  local_c = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar5 = *piVar3;
      if (0 < iVar5 + -1) {
        uVar9 = piVar3[1];
        piVar4 = piVar3 + 1;
        iVar8 = 0;
        param_1[1] = (in_ECX[2] + local_c) * ((int *)*param_1)[2] + *(int *)*param_1;
        for (iVar5 = iVar5 + -2; iVar6 = (int)uVar9 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar2 = piVar4[1];
          uVar12 = piVar4[2];
          piVar4 = piVar4 + 2;
          if ((int)uVar12 >> 8 == iVar6) {
            iVar8 = iVar8 + (uVar12 - uVar9) * iVar2;
          }
          else {
            iVar8 = (int)((0x100 - (uVar9 & 0xff)) * iVar2 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                puVar7 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[1]);
                uVar9 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar8;
                iVar11 = 0x100 - (uVar9 >> 0x18);
                uVar9 = (uVar9 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
                uVar10 = ((*puVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) +
                         ((param_1[2] & 0xff00ffU) * iVar8 >> 8 & 0xff00ff);
                uVar10 = ((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
              }
              else {
                uVar9 = param_1[2];
                puVar7 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[1]);
                iVar8 = 0x100 - (uVar9 >> 0x18);
                uVar10 = ((*puVar7 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
                uVar9 = (uVar9 >> 8 & 0xff00ff) +
                        ((*puVar7 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar10 = ((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                         (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10);
              }
              *puVar7 = uVar10 & 0xff00ff ^ (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
            }
            if (0 < iVar2) {
              iVar8 = ((int)uVar12 >> 8) - (iVar6 + 1);
              if (0 < iVar8) {
                iVar11 = iVar2 + 1;
                uVar9 = param_1[2];
                uVar10 = (uVar9 >> 8 & 0xff00ff) * iVar11;
                uVar9 = ((uVar9 & 0xff00ff) * iVar11 >> 8 ^ (uVar9 >> 8 & 0xffff00ff) * iVar11) &
                        0xff00ff ^ uVar10;
                iVar11 = *(int *)(*param_1 + 0xc);
                puVar7 = (uint *)(iVar11 * (iVar6 + 1) + param_1[1]);
                if ((char)(uVar10 >> 0x18) == -1) {
                  do {
                    *puVar7 = uVar9;
                    iVar8 = iVar8 + -1;
                    puVar7 = (uint *)((int)puVar7 + iVar11);
                  } while (0 < iVar8);
                }
                else {
                  FUN_0048b4d0(puVar7,uVar9,iVar8);
                }
              }
            }
            iVar8 = (uVar12 & 0xff) * iVar2;
          }
          uVar9 = uVar12;
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          puVar7 = (uint *)(*(int *)(*param_1 + 0xc) * iVar6 + param_1[1]);
          if (iVar8 < 0xff) {
            uVar12 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar8;
            iVar5 = 0x100 - (uVar12 >> 0x18);
            uVar9 = ((param_1[2] & 0xff00ffU) * iVar8 >> 8 & 0xff00ff) +
                    ((*puVar7 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
            uVar12 = (uVar12 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          }
          else {
            uVar12 = param_1[2];
            iVar5 = 0x100 - (uVar12 >> 0x18);
            uVar9 = ((*puVar7 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar12 & 0xff00ff);
            uVar12 = (uVar12 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          }
          *puVar7 = (((0x100 - (uVar12 >> 8 & 0xff00ff)) * 0x100 | uVar12 << 8) ^
                    (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                    (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12) << 8;
        }
      }
      local_c = local_c + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_c < (int)in_ECX[4]);
  }
  return;
}

