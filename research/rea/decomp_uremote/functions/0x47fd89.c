// rea decompile_all
// name: FUN_0047fd89
// address: 0x47fd89
// body: available
// range: 0x47fd89-0x47ff5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fd89(uint param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  uint local_2c;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined2 *local_14;
  undefined2 *local_10;
  uint local_8;
  
  iVar4 = param_1;
  local_20 = 0;
  iVar2 = *(int *)(param_1 + 0x148);
  uVar5 = *(int *)(param_1 + 0xe0) - 1;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < *(int *)(param_1 + 0x3c)) {
    local_1c = param_2;
    local_18 = (undefined4 *)(iVar2 + 0x40);
    do {
      iVar6 = (**(code **)(*(int *)(iVar4 + 4) + 0x20))
                        (iVar4,*local_18,*(int *)(iVar2 + 8) * *(int *)(iVar11 + 0xc),
                         *(int *)(iVar11 + 0xc),1);
      if (*(uint *)(iVar2 + 8) < uVar5) {
        local_10 = (undefined2 *)*(uint *)(iVar11 + 0xc);
      }
      else {
        local_10 = (undefined2 *)(*(uint *)(iVar11 + 0x20) % *(uint *)(iVar11 + 0xc));
        if (local_10 == (undefined2 *)0x0) {
          local_10 = (undefined2 *)*(uint *)(iVar11 + 0xc);
        }
      }
      uVar7 = *(uint *)(iVar11 + 0x1c);
      uVar3 = *(uint *)(iVar11 + 8);
      local_8 = uVar7 % uVar3;
      if (0 < (int)local_8) {
        local_8 = uVar3 - local_8;
      }
      param_1 = 0;
      if (0 < (int)local_10) {
        do {
          iVar10 = *(int *)(iVar6 + param_1 * 4);
          (**(code **)(*(int *)(iVar4 + 0x158) + 4))
                    (iVar4,iVar11,*local_1c,iVar10,param_1 << 3,0,uVar7);
          if (0 < (int)local_8) {
            puVar9 = (undefined2 *)(iVar10 + uVar7 * 0x80);
            FUN_0048e721(puVar9,local_8 << 7);
            uVar1 = puVar9[-0x40];
            uVar8 = local_8;
            if (0 < (int)local_8) {
              do {
                *puVar9 = uVar1;
                puVar9 = puVar9 + 0x40;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          param_1 = param_1 + 1;
        } while ((int)param_1 < (int)local_10);
      }
      if (*(uint *)(iVar2 + 8) == uVar5) {
        uVar7 = uVar7 + local_8;
        uVar8 = uVar7 / uVar3;
        param_1 = (uint)local_10;
        if ((int)local_10 < *(int *)(iVar11 + 0xc)) {
          do {
            local_10 = *(undefined2 **)(param_1 * 4 + iVar6);
            iVar10 = *(int *)(param_1 * 4 + -4 + iVar6);
            FUN_0048e721(local_10,uVar7 * 0x80);
            if (uVar8 != 0) {
              local_2c = uVar8;
              do {
                uVar1 = *(undefined2 *)(uVar3 * 0x80 + -0x80 + iVar10);
                if (0 < (int)uVar3) {
                  local_14 = local_10;
                  local_8 = uVar3;
                  do {
                    local_8 = local_8 - 1;
                    *local_14 = uVar1;
                    local_14 = local_14 + 0x40;
                  } while (local_8 != 0);
                }
                local_10 = local_10 + uVar3 * 0x40;
                iVar10 = iVar10 + uVar3 * 0x80;
                local_2c = local_2c - 1;
              } while (local_2c != 0);
            }
            param_1 = param_1 + 1;
          } while ((int)param_1 < *(int *)(iVar11 + 0xc));
        }
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      iVar11 = iVar11 + 0x54;
    } while (local_20 < *(int *)(iVar4 + 0x3c));
  }
  FUN_0047ff5e(iVar4,param_2);
  return;
}

