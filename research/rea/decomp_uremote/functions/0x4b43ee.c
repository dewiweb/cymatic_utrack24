// rea decompile_all
// name: FUN_004b43ee
// address: 0x4b43ee
// body: available
// range: 0x4b43ee-0x4b4765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b43ee(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  uint local_30;
  short local_24;
  int local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  
  local_1c = 0;
  piVar4 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar4 + -1;
      if (0 < local_18) {
        iVar9 = param_1[2];
        local_14 = (uint *)(piVar4 + 1);
        uVar7 = *local_14;
        local_10 = 0;
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar9 + local_1c) + *(int *)*unaff_ESI;
        unaff_ESI[6] = ((iVar9 + local_1c) - unaff_ESI[4]) * ((int *)unaff_ESI[1])[2] +
                       *(int *)unaff_ESI[1];
        while( true ) {
          local_18 = local_18 + -1;
          iVar9 = (int)uVar7 >> 8;
          if (local_18 < 0) break;
          uVar6 = local_14[1];
          local_14 = local_14 + 2;
          uVar2 = *local_14;
          if ((int)uVar2 >> 8 == iVar9) {
            local_10 = local_10 + (uVar2 - uVar7) * uVar6;
            uVar7 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar7 & 0xff)) * uVar6 + local_10) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                uVar7 = (uint)*(byte *)((iVar9 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                       unaff_ESI[6]);
                pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar9 + unaff_ESI[5]);
                uVar7 = (uVar7 << 0x10 | uVar7) * (unaff_ESI[2] * iVar5 >> 8);
                local_30 = uVar7 >> 8 & 0xff00ff;
                iVar8 = 0x100 - (uVar7 >> 0x18);
                iVar5 = ((uint)pbVar3[1] * iVar8 >> 8) + local_30;
                local_30 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar8 >> 8 & 0xff00ff) +
                           local_30;
                local_30 = 0x100 - (local_30 >> 8 & 0xff00ff) | local_30;
                local_10._0_1_ = (byte)iVar5;
                local_24._0_1_ = -(char)((uint)iVar5 >> 8) | (byte)local_10;
              }
              else {
                uVar7 = (uint)*(byte *)((iVar9 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                       unaff_ESI[6]);
                pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar9 + unaff_ESI[5]);
                uVar7 = (uVar7 << 0x10 | uVar7) * unaff_ESI[2];
                local_30 = uVar7 >> 8 & 0xff00ff;
                iVar8 = 0x100 - (uVar7 >> 0x18);
                iVar5 = ((uint)pbVar3[1] * iVar8 >> 8) + local_30;
                local_30 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar8 >> 8 & 0xff00ff) +
                           local_30;
                local_30 = 0x100 - (local_30 >> 8 & 0xff00ff) | local_30;
                local_24._0_1_ = (byte)iVar5;
                local_24._0_1_ = -(char)((uint)iVar5 >> 8) | (byte)local_24;
              }
              local_30 = local_30 & 0xff00ff;
              pbVar3[1] = (byte)local_24;
              pbVar3[2] = (byte)(local_30 >> 0x10);
              *pbVar3 = (byte)local_30;
            }
            if (0 < (int)uVar6) {
              iVar5 = ((int)uVar2 >> 8) - (iVar9 + 1);
              if (0 < iVar5) {
                FUN_004bda15(unaff_ESI,iVar9 + 1,iVar5,uVar6);
              }
            }
            local_10 = (uVar2 & 0xff) * uVar6;
            uVar7 = uVar2;
          }
        }
        local_10 = local_10 >> 8;
        if (0 < local_10) {
          if (local_10 < 0xff) {
            uVar7 = (uint)*(byte *)((iVar9 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                   unaff_ESI[6]);
            pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar9 + unaff_ESI[5]);
            uVar7 = (uVar7 << 0x10 | uVar7) * (unaff_ESI[2] * local_10 >> 8);
            uVar6 = uVar7 >> 8 & 0xff00ff;
            iVar9 = 0x100 - (uVar7 >> 0x18);
            local_24 = (short)((uint)pbVar3[1] * iVar9 >> 8) + (short)uVar6;
            uVar6 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar9 >> 8 & 0xff00ff) + uVar6;
          }
          else {
            uVar7 = (uint)*(byte *)((iVar9 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                   unaff_ESI[6]);
            pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar9 + unaff_ESI[5]);
            uVar7 = (uVar7 << 0x10 | uVar7) * unaff_ESI[2];
            uVar6 = uVar7 >> 8 & 0xff00ff;
            iVar9 = 0x100 - (uVar7 >> 0x18);
            local_24 = (short)((uint)pbVar3[1] * iVar9 >> 8) + (short)uVar6;
            uVar6 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar9 >> 8 & 0xff00ff) + uVar6;
          }
          uVar7 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
          pbVar3[1] = -(char)((ushort)local_24 >> 8) | (byte)local_24;
          *pbVar3 = (byte)uVar7;
          pbVar3[2] = (byte)(uVar7 >> 0x10);
        }
      }
      local_1c = local_1c + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

