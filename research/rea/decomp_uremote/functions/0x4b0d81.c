// rea decompile_all
// name: FUN_004b0d81
// address: 0x4b0d81
// body: available
// range: 0x4b0d81-0x4b0fa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0d81(undefined4 *param_1)

{
  int *piVar1;
  int in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_34 [3];
  byte local_31;
  undefined1 local_30 [3];
  byte local_2d;
  undefined1 local_2c [3];
  byte local_29;
  undefined1 local_28 [3];
  byte local_25;
  int *local_24;
  int local_20;
  uint local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_24 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar5 = param_1[6];
      local_10 = *local_24 + -1;
      piVar1 = local_24 + iVar5;
      if (0 < local_10) {
        iVar6 = param_1[2];
        local_8 = 0;
        uVar3 = local_24[1];
        *(int *)(in_EAX + 0x60) = iVar6 + local_14;
        *(int *)(in_EAX + 100) =
             (*(int **)(in_EAX + 0x48))[2] * (iVar6 + local_14) + **(int **)(in_EAX + 0x48);
        puVar4 = (uint *)(local_24 + 1);
        local_24 = local_24 + iVar5;
        while( true ) {
          local_10 = local_10 + -1;
          iVar5 = (int)uVar3 >> 8;
          if (local_10 < 0) break;
          local_c = puVar4[1];
          local_18 = puVar4 + 2;
          local_1c = *local_18;
          local_20 = (int)local_1c >> 8;
          if (local_20 == iVar5) {
            local_8 = local_8 + (local_1c - uVar3) * local_c;
            puVar4 = local_18;
            uVar3 = local_1c;
          }
          else {
            iVar6 = (int)((0x100 - (uVar3 & 0xff)) * local_c + local_8) >> 8;
            if (0 < iVar6) {
              if (iVar6 < 0xff) {
                FUN_004be8d9(local_2c,iVar5,1);
                pbVar2 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar5 +
                                 *(int *)(in_EAX + 100));
                uVar3 = (((uint)(*(int *)(in_EAX + 0x50) * iVar6) >> 8) + 1) * (uint)local_29;
                *pbVar2 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar2 >> 8) + (char)(uVar3 >> 8);
              }
              else {
                FUN_004be8d9(local_28,iVar5,1);
                pbVar2 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar5 +
                                 *(int *)(in_EAX + 100));
                uVar3 = (*(int *)(in_EAX + 0x50) + 1) * (uint)local_25;
                *pbVar2 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar2 >> 8) + (char)(uVar3 >> 8);
              }
            }
            if ((0 < (int)local_c) &&
               (iVar5 = iVar5 + 1, local_20 != iVar5 && -1 < local_20 - iVar5)) {
              FUN_004bb948(iVar5,local_c);
            }
            local_8 = (local_1c & 0xff) * local_c;
            puVar4 = local_18;
            uVar3 = local_1c;
          }
        }
        local_8 = local_8 >> 8;
        piVar1 = local_24;
        if (0 < local_8) {
          if (local_8 < 0xff) {
            FUN_004be8d9(local_34,iVar5,1);
            pbVar2 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar5 +
                             *(int *)(in_EAX + 100));
            uVar3 = (((uint)(*(int *)(in_EAX + 0x50) * local_8) >> 8) + 1) * (uint)local_31;
            *pbVar2 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar2 >> 8) + (char)(uVar3 >> 8);
            piVar1 = local_24;
          }
          else {
            FUN_004be8d9(local_30,iVar5,1);
            pbVar2 = (byte *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar5 +
                             *(int *)(in_EAX + 100));
            uVar3 = (*(int *)(in_EAX + 0x50) + 1) * (uint)local_2d;
            *pbVar2 = (char)((0x100 - (uVar3 >> 8)) * (uint)*pbVar2 >> 8) + (char)(uVar3 >> 8);
            piVar1 = local_24;
          }
        }
      }
      local_24 = piVar1;
      local_14 = local_14 + 1;
    } while (local_14 < (int)param_1[4]);
  }
  return;
}

