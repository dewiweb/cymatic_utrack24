// rea decompile_all
// name: FUN_00572b90
// address: 0x572b90
// body: available
// range: 0x572b90-0x572d6b inclusive
// range: 0x572d6e-0x5733fc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572b90(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_134;
  int local_130;
  int local_12c;
  int local_120;
  int *local_104;
  undefined4 *local_ac;
  undefined1 local_a8 [12];
  undefined1 local_9c [16];
  uint local_8c;
  undefined2 local_86;
  uint local_84;
  undefined2 local_7e;
  uint local_7c;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_6e;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int *local_3c;
  ushort local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  undefined4 *local_1c;
  ushort local_18;
  undefined1 local_14 [7];
  char local_d;
  int local_c;
  char local_5;
  
  FUN_0054f6b0();
  FUN_00503c60(param_1 + 7);
  local_5 = FUN_00559ad0(local_4c);
  if (local_5 == '\0') {
    FUN_0054f6f0();
  }
  else {
    FUN_00503c60(param_1 + 7);
    local_d = FUN_00559080(local_5c,local_14);
    FUN_0054f6f0();
    if (local_d != '\0') {
      *(undefined1 *)(in_ECX + 0xf3) = 1;
      local_18 = 0;
      while( true ) {
        local_ac = (undefined4 *)0x0;
        if (local_18 < *(ushort *)(in_ECX + 0x94)) {
          local_ac = *(undefined4 **)(*(int *)(in_ECX + 0x90) + (uint)local_18 * 4);
        }
        local_1c = local_ac;
        local_18 = local_18 + 1;
        if (local_ac == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_120 = 0;
        }
        else {
          local_120 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        FUN_00503c60(param_1 + 7);
        (**(code **)*local_1c)(local_120,local_6c,1);
        FUN_00515860();
      }
    }
  }
  local_c = *param_1;
  while (local_c != 0) {
    if (local_c == 0) {
      local_30 = *param_1;
    }
    else {
      local_30 = *(int *)(local_c + 0xc);
    }
    iVar1 = *(int *)(in_ECX + 0x2c);
    uVar2 = *(uint *)(iVar1 + 0x590);
    *(uint *)(iVar1 + 0x590) = uVar2 + 1;
    *(uint *)(iVar1 + 0x594) = *(int *)(iVar1 + 0x594) + (uint)(0xfffffffe < uVar2);
    local_20 = local_c;
    local_2c = *(int *)(local_c + 0x20);
    local_28 = *(int *)(local_c + 0x24);
    if (local_2c == 0) {
      local_2c = *(int *)(local_c + 0x1c);
      local_28 = (uint)*(ushort *)(local_c + 0x18) + local_2c;
    }
    local_21 = (*(uint *)(local_c + 0x10) & 0x40) != 0;
    local_34 = 0;
    switch(*(uint *)(local_c + 0x10) & 0x3f) {
    case 1:
      local_34 = FUN_00547eb0(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
      break;
    case 2:
      local_34 = FUN_00549190(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
      break;
    case 3:
      local_34 = FUN_0054a310(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
      break;
    case 4:
      local_34 = FUN_0054b4b0(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
      break;
    case 5:
      local_34 = FUN_0054c090(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
      break;
    case 6:
      local_34 = FUN_0054cd70(*(undefined4 *)(in_ECX + 0x2c),local_2c,local_28,
                              (*(uint *)(local_c + 0x10) & 0x80) != 0,local_21);
    }
    if (local_34 != 0) {
      local_74 = 0;
      local_6e = 0;
      *(undefined2 *)(local_34 + 0x70) = 0;
      if ((*(byte *)(param_1 + 0x14) & 0x80) == 0x80) {
        local_7c = *(ushort *)(local_34 + 0x70) | 0x8000;
        local_76 = (undefined2)local_7c;
        *(undefined2 *)(local_34 + 0x70) = (undefined2)local_7c;
      }
      if ((*(byte *)(param_1 + 0x14) & 1) == 1) {
        local_84 = *(ushort *)(local_34 + 0x70) | 1;
        local_7e = (undefined2)local_84;
        *(undefined2 *)(local_34 + 0x70) = (undefined2)local_84;
        *(int *)(local_34 + 0x60) = param_1[0xe];
      }
      if ((*(byte *)(param_1 + 0x14) & 2) == 2) {
        local_8c = *(ushort *)(local_34 + 0x70) | 2;
        local_86 = (undefined2)local_8c;
        *(undefined2 *)(local_34 + 0x70) = (undefined2)local_8c;
        iVar1 = param_1[0xd];
        *(int *)(local_34 + 0x68) = param_1[0xc];
        *(int *)(local_34 + 0x6c) = iVar1;
      }
      FUN_00503c60(param_1 + 7);
      FUN_00503de0(local_9c);
      if (*(short *)((int)param_1 + 0x1a) != 0) {
        FUN_00537920(local_34 + 0x48);
      }
      if (*(char *)(in_ECX + 0x58) != '\0') {
        if (local_34 == 0) {
          local_12c = 0;
        }
        else {
          local_12c = local_34 + 0x28 + *(int *)(*(int *)(local_34 + 0x28) + 0xc);
        }
        FUN_00573950(local_12c);
      }
      local_38 = 0;
      while( true ) {
        local_104 = (int *)0x0;
        if (local_38 < *(ushort *)(in_ECX + 0x94)) {
          local_104 = *(int **)(*(int *)(in_ECX + 0x90) + (uint)local_38 * 4);
        }
        local_3c = local_104;
        local_38 = local_38 + 1;
        if (local_104 == (int *)0x0) break;
        FUN_00515830();
        if (local_34 == 0) {
          local_130 = 0;
        }
        else {
          local_130 = local_34 + 0x28 + *(int *)(*(int *)(local_34 + 0x28) + 0xc);
        }
        if (in_ECX == 0) {
          local_134 = 0;
        }
        else {
          local_134 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)(*local_3c + 8))(local_134,local_130);
        FUN_00515860();
      }
      uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)) + 0x98)
              )(local_a8);
      FUN_00522020(local_34,uVar3);
      (**(code **)(*(int *)(local_34 + 0x28 + *(int *)(*(int *)(local_34 + 0x28) + 8)) + 4))();
    }
    local_c = local_30;
  }
  return;
}

