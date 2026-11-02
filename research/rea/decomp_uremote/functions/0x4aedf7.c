// rea decompile_all
// name: FUN_004aedf7
// address: 0x4aedf7
// body: available
// range: 0x4aedf7-0x4af19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aedf7(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *local_30;
  uint *local_24;
  int local_1c;
  int local_18;
  uint local_10;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_1c = 0;
  piVar3 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_18 = *piVar3 + -1;
      if (0 < local_18) {
        local_10 = 0;
        local_24 = (uint *)(piVar3 + 1);
        uVar6 = *local_24;
        iVar9 = param_1[2];
        *(int *)(in_EAX + 0x60) = iVar9 + local_1c;
        *(int *)(in_EAX + 100) =
             *(int *)(*(int *)(in_EAX + 0x48) + 8) * (iVar9 + local_1c) + **(int **)(in_EAX + 0x48);
        while( true ) {
          local_18 = local_18 + -1;
          iVar9 = (int)uVar6 >> 8;
          if (local_18 < 0) break;
          uVar8 = local_24[1];
          local_24 = local_24 + 2;
          uVar2 = *local_24;
          if ((int)uVar2 >> 8 == iVar9) {
            local_10 = local_10 + (uVar2 - uVar6) * uVar8;
            uVar6 = uVar2;
          }
          else {
            iVar4 = (int)((0x100 - (uVar6 & 0xff)) * uVar8 + local_10) >> 8;
            if (0 < iVar4) {
              if (iVar4 < 0xff) {
                FUN_004be5c0(&local_6,iVar9,1);
                puVar5 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                                 *(int *)(in_EAX + 100));
                uVar6 = ((uint)local_6 << 0x10 | (uint)local_6) *
                        ((uint)(*(int *)(in_EAX + 0x50) * iVar4) >> 8);
                uVar7 = uVar6 >> 8 & 0xff00ff;
                iVar4 = 0x100 - (uVar6 >> 0x18);
                uVar6 = uVar7 + ((*puVar5 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar7 = ((*puVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + uVar7;
                uVar7 = ((0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100) ^
                        (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
                uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100;
              }
              else {
                FUN_004be5c0(&local_5,iVar9,1);
                puVar5 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                                 *(int *)(in_EAX + 100));
                uVar6 = ((uint)local_5 << 0x10 | (uint)local_5) * *(int *)(in_EAX + 0x50);
                uVar7 = uVar6 >> 8 & 0xff00ff;
                iVar4 = 0x100 - (uVar6 >> 0x18);
                uVar6 = uVar7 + ((*puVar5 >> 8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
                uVar7 = ((*puVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + uVar7;
                uVar7 = ((0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100) ^
                        (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7);
                uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100;
              }
              *puVar5 = uVar7 & 0xff00ff ^ uVar6;
            }
            if (0 < (int)uVar8) {
              iVar4 = ((int)uVar2 >> 8) - (iVar9 + 1);
              if (0 < iVar4) {
                FUN_004bad53(iVar9 + 1,iVar4,uVar8);
              }
            }
            local_10 = (uVar2 & 0xff) * uVar8;
            uVar6 = uVar2;
          }
        }
        iVar4 = (int)local_10 >> 8;
        if (0 < iVar4) {
          if (iVar4 < 0xff) {
            FUN_004be5c0(&local_8,iVar9,1);
            local_30 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                               *(int *)(in_EAX + 100));
            uVar8 = ((uint)local_8 << 0x10 | (uint)local_8) *
                    ((uint)(*(int *)(in_EAX + 0x50) * iVar4) >> 8);
            local_10 = uVar8 >> 8 & 0xff00ff;
            uVar6 = *local_30;
            iVar9 = 0x100 - (uVar8 >> 0x18);
            uVar8 = ((uVar6 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + local_10;
          }
          else {
            FUN_004be5c0(&local_7,iVar9,1);
            local_30 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar9 +
                               *(int *)(in_EAX + 100));
            uVar8 = ((uint)local_7 << 0x10 | (uint)local_7) * *(int *)(in_EAX + 0x50);
            local_10 = uVar8 >> 8 & 0xff00ff;
            uVar6 = *local_30;
            iVar9 = 0x100 - (uVar8 >> 0x18);
            uVar8 = ((uVar6 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + local_10;
          }
          local_10 = local_10 + ((uVar6 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
          *local_30 = (((0x100 - (local_10 >> 8 & 0xff00ff)) * 0x100 | local_10 * 0x100) ^
                      (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                      ((0x100 - (local_10 >> 8 & 0xff00ff)) * 0x100 | local_10 * 0x100);
        }
      }
      local_1c = local_1c + 1;
      piVar3 = piVar3 + iVar1;
    } while (local_1c < (int)param_1[4]);
  }
  return;
}

