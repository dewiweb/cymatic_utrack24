// rea decompile_all
// name: FUN_0047bd50
// address: 0x47bd50
// body: available
// range: 0x47bd50-0x47c07e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047bd50(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_1c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_1c = 0;
  piVar3 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = in_ECX[6];
      iVar4 = *piVar3;
      if (0 < iVar4 + -1) {
        puVar7 = (uint *)(piVar3 + 1);
        iVar5 = 0;
        iVar8 = in_ECX[2];
        uVar10 = *puVar7;
        *(int *)(param_1 + 0x60) = iVar8 + local_1c;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar8 + local_1c) + **(int **)(param_1 + 0x48);
        for (iVar4 = iVar4 + -2; iVar8 = (int)uVar10 >> 8, -1 < iVar4; iVar4 = iVar4 + -1) {
          uVar11 = puVar7[1];
          uVar2 = puVar7[2];
          puVar7 = puVar7 + 2;
          if ((int)uVar2 >> 8 == iVar8) {
            iVar5 = iVar5 + (uVar2 - uVar10) * uVar11;
          }
          else {
            iVar5 = (int)((0x100 - (uVar10 & 0xff)) * uVar11 + iVar5) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                FUN_004762b0(&local_6,iVar8,1);
                puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                uVar10 = ((uint)local_6 << 0x10 | (uint)local_6) *
                         ((uint)(*(int *)(param_1 + 0x50) * iVar5) >> 8);
              }
              else {
                FUN_004762b0(&local_5,iVar8,1);
                puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                                 *(int *)(param_1 + 100));
                uVar10 = ((uint)local_5 << 0x10 | (uint)local_5) * *(int *)(param_1 + 0x50);
              }
              uVar9 = uVar10 >> 8 & 0xff00ff;
              iVar5 = 0x100 - (uVar10 >> 0x18);
              uVar10 = ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar9;
              uVar9 = uVar9 + ((*puVar6 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
              *puVar6 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                        (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                        (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
            }
            if (0 < (int)uVar11) {
              iVar5 = ((int)uVar2 >> 8) - (iVar8 + 1);
              if (0 < iVar5) {
                FUN_004872b0(iVar8 + 1,iVar5,uVar11);
              }
            }
            iVar5 = (uVar2 & 0xff) * uVar11;
          }
          uVar10 = uVar2;
        }
        iVar5 = iVar5 >> 8;
        if (0 < iVar5) {
          if (iVar5 < 0xff) {
            FUN_004762b0(&local_8,iVar8,1);
            puVar7 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
            uVar10 = ((uint)local_8 << 0x10 | (uint)local_8) *
                     ((uint)(*(int *)(param_1 + 0x50) * iVar5) >> 8);
          }
          else {
            FUN_004762b0(&local_7,iVar8,1);
            puVar7 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar8 +
                             *(int *)(param_1 + 100));
            uVar10 = ((uint)local_7 << 0x10 | (uint)local_7) * *(int *)(param_1 + 0x50);
          }
          uVar11 = uVar10 >> 8 & 0xff00ff;
          iVar4 = 0x100 - (uVar10 >> 0x18);
          uVar10 = ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + uVar11;
          uVar11 = uVar11 + ((*puVar7 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
          *puVar7 = (((0x100 - (uVar11 >> 8 & 0xff00ff)) * 0x100 | uVar11 * 0x100) ^
                    (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10)) & 0xff00ff ^
                    (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) << 8;
        }
      }
      local_1c = local_1c + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_1c < (int)in_ECX[4]);
  }
  return;
}

