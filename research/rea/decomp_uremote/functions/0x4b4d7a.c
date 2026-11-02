// rea decompile_all
// name: FUN_004b4d7a
// address: 0x4b4d7a
// body: available
// range: 0x4b4d7a-0x4b4f5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4d7a(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *unaff_ESI;
  int iVar9;
  int local_14;
  int local_10;
  
  local_14 = 0;
  piVar7 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar7 + -1;
      if (0 < local_10) {
        iVar4 = param_1[2];
        puVar8 = (uint *)(piVar7 + 1);
        uVar6 = *puVar8;
        unaff_ESI[5] = ((int *)*unaff_ESI)[2] * (iVar4 + local_14) + *(int *)*unaff_ESI;
        iVar9 = 0;
        unaff_ESI[6] = ((iVar4 + local_14) - unaff_ESI[4]) * ((int *)unaff_ESI[1])[2] +
                       *(int *)unaff_ESI[1];
        while( true ) {
          local_10 = local_10 + -1;
          iVar4 = (int)uVar6 >> 8;
          if (local_10 < 0) break;
          uVar2 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar3 = *puVar8;
          if ((int)uVar3 >> 8 == iVar4) {
            iVar9 = iVar9 + (uVar3 - uVar6) * uVar2;
            uVar6 = uVar3;
          }
          else {
            iVar9 = (int)((0x100 - (uVar6 & 0xff)) * uVar2 + iVar9) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
                uVar6 = ((unaff_ESI[2] * iVar9 >> 8) + 1) * 0xff;
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
              else {
                pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
                uVar6 = (unaff_ESI[2] + 1) * 0xff;
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
            }
            if ((0 < (int)uVar2) && (iVar4 = ((int)uVar3 >> 8) - (iVar4 + 1), 0 < iVar4)) {
              FUN_004be034(iVar4,uVar2);
            }
            iVar9 = (uVar3 & 0xff) * uVar2;
            uVar6 = uVar3;
          }
        }
        iVar9 = iVar9 >> 8;
        if (0 < iVar9) {
          if (iVar9 < 0xff) {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
            uVar6 = ((unaff_ESI[2] * iVar9 >> 8) + 1) * 0xff;
            *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
          }
          else {
            pbVar5 = (byte *)(*(int *)(*unaff_ESI + 0xc) * iVar4 + unaff_ESI[5]);
            uVar6 = (unaff_ESI[2] + 1) * 0xff;
            *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
          }
        }
      }
      local_14 = local_14 + 1;
      piVar7 = piVar7 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

