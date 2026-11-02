// rea decompile_all
// name: FUN_005a6ed0
// address: 0x5a6ed0
// body: available
// range: 0x5a6ed0-0x5a7320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6ed0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *local_bc;
  int local_b8;
  uint local_a8;
  undefined2 *local_a4;
  uint local_94;
  int local_90;
  undefined1 local_74 [16];
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  undefined1 local_54 [16];
  int local_44;
  undefined2 *local_40;
  ushort local_3c;
  undefined1 local_38 [12];
  int local_2c;
  int local_28;
  ushort local_24;
  undefined1 local_20 [12];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d795c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_1 + 0x78) == 'a') {
    local_14 = param_1;
    if (*(short *)(param_1 + 0xf2) == 0x82) {
      if (*(int *)(param_1 + 0xf4) != 0) {
        uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0x24))(local_54,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
        FUN_005033e0(uVar2);
        local_24 = FUN_0056f500();
        local_28 = 0;
        if (local_24 != 0) {
          local_58 = (uint)local_24;
          local_90 = FUN_005b04d6(local_58 * 0x18);
          local_8 = 0;
          local_60 = local_90;
          if (local_90 == 0) {
            local_b8 = 0;
          }
          else {
            local_94 = local_58;
            while (local_94 = local_94 - 1, -1 < (int)local_94) {
              FUN_00503380();
              FUN_00503650(&DAT_0095c848);
              *(undefined4 *)(local_90 + 0x10) = 0;
              *(undefined4 *)(local_90 + 0x14) = 0;
              *(undefined2 *)(local_90 + 0xc) = 0;
              local_90 = local_90 + 0x18;
            }
            local_b8 = local_60;
          }
          local_5c = local_b8;
          local_8 = 0xffffffff;
          local_28 = local_b8;
          if (local_b8 == 0) {
            local_24 = 0;
          }
          else {
            for (local_2c = 0; local_2c < (int)(uint)local_24; local_2c = local_2c + 1) {
              FUN_0056f690(local_2c * 0x18 + local_28);
            }
          }
        }
        FUN_00544560();
        uVar3 = (uint)local_24;
        puVar4 = local_20;
        iVar5 = local_28;
        uVar1 = FUN_00544700(puVar4,uVar3,local_28);
        FUN_005606a0(uVar1,puVar4,uVar3,iVar5);
        if (local_28 != 0) {
          local_64 = local_28;
          FUN_005b13e8(local_28);
        }
      }
    }
    else if ((*(short *)(param_1 + 0xf2) == 0x83) && (*(int *)(param_1 + 0xf4) != 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                          0x24))(local_74);
      FUN_005033e0(uVar2);
      local_3c = FUN_0056f500();
      local_40 = (undefined2 *)0x0;
      if (local_3c != 0) {
        local_a8 = (uint)local_3c;
        local_bc = (undefined2 *)FUN_005b04d6(local_a8 * 10);
        local_a4 = local_bc;
        if (local_bc == (undefined2 *)0x0) {
          local_bc = (undefined2 *)0x0;
        }
        else {
          while (local_a8 = local_a8 - 1, -1 < (int)local_a8) {
            *local_a4 = 0;
            local_a4[1] = 0;
            local_a4[2] = 0;
            local_a4[3] = 0;
            local_a4[4] = 0;
            local_a4 = local_a4 + 5;
          }
        }
        local_40 = local_bc;
        if (local_bc == (undefined2 *)0x0) {
          local_3c = 0;
        }
        else {
          for (local_44 = 0; local_44 < (int)(uint)local_3c; local_44 = local_44 + 1) {
            FUN_0056f6d0(local_40 + local_44 * 5);
          }
        }
      }
      FUN_00544560();
      uVar3 = (uint)local_3c;
      puVar4 = local_38;
      puVar6 = local_40;
      uVar1 = FUN_00544700(puVar4,uVar3,local_40);
      FUN_00560760(uVar1,puVar4,uVar3,puVar6);
      if (local_40 != (undefined2 *)0x0) {
        FUN_005b13e8(local_40);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

