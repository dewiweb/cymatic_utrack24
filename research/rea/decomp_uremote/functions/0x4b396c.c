// rea decompile_all
// name: FUN_004b396c
// address: 0x4b396c
// body: available
// range: 0x4b396c-0x4b3cf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b396c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_ESI;
  short local_24;
  short local_20;
  uint *local_1c;
  int local_14;
  int local_10;
  int local_8;
  
  local_14 = 0;
  piVar4 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar4 + -1;
      if (0 < local_10) {
        local_1c = (uint *)(piVar4 + 1);
        uVar6 = *local_1c;
        iVar11 = param_1[2];
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar11 + local_14) + *(int *)*unaff_ESI;
        piVar2 = (int *)unaff_ESI[1];
        local_8 = 0;
        unaff_ESI[6] = (((iVar11 + local_14) - unaff_ESI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        while( true ) {
          local_10 = local_10 + -1;
          iVar11 = (int)uVar6 >> 8;
          if (local_10 < 0) break;
          uVar9 = local_1c[1];
          local_1c = local_1c + 2;
          uVar3 = *local_1c;
          if ((int)uVar3 >> 8 == iVar11) {
            local_8 = local_8 + (uVar3 - uVar6) * uVar9;
            uVar6 = uVar3;
          }
          else {
            iVar12 = (int)((0x100 - (uVar6 & 0xff)) * uVar9 + local_8) >> 8;
            if (0 < iVar12) {
              iVar10 = unaff_ESI[1];
              if (iVar12 < 0xff) {
                iVar12 = unaff_ESI[2] * iVar12 >> 8;
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
                pbVar8 = (byte *)(((iVar11 - unaff_ESI[3]) % *(int *)(iVar10 + 0x10)) *
                                  *(int *)(iVar10 + 0xc) + unaff_ESI[6]);
                uVar6 = (pbVar8[1] | 0xff0000) * iVar12;
                iVar10 = 0x100 - (uVar6 >> 0x18);
                local_20 = (short)((uint)pbVar5[1] * iVar10 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar6 = ((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar12;
                uVar7 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10;
              }
              else {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
                pbVar8 = (byte *)(((iVar11 - unaff_ESI[3]) % *(int *)(iVar10 + 0x10)) *
                                  *(int *)(iVar10 + 0xc) + unaff_ESI[6]);
                uVar6 = (pbVar8[1] | 0xff0000) * unaff_ESI[2];
                iVar12 = 0x100 - (uVar6 >> 0x18);
                local_20 = (short)((uint)pbVar5[1] * iVar12 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
                uVar6 = ((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * unaff_ESI[2];
                uVar7 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar12;
              }
              uVar6 = (uVar6 >> 8 & 0xff00ff) + (uVar7 >> 8 & 0xff00ff);
              uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
              pbVar5[1] = -(char)((ushort)local_20 >> 8) | (byte)local_20;
              *pbVar5 = (byte)uVar6;
              pbVar5[2] = (byte)(uVar6 >> 0x10);
            }
            if (0 < (int)uVar9) {
              iVar12 = ((int)uVar3 >> 8) - (iVar11 + 1);
              if (0 < iVar12) {
                FUN_004bd256(unaff_ESI,iVar11 + 1,iVar12,uVar9);
              }
            }
            local_8 = (uVar3 & 0xff) * uVar9;
            uVar6 = uVar3;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          if (local_8 < 0xff) {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
            iVar12 = unaff_ESI[2] * local_8 >> 8;
            pbVar8 = (byte *)(((iVar11 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                              *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
            uVar6 = (pbVar8[1] | 0xff0000) * iVar12;
            iVar11 = 0x100 - (uVar6 >> 0x18);
            local_24 = (short)((uint)pbVar5[1] * iVar11 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
            uVar6 = ((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar12;
            uVar9 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar11;
          }
          else {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
            pbVar8 = (byte *)(((iVar11 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                              *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
            uVar6 = (pbVar8[1] | 0xff0000) * unaff_ESI[2];
            iVar11 = 0x100 - (uVar6 >> 0x18);
            local_24 = (short)((uint)pbVar5[1] * iVar11 >> 8) + ((ushort)(uVar6 >> 8) & 0xff);
            uVar6 = ((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * unaff_ESI[2];
            uVar9 = ((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar11;
          }
          uVar6 = (uVar6 >> 8 & 0xff00ff) + (uVar9 >> 8 & 0xff00ff);
          uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
          pbVar5[1] = -(char)((ushort)local_24 >> 8) | (byte)local_24;
          *pbVar5 = (byte)uVar6;
          pbVar5[2] = (byte)(uVar6 >> 0x10);
        }
      }
      local_14 = local_14 + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

