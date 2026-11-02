// rea decompile_all
// name: FUN_0047ae60
// address: 0x47ae60
// body: available
// range: 0x47ae60-0x47b2b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ae60(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint *local_8;
  
  local_14 = 0;
  piVar3 = (int *)*in_ECX;
  local_18 = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar1 = local_18[6];
      local_c = *piVar3;
      if (0 < local_c + -1) {
        iVar7 = 0;
        iVar4 = local_18[2];
        local_8 = (uint *)piVar3[1];
        *(int *)(param_1 + 0x60) = iVar4 + local_14;
        *(int *)(param_1 + 100) =
             (*(int **)(param_1 + 0x48))[2] * (iVar4 + local_14) + **(int **)(param_1 + 0x48);
        puVar2 = (uint *)(piVar3 + 1);
        for (local_c = local_c + -2; iVar4 = (int)local_8 >> 8, -1 < local_c; local_c = local_c + -1
            ) {
          local_10 = puVar2[1];
          local_30 = puVar2 + 2;
          local_24 = (uint *)*local_30;
          local_20 = (int)local_24 >> 8;
          local_1c = iVar4;
          if (local_20 == iVar4) {
            iVar7 = iVar7 + ((int)local_24 - (int)local_8) * local_10;
          }
          else {
            iVar7 = (int)((0x100 - ((uint)local_8 & 0xff)) * local_10 + iVar7) >> 8;
            if (0 < iVar7) {
              if (iVar7 < 0xff) {
                FUN_00476510(&local_2c,iVar4,1);
                local_8 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar4 +
                                  *(int *)(param_1 + 100));
                uVar6 = (uint)(*(int *)(param_1 + 0x50) * iVar7) >> 8;
                uVar8 = (local_2c >> 8 & 0xff00ff) * uVar6;
                iVar4 = 0x100 - (uVar8 >> 0x18);
                uVar6 = ((*local_8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) +
                        ((local_2c & 0xff00ff) * uVar6 >> 8 & 0xff00ff);
                uVar5 = (uVar8 >> 8 & 0xff00ff) +
                        ((*local_8 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar8 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
                uVar6 = 0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6;
              }
              else {
                FUN_00476510(&local_28,iVar4,1);
                local_8 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * iVar4 +
                                  *(int *)(param_1 + 100));
                uVar6 = (local_28 >> 8 & 0xff00ff) * *(int *)(param_1 + 0x50);
                iVar4 = 0x100 - (uVar6 >> 0x18);
                uVar5 = (uVar6 >> 8 & 0xff00ff) +
                        ((*local_8 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar6 = ((*local_8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) +
                        ((local_28 & 0xff00ff) * *(int *)(param_1 + 0x50) >> 8 & 0xff00ff);
                uVar8 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
                uVar6 = 0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6;
              }
              *local_8 = (uVar8 ^ uVar6) & 0xff00ff ^ (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8
              ;
            }
            if (0 < (int)local_10) {
              iVar4 = local_20 - (local_1c + 1);
              if (0 < iVar4) {
                FUN_0048ab20(local_1c + 1,iVar4,local_10);
              }
            }
            iVar7 = ((uint)local_24 & 0xff) * local_10;
          }
          puVar2 = local_30;
          local_8 = local_24;
        }
        iVar7 = iVar7 >> 8;
        if (0 < iVar7) {
          local_8 = (uint *)iVar4;
          if (iVar7 < 0xff) {
            FUN_00476510(&local_38,iVar4,1);
            local_30 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)local_8 +
                               *(int *)(param_1 + 100));
            uVar8 = (uint)(*(int *)(param_1 + 0x50) * iVar7) >> 8;
            uVar6 = (local_38 >> 8 & 0xff00ff) * uVar8;
            iVar4 = 0x100 - (uVar6 >> 0x18);
            uVar8 = ((local_38 & 0xff00ff) * uVar8 >> 8 & 0xff00ff) +
                    ((*local_30 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar6 = (uVar6 >> 8 & 0xff00ff) + ((*local_30 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
          }
          else {
            FUN_00476510(&local_34,iVar4,1);
            local_30 = (uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * (int)local_8 +
                               *(int *)(param_1 + 100));
            uVar6 = (local_34 >> 8 & 0xff00ff) * *(int *)(param_1 + 0x50);
            iVar4 = 0x100 - (uVar6 >> 0x18);
            uVar8 = ((local_34 & 0xff00ff) * *(int *)(param_1 + 0x50) >> 8 & 0xff00ff) +
                    ((*local_30 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
            uVar6 = (uVar6 >> 8 & 0xff00ff) + ((*local_30 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
          }
          *local_30 = (((0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 << 8) ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                      (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) << 8;
        }
      }
      local_14 = local_14 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_14 < (int)local_18[4]);
  }
  return;
}

