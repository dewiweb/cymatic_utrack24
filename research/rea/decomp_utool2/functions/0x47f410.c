// rea decompile_all
// name: FUN_0047f410
// address: 0x47f410
// body: available
// range: 0x47f410-0x47f825 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f410(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int *local_34;
  undefined8 local_30;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_34 = (int *)*in_ECX;
  local_14 = 0;
  if (0 < (int)in_ECX[4]) {
    dVar10 = 6755399441055744.0;
    local_18 = in_ECX;
    do {
      iVar9 = local_18[6];
      local_28 = *local_34;
      piVar1 = local_34 + iVar9;
      iVar8 = local_1c;
      if (0 < local_28 + -1) {
        puVar2 = (uint *)(local_34 + 1);
        iVar5 = 0;
        uVar6 = *puVar2;
        local_10 = local_18[2] + local_14;
        param_1[0xd] = ((int *)param_1[0xc])[2] * local_10 + *(int *)param_1[0xc];
        if ((char)param_1[10] == '\0') {
          if (*(char *)((int)param_1 + 0x29) == '\0') {
            local_30 = ((double)(int)local_10 - *(double *)(param_1 + 8)) * *(double *)(param_1 + 6)
                       + dVar10;
            param_1[3] = (int)local_30;
          }
        }
        else {
          iVar3 = (int)(param_1[4] * local_10 - param_1[3]) >> 0xc;
          if (iVar3 < 0) {
            param_1[2] = *(int *)*param_1;
          }
          else {
            if (param_1[1] < iVar3) {
              iVar3 = param_1[1];
            }
            param_1[2] = *(int *)(*param_1 + iVar3 * 4);
          }
        }
        local_34 = local_34 + iVar9;
        for (local_28 = local_28 + -2; local_1c = (int)uVar6 >> 8, -1 < local_28;
            local_28 = local_28 + -1) {
          local_24 = puVar2[1];
          puVar2 = puVar2 + 2;
          local_30 = (double)CONCAT44(puVar2,(int)local_30);
          local_10 = *puVar2;
          local_20 = (int)local_10 >> 8;
          if (local_20 == local_1c) {
            iVar5 = iVar5 + (local_10 - uVar6) * local_24;
          }
          else {
            iVar9 = (int)((0x100 - (uVar6 & 0xff)) * local_24 + iVar5) >> 8;
            local_c = iVar9;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                pbVar7 = (byte *)(*(int *)(param_1[0xc] + 0xc) * local_1c + param_1[0xd]);
                puVar2 = (uint *)FUN_00464e80(local_3c,local_1c);
                uVar6 = (*puVar2 >> 8 & 0xff00ff) * iVar9;
                iVar9 = 0x100 - (uVar6 >> 0x18);
                iVar8 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar6 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                        ((*puVar2 & 0xff00ff) * local_c >> 8 & 0xff00ff);
                uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
                *pbVar7 = (byte)uVar6;
                pbVar7[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
                pbVar7[2] = (byte)(uVar6 >> 0x10);
              }
              else {
                pbVar7 = (byte *)(*(int *)(param_1[0xc] + 0xc) * local_1c + param_1[0xd]);
                puVar2 = (uint *)FUN_00464e80(local_38,local_1c);
                uVar6 = *puVar2;
                iVar9 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
                uVar4 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                        (uVar6 & 0xff00ff);
                uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
                *pbVar7 = (byte)uVar4;
                iVar9 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
                pbVar7[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
                pbVar7[2] = (byte)(uVar4 >> 0x10);
              }
            }
            uVar6 = local_24;
            if (0 < (int)local_24) {
              iVar9 = local_20 - (local_1c + 1);
              if (0 < iVar9) {
                FUN_004855e0(local_1c + 1,iVar9,local_24);
              }
            }
            iVar5 = (local_10 & 0xff) * uVar6;
            puVar2 = local_30._4_4_;
          }
          uVar6 = local_10;
          iVar8 = local_1c;
        }
        local_28 = iVar5 >> 8;
        piVar1 = local_34;
        if (0 < local_28) {
          local_c = local_1c;
          if (local_28 < 0xff) {
            pbVar7 = (byte *)(*(int *)(param_1[0xc] + 0xc) * local_1c + param_1[0xd]);
            local_1c = iVar8;
            puVar2 = (uint *)FUN_00464e80(local_44,local_c);
            uVar6 = (*puVar2 >> 8 & 0xff00ff) * local_28;
            iVar9 = 0x100 - (uVar6 >> 0x18);
            iVar8 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
            uVar6 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                    ((*puVar2 & 0xff00ff) * local_28 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
            *pbVar7 = (byte)uVar6;
            pbVar7[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
            pbVar7[2] = (byte)(uVar6 >> 0x10);
            piVar1 = local_34;
            iVar8 = local_1c;
          }
          else {
            pbVar7 = (byte *)(*(int *)(param_1[0xc] + 0xc) * local_1c + param_1[0xd]);
            local_1c = iVar8;
            puVar2 = (uint *)FUN_00464e80(local_40,local_c);
            uVar6 = *puVar2;
            iVar9 = 0x100 - (uint)*(byte *)((int)puVar2 + 3);
            uVar4 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                    (uVar6 & 0xff00ff);
            uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
            *pbVar7 = (byte)uVar4;
            iVar9 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
            pbVar7[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
            pbVar7[2] = (byte)(uVar4 >> 0x10);
            piVar1 = local_34;
            iVar8 = local_1c;
          }
        }
      }
      local_1c = iVar8;
      local_34 = piVar1;
      local_14 = local_14 + 1;
    } while (local_14 < (int)local_18[4]);
  }
  return;
}

