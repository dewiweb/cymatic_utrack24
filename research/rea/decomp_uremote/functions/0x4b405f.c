// rea decompile_all
// name: FUN_004b405f
// address: 0x4b405f
// body: available
// range: 0x4b405f-0x4b43ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b405f(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *unaff_ESI;
  uint local_30;
  short local_24;
  byte local_20;
  int local_18;
  int local_14;
  uint *local_c;
  
  local_18 = 0;
  piVar6 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar6 + -1;
      if (0 < local_14) {
        iVar8 = param_1[2];
        local_c = (uint *)(piVar6 + 1);
        uVar9 = *local_c;
        piVar2 = (int *)unaff_ESI[1];
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar8 + local_18) + *(int *)*unaff_ESI;
        unaff_ESI[6] = (((iVar8 + local_18) - unaff_ESI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        iVar8 = 0;
        while( true ) {
          local_14 = local_14 + -1;
          iVar4 = (int)uVar9 >> 8;
          if (local_14 < 0) break;
          uVar7 = local_c[1];
          local_c = local_c + 2;
          uVar3 = *local_c;
          if ((int)uVar3 >> 8 == iVar4) {
            iVar8 = iVar8 + (uVar3 - uVar9) * uVar7;
            uVar9 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar9 & 0xff)) * uVar7 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
                uVar9 = (uint)*(byte *)(((iVar4 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                                        *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
                uVar9 = (uVar9 << 0x10 | uVar9) * (unaff_ESI[2] * iVar8 >> 8);
                local_30 = uVar9 >> 8 & 0xff00ff;
                iVar10 = 0x100 - (uVar9 >> 0x18);
                iVar8 = ((uint)pbVar5[1] * iVar10 >> 8) + local_30;
                local_30 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10 >> 8 & 0xff00ff) +
                           local_30;
                local_30 = 0x100 - (local_30 >> 8 & 0xff00ff) | local_30;
                local_20 = (byte)iVar8;
                local_24._0_1_ = -(char)((uint)iVar8 >> 8) | local_20;
              }
              else {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
                uVar9 = (uint)*(byte *)(((iVar4 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                                        *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
                uVar9 = (uVar9 << 0x10 | uVar9) * unaff_ESI[2];
                local_30 = uVar9 >> 8 & 0xff00ff;
                iVar10 = 0x100 - (uVar9 >> 0x18);
                iVar8 = ((uint)pbVar5[1] * iVar10 >> 8) + local_30;
                local_30 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10 >> 8 & 0xff00ff) +
                           local_30;
                local_30 = 0x100 - (local_30 >> 8 & 0xff00ff) | local_30;
                local_24._0_1_ = (byte)iVar8;
                local_24._0_1_ = -(char)((uint)iVar8 >> 8) | (byte)local_24;
              }
              local_30 = local_30 & 0xff00ff;
              pbVar5[1] = (byte)local_24;
              *pbVar5 = (byte)local_30;
              pbVar5[2] = (byte)(local_30 >> 0x10);
            }
            if (0 < (int)uVar7) {
              iVar8 = ((int)uVar3 >> 8) - (iVar4 + 1);
              if (0 < iVar8) {
                FUN_004bd750(unaff_ESI,iVar4 + 1,iVar8,uVar7);
              }
            }
            iVar8 = (uVar3 & 0xff) * uVar7;
            uVar9 = uVar3;
          }
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          if (iVar8 < 0xff) {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
            uVar9 = (uint)*(byte *)(((iVar4 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                                    *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
            uVar9 = (uVar9 << 0x10 | uVar9) * (unaff_ESI[2] * iVar8 >> 8);
            uVar7 = uVar9 >> 8 & 0xff00ff;
            iVar8 = 0x100 - (uVar9 >> 0x18);
            local_24 = (short)((uint)pbVar5[1] * iVar8 >> 8) + (short)uVar7;
            uVar7 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) + uVar7;
          }
          else {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
            uVar9 = (uint)*(byte *)(((iVar4 - unaff_ESI[3]) % *(int *)(unaff_ESI[1] + 0x10)) *
                                    *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6]);
            uVar9 = (uVar9 << 0x10 | uVar9) * unaff_ESI[2];
            uVar7 = uVar9 >> 8 & 0xff00ff;
            iVar8 = 0x100 - (uVar9 >> 0x18);
            local_24 = (short)((uint)pbVar5[1] * iVar8 >> 8) + (short)uVar7;
            uVar7 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar8 >> 8 & 0xff00ff) + uVar7;
          }
          uVar9 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
          pbVar5[1] = -(char)((ushort)local_24 >> 8) | (byte)local_24;
          *pbVar5 = (byte)uVar9;
          pbVar5[2] = (byte)(uVar9 >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

