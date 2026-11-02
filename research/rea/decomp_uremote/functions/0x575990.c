// rea decompile_all
// name: FUN_00575990
// address: 0x575990
// body: available
// range: 0x575990-0x5759de inclusive
// range: 0x5759e1-0x575ff6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575990(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_e4;
  int local_e0;
  undefined4 *local_bc;
  undefined1 local_74 [12];
  undefined1 local_68 [16];
  uint local_58;
  undefined2 local_52;
  uint local_50;
  undefined2 local_4a;
  uint local_48;
  undefined2 local_42;
  undefined4 local_40;
  undefined2 local_3a;
  undefined1 local_38 [16];
  undefined4 *local_28;
  ushort local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_d;
  int local_c;
  int local_8;
  
  FUN_00503c60(param_1 + 7);
  FUN_00578200(local_38);
  local_8 = *param_1;
  while (local_8 != 0) {
    if (local_8 == 0) {
      local_1c = *param_1;
    }
    else {
      local_1c = *(int *)(local_8 + 0xc);
    }
    iVar1 = *(int *)(in_ECX + 0x2c);
    uVar2 = *(uint *)(iVar1 + 0x590);
    *(uint *)(iVar1 + 0x590) = uVar2 + 1;
    *(uint *)(iVar1 + 0x594) = *(int *)(iVar1 + 0x594) + (uint)(0xfffffffe < uVar2);
    local_c = local_8;
    local_18 = *(int *)(local_8 + 0x20);
    local_14 = *(int *)(local_8 + 0x24);
    if (local_18 == 0) {
      local_18 = *(int *)(local_8 + 0x1c);
      local_14 = (uint)*(ushort *)(local_8 + 0x18) + local_18;
    }
    local_d = (*(uint *)(local_8 + 0x10) & 0x40) != 0;
    local_20 = 0;
    switch(*(uint *)(local_8 + 0x10) & 0x3f) {
    case 1:
      local_20 = FUN_00547eb0(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
      break;
    case 2:
      local_20 = FUN_00549190(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
      break;
    case 3:
      local_20 = FUN_0054a310(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
      break;
    case 4:
      local_20 = FUN_0054b4b0(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
      break;
    case 5:
      local_20 = FUN_0054c090(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
      break;
    case 6:
      local_20 = FUN_0054cd70(*(undefined4 *)(in_ECX + 0x2c),local_18,local_14,
                              (*(uint *)(local_8 + 0x10) & 0x80) != 0,local_d);
    }
    if (local_20 != 0) {
      local_40 = 0;
      local_3a = 0;
      *(undefined2 *)(local_20 + 0x70) = 0;
      if ((*(byte *)(param_1 + 0x14) & 0x80) == 0x80) {
        local_48 = *(ushort *)(local_20 + 0x70) | 0x8000;
        local_42 = (undefined2)local_48;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_48;
      }
      if ((*(byte *)(param_1 + 0x14) & 1) == 1) {
        local_50 = *(ushort *)(local_20 + 0x70) | 1;
        local_4a = (undefined2)local_50;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_50;
        *(int *)(local_20 + 0x60) = param_1[0xe];
      }
      if ((*(byte *)(param_1 + 0x14) & 2) == 2) {
        local_58 = *(ushort *)(local_20 + 0x70) | 2;
        local_52 = (undefined2)local_58;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_58;
        iVar1 = param_1[0xd];
        *(int *)(local_20 + 0x68) = param_1[0xc];
        *(int *)(local_20 + 0x6c) = iVar1;
      }
      FUN_00503c60(param_1 + 7);
      FUN_00503de0(local_68);
      if (*(short *)((int)param_1 + 0x1a) != 0) {
        FUN_00537920(local_20 + 0x48);
      }
      local_24 = 0;
      while( true ) {
        local_bc = (undefined4 *)0x0;
        if (local_24 < *(ushort *)(in_ECX + 0x54)) {
          local_bc = *(undefined4 **)(*(int *)(in_ECX + 0x50) + (uint)local_24 * 4);
        }
        local_28 = local_bc;
        local_24 = local_24 + 1;
        if (local_bc == (undefined4 *)0x0) break;
        FUN_00515830();
        if (local_20 == 0) {
          local_e0 = 0;
        }
        else {
          local_e0 = local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 0xc);
        }
        if (in_ECX == 0) {
          local_e4 = 0;
        }
        else {
          local_e4 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)*local_28)(local_e4,local_e0,1);
        FUN_00515860();
      }
      uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) + 0x98)
              )(local_74);
      FUN_00522020(local_20,uVar3);
      (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 8)) + 4))();
    }
    local_8 = local_1c;
  }
  return;
}

