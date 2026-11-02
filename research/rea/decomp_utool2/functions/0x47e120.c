// rea decompile_all
// name: FUN_0047e120
// address: 0x47e120
// body: available
// range: 0x47e120-0x47e491 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e120(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *in_ECX;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int *local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_30 = (int *)*in_ECX;
  local_14 = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar5 = local_14[6];
      local_28 = *local_30;
      piVar2 = local_30 + iVar5;
      iVar3 = local_18;
      if (0 < local_28 + -1) {
        puVar4 = (uint *)(local_30 + 1);
        iVar6 = 0;
        uVar8 = *puVar4;
        dVar10 = (double)(local_14[2] + local_10) - *(double *)(param_1 + 0x10);
        *(int *)(param_1 + 0x34) =
             (*(int **)(param_1 + 0x30))[2] * (local_14[2] + local_10) + **(int **)(param_1 + 0x30);
        *(double *)(param_1 + 0x28) = dVar10 * dVar10;
        local_30 = local_30 + iVar5;
        for (local_28 = local_28 + -2; local_18 = (int)uVar8 >> 8, -1 < local_28;
            local_28 = local_28 + -1) {
          local_20 = puVar4[1];
          local_2c = puVar4 + 2;
          local_24 = *local_2c;
          local_1c = (int)local_24 >> 8;
          if (local_1c == local_18) {
            iVar6 = iVar6 + (local_24 - uVar8) * local_20;
          }
          else {
            iVar5 = (int)((0x100 - (uVar8 & 0xff)) * local_20 + iVar6) >> 8;
            local_c = iVar5;
            if (0 < iVar5) {
              puVar4 = (uint *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * local_18 +
                               *(int *)(param_1 + 0x34));
              if (iVar5 < 0xff) {
                puVar7 = (uint *)FUN_00464ee0(local_38,local_18);
                uVar9 = (*puVar7 >> 8 & 0xff00ff) * iVar5;
                uVar8 = (*puVar7 & 0xff00ff) * local_c >> 8;
              }
              else {
                puVar7 = (uint *)FUN_00464ee0(local_34,local_18);
                uVar8 = *puVar7;
                uVar9 = uVar8;
              }
              iVar5 = 0x100 - (uVar9 >> 0x18);
              uVar1 = *puVar4;
              uVar9 = (uVar9 >> 8 & 0xff00ff) + ((uVar1 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
              uVar8 = ((uVar1 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar8 & 0xff00ff);
              *puVar4 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 * 0x100) ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                        (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
            }
            uVar8 = local_20;
            if (0 < (int)local_20) {
              iVar5 = local_1c - (local_18 + 1);
              if (0 < iVar5) {
                FUN_00486330(local_18 + 1,iVar5,local_20);
              }
            }
            iVar6 = (local_24 & 0xff) * uVar8;
          }
          puVar4 = local_2c;
          uVar8 = local_24;
          iVar3 = local_18;
        }
        local_28 = iVar6 >> 8;
        piVar2 = local_30;
        if (0 < local_28) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
          local_c = local_18;
          if (local_28 < 0xff) {
            puVar7 = (uint *)(iVar5 * local_18 + *(int *)(param_1 + 0x34));
            local_18 = iVar3;
            puVar4 = (uint *)FUN_00464ee0(local_40,local_c);
            uVar9 = (*puVar4 >> 8 & 0xff00ff) * local_28;
            iVar5 = 0x100 - (uVar9 >> 0x18);
            uVar8 = ((*puVar4 & 0xff00ff) * local_28 >> 8 & 0xff00ff) +
                    ((*puVar7 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
            uVar9 = (uVar9 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          }
          else {
            puVar7 = (uint *)(iVar5 * local_18 + *(int *)(param_1 + 0x34));
            local_18 = iVar3;
            puVar4 = (uint *)FUN_00464ee0(local_3c,local_c);
            uVar9 = *puVar4;
            iVar5 = 0x100 - (uVar9 >> 0x18);
            uVar8 = ((*puVar7 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff);
            uVar9 = (uVar9 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
          }
          *puVar7 = (((0x100 - (uVar9 >> 8 & 0xff00ff)) * 0x100 | uVar9 << 8) ^
                    (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                    (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) << 8;
          piVar2 = local_30;
          iVar3 = local_18;
        }
      }
      local_18 = iVar3;
      local_30 = piVar2;
      local_10 = local_10 + 1;
    } while (local_10 < (int)local_14[4]);
  }
  return;
}

