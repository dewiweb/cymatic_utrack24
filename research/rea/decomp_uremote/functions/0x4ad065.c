// rea decompile_all
// name: FUN_004ad065
// address: 0x4ad065
// body: available
// range: 0x4ad065-0x4ad3da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad065(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte local_2c;
  byte local_28;
  uint *local_24;
  int local_1c;
  int local_18;
  int local_c;
  
  local_1c = 0;
  piVar5 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar5 + -1;
      if (0 < local_18) {
        local_c = 0;
        local_24 = (uint *)(piVar5 + 1);
        uVar9 = *local_24;
        fVar4 = (float)(param_1[2] + local_1c);
        *(int *)(in_EAX + 0x6c) =
             (*(int **)(in_EAX + 0x68))[2] * (param_1[2] + local_1c) + **(int **)(in_EAX + 0x68);
        *(double *)(in_EAX + 0x40) =
             (double)((*(float *)(in_EAX + 0x54) * fVar4 + *(float *)(in_EAX + 0x58)) -
                     (float)*(double *)(in_EAX + 8));
        *(double *)(in_EAX + 0x48) =
             (double)((*(float *)(in_EAX + 0x60) * fVar4 + *(float *)(in_EAX + 100)) -
                     (float)*(double *)(in_EAX + 0x10));
        while( true ) {
          local_18 = local_18 + -1;
          iVar10 = (int)uVar9 >> 8;
          if (local_18 < 0) break;
          uVar2 = local_24[1];
          local_24 = local_24 + 2;
          uVar3 = *local_24;
          if ((int)uVar3 >> 8 == iVar10) {
            local_c = local_c + (uVar3 - uVar9) * uVar2;
            uVar9 = uVar3;
          }
          else {
            iVar12 = (int)((0x100 - (uVar9 & 0xff)) * uVar2 + local_c) >> 8;
            if (0 < iVar12) {
              iVar6 = *(int *)(*(int *)(in_EAX + 0x68) + 0xc);
              if (iVar12 < 0xff) {
                pbVar7 = (byte *)(iVar6 * iVar10 + *(int *)(in_EAX + 0x6c));
                puVar8 = (uint *)FUN_004755ed(iVar10);
                uVar9 = (*puVar8 >> 8 & 0xff00ff) * iVar12;
                iVar11 = 0x100 - (uVar9 >> 0x18);
                iVar6 = ((uint)pbVar7[1] * iVar11 >> 8) + (uVar9 >> 8 & 0xff00ff);
                uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar11 >> 8 & 0xff00ff) +
                        ((*puVar8 & 0xff00ff) * iVar12 >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                local_28 = (byte)iVar6;
                *pbVar7 = (byte)uVar9;
                pbVar7[1] = -(char)((uint)iVar6 >> 8) | local_28;
              }
              else {
                pbVar7 = (byte *)(iVar6 * iVar10 + *(int *)(in_EAX + 0x6c));
                puVar8 = (uint *)FUN_004755ed(iVar10);
                iVar12 = 0x100 - (uint)*(byte *)((int)puVar8 + 3);
                uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar12 >> 8 & 0xff00ff) +
                        (*puVar8 & 0xff00ff);
                iVar12 = ((uint)pbVar7[1] * iVar12 >> 8) + (*puVar8 >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                pbVar7[1] = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
                *pbVar7 = (byte)uVar9;
              }
              pbVar7[2] = (byte)(uVar9 >> 0x10);
            }
            if (0 < (int)uVar2) {
              iVar12 = ((int)uVar3 >> 8) - (iVar10 + 1);
              if (0 < iVar12) {
                FUN_004ba2e2(in_EAX,iVar10 + 1,iVar12,uVar2);
              }
            }
            local_c = (uVar3 & 0xff) * uVar2;
            uVar9 = uVar3;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          pbVar7 = (byte *)(*(int *)(*(int *)(in_EAX + 0x68) + 0xc) * iVar10 +
                           *(int *)(in_EAX + 0x6c));
          if (local_c < 0xff) {
            puVar8 = (uint *)FUN_004755ed(iVar10);
            uVar9 = (*puVar8 >> 8 & 0xff00ff) * local_c;
            iVar12 = 0x100 - (uVar9 >> 0x18);
            iVar10 = ((uint)pbVar7[1] * iVar12 >> 8) + (uVar9 >> 8 & 0xff00ff);
            uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar12 >> 8 & 0xff00ff) +
                    ((*puVar8 & 0xff00ff) * local_c >> 8 & 0xff00ff);
            uVar9 = 0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9;
            local_2c = (byte)iVar10;
            pbVar7[1] = -(char)((uint)iVar10 >> 8) | local_2c;
          }
          else {
            puVar8 = (uint *)FUN_004755ed(iVar10);
            iVar10 = 0x100 - (uint)*(byte *)((int)puVar8 + 3);
            uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar10 >> 8 & 0xff00ff) +
                    (*puVar8 & 0xff00ff);
            uVar9 = 0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9;
            iVar10 = ((uint)pbVar7[1] * iVar10 >> 8) + (*puVar8 >> 8 & 0xff00ff);
            pbVar7[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
          }
          *pbVar7 = (byte)(uVar9 & 0xff00ff);
          pbVar7[2] = (byte)((uVar9 & 0xff00ff) >> 0x10);
        }
      }
      local_1c = local_1c + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

