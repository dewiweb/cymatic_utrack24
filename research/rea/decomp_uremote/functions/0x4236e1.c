// rea decompile_all
// name: FUN_004236e1
// address: 0x4236e1
// body: available
// range: 0x4236e1-0x4238eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004236e1(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_1c = 0;
  local_20 = 0;
  local_24 = (**(code **)(param_1 + 0x1fc))(param_1,0x6b65726e,param_2,&local_28);
  if (local_24 == 0) {
    if (local_28 < 4) {
      local_24 = 0x8e;
    }
    else {
      local_24 = FUN_0041117c((int *)(param_1 + 0x304));
      if (local_24 == 0) {
        iVar3 = *(int *)(param_1 + 0x304);
        *(uint *)(param_1 + 0x308) = local_28;
        local_28 = local_28 + iVar3;
        local_14 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 2),*(undefined1 *)(iVar3 + 3));
        if (0x20 < local_14) {
          local_14 = 0x20;
        }
        local_10 = 0;
        uVar4 = iVar3 + 4;
        if (local_14 != 0) {
          do {
            uVar1 = 1 << ((byte)local_10 & 0x1f);
            if (local_28 < uVar4 + 6) break;
            local_8 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 2),*(undefined1 *)(uVar4 + 3));
            if (local_8 < 7) break;
            local_8 = uVar4 + local_8;
            if (local_28 < local_8) {
              local_8 = local_28;
            }
            if (((CONCAT11(*(undefined1 *)(uVar4 + 4),*(undefined1 *)(uVar4 + 5)) & 0xfff7) == 1) &&
               (uVar4 + 0xe <= local_28)) {
              uVar2 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 6),*(undefined1 *)(uVar4 + 7));
              iVar3 = local_8 - (int)(uVar4 + 0xe);
              if (iVar3 < (int)(uVar2 * 6)) {
                uVar2 = iVar3 / 6;
              }
              local_1c = local_1c | uVar1;
              if (uVar2 != 0) {
                local_18 = uVar2 - 1;
                if (local_18 != 0) {
                  local_c = uVar4 + 0x13;
                  iVar3 = uVar4 + 0x12;
                  iVar6 = uVar4 + 0x11;
                  iVar5 = uVar4 + 0x10;
                  uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar4 + 0xe),
                                                     *(undefined1 *)(uVar4 + 0xf)),
                                            *(undefined1 *)(uVar4 + 0x10)),
                                   *(undefined1 *)(uVar4 + 0x11));
                  do {
                    uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 4),
                                                       *(undefined1 *)(iVar6 + 4)),
                                              *(undefined1 *)(iVar3 + 4)),
                                     *(undefined1 *)(local_c + 4));
                    if (uVar2 <= uVar4) break;
                    local_c = local_c + 6;
                    iVar5 = iVar5 + 6;
                    iVar6 = iVar6 + 6;
                    iVar3 = iVar3 + 6;
                    local_18 = local_18 + -1;
                    uVar4 = uVar2;
                  } while (local_18 != 0);
                }
                if (local_18 == 0) {
                  local_20 = local_20 | uVar1;
                }
              }
            }
            local_10 = local_10 + 1;
            uVar4 = local_8;
          } while (local_10 < local_14);
        }
        *(uint *)(param_1 + 0x30c) = local_10;
        *(uint *)(param_1 + 0x310) = local_1c;
        *(uint *)(param_1 + 0x314) = local_20;
      }
    }
  }
  return local_24;
}

