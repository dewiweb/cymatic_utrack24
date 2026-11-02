// rea decompile_all
// name: FUN_004b1383
// address: 0x4b1383
// body: available
// range: 0x4b1383-0x4b15a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1383(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  int local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_18 = 0;
  piVar6 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar6 + -1;
      if (0 < local_14) {
        iVar8 = param_1[2];
        local_c = 0;
        puVar7 = (uint *)(piVar6 + 1);
        uVar5 = *puVar7;
        *(int *)(in_EAX + 0x60) = iVar8 + local_18;
        *(int *)(in_EAX + 100) =
             (*(int **)(in_EAX + 0x48))[2] * (iVar8 + local_18) + **(int **)(in_EAX + 0x48);
        while( true ) {
          local_14 = local_14 + -1;
          iVar8 = (int)uVar5 >> 8;
          if (local_14 < 0) break;
          uVar2 = puVar7[1];
          puVar7 = puVar7 + 2;
          uVar3 = *puVar7;
          if ((int)uVar3 >> 8 == iVar8) {
            local_c = local_c + (uVar3 - uVar5) * uVar2;
            uVar5 = uVar3;
          }
          else {
            iVar9 = (int)((0x100 - (uVar5 & 0xff)) * uVar2 + local_c) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0xff) {
                FUN_004be5c0(&local_6,iVar8,1);
                pbVar4 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar8 +
                                 *(int *)(in_EAX + 100));
                uVar5 = (((uint)(*(int *)(in_EAX + 0x50) * iVar9) >> 8) + 1) * (uint)local_6;
                *pbVar4 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar4 >> 8) + (char)(uVar5 >> 8);
              }
              else {
                FUN_004be5c0(&local_5,iVar8,1);
                pbVar4 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar8 +
                                 *(int *)(in_EAX + 100));
                uVar5 = (*(int *)(in_EAX + 0x50) + 1) * (uint)local_5;
                *pbVar4 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar4 >> 8) + (char)(uVar5 >> 8);
              }
            }
            if (0 < (int)uVar2) {
              iVar9 = ((int)uVar3 >> 8) - (iVar8 + 1);
              if (0 < iVar9) {
                FUN_004bbafd(iVar8 + 1,iVar9,uVar2);
              }
            }
            local_c = (uVar3 & 0xff) * uVar2;
            uVar5 = uVar3;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          if (local_c < 0xff) {
            FUN_004be5c0(&local_8,iVar8,1);
            pbVar4 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar8 +
                             *(int *)(in_EAX + 100));
            uVar5 = (((uint)(*(int *)(in_EAX + 0x50) * local_c) >> 8) + 1) * (uint)local_8;
            *pbVar4 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar4 >> 8) + (char)(uVar5 >> 8);
          }
          else {
            FUN_004be5c0(&local_7,iVar8,1);
            pbVar4 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar8 +
                             *(int *)(in_EAX + 100));
            uVar5 = (*(int *)(in_EAX + 0x50) + 1) * (uint)local_7;
            *pbVar4 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar4 >> 8) + (char)(uVar5 >> 8);
          }
        }
      }
      local_18 = local_18 + 1;
      piVar6 = piVar6 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

