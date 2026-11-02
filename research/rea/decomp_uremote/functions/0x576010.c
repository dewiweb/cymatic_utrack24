// rea decompile_all
// name: FUN_00576010
// address: 0x576010
// body: available
// range: 0x576010-0x576a9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576010(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  undefined1 *puVar6;
  int local_2b8;
  int local_2b0;
  int *local_264;
  int *local_230;
  undefined1 local_224 [16];
  undefined1 local_214 [16];
  undefined1 local_204 [8];
  undefined1 local_1fc [16];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [16];
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  int local_174;
  undefined1 local_170 [8];
  undefined1 local_168 [88];
  int local_110;
  int *local_10c;
  ushort local_108;
  undefined2 local_f4;
  undefined1 local_f0 [88];
  undefined1 local_98 [92];
  int *local_3c;
  ushort local_38;
  undefined1 local_24 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
                    (local_184,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_00578200(uVar3);
  iVar1 = *(int *)(in_ECX + 0x2c);
  uVar5 = *(uint *)(iVar1 + 0x598);
  *(uint *)(iVar1 + 0x598) = uVar5 + 1;
  *(uint *)(iVar1 + 0x59c) = *(int *)(iVar1 + 0x59c) + (uint)(0xfffffffe < uVar5);
  switch(*(undefined1 *)(param_1 + 0x78)) {
  case 0:
    local_14 = param_1;
    puVar6 = local_194;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(puVar6,*(undefined1 *)(param_1 + 0xf0));
    FUN_0055a0e0(uVar3,puVar6);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(local_1a4);
    FUN_00577c50(uVar3);
    if (*(char *)(local_14 + 0xf0) != '\0') {
      FUN_005a2290();
    }
    break;
  case 2:
    uVar5 = (uint)*(ushort *)(param_1 + 0x7c);
    puVar6 = local_1c0;
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24)
            )(puVar6,uVar5,*(undefined1 *)(param_1 + 0x7e));
    FUN_00577740(uVar3,puVar6,uVar5);
    break;
  case 6:
    puVar6 = local_1b0;
    uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                                 *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) + 0x98))
                      (puVar6,*(undefined2 *)(in_ECX + 0x98));
    FUN_00503c30(uVar3,puVar6);
    (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
              (local_24);
    cVar2 = FUN_00503ca0(in_ECX + 0xf8);
    if (cVar2 != '\0') {
      FUN_00503de0(&DAT_0095c854);
    }
    cVar2 = FUN_0055a3c0(local_24);
    if (cVar2 != '\0') {
      local_38 = 0;
      while( true ) {
        local_230 = (int *)0x0;
        if (local_38 < *(ushort *)(in_ECX + 0x4c)) {
          local_230 = *(int **)(*(int *)(in_ECX + 0x48) + (uint)local_38 * 4);
        }
        local_3c = local_230;
        local_38 = local_38 + 1;
        if (local_230 == (int *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_2b0 = 0;
        }
        else {
          local_2b0 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)(*local_3c + 4))(local_2b0,local_24,1);
        FUN_00515860();
      }
      FUN_00560ea0();
    }
    break;
  case 0x81:
    FUN_005a2130();
    FUN_00578870();
    break;
  case 0x83:
    cVar2 = FUN_00503fe0();
    if (cVar2 == '\0') {
      FUN_00512300();
      local_8 = 0;
      uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x48)
              )(local_1d0,in_ECX + 0xf8,*(undefined4 *)(in_ECX + 0x2c),
                *(undefined4 *)(param_1 + 0x7c),1);
      cVar2 = FUN_0056b5f0(local_98,uVar3);
      if (cVar2 != '\0') {
        FUN_00529f40(local_98,0);
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    break;
  case 0x84:
    if (*(char *)(param_1 + 0x84) == '\0') {
      FUN_00577e60(param_1);
    }
    else {
      cVar2 = FUN_00503fe0();
      if (cVar2 == '\0') {
        FUN_00512300();
        local_8 = 1;
        uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) +
                            0x48))(local_1e0,in_ECX + 0xf8,*(undefined4 *)(in_ECX + 0x2c),
                                   *(undefined4 *)(param_1 + 0x80),1,*(undefined4 *)(param_1 + 0x7c)
                                   ,1);
        cVar2 = FUN_0056b880(local_f0,uVar3);
        if (cVar2 != '\0') {
          FUN_00529f40(local_f0,0);
        }
        local_8 = 0xffffffff;
        FUN_005123f0();
      }
    }
    break;
  case 0x85:
    if (*(short *)(param_1 + 0x7e) != 0) {
      local_f4 = (undefined2)
                 ((ulonglong)
                  ((uint)*(ushort *)(param_1 + 0x80) * (uint)*(byte *)(in_ECX + 0x9c) * 0x18) /
                 (ulonglong)(longlong)(int)(uint)*(ushort *)(param_1 + 0x7e));
      puVar6 = local_1ec;
      uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) + 0x98)
              )(puVar6,*(undefined2 *)(in_ECX + 0x98));
      FUN_00503c30(uVar3,puVar6);
      local_108 = 0;
      while( true ) {
        local_264 = (int *)0x0;
        if (local_108 < *(ushort *)(in_ECX + 0x5c)) {
          local_264 = *(int **)(*(int *)(in_ECX + 0x58) + (uint)local_108 * 4);
        }
        local_10c = local_264;
        local_108 = local_108 + 1;
        if (local_264 == (int *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_2b8 = 0;
        }
        else {
          local_2b8 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0x24))(local_1fc,*(undefined2 *)(param_1 + 0x7c),
                                   (uint)*(byte *)(in_ECX + 0x9c) * 0x18,local_f4);
        (**(code **)(*local_10c + 4))(local_2b8,uVar3);
        FUN_00515860();
      }
    }
    break;
  case 0x87:
    local_110 = FUN_005a22f0(*(undefined2 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x8c),
                             *(undefined2 *)(param_1 + 0x8e));
    if (local_110 != 0) {
      FUN_00512300();
      local_8 = 2;
      (**(code **)(*(int *)(local_110 + 0x28 + *(int *)(*(int *)(local_110 + 0x28) + 0xc)) + 0x18))
                (local_170,*(undefined2 *)(param_1 + 0x8e));
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar3 = *(undefined4 *)(in_ECX + 0x2c);
      uVar4 = (**(code **)(*(int *)(local_110 + 0x28 + *(int *)(*(int *)(local_110 + 0x28) + 0xc)) +
                          4))(local_204,local_170);
      uVar3 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                          0x24))(local_214,uVar3,uVar4);
      uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x48)
              )(local_224,uVar3);
      cVar2 = FUN_0056bf70(local_168,uVar3);
      if (cVar2 != '\0') {
        FUN_00529f40(local_168,0);
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00501900();
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    break;
  case 0x88:
    local_174 = FUN_005a22f0(*(undefined2 *)(param_1 + 0x88),*(undefined2 *)(param_1 + 0x8c),
                             *(undefined2 *)(param_1 + 0x8e));
    if (local_174 != 0) {
      FUN_005a4830(*(undefined2 *)(param_1 + 0x8e));
    }
  }
  ExceptionList = local_10;
  return;
}

