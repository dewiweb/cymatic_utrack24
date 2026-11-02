// rea decompile_all
// name: FUN_004b3172
// address: 0x4b3172
// body: available
// range: 0x4b3172-0x4b3576 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3172(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *unaff_EDI;
  uint local_38;
  byte local_28;
  byte local_24;
  byte local_20;
  int local_18;
  int local_14;
  uint *local_c;
  
  local_18 = 0;
  piVar5 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar5 + -1;
      if (0 < local_14) {
        iVar8 = param_1[2];
        local_c = (uint *)(piVar5 + 1);
        uVar10 = *local_c;
        piVar2 = (int *)unaff_EDI[1];
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar8 + local_18) + *(int *)*unaff_EDI;
        unaff_EDI[6] = (((iVar8 + local_18) - unaff_EDI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        iVar8 = 0;
        while( true ) {
          local_14 = local_14 + -1;
          iVar12 = (int)uVar10 >> 8;
          if (local_14 < 0) break;
          uVar7 = local_c[1];
          local_c = local_c + 2;
          uVar3 = *local_c;
          if ((int)uVar3 >> 8 == iVar12) {
            iVar8 = iVar8 + (uVar3 - uVar10) * uVar7;
            uVar10 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar10 & 0xff)) * uVar7 + iVar8) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                iVar8 = unaff_EDI[2] * iVar8 >> 8;
                pbVar4 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
                uVar10 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                   *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar6 = (uVar10 >> 8 & 0xff00ff) * iVar8;
                iVar11 = 0x100 - (uVar6 >> 0x18);
                iVar9 = ((uint)pbVar4[1] * iVar11 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar10 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar11 >> 8 & 0xff00ff) +
                         ((uVar10 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
                uVar10 = 0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10;
                local_24 = (byte)iVar9;
                pbVar4[1] = -(char)((uint)iVar9 >> 8) | local_24;
              }
              else {
                pbVar4 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
                uVar10 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                   *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar6 = (uVar10 >> 8 & 0xff00ff) * unaff_EDI[2];
                iVar9 = 0x100 - (uVar6 >> 0x18);
                iVar8 = ((uint)pbVar4[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
                uVar10 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar9 >> 8 & 0xff00ff) +
                         ((uVar10 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
                uVar10 = 0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10;
                local_20 = (byte)iVar8;
                pbVar4[1] = -(char)((uint)iVar8 >> 8) | local_20;
              }
              *pbVar4 = (byte)(uVar10 & 0xff00ff);
              pbVar4[2] = (byte)((uVar10 & 0xff00ff) >> 0x10);
            }
            if (0 < (int)uVar7) {
              iVar8 = ((int)uVar3 >> 8) - (iVar12 + 1);
              if (0 < iVar8) {
                FUN_004bcc33(unaff_EDI,iVar12 + 1,iVar8,uVar7);
              }
            }
            iVar8 = (uVar3 & 0xff) * uVar7;
            uVar10 = uVar3;
          }
        }
        iVar8 = iVar8 >> 8;
        if (0 < iVar8) {
          if (iVar8 < 0xff) {
            iVar8 = unaff_EDI[2] * iVar8 >> 8;
            pbVar4 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
            uVar10 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                               *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar7 = (uVar10 >> 8 & 0xff00ff) * iVar8;
            iVar9 = 0x100 - (uVar7 >> 0x18);
            iVar12 = ((uint)pbVar4[1] * iVar9 >> 8) + (uVar7 >> 8 & 0xff00ff);
            local_38 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar9 >> 8 & 0xff00ff) +
                       ((uVar10 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            local_38 = 0x100 - (local_38 >> 8 & 0xff00ff) | local_38;
            local_24 = (byte)iVar12;
            local_28 = -(char)((uint)iVar12 >> 8) | local_24;
          }
          else {
            pbVar4 = (byte *)(*(int *)(*unaff_EDI + 0xc) * iVar12 + unaff_EDI[5]);
            uVar10 = *(uint *)(((iVar12 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                               *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar7 = (uVar10 >> 8 & 0xff00ff) * unaff_EDI[2];
            iVar12 = 0x100 - (uVar7 >> 0x18);
            iVar8 = ((uint)pbVar4[1] * iVar12 >> 8) + (uVar7 >> 8 & 0xff00ff);
            local_38 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar12 >> 8 & 0xff00ff) +
                       ((uVar10 & 0xff00ff) * unaff_EDI[2] >> 8 & 0xff00ff);
            local_38 = 0x100 - (local_38 >> 8 & 0xff00ff) | local_38;
            local_28 = (byte)iVar8;
            local_28 = -(char)((uint)iVar8 >> 8) | local_28;
          }
          local_38 = local_38 & 0xff00ff;
          pbVar4[1] = local_28;
          *pbVar4 = (byte)local_38;
          pbVar4[2] = (byte)(local_38 >> 0x10);
        }
      }
      local_18 = local_18 + 1;
      piVar5 = piVar5 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

