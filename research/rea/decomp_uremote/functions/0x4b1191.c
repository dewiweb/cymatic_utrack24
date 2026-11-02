// rea decompile_all
// name: FUN_004b1191
// address: 0x4b1191
// body: available
// range: 0x4b1191-0x4b1382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b1191(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_c;
  undefined1 local_8 [4];
  
  local_18 = 0;
  piVar7 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar7 + -1;
      if (0 < local_14) {
        iVar9 = param_1[2];
        local_c = 0;
        puVar8 = (uint *)(piVar7 + 1);
        uVar6 = *puVar8;
        *(int *)(in_EAX + 0x60) = iVar9 + local_18;
        *(int *)(in_EAX + 100) =
             (*(int **)(in_EAX + 0x48))[2] * (iVar9 + local_18) + **(int **)(in_EAX + 0x48);
        while( true ) {
          local_14 = local_14 + -1;
          iVar9 = (int)uVar6 >> 8;
          if (local_14 < 0) break;
          uVar2 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar3 = *puVar8;
          iVar4 = (int)uVar3 >> 8;
          if (iVar4 == iVar9) {
            local_c = local_c + (uVar3 - uVar6) * uVar2;
            uVar6 = uVar3;
          }
          else {
            iVar10 = (int)((0x100 - (uVar6 & 0xff)) * uVar2 + local_c) >> 8;
            if (0 < iVar10) {
              FUN_004beb3b(local_8,iVar9,1);
              if (iVar10 < 0xff) {
                pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                                 *(int *)(in_EAX + 100));
                uVar6 = (((uint)(*(int *)(in_EAX + 0x50) * iVar10) >> 8) + 1) * 0xff;
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
              else {
                pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                                 *(int *)(in_EAX + 100));
                uVar6 = (*(int *)(in_EAX + 0x50) + 1) * 0xff;
                *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
              }
            }
            if ((0 < (int)uVar2) && (iVar9 = iVar9 + 1, iVar4 != iVar9 && -1 < iVar4 - iVar9)) {
              FUN_004bba7e(iVar9,uVar2);
            }
            local_c = (uVar3 & 0xff) * uVar2;
            uVar6 = uVar3;
          }
        }
        local_c = local_c >> 8;
        if (0 < local_c) {
          FUN_004beb3b(local_8,iVar9,1);
          if (local_c < 0xff) {
            pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                             *(int *)(in_EAX + 100));
            uVar6 = (((uint)(*(int *)(in_EAX + 0x50) * local_c) >> 8) + 1) * 0xff;
            *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
          }
          else {
            pbVar5 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                             *(int *)(in_EAX + 100));
            uVar6 = (*(int *)(in_EAX + 0x50) + 1) * 0xff;
            *pbVar5 = (char)((0x100 - (uVar6 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar6 >> 8);
          }
        }
      }
      local_18 = local_18 + 1;
      piVar7 = piVar7 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

