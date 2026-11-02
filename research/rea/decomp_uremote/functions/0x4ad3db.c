// rea decompile_all
// name: FUN_004ad3db
// address: 0x4ad3db
// body: available
// range: 0x4ad3db-0x4ad779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad3db(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *in_EAX;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte local_28;
  byte local_24;
  uint *local_20;
  int local_18;
  int local_14;
  int local_8;
  
  local_18 = 0;
  piVar4 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar4 + -1;
      if (0 < local_14) {
        iVar5 = param_1[2];
        local_8 = 0;
        local_20 = (uint *)(piVar4 + 1);
        uVar9 = *local_20;
        in_EAX[0xd] = ((int *)in_EAX[0xc])[2] * (iVar5 + local_18) + *(int *)in_EAX[0xc];
        if ((char)in_EAX[10] == '\0') {
          if (*(char *)((int)in_EAX + 0x29) == '\0') {
            iVar5 = FUN_00470221(((double)(iVar5 + local_18) - *(double *)(in_EAX + 8)) *
                                 *(double *)(in_EAX + 6));
            in_EAX[3] = iVar5;
          }
        }
        else {
          iVar5 = FUN_00470645(0,in_EAX[1]);
          in_EAX[2] = *(int *)(*in_EAX + iVar5 * 4);
        }
        while( true ) {
          local_14 = local_14 + -1;
          iVar5 = (int)uVar9 >> 8;
          if (local_14 < 0) break;
          uVar2 = local_20[1];
          local_20 = local_20 + 2;
          uVar3 = *local_20;
          if ((int)uVar3 >> 8 == iVar5) {
            local_8 = local_8 + (uVar3 - uVar9) * uVar2;
            uVar9 = uVar3;
          }
          else {
            iVar11 = (int)((0x100 - (uVar9 & 0xff)) * uVar2 + local_8) >> 8;
            if (0 < iVar11) {
              if (iVar11 < 0xff) {
                pbVar7 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar5 + in_EAX[0xd]);
                puVar8 = (uint *)FUN_004754e8();
                uVar9 = (*puVar8 >> 8 & 0xff00ff) * iVar11;
                iVar10 = 0x100 - (uVar9 >> 0x18);
                iVar6 = ((uint)pbVar7[1] * iVar10 >> 8) + (uVar9 >> 8 & 0xff00ff);
                uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar10 >> 8 & 0xff00ff) +
                        ((*puVar8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                local_24 = (byte)iVar6;
                *pbVar7 = (byte)uVar9;
                pbVar7[1] = -(char)((uint)iVar6 >> 8) | local_24;
              }
              else {
                pbVar7 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar5 + in_EAX[0xd]);
                puVar8 = (uint *)FUN_004754e8();
                iVar11 = 0x100 - (uint)*(byte *)((int)puVar8 + 3);
                uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar11 >> 8 & 0xff00ff) +
                        (*puVar8 & 0xff00ff);
                iVar11 = ((uint)pbVar7[1] * iVar11 >> 8) + (*puVar8 >> 8 & 0xff00ff);
                uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
                pbVar7[1] = -(char)((uint)iVar11 >> 8) | (byte)iVar11;
                *pbVar7 = (byte)uVar9;
              }
              pbVar7[2] = (byte)(uVar9 >> 0x10);
            }
            if (0 < (int)uVar2) {
              iVar11 = ((int)uVar3 >> 8) - (iVar5 + 1);
              if (0 < iVar11) {
                FUN_004ba4f7(in_EAX,iVar5 + 1,iVar11,uVar2);
              }
            }
            local_8 = (uVar3 & 0xff) * uVar2;
            uVar9 = uVar3;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          pbVar7 = (byte *)(*(int *)(in_EAX[0xc] + 0xc) * iVar5 + in_EAX[0xd]);
          if (local_8 < 0xff) {
            puVar8 = (uint *)FUN_004754e8();
            uVar9 = (*puVar8 >> 8 & 0xff00ff) * local_8;
            iVar11 = 0x100 - (uVar9 >> 0x18);
            iVar5 = ((uint)pbVar7[1] * iVar11 >> 8) + (uVar9 >> 8 & 0xff00ff);
            uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar11 >> 8 & 0xff00ff) +
                    ((*puVar8 & 0xff00ff) * local_8 >> 8 & 0xff00ff);
            uVar9 = 0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9;
            local_28 = (byte)iVar5;
            pbVar7[1] = -(char)((uint)iVar5 >> 8) | local_28;
          }
          else {
            puVar8 = (uint *)FUN_004754e8();
            iVar5 = 0x100 - (uint)*(byte *)((int)puVar8 + 3);
            uVar9 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar5 >> 8 & 0xff00ff) +
                    (*puVar8 & 0xff00ff);
            uVar9 = 0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9;
            iVar5 = ((uint)pbVar7[1] * iVar5 >> 8) + (*puVar8 >> 8 & 0xff00ff);
            pbVar7[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
          }
          *pbVar7 = (byte)(uVar9 & 0xff00ff);
          pbVar7[2] = (byte)((uVar9 & 0xff00ff) >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

