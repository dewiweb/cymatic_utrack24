// rea decompile_all
// name: FUN_004b3cf6
// address: 0x4b3cf6
// body: available
// range: 0x4b3cf6-0x4b405e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3cf6(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *unaff_ESI;
  short local_24;
  uint *local_1c;
  int local_14;
  int local_10;
  short local_c;
  
  local_14 = 0;
  piVar4 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar4 + -1;
      if (0 < local_10) {
        iVar11 = param_1[2];
        local_1c = (uint *)(piVar4 + 1);
        uVar7 = *local_1c;
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar11 + local_14) + *(int *)*unaff_ESI;
        iVar5 = 0;
        unaff_ESI[6] = ((iVar11 + local_14) - unaff_ESI[4]) * ((int *)unaff_ESI[1])[2] +
                       *(int *)unaff_ESI[1];
        while( true ) {
          local_10 = local_10 + -1;
          iVar11 = (int)uVar7 >> 8;
          if (local_10 < 0) break;
          uVar9 = local_1c[1];
          local_1c = local_1c + 2;
          uVar2 = *local_1c;
          if ((int)uVar2 >> 8 == iVar11) {
            iVar5 = iVar5 + (uVar2 - uVar7) * uVar9;
            uVar7 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar7 & 0xff)) * uVar9 + iVar5) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                pbVar6 = (byte *)((iVar11 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                 unaff_ESI[6]);
                pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
                iVar5 = unaff_ESI[2] * iVar5 >> 8;
                uVar7 = (pbVar6[1] | 0xff0000) * iVar5;
                iVar10 = 0x100 - (uVar7 >> 0x18);
                local_c = (short)((uint)pbVar3[1] * iVar10 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
                uVar8 = ((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar5;
                uVar7 = ((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar10;
              }
              else {
                pbVar6 = (byte *)((iVar11 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) +
                                 unaff_ESI[6]);
                pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
                uVar7 = (pbVar6[1] | 0xff0000) * unaff_ESI[2];
                iVar5 = 0x100 - (uVar7 >> 0x18);
                local_c = (short)((uint)pbVar3[1] * iVar5 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
                uVar8 = ((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * unaff_ESI[2];
                uVar7 = ((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar5;
              }
              uVar7 = (uVar8 >> 8 & 0xff00ff) + (uVar7 >> 8 & 0xff00ff);
              uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
              pbVar3[1] = -(char)((ushort)local_c >> 8) | (byte)local_c;
              pbVar3[2] = (byte)(uVar7 >> 0x10);
              *pbVar3 = (byte)uVar7;
            }
            if (0 < (int)uVar9) {
              iVar5 = ((int)uVar2 >> 8) - (iVar11 + 1);
              if (0 < iVar5) {
                FUN_004bd4a8(unaff_ESI,iVar11 + 1,iVar5,uVar9);
              }
            }
            iVar5 = (uVar2 & 0xff) * uVar9;
            uVar7 = uVar2;
          }
        }
        iVar5 = iVar5 >> 8;
        if (0 < iVar5) {
          if (iVar5 < 0xff) {
            iVar5 = unaff_ESI[2] * iVar5 >> 8;
            pbVar6 = (byte *)((iVar11 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6])
            ;
            pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
            uVar7 = (pbVar6[1] | 0xff0000) * iVar5;
            iVar11 = 0x100 - (uVar7 >> 0x18);
            local_24 = (short)((uint)pbVar3[1] * iVar11 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar9 = ((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar5;
            uVar7 = ((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar11;
          }
          else {
            pbVar6 = (byte *)((iVar11 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + unaff_ESI[6])
            ;
            pbVar3 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar11 + unaff_ESI[5]);
            uVar7 = (pbVar6[1] | 0xff0000) * unaff_ESI[2];
            iVar11 = 0x100 - (uVar7 >> 0x18);
            local_24 = (short)((uint)pbVar3[1] * iVar11 >> 8) + ((ushort)(uVar7 >> 8) & 0xff);
            uVar9 = ((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * unaff_ESI[2];
            uVar7 = ((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar11;
          }
          uVar7 = (uVar9 >> 8 & 0xff00ff) + (uVar7 >> 8 & 0xff00ff);
          uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
          pbVar3[1] = -(char)((ushort)local_24 >> 8) | (byte)local_24;
          *pbVar3 = (byte)uVar7;
          pbVar3[2] = (byte)(uVar7 >> 0x10);
        }
      }
      local_14 = local_14 + 1;
      piVar4 = piVar4 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

