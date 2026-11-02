// rea decompile_all
// name: FUN_004ae16f
// address: 0x4ae16f
// body: available
// range: 0x4ae16f-0x4ae580 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae16f(undefined4 *param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_18 = 0;
  piVar2 = (int *)*param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar1 = param_1[6];
      local_14 = *piVar2 + -1;
      if (0 < local_14) {
        local_c = (uint *)0x0;
        local_20 = (uint *)(piVar2 + 1);
        uVar4 = *local_20;
        iVar6 = param_1[2];
        *(int *)(in_EAX + 0x60) = iVar6 + local_18;
        *(int *)(in_EAX + 100) =
             *(int *)(*(int *)(in_EAX + 0x48) + 8) * (iVar6 + local_18) + **(int **)(in_EAX + 0x48);
        while( true ) {
          local_14 = local_14 + -1;
          local_8 = (int)uVar4 >> 8;
          if (local_14 < 0) break;
          local_10 = local_20[1];
          local_20 = local_20 + 2;
          local_1c = *local_20;
          local_34 = (int)local_1c >> 8;
          if (local_34 == local_8) {
            local_c = (uint *)((int)local_c + (local_1c - uVar4) * local_10);
            uVar4 = local_1c;
          }
          else {
            local_c = (uint *)((int)((0x100 - (uVar4 & 0xff)) * local_10 + (int)local_c) >> 8);
            if (0 < (int)local_c) {
              if ((int)local_c < 0xff) {
                FUN_004be8d9(&local_30,local_8,1);
                puVar3 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * local_8 +
                                 *(int *)(in_EAX + 100));
                uVar5 = (uint)(*(int *)(in_EAX + 0x50) * (int)local_c) >> 8;
                uVar4 = (local_30 >> 8 & 0xff00ff) * uVar5;
                iVar6 = 0x100 - (uVar4 >> 0x18);
                local_2c = (uint *)(((*puVar3 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                                   ((local_30 & 0xff00ff) * uVar5 >> 8 & 0xff00ff));
                local_28 = (uint *)((uVar4 >> 8 & 0xff00ff) +
                                   ((*puVar3 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff));
                uVar5 = (0x100 - ((uint)local_28 >> 8 & 0xff00ff) | (uint)local_28) << 8 ^
                        (0x100 - ((uint)local_2c >> 8 & 0xff00ff) | (uint)local_2c);
                uVar4 = (0x100 - ((uint)local_28 >> 8 & 0xff00ff)) * 0x100 | (int)local_28 * 0x100;
                local_c = puVar3;
              }
              else {
                FUN_004be8d9(&local_24,local_8,1);
                puVar3 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * local_8 +
                                 *(int *)(in_EAX + 100));
                uVar4 = (local_24 >> 8 & 0xff00ff) * *(int *)(in_EAX + 0x50);
                iVar6 = 0x100 - (uVar4 >> 0x18);
                local_c = (uint *)(((*puVar3 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                                  ((local_24 & 0xff00ff) * *(int *)(in_EAX + 0x50) >> 8 & 0xff00ff))
                ;
                local_28 = (uint *)((uVar4 >> 8 & 0xff00ff) +
                                   ((*puVar3 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff));
                uVar5 = (0x100 - ((uint)local_28 >> 8 & 0xff00ff) | (uint)local_28) << 8 ^
                        (0x100 - ((uint)local_c >> 8 & 0xff00ff) | (uint)local_c);
                uVar4 = (0x100 - ((uint)local_28 >> 8 & 0xff00ff)) * 0x100 | (int)local_28 * 0x100;
                local_2c = puVar3;
              }
              *puVar3 = uVar5 & 0xff00ff ^ uVar4;
            }
            if (0 < (int)local_10) {
              local_8 = local_8 + 1;
              if (0 < (int)(local_34 - local_8)) {
                FUN_004b9707(local_8,local_34 - local_8,local_10);
              }
            }
            local_c = (uint *)((local_1c & 0xff) * local_10);
            uVar4 = local_1c;
          }
        }
        local_c = (uint *)((int)local_c >> 8);
        if (0 < (int)local_c) {
          if ((int)local_c < 0xff) {
            FUN_004be8d9(&local_3c,local_8,1);
            local_28 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * local_8 +
                               *(int *)(in_EAX + 100));
            uVar5 = (uint)(*(int *)(in_EAX + 0x50) * (int)local_c) >> 8;
            uVar4 = (local_3c >> 8 & 0xff00ff) * uVar5;
            iVar6 = 0x100 - (uVar4 >> 0x18);
            local_34 = ((*local_28 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                       ((local_3c & 0xff00ff) * uVar5 >> 8 & 0xff00ff);
            uVar5 = (*local_28 >> 8 & 0xff00ff) * iVar6;
          }
          else {
            FUN_004be8d9(&local_38,local_8,1);
            local_28 = (uint *)(*(int *)(*(int *)(in_EAX + 0x48) + 0xc) * local_8 +
                               *(int *)(in_EAX + 100));
            uVar4 = (local_38 >> 8 & 0xff00ff) * *(int *)(in_EAX + 0x50);
            iVar6 = 0x100 - (uVar4 >> 0x18);
            local_34 = ((*local_28 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                       ((local_38 & 0xff00ff) * *(int *)(in_EAX + 0x50) >> 8 & 0xff00ff);
            uVar5 = (*local_28 >> 8 & 0xff00ff) * iVar6;
          }
          local_2c = (uint *)((uVar4 >> 8 & 0xff00ff) + (uVar5 >> 8 & 0xff00ff));
          *local_28 = ((0x100 - ((uint)local_2c >> 8 & 0xff00ff) | (uint)local_2c) << 8 ^
                      (0x100 - (local_34 >> 8 & 0xff00ff) | local_34)) & 0xff00ff ^
                      ((0x100 - ((uint)local_2c >> 8 & 0xff00ff)) * 0x100 | (int)local_2c * 0x100);
        }
      }
      local_18 = local_18 + 1;
      piVar2 = piVar2 + iVar1;
    } while (local_18 < (int)param_1[4]);
  }
  return;
}

