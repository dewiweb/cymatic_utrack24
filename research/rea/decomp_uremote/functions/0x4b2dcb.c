// rea decompile_all
// name: FUN_004b2dcb
// address: 0x4b2dcb
// body: available
// range: 0x4b2dcb-0x4b3171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2dcb(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *unaff_EDI;
  uint *local_2c;
  uint *local_20;
  int local_18;
  int local_14;
  uint local_8;
  
  local_18 = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar3 + -1;
      if (0 < local_14) {
        local_20 = (uint *)(piVar3 + 1);
        uVar8 = *local_20;
        iVar9 = param_1[2];
        local_8 = 0;
        unaff_EDI[5] = ((int *)*unaff_EDI)[2] * (iVar9 + local_18) + *(int *)*unaff_EDI;
        unaff_EDI[6] = ((iVar9 + local_18) - unaff_EDI[4]) * ((int *)unaff_EDI[1])[2] +
                       *(int *)unaff_EDI[1];
        while( true ) {
          local_14 = local_14 + -1;
          iVar9 = (int)uVar8 >> 8;
          if (local_14 < 0) break;
          uVar7 = local_20[1];
          local_20 = local_20 + 2;
          uVar2 = *local_20;
          if ((int)uVar2 >> 8 == iVar9) {
            local_8 = local_8 + (uVar2 - uVar8) * uVar7;
            uVar8 = uVar2;
          }
          else {
            iVar5 = (int)((0x100 - (uVar8 & 0xff)) * uVar7 + local_8) >> 8;
            if (0 < iVar5) {
              if (iVar5 < 0xff) {
                uVar8 = (uint)*(byte *)((iVar9 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                       unaff_EDI[6]);
                puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar9 + unaff_EDI[5]);
                uVar8 = (uVar8 << 0x10 | uVar8) * (unaff_EDI[2] * iVar5 >> 8);
                uVar6 = uVar8 >> 8 & 0xff00ff;
                iVar5 = 0x100 - (uVar8 >> 0x18);
                uVar8 = uVar6 + ((*puVar4 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar6 = ((*puVar4 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar6;
                uVar6 = ((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                        (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
                uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
              }
              else {
                uVar8 = (uint)*(byte *)((iVar9 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                       unaff_EDI[6]);
                puVar4 = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar9 + unaff_EDI[5]);
                uVar8 = (uVar8 << 0x10 | uVar8) * unaff_EDI[2];
                uVar6 = uVar8 >> 8 & 0xff00ff;
                iVar5 = 0x100 - (uVar8 >> 0x18);
                uVar8 = uVar6 + ((*puVar4 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
                uVar6 = ((*puVar4 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar6;
                uVar6 = ((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                        (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
                uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100;
              }
              *puVar4 = uVar6 & 0xff00ff ^ uVar8;
            }
            if (0 < (int)uVar7) {
              iVar5 = ((int)uVar2 >> 8) - (iVar9 + 1);
              if (0 < iVar5) {
                FUN_004bc84d(unaff_EDI,iVar9 + 1,iVar5,uVar7);
              }
            }
            local_8 = (uVar2 & 0xff) * uVar7;
            uVar8 = uVar2;
          }
        }
        iVar5 = (int)local_8 >> 8;
        if (0 < iVar5) {
          if (iVar5 < 0xff) {
            uVar8 = (uint)*(byte *)((iVar9 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                   unaff_EDI[6]);
            local_2c = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar9 + unaff_EDI[5]);
            uVar7 = (uVar8 << 0x10 | uVar8) * (unaff_EDI[2] * iVar5 >> 8);
            local_8 = uVar7 >> 8 & 0xff00ff;
            uVar8 = *local_2c;
            iVar9 = 0x100 - (uVar7 >> 0x18);
            uVar7 = ((uVar8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + local_8;
          }
          else {
            uVar8 = (uint)*(byte *)((iVar9 - unaff_EDI[3]) * *(int *)(unaff_EDI[1] + 0xc) +
                                   unaff_EDI[6]);
            local_2c = (uint *)(*(int *)(*unaff_EDI + 0xc) * iVar9 + unaff_EDI[5]);
            uVar7 = (uVar8 << 0x10 | uVar8) * unaff_EDI[2];
            local_8 = uVar7 >> 8 & 0xff00ff;
            uVar8 = *local_2c;
            iVar9 = 0x100 - (uVar7 >> 0x18);
            uVar7 = ((uVar8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + local_8;
          }
          local_8 = local_8 + ((uVar8 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
          *local_2c = (((0x100 - (local_8 >> 8 & 0xff00ff)) * 0x100 | local_8 * 0x100) ^
                      (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7)) & 0xff00ff ^
                      ((0x100 - (local_8 >> 8 & 0xff00ff)) * 0x100 | local_8 * 0x100);
        }
      }
      local_18 = local_18 + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

