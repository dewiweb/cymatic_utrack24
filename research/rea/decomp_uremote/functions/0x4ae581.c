// rea decompile_all
// name: FUN_004ae581
// address: 0x4ae581
// body: available
// range: 0x4ae581-0x4ae9b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae581(undefined4 *param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_3c;
  uint *local_34;
  uint *local_30;
  int local_28;
  int local_24;
  int local_1c;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_8;
  byte local_7;
  byte local_6;
  
  local_28 = 0;
  piVar2 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_24 = *piVar2 + -1;
      if (0 < local_24) {
        local_1c = 0;
        local_30 = (uint *)(piVar2 + 1);
        uVar6 = *local_30;
        iVar7 = param_1[2];
        *(int *)(in_EAX + 0x60) = iVar7 + local_28;
        *(int *)(in_EAX + 100) =
             *(int *)(*(int *)(in_EAX + 0x48) + 8) * (iVar7 + local_28) + **(int **)(in_EAX + 0x48);
        while( true ) {
          local_24 = local_24 + -1;
          iVar7 = (int)uVar6 >> 8;
          if (local_24 < 0) break;
          uVar5 = local_30[1];
          local_30 = local_30 + 2;
          uVar9 = *local_30;
          if ((int)uVar9 >> 8 == iVar7) {
            local_1c = local_1c + (uVar9 - uVar6) * uVar5;
            uVar6 = uVar9;
          }
          else {
            iVar3 = (int)((0x100 - (uVar6 & 0xff)) * uVar5 + local_1c) >> 8;
            if (0 < iVar3) {
              if (iVar3 < 0xff) {
                FUN_004bea3e(iVar7,1);
                puVar4 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar7 +
                                 *(int *)(in_EAX + 100));
                uVar8 = (uint)(*(int *)(in_EAX + 0x50) * iVar3) >> 8;
                uVar6 = (local_b | 0xff0000) * uVar8;
                iVar3 = 0x100 - (uVar6 >> 0x18);
                uVar8 = (((uint)local_a << 0x10 | (uint)local_c) * uVar8 >> 8 & 0xff00ff) +
                        ((*puVar4 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
                uVar6 = (uVar6 >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
                uVar8 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) << 8 ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
                uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100;
              }
              else {
                FUN_004bea3e(iVar7,1);
                puVar4 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar7 +
                                 *(int *)(in_EAX + 100));
                uVar6 = (local_7 | 0xff0000) * *(int *)(in_EAX + 0x50);
                iVar3 = 0x100 - (uVar6 >> 0x18);
                uVar8 = (((uint)local_6 << 0x10 | (uint)local_8) * *(int *)(in_EAX + 0x50) >> 8 &
                        0xff00ff) + ((*puVar4 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
                uVar6 = (uVar6 >> 8 & 0xff00ff) +
                        ((*puVar4 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
                uVar8 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) << 8 ^
                        (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8);
                uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100;
              }
              *puVar4 = uVar8 & 0xff00ff ^ uVar6;
            }
            if (0 < (int)uVar5) {
              iVar3 = ((int)uVar9 >> 8) - (iVar7 + 1);
              if (0 < iVar3) {
                FUN_004baa9c(iVar7 + 1,iVar3,uVar5);
              }
            }
            local_1c = (uVar9 & 0xff) * uVar5;
            uVar6 = uVar9;
          }
        }
        local_1c = local_1c >> 8;
        if (0 < local_1c) {
          if (local_1c < 0xff) {
            FUN_004bea3e(iVar7,1);
            local_34 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar7 +
                               *(int *)(in_EAX + 100));
            uVar9 = (uint)(*(int *)(in_EAX + 0x50) * local_1c) >> 8;
            uVar5 = (local_13 | 0xff0000) * uVar9;
            local_3c = 0x100 - (uVar5 >> 0x18);
            uVar6 = *local_34;
            uVar9 = (((uint)local_12 << 0x10 | (uint)local_14) * uVar9 >> 8 & 0xff00ff) +
                    ((uVar6 & 0xff00ff) * local_3c >> 8 & 0xff00ff);
          }
          else {
            FUN_004bea3e(iVar7,1);
            local_34 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * iVar7 +
                               *(int *)(in_EAX + 100));
            uVar5 = (local_f | 0xff0000) * *(int *)(in_EAX + 0x50);
            local_3c = 0x100 - (uVar5 >> 0x18);
            uVar6 = *local_34;
            uVar9 = (((uint)local_e << 0x10 | (uint)local_10) * *(int *)(in_EAX + 0x50) >> 8 &
                    0xff00ff) + ((uVar6 & 0xff00ff) * local_3c >> 8 & 0xff00ff);
          }
          uVar6 = (uVar5 >> 8 & 0xff00ff) + ((uVar6 >> 8 & 0xff00ff) * local_3c >> 8 & 0xff00ff);
          *local_34 = ((0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) << 8 ^
                      (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
                      ((0x100 - (uVar6 >> 8 & 0xff00ff)) * 0x100 | uVar6 * 0x100);
        }
      }
      local_28 = local_28 + 1;
      piVar2 = piVar2 + iVar1;
    } while (local_28 < (int)param_1[4]);
  }
  return;
}

