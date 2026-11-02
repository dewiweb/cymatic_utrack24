// rea decompile_all
// name: FUN_005a6350
// address: 0x5a6350
// body: available
// range: 0x5a6350-0x5a6765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005a6350(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined1 *puStack_b4;
  uint uStack_b0;
  int local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int *local_88;
  undefined4 local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  undefined2 local_72;
  int local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 local_58 [12];
  int local_4c;
  int local_48;
  uint local_44;
  undefined1 local_40 [16];
  int local_30;
  undefined4 *local_2c;
  undefined1 local_28 [16];
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7861;
  local_10 = ExceptionList;
  uStack_b0 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)0x0;
  local_70 = *(int *)(param_2 + 0xf4);
  if (local_70 != 0) {
    puStack_b4 = (undefined1 *)0x80;
    puStack_b8 = (undefined4 *)0x5a639f;
    local_30 = FUN_005af82d();
    local_8 = 0;
    if (local_30 == 0) {
      local_a0 = (undefined4 *)0x0;
    }
    else {
      puStack_b4 = (undefined1 *)0x5a63ba;
      local_a0 = (undefined4 *)FUN_005a6290();
    }
    local_2c = local_a0;
    local_8 = 0xffffffff;
    local_14 = local_a0;
    if (local_a0 != (undefined4 *)0x0) {
      local_a0[0x18] = param_1;
      puStack_b4 = local_40;
      puStack_b8 = (undefined4 *)0x5a641e;
      puStack_b8 = (undefined4 *)
                   (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc))
                               + 0x24))();
      uStack_bc = 0x5a642a;
      FUN_00503de0();
      local_72 = *(undefined2 *)(param_2 + 0xf0);
      *(undefined2 *)(local_14 + 0x1d) = local_72;
      local_78 = *(undefined4 *)(param_2 + 0xf4);
      puStack_b8 = (undefined4 *)0x5a6457;
      uVar2 = FUN_0056f500();
      *(undefined2 *)((int)local_14 + 0x76) = uVar2;
      if (*(short *)((int)local_14 + 0x76) != 0) {
        local_44 = (uint)*(ushort *)((int)local_14 + 0x76);
        puStack_b8 = (undefined4 *)(local_44 * 0xc);
        uStack_bc = 0x5a6490;
        local_4c = FUN_005b04d6();
        local_8 = 1;
        if (local_4c == 0) {
          local_a4 = 0;
        }
        else {
          local_80 = local_44;
          local_7c = local_4c;
          while (local_80 = local_80 - 1, -1 < (int)local_80) {
            puStack_b8 = (undefined4 *)0x5a64c2;
            FUN_00503380();
            local_7c = local_7c + 0xc;
          }
          local_a4 = local_4c;
        }
        local_48 = local_a4;
        local_8 = 0xffffffff;
        local_14[0x1e] = local_a4;
        if (local_14[0x1e] == 0) {
          *(undefined2 *)((int)local_14 + 0x76) = 0;
        }
        else {
          for (local_18 = 0; local_18 < (int)(uint)*(ushort *)((int)local_14 + 0x76);
              local_18 = local_18 + 1) {
            local_84 = *(undefined4 *)(param_2 + 0xf4);
            puStack_b8 = (undefined4 *)(local_18 * 0xc + local_14[0x1e]);
            uStack_bc = 0x5a6543;
            FUN_0056f650();
          }
        }
      }
      if (local_14[0x1e] != 0) {
        local_a8 = local_14[0x18];
        local_88 = *(int **)(local_14[0x18] + 0x88);
        local_8c = *local_88;
        local_90 = *(int **)(local_14[0x18] + 0x88);
        local_94 = *local_90;
        puStack_b8 = local_14;
        uStack_bc = 0;
        uStack_c0 = -(uint)(*(char *)(local_8c + 0xad) != '\0') & 60000;
        uStack_c4 = 0;
        iStack_c8 = local_94 + 0x3f8;
        puStack_cc = local_58;
        uStack_d0 = 0x5a660d;
        puStack_cc = (undefined1 *)
                     (**(code **)(*(int *)(local_a8 + 0x28 +
                                          *(int *)(*(int *)(local_a8 + 0x28) + 0xc)) + 0x98))();
        uStack_d0 = local_14[0x18];
        puStack_d4 = (undefined4 *)0x5a661d;
        cVar1 = FUN_00544180();
        if (cVar1 != '\0') {
          puStack_b8 = (undefined4 *)0x5a6630;
          FUN_0056ebe0();
          local_8 = 2;
          puStack_b8 = (undefined4 *)0x5a663f;
          uVar3 = FUN_00544700();
          puStack_b8 = (undefined4 *)(uVar3 & 0xffff);
          uStack_bc = 0x5a664b;
          FUN_0056f170();
          puStack_b8 = (undefined4 *)0x0;
          uStack_bc = 0x5a6655;
          FUN_0056f170();
          puStack_b8 = (undefined4 *)0x0;
          uStack_bc = 0x5a665f;
          FUN_0056f170();
          local_98 = *(undefined4 **)(param_1 + 0x88);
          local_9c = *local_98;
          puStack_b8 = (undefined4 *)local_28;
          uStack_bc = 0x81;
          uStack_c0 = (uint)*(ushort *)(local_14 + 0x1d);
          puStack_d4 = local_14 + 0x19;
          local_5c = (undefined1 *)&uStack_d0;
          uStack_d8 = 0x5a66a1;
          FUN_00503c60();
          local_60 = auStack_dc;
          (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
                    (auStack_dc);
          FUN_0059b6a0(local_9c);
          uStack_bc = local_14[0x1e];
          uStack_c0 = (uint)*(ushort *)((int)local_14 + 0x76);
          uStack_c4 = 0x5a66fa;
          uStack_c4 = FUN_00544700();
          uStack_c4 = uStack_c4 & 0xffff;
          iStack_c8 = 0x5a6709;
          FUN_00560540();
          local_64 = local_14;
          local_8 = 0xffffffff;
          uStack_bc = 0x5a671e;
          FUN_0056ec30();
          ExceptionList = local_10;
          return local_64;
        }
      }
      local_6c = local_14;
      local_68 = local_14;
      if (local_14 != (undefined4 *)0x0) {
        puStack_b8 = (undefined4 *)0x1;
        uStack_bc = 0x5a6743;
        (**(code **)*local_14)();
      }
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

