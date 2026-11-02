// rea decompile_all
// name: FUN_00575100
// address: 0x575100
// body: available
// range: 0x575100-0x57514e inclusive
// range: 0x575151-0x57596b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575100(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_fc;
  int local_f8;
  undefined4 *local_d0;
  undefined1 local_88 [12];
  undefined1 local_7c [16];
  uint local_6c;
  undefined2 local_66;
  uint local_64;
  undefined2 local_5e;
  uint local_5c;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_4e;
  undefined1 local_4c [16];
  undefined4 *local_3c;
  ushort local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_d;
  int local_c;
  int local_8;
  
  FUN_00503c60(param_1 + 7);
  FUN_00578200(local_4c);
  local_8 = *param_1;
  while (local_8 != 0) {
    if (local_8 == 0) {
      local_1c = *param_1;
    }
    else {
      local_1c = *(int *)(local_8 + 0xc);
    }
    iVar2 = *(int *)(in_ECX + 0x2c);
    uVar3 = *(uint *)(iVar2 + 0x590);
    *(uint *)(iVar2 + 0x590) = uVar3 + 1;
    *(uint *)(iVar2 + 0x594) = *(int *)(iVar2 + 0x594) + (uint)(0xfffffffe < uVar3);
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
      local_54 = 0;
      local_4e = 0;
      *(undefined2 *)(local_20 + 0x70) = 0;
      if ((*(byte *)(param_1 + 0x14) & 0x80) == 0x80) {
        local_5c = *(ushort *)(local_20 + 0x70) | 0x8000;
        local_56 = (undefined2)local_5c;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_5c;
      }
      if ((*(byte *)(param_1 + 0x14) & 1) == 1) {
        local_64 = *(ushort *)(local_20 + 0x70) | 1;
        local_5e = (undefined2)local_64;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_64;
        *(int *)(local_20 + 0x60) = param_1[0xe];
      }
      if ((*(byte *)(param_1 + 0x14) & 2) == 2) {
        local_6c = *(ushort *)(local_20 + 0x70) | 2;
        local_66 = (undefined2)local_6c;
        *(undefined2 *)(local_20 + 0x70) = (undefined2)local_6c;
        iVar2 = param_1[0xd];
        *(int *)(local_20 + 0x68) = param_1[0xc];
        *(int *)(local_20 + 0x6c) = iVar2;
      }
      FUN_00503c60(param_1 + 7);
      FUN_00503de0(local_7c);
      if (*(short *)((int)param_1 + 0x1a) != 0) {
        FUN_00537920(local_20 + 0x48);
      }
      local_21 = '\0';
      if (*(int *)(in_ECX + 0x6c) != 0) {
        iVar2 = (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 4)) +
                            0xc))();
        if (iVar2 == 0x8201) {
          local_2c = (int *)(**(code **)(*(int *)(local_20 + 0x28 +
                                                 *(int *)(*(int *)(local_20 + 0x28) + 0xc)) + 4))();
          uVar3 = (**(code **)(*local_2c + 0x38))();
          uVar3 = uVar3 & 0xffff;
          uVar1 = (**(code **)(*local_2c + 0x6c))(uVar3);
          local_28 = FUN_005a22f0(1,uVar1,uVar3);
          if (local_28 != 0) {
            FUN_005a4b60(local_2c);
            local_21 = '\x01';
          }
        }
        else if (iVar2 == 0x8202) {
          local_30 = (int *)(**(code **)(*(int *)(local_20 + 0x28 +
                                                 *(int *)(*(int *)(local_20 + 0x28) + 0xc)) + 8))();
          uVar3 = (**(code **)(*local_30 + 0x40))();
          uVar3 = uVar3 & 0xffff;
          uVar1 = (**(code **)(*local_30 + 0x74))(uVar3);
          local_28 = FUN_005a22f0(2,uVar1,uVar3);
          if (local_28 != 0) {
            FUN_005a50d0(local_30);
            local_21 = '\x01';
          }
        }
        else if (iVar2 == 0x8206) {
          local_34 = (int *)(**(code **)(*(int *)(local_20 + 0x28 +
                                                 *(int *)(*(int *)(local_20 + 0x28) + 0xc)) + 0xc))
                                      ();
          uVar3 = (**(code **)(*local_34 + 0x38))();
          uVar3 = uVar3 & 0xffff;
          uVar1 = (**(code **)(*local_34 + 0x50))(uVar3);
          local_28 = FUN_005a22f0(4,uVar1,uVar3);
          if (local_28 != 0) {
            FUN_005a5510(local_34);
            local_21 = '\x01';
          }
        }
      }
      if (local_21 == '\0') {
        local_38 = 0;
        while( true ) {
          local_d0 = (undefined4 *)0x0;
          if (local_38 < *(ushort *)(in_ECX + 0x4c)) {
            local_d0 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + (uint)local_38 * 4);
          }
          local_3c = local_d0;
          local_38 = local_38 + 1;
          if (local_d0 == (undefined4 *)0x0) break;
          FUN_00515830();
          if (local_20 == 0) {
            local_f8 = 0;
          }
          else {
            local_f8 = local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 0xc);
          }
          if (in_ECX == 0) {
            local_fc = 0;
          }
          else {
            local_fc = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
          }
          (**(code **)*local_3c)(local_fc,local_f8,0);
          FUN_00515860();
        }
      }
      uVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) + 0x98)
              )(local_88);
      FUN_00522020(local_20,uVar4);
      (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 8)) + 4))();
    }
    local_8 = local_1c;
  }
  return;
}

