// rea decompile_all
// name: FUN_0056db60
// address: 0x56db60
// body: available
// range: 0x56db60-0x56dd7b inclusive
// range: 0x56dd81-0x56e6b4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0056db60(int param_1,byte *param_2,int param_3,undefined1 param_4,char param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  byte *pbVar6;
  int iVar7;
  int local_78;
  int local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar6 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4a7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_11 = 1 < param_3 - (int)param_2;
  if ((bool)local_11) {
    bVar1 = *param_2;
    param_2 = param_2 + 2;
    switch(bVar1) {
    case 0:
      local_1c = FUN_005a7750(param_1,param_2,param_3,param_4,param_5);
      break;
    default:
      iVar7 = FUN_005af82d(0x110);
      local_8 = 0;
      if (iVar7 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_0056af60(param_1,param_4,0,1);
      }
      local_8 = 0xffffffff;
      local_1c = local_78;
      *(byte *)(local_78 + 0x78) = bVar1;
      *(byte *)(local_78 + 0x74) =
           *(byte *)(local_78 + 0x74) & 0xfe | (*(byte *)(local_78 + 0x78) & 0x80) != 0;
      switch(*(undefined1 *)(local_78 + 0x78)) {
      case 2:
        local_11 = 2 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(byte *)(local_78 + 0x7e) = param_2[2];
          param_2 = param_2 + 3;
        }
        break;
      case 0x44:
        local_11 = 5 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x80) = *(undefined2 *)param_2;
          *(undefined4 *)(local_78 + 0x7c) = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 6;
        }
        break;
      case 0x45:
        local_11 = 0 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(byte *)(local_78 + 0x7c) = *param_2;
          param_2 = param_2 + 1;
        }
        break;
      case 0x4a:
        local_11 = 9 < param_3 - (int)param_2;
        if ((bool)local_11) {
          uVar2 = *(undefined2 *)param_2;
          uVar3 = *(undefined2 *)(param_2 + 2);
          uVar4 = *(undefined2 *)(param_2 + 4);
          uVar5 = *(undefined2 *)(param_2 + 6);
          param_2 = param_2 + 8;
          *(undefined2 *)(local_78 + 0x8a) = uVar2;
          *(undefined2 *)(local_78 + 0x88) = uVar3;
          *(undefined2 *)(local_78 + 0x8c) = uVar4;
          *(undefined2 *)(local_78 + 0x8e) = uVar5;
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
        }
        break;
      case 0x83:
        local_11 = 0 < param_3 - (int)param_2;
        if ((bool)local_11) {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          *(uint *)(local_78 + 0x7c) = (uint)bVar1;
        }
        break;
      case 0x84:
        local_11 = 5 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(uint *)(local_78 + 0x80) = (uint)*param_2;
          *(bool *)(local_78 + 0x84) = param_2[1] != 0;
          *(undefined4 *)(local_78 + 0x7c) = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 6;
        }
        break;
      case 0x85:
        local_11 = 5 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 2);
          *(undefined2 *)(local_78 + 0x80) = *(undefined2 *)(param_2 + 4);
          param_2 = param_2 + 6;
        }
        break;
      case 0x87:
        local_11 = 7 < param_3 - (int)param_2;
        if ((bool)local_11) {
          uVar2 = *(undefined2 *)param_2;
          uVar3 = *(undefined2 *)(param_2 + 2);
          uVar4 = *(undefined2 *)(param_2 + 4);
          uVar5 = *(undefined2 *)(param_2 + 6);
          param_2 = param_2 + 8;
          *(undefined2 *)(local_78 + 0x8a) = uVar2;
          *(undefined2 *)(local_78 + 0x88) = uVar3;
          *(undefined2 *)(local_78 + 0x8c) = uVar4;
          *(undefined2 *)(local_78 + 0x8e) = uVar5;
        }
        break;
      case 0x88:
        local_11 = 7 < param_3 - (int)param_2;
        if ((bool)local_11) {
          uVar2 = *(undefined2 *)param_2;
          uVar3 = *(undefined2 *)(param_2 + 2);
          uVar4 = *(undefined2 *)(param_2 + 4);
          uVar5 = *(undefined2 *)(param_2 + 6);
          param_2 = param_2 + 8;
          *(undefined2 *)(local_78 + 0x8a) = uVar2;
          *(undefined2 *)(local_78 + 0x88) = uVar3;
          *(undefined2 *)(local_78 + 0x8c) = uVar4;
          *(undefined2 *)(local_78 + 0x8e) = uVar5;
        }
        break;
      case 0xc1:
        local_11 = 0x15 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x8a) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x88) = *(undefined2 *)(param_2 + 2);
          *(undefined2 *)(local_78 + 0x8c) = *(undefined2 *)(param_2 + 4);
          *(undefined2 *)(local_78 + 0x8e) = *(undefined2 *)(param_2 + 6);
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)(param_2 + 8);
          param_2 = param_2 + 10;
          FUN_005498b0(local_78 + 0xb8,&param_2);
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
          if (local_11 != '\0') {
            param_2 = (byte *)(((uint)(param_2 + 1) & 0xfffffffe) + 2);
          }
        }
        break;
      case 0xc2:
        local_11 = 0xb < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x8a) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x88) = *(undefined2 *)(param_2 + 2);
          *(undefined2 *)(local_78 + 0x8c) = *(undefined2 *)(param_2 + 4);
          *(undefined2 *)(local_78 + 0x8e) = *(undefined2 *)(param_2 + 6);
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 8);
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)(param_2 + 10);
          param_2 = param_2 + 0xc;
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
          *(undefined2 *)(local_78 + 0x80) = 0;
          if ((local_11 != '\0') && (1 < (uint)(param_3 - (int)param_2))) {
            *(undefined2 *)(local_78 + 0x82) = *(undefined2 *)((uint)(param_2 + 1) & 0xfffffffe);
            param_2 = (byte *)((undefined2 *)((uint)(param_2 + 1) & 0xfffffffe) + 1);
            *(undefined2 *)(local_78 + 0x80) = 1;
          }
        }
        break;
      case 0xc3:
        local_11 = 9 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x8a) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x88) = *(undefined2 *)(param_2 + 2);
          *(undefined2 *)(local_78 + 0x8c) = *(undefined2 *)(param_2 + 4);
          *(undefined2 *)(local_78 + 0x8e) = *(undefined2 *)(param_2 + 6);
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)(param_2 + 8);
          param_2 = param_2 + 10;
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
        }
        break;
      case 200:
        local_11 = 1 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          param_2 = param_2 + 2;
        }
        break;
      case 0xc9:
        local_11 = 3 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 2);
          param_2 = param_2 + 4;
        }
        break;
      case 0xf0:
        local_11 = 5 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 2);
          *(undefined2 *)(local_78 + 0x80) = *(undefined2 *)(param_2 + 4);
          param_2 = param_2 + 6;
        }
        break;
      case 0xf2:
        local_11 = 3 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 2);
          param_2 = param_2 + 4;
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
        }
        break;
      case 0xf3:
        local_11 = 4 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          *(undefined2 *)(local_78 + 0x7e) = *(undefined2 *)(param_2 + 2);
          *(byte *)(local_78 + 0x80) = param_2[4];
          param_2 = param_2 + 5;
        }
        break;
      case 0xf4:
        local_11 = 3 < param_3 - (int)param_2;
        if ((bool)local_11) {
          *(undefined2 *)(local_78 + 0x7c) = *(undefined2 *)param_2;
          param_2 = param_2 + 2;
          local_11 = FUN_00596500(local_78 + 0xc4,&param_2,param_3);
        }
      }
      break;
    case 0x10:
      local_1c = FUN_005702e0(param_1,param_2,param_3,param_4,param_5);
      break;
    case 0x47:
      local_1c = FUN_005abe90(param_1,param_2,param_3,param_4,param_5);
      break;
    case 0x50:
      local_1c = FUN_005abad0(param_1,param_2,param_3,param_4,param_5);
      break;
    case 0x60:
      local_1c = FUN_0059b230(param_1,param_2,param_3,param_4,param_5);
      break;
    case 0x61:
      local_1c = FUN_0059b880(param_1,param_2,param_3,param_4,param_5,
                              DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    }
  }
  if (local_1c != 0) {
    if (local_11 != '\0') {
      if (param_5 != '\0') {
        *(short *)(local_1c + 0x72) = (short)param_2 - (short)pbVar6;
      }
      local_11 = FUN_005289f0(0x3c,param_1 + 0x4c0);
    }
    if (local_11 == '\0') {
      (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
      local_1c = 0;
    }
  }
  ExceptionList = local_10;
  return local_1c;
}

