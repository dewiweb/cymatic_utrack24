// rea decompile_all
// name: FUN_004b496c
// address: 0x4b496c
// body: available
// range: 0x4b496c-0x4b4b6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b496c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *unaff_ESI;
  int *piVar8;
  uint *puVar9;
  int local_18;
  int local_14;
  int local_8;
  
  local_18 = 0;
  piVar8 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar8 + -1;
      if (0 < local_14) {
        iVar7 = param_1[2];
        local_8 = 0;
        puVar9 = (uint *)(piVar8 + 1);
        uVar6 = *puVar9;
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar7 + local_18) + *(int *)*unaff_ESI;
        unaff_ESI[6] = ((iVar7 + local_18) - unaff_ESI[4]) * ((int *)unaff_ESI[1])[2] +
                       *(int *)unaff_ESI[1];
        while( true ) {
          local_14 = local_14 + -1;
          iVar7 = (int)uVar6 >> 8;
          if (local_14 < 0) break;
          uVar2 = puVar9[1];
          puVar9 = puVar9 + 2;
          uVar3 = *puVar9;
          if ((int)uVar3 >> 8 == iVar7) {
            local_8 = local_8 + (uVar3 - uVar6) * uVar2;
            uVar6 = uVar3;
          }
          else {
            iVar4 = (int)((0x100 - (uVar6 & 0xff)) * uVar2 + local_8) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar7 + unaff_ESI[5]);
                uVar6 = (uint)*(byte *)((iVar7 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + 3 +
                                       unaff_ESI[6]) * ((unaff_ESI[2] * iVar4 >> 8) + 1);
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
              else {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar7 + unaff_ESI[5]);
                uVar6 = (uint)*(byte *)((iVar7 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + 3 +
                                       unaff_ESI[6]) * (unaff_ESI[2] + 1);
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
            }
            if ((0 < (int)uVar2) && (iVar7 = ((int)uVar3 >> 8) - (iVar7 + 1), 0 < iVar7)) {
              FUN_004bde89(iVar7,uVar2);
            }
            local_8 = (uVar3 & 0xff) * uVar2;
            uVar6 = uVar3;
          }
        }
        local_8 = local_8 >> 8;
        if (0 < local_8) {
          pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar7 + unaff_ESI[5]);
          if (local_8 < 0xff) {
            uVar6 = (uint)*(byte *)((iVar7 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + 3 +
                                   unaff_ESI[6]) * ((unaff_ESI[2] * local_8 >> 8) + 1);
          }
          else {
            uVar6 = (uint)*(byte *)((iVar7 - unaff_ESI[3]) * *(int *)(unaff_ESI[1] + 0xc) + 3 +
                                   unaff_ESI[6]) * (unaff_ESI[2] + 1);
          }
          *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
        }
      }
      local_18 = local_18 + 1;
      piVar8 = piVar8 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

