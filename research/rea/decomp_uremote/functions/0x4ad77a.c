// rea decompile_all
// name: FUN_004ad77a
// address: 0x4ad77a
// body: available
// range: 0x4ad77a-0x4ad952 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad77a(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  uint *puVar11;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  piVar10 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_10 = *piVar10 + -1;
      if (0 < local_10) {
        iVar6 = param_1[2];
        local_c = 0;
        puVar11 = (uint *)(piVar10 + 1);
        uVar7 = *puVar11;
        *(int *)(in_EAX + 0x34) =
             (*(int **)(in_EAX + 0x30))[2] * (iVar6 + local_14) + **(int **)(in_EAX + 0x30);
        dVar4 = (double)(iVar6 + local_14) - *(double *)(in_EAX + 0x10);
        *(double *)(in_EAX + 0x28) = dVar4 * dVar4;
        while( true ) {
          local_10 = local_10 + -1;
          iVar6 = (int)uVar7 >> 8;
          if (local_10 < 0) break;
          uVar2 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar3 = *puVar11;
          if ((int)uVar3 >> 8 == iVar6) {
            local_c = local_c + (uVar3 - uVar7) * uVar2;
            uVar7 = uVar3;
          }
          else {
            iVar8 = (int)((0x100 - (uVar7 & 0xff)) * uVar2 + local_c) >> 8;
            if (0 < iVar8) {
              if (iVar8 < 0xff) {
                pbVar9 = (byte *)(*(int *)(*(int *)(in_EAX + 0x30) + 0xc) * iVar6 +
                                 *(int *)(in_EAX + 0x34));
                iVar5 = FUN_00475582(iVar6);
                uVar7 = (uint)*(byte *)(iVar5 + 3) * (iVar8 + 1);
                *pbVar9 = (char)((0x100 - (uVar7 >> 8)) * (uint)*pbVar9 >> 8) + (char)(uVar7 >> 8);
              }
              else {
                pbVar9 = (byte *)(*(int *)(*(int *)(in_EAX + 0x30) + 0xc) * iVar6 +
                                 *(int *)(in_EAX + 0x34));
                iVar8 = FUN_00475582(iVar6);
                *pbVar9 = (char)((0x100 - (uint)*(byte *)(iVar8 + 3)) * (uint)*pbVar9 >> 8) +
                          *(byte *)(iVar8 + 3);
              }
            }
            if (0 < (int)uVar2) {
              iVar8 = ((int)uVar3 >> 8) - (iVar6 + 1);
              if (0 < iVar8) {
                FUN_004ba70c(iVar6 + 1,iVar8);
              }
            }
            local_c = (uVar3 & 0xff) * uVar2;
            uVar7 = uVar3;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          pbVar9 = (byte *)(*(int *)(*(int *)(in_EAX + 0x30) + 0xc) * iVar6 +
                           *(int *)(in_EAX + 0x34));
          if (local_c < 0xff) {
            iVar6 = FUN_00475582(iVar6);
            uVar7 = (uint)*(byte *)(iVar6 + 3) * (local_c + 1) >> 8;
          }
          else {
            iVar6 = FUN_00475582(iVar6);
            uVar7 = (uint)*(byte *)(iVar6 + 3);
          }
          *pbVar9 = (char)((0x100 - uVar7) * (uint)*pbVar9 >> 8) + (char)uVar7;
        }
      }
      local_14 = local_14 + 1;
      piVar10 = piVar10 + iVar1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

