// rea decompile_all
// name: FUN_004b3577
// address: 0x4b3577
// body: available
// range: 0x4b3577-0x4b396b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3577(undefined4 *param_1)

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
  uint uVar10;
  int iVar11;
  int *unaff_EDI;
  uint local_38;
  byte local_28;
  byte local_24;
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
        iVar8 = param_1[2];
        local_14 = (uint *)(piVar4 + 1);
        uVar10 = *local_14;
        local_10 = 0;
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar8 + local_1c) + *(int *)*unaff_EDI;
        unaff_EDI[6] = ((iVar8 + local_1c) - unaff_EDI[4]) * ((int *)unaff_EDI[1])[2] +
                       *(int *)unaff_EDI[1];
        while( true ) {
          local_18 = local_18 + -1;
          iVar8 = (int)uVar10 >> 8;
          if (local_18 < 0) break;
          uVar7 = local_14[1];
          local_14 = local_14 + 2;
          uVar2 = *local_14;
          if ((int)uVar2 >> 8 == iVar8) {
            local_10 = local_10 + (uVar2 - uVar10) * uVar7;
            uVar10 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar10 & 0xff)) * uVar7 + local_10) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                iVar5 = unaff_EDI[2] * iVar5 >> 8;
                uVar10 = *(uint *)((iVar8 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                  unaff_EDI[6]);
                uVar6 = (uVar10 >> 8 & 0xff00ff) * iVar5;
                pbVar3 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
                iVar11 = 0x100 - (uVar6 >> 0x18);
                iVar9 = ((uint)pbVar3[1] * iVar11 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar10 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar11 >> 8 & 0xff00ff) +
                         ((uVar10 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar10 = 0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10;
                local_24 = (byte)iVar9;
                pbVar3[1] = -(char)((uint)iVar9 >> 8) | local_24;
              }
              else {
                uVar10 = *(uint *)((iVar8 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                  unaff_EDI[6]);
                uVar6 = (uVar10 >> 8 & 0xff00ff) * unaff_EDI[2];
                pbVar3 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
                iVar9 = 0x100 - (uVar6 >> 0x18);
                iVar5 = ((uint)pbVar3[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar10 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar9 >> 8 & 0xff00ff) +
                         ((uVar10 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
                uVar10 = 0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10;
                local_10._0_1_ = (byte)iVar5;
                pbVar3[1] = -(char)((uint)iVar5 >> 8) | (byte)local_10;
              }
              *pbVar3 = (byte)(uVar10 & 0xff00ff);
              pbVar3[2] = (byte)((uVar10 & 0xff00ff) >> 0x10);
            }
            if (0 < (int)uVar7) {
              iVar5 = ((int)uVar2 >> 8) - (iVar8 + 1);
              if (0 < iVar5) {
                FUN_004bcf1b(unaff_EDI,iVar8 + 1,iVar5,uVar7);
              }
            }
            local_10 = (uVar2 & 0xff) * uVar7;
            uVar10 = uVar2;
          }
        }
        local_10 = local_10 >> 8;
        if (0 < local_10) {
          if (local_10 < 0xff) {
            iVar5 = unaff_EDI[2] * local_10 >> 8;
            uVar10 = *(uint *)((iVar8 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            uVar7 = (uVar10 >> 8 & 0xff00ff) * iVar5;
            pbVar3 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
            iVar9 = 0x100 - (uVar7 >> 0x18);
            iVar8 = ((uint)pbVar3[1] * iVar9 >> 8) + (uVar7 >> 8 & 0xff00ff);
            local_38 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar9 >> 8 & 0xff00ff) +
                       ((uVar10 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
            local_38 = 0x100 - (local_38 >> 8 & 0xff00ff) | local_38;
            local_24 = (byte)iVar8;
            local_28 = -(char)((uint)iVar8 >> 8) | local_24;
          }
          else {
            uVar10 = *(uint *)((iVar8 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6])
            ;
            uVar7 = (uVar10 >> 8 & 0xff00ff) * unaff_EDI[2];
            pbVar3 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
            iVar5 = 0x100 - (uVar7 >> 0x18);
            iVar8 = ((uint)pbVar3[1] * iVar5 >> 8) + (uVar7 >> 8 & 0xff00ff);
            local_38 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar5 >> 8 & 0xff00ff) +
                       ((uVar10 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
            local_38 = 0x100 - (local_38 >> 8 & 0xff00ff) | local_38;
            local_28 = (byte)iVar8;
            local_28 = -(char)((uint)iVar8 >> 8) | local_28;
          }
          local_38 = local_38 & 0xff00ff;
          pbVar3[1] = local_28;
          *pbVar3 = (byte)local_38;
          pbVar3[2] = (byte)(local_38 >> 0x10);
        }
      }
      local_1c = local_1c + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

