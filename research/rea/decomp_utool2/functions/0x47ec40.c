// rea decompile_all
// name: FUN_0047ec40
// address: 0x47ec40
// body: available
// range: 0x47ec40-0x47f007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ec40(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int *local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_30 = (int *)*in_ECX;
  local_14 = 0;
  local_18 = in_ECX;
  if (0 < (int)in_ECX[4]) {
    do {
      iVar8 = local_18[6];
      local_10 = *local_30;
      piVar1 = local_30 + iVar8;
      iVar6 = local_1c;
      if (0 < local_10 + -1) {
        puVar2 = (uint *)(local_30 + 1);
        iVar7 = 0;
        uVar4 = *puVar2;
        dVar9 = (double)(local_18[2] + local_14) - *(double *)(param_1 + 0x10);
        *(int *)(param_1 + 0x34) =
             (*(int **)(param_1 + 0x30))[2] * (local_18[2] + local_14) + **(int **)(param_1 + 0x30);
        *(double *)(param_1 + 0x28) = dVar9 * dVar9;
        local_30 = local_30 + iVar8;
        for (local_10 = local_10 + -2; local_1c = (int)uVar4 >> 8, -1 < local_10;
            local_10 = local_10 + -1) {
          local_24 = puVar2[1];
          local_2c = puVar2 + 2;
          local_28 = *local_2c;
          local_20 = (int)local_28 >> 8;
          if (local_20 == local_1c) {
            iVar7 = iVar7 + (local_28 - uVar4) * local_24;
          }
          else {
            iVar8 = (int)((0x100 - (uVar4 & 0xff)) * local_24 + iVar7) >> 8;
            local_c = iVar8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * local_1c +
                                 *(int *)(param_1 + 0x34));
                puVar2 = (uint *)FUN_00464ee0(local_38,local_1c);
                uVar4 = (*puVar2 >> 8 & 0xff00ff) * iVar8;
                iVar8 = 0x100 - (uVar4 >> 0x18);
                iVar6 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar4 >> 8 & 0xff00ff);
                uVar4 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) +
                        ((*puVar2 & 0xff00ff) * local_c >> 8 & 0xff00ff);
                uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
                *pbVar5 = (byte)uVar4;
                pbVar5[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
                pbVar5[2] = (byte)(uVar4 >> 0x10);
              }
              else {
                pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * local_1c +
                                 *(int *)(param_1 + 0x34));
                puVar2 = (uint *)FUN_00464ee0(local_34,local_1c);
                uVar4 = *puVar2;
                iVar8 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
                uVar3 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) +
                        (uVar4 & 0xff00ff);
                uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
                *pbVar5 = (byte)uVar3;
                iVar8 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar4 >> 8 & 0xff00ff);
                pbVar5[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
                pbVar5[2] = (byte)(uVar3 >> 0x10);
              }
            }
            uVar4 = local_24;
            if (0 < (int)local_24) {
              iVar8 = local_20 - (local_1c + 1);
              if (0 < iVar8) {
                FUN_00485ac0(local_1c + 1,iVar8,local_24);
              }
            }
            iVar7 = (local_28 & 0xff) * uVar4;
          }
          puVar2 = local_2c;
          uVar4 = local_28;
          iVar6 = local_1c;
        }
        local_28 = iVar7 >> 8;
        piVar1 = local_30;
        if (0 < (int)local_28) {
          local_c = local_1c;
          if ((int)local_28 < 0xff) {
            pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * local_1c +
                             *(int *)(param_1 + 0x34));
            local_1c = iVar6;
            puVar2 = (uint *)FUN_00464ee0(local_40,local_c);
            uVar4 = (*puVar2 >> 8 & 0xff00ff) * local_28;
            iVar8 = 0x100 - (uVar4 >> 0x18);
            iVar6 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar4 >> 8 & 0xff00ff);
            uVar4 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) +
                    ((*puVar2 & 0xff00ff) * local_28 >> 8 & 0xff00ff);
            uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
            *pbVar5 = (byte)uVar4;
            pbVar5[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
            pbVar5[2] = (byte)(uVar4 >> 0x10);
            piVar1 = local_30;
            iVar6 = local_1c;
          }
          else {
            pbVar5 = (byte *)(*(int *)(*(int *)(param_1 + 0x30) + 0xc) * local_1c +
                             *(int *)(param_1 + 0x34));
            local_1c = iVar6;
            puVar2 = (uint *)FUN_00464ee0(local_3c,local_c);
            uVar4 = *puVar2;
            iVar8 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
            uVar3 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) +
                    (uVar4 & 0xff00ff);
            uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
            *pbVar5 = (byte)uVar3;
            iVar8 = ((uint)pbVar5[1] * iVar8 >> 8) + (uVar4 >> 8 & 0xff00ff);
            pbVar5[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
            pbVar5[2] = (byte)(uVar3 >> 0x10);
            piVar1 = local_30;
            iVar6 = local_1c;
          }
        }
      }
      local_1c = iVar6;
      local_30 = piVar1;
      local_14 = local_14 + 1;
    } while (local_14 < (int)local_18[4]);
  }
  return;
}

