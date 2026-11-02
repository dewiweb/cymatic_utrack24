// rea decompile_all
// name: FUN_004b20c2
// address: 0x4b20c2
// body: available
// range: 0x4b20c2-0x4b2579 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b20c2(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_EDI;
  uint *local_24;
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
        iVar9 = param_1[2];
        local_c = (uint *)(piVar6 + 1);
        uVar5 = *local_c;
        piVar2 = (int *)unaff_EDI[1];
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar9 + local_18) + *(int *)*unaff_EDI;
        unaff_EDI[6] = (((iVar9 + local_18) - unaff_EDI[4]) % piVar2[5]) * piVar2[2] + *piVar2;
        iVar9 = 0;
        while( true ) {
          local_14 = local_14 + -1;
          iVar8 = (int)uVar5 >> 8;
          if (local_14 < 0) break;
          uVar12 = local_c[1];
          local_c = local_c + 2;
          uVar3 = *local_c;
          if ((int)uVar3 >> 8 == iVar8) {
            iVar9 = iVar9 + (uVar3 - uVar5) * uVar12;
            uVar5 = uVar3;
          }
          else {
            iVar9 = (int)((0x100 - (uVar5 & 0xff)) * uVar12 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                iVar9 = unaff_EDI[2] * iVar9 >> 8;
                puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
                pbVar10 = (byte *)(((iVar8 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                   *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar5 = (pbVar10[1] | 0xff0000) * iVar9;
                iVar7 = 0x100 - (uVar5 >> 0x18);
                uVar11 = (((uint)pbVar10[2] << 0x10 | (uint)*pbVar10) * iVar9 >> 8 & 0xff00ff) +
                         ((*puVar4 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                uVar5 = (uVar5 >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                uVar11 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                         (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              else {
                puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
                pbVar10 = (byte *)(((iVar8 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                                   *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
                uVar5 = (pbVar10[1] | 0xff0000) * unaff_EDI[2];
                iVar9 = 0x100 - (uVar5 >> 0x18);
                uVar11 = (((uint)pbVar10[2] << 0x10 | (uint)*pbVar10) * unaff_EDI[2] >> 8 & 0xff00ff
                         ) + ((*puVar4 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar5 = (uVar5 >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
                uVar11 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                         (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11);
                uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100;
              }
              *puVar4 = uVar11 & 0xff00ff ^ uVar5;
            }
            if (0 < (int)uVar12) {
              iVar9 = ((int)uVar3 >> 8) - (iVar8 + 1);
              if (0 < iVar9) {
                FUN_004bbf25(unaff_EDI,iVar8 + 1,iVar9,uVar12);
              }
            }
            iVar9 = (uVar3 & 0xff) * uVar12;
            uVar5 = uVar3;
          }
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          if (iVar9 < 0xff) {
            iVar9 = unaff_EDI[2] * iVar9 >> 8;
            local_24 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
            pbVar10 = (byte *)(((iVar8 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                               *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar5 = (pbVar10[1] | 0xff0000) * iVar9;
            iVar8 = 0x100 - (uVar5 >> 0x18);
            uVar12 = (((uint)pbVar10[2] << 0x10 | (uint)*pbVar10) * iVar9 >> 8 & 0xff00ff) +
                     ((*local_24 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            uVar5 = (uVar5 >> 8 & 0xff00ff) + ((*local_24 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            uVar12 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                     (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12);
          }
          else {
            local_24 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar8 + unaff_EDI[5]);
            pbVar10 = (byte *)(((iVar8 - unaff_EDI[3]) % *(int *)(unaff_EDI[1] + 0x10)) *
                               *(int *)(unaff_EDI[1] + 0xc) + unaff_EDI[6]);
            uVar5 = (pbVar10[1] | 0xff0000) * unaff_EDI[2];
            iVar9 = 0x100 - (uVar5 >> 0x18);
            uVar12 = (((uint)pbVar10[2] << 0x10 | (uint)*pbVar10) * unaff_EDI[2] >> 8 & 0xff00ff) +
                     ((*local_24 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar5 = (uVar5 >> 8 & 0xff00ff) + ((*local_24 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar12 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8 ^
                     (0x100 - (uVar12 >> 8 & 0xff00ff) | uVar12);
          }
          *local_24 = uVar12 & 0xff00ff ^ (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) << 8;
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

