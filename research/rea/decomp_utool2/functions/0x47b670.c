// rea decompile_all
// name: FUN_0047b670
// address: 0x47b670
// body: available
// range: 0x47b670-0x47ba19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047b670(int param_1)

{
  byte bVar1;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int local_24;
  uint *local_18;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_8;
  byte local_7;
  byte local_6;
  byte bVar2;
  
  local_24 = 0;
  piVar4 = (int *)*in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar3 = in_ECX[6];
      iVar5 = *piVar4;
      if (0 < iVar5 + -1) {
        puVar11 = (uint *)(piVar4 + 1);
        iVar12 = 0;
        iVar6 = in_ECX[2];
        uVar9 = *puVar11;
        *(int *)(param_1 + 0x60) = iVar6 + local_24;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar6 + local_24) + **(int **)(param_1 + 0x48);
        for (iVar5 = iVar5 + -2; iVar6 = (int)uVar9 >> 8, -1 < iVar5; iVar5 = iVar5 + -1) {
          uVar8 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar14 = *puVar11;
          if ((int)uVar14 >> 8 == iVar6) {
            iVar12 = iVar12 + (uVar14 - uVar9) * uVar8;
          }
          else {
            iVar12 = (int)((0x100 - (uVar9 & 0xff)) * uVar8 + iVar12) >> 8;
            if (0 < iVar12) {
              if (iVar12 < 0xff) {
                FUN_0048b7f0(&local_c,iVar6,1);
                local_18 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar6 +
                                   *(int *)(param_1 + 100));
                uVar10 = *local_18;
                uVar9 = (uint)(*(int *)(param_1 + 0x50) * iVar12) >> 8;
                uVar7 = (local_b | 0xff0000) * uVar9;
                bVar1 = local_c;
                bVar2 = local_a;
              }
              else {
                FUN_0048b7f0(&local_8,iVar6,1);
                uVar9 = *(uint *)(param_1 + 0x50);
                uVar7 = (local_7 | 0xff0000) * uVar9;
                local_18 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar6 +
                                   *(int *)(param_1 + 100));
                uVar10 = *local_18;
                bVar1 = local_8;
                bVar2 = local_6;
              }
              iVar12 = 0x100 - (uVar7 >> 0x18);
              uVar13 = (((uint)bVar2 << 0x10 | (uint)bVar1) * uVar9 >> 8 & 0xff00ff) +
                       ((uVar10 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
              uVar9 = (uVar7 >> 8 & 0xff00ff) + ((uVar10 >> 8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
              *local_18 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                          (0x100 - (uVar13 >> 8 & 0xff00ff) | uVar13)) & 0xff00ff ^
                          (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
            }
            if (0 < (int)uVar8) {
              iVar12 = ((int)uVar14 >> 8) - (iVar6 + 1);
              if (0 < iVar12) {
                FUN_00487690(iVar6 + 1,iVar12,uVar8);
              }
            }
            iVar12 = (uVar14 & 0xff) * uVar8;
          }
          uVar9 = uVar14;
        }
        iVar12 = iVar12 >> 8;
        if (0 < iVar12) {
          if (iVar12 < 0xff) {
            FUN_0048b7f0(&local_14,iVar6,1);
            puVar11 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar6 +
                              *(int *)(param_1 + 100));
            uVar9 = (uint)(*(int *)(param_1 + 0x50) * iVar12) >> 8;
            uVar8 = (local_13 | 0xff0000) * uVar9;
            bVar1 = local_14;
            bVar2 = local_12;
          }
          else {
            FUN_0048b7f0(&local_10,iVar6,1);
            puVar11 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar6 +
                              *(int *)(param_1 + 100));
            uVar9 = *(uint *)(param_1 + 0x50);
            uVar8 = (local_f | 0xff0000) * uVar9;
            bVar1 = local_10;
            bVar2 = local_e;
          }
          iVar5 = 0x100 - (uVar8 >> 0x18);
          uVar14 = (((uint)bVar2 << 0x10 | (uint)bVar1) * uVar9 >> 8 & 0xff00ff) +
                   ((*puVar11 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          uVar9 = (uVar8 >> 8 & 0xff00ff) + ((*puVar11 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          *puVar11 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                     (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                     (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
        }
      }
      local_24 = local_24 + 1;
      piVar4 = piVar4 + iVar3;
    } while (local_24 < (int)in_ECX[4]);
  }
  return;
}

