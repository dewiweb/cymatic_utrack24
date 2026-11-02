// rea decompile_all
// name: FUN_0052d3e0
// address: 0x52d3e0
// body: available
// range: 0x52d3e0-0x52dcba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d3e0(undefined4 param_1,ushort param_2,short param_3,ushort param_4,ushort param_5,
                 undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 in_stack_fffffeac;
  undefined4 in_stack_fffffeb0;
  undefined4 in_stack_fffffeb4;
  undefined1 *puVar5;
  undefined4 in_stack_fffffeb8;
  int local_144;
  undefined4 *local_108;
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [68];
  undefined4 *local_18;
  ushort local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 < 0x3211) {
    if (param_2 == 0x3210) {
      return;
    }
    if (param_2 < 0x2054) {
      if (0x204f < param_2) {
        return;
      }
      if (param_2 < 0x2021) {
        if (param_2 == 0x2020) {
          return;
        }
        if (param_2 == 0x1203) {
          return;
        }
      }
      else if ((0x2030 < param_2) && (param_2 < 0x2033)) {
        return;
      }
    }
    else {
      if (param_2 == 0x2203) {
        return;
      }
      if (param_2 == 0x3030) {
        return;
      }
    }
  }
  else if (param_2 < 0x9203) {
    if (param_2 == 0x9202) {
      local_5 = '\x01';
    }
    else {
      if (param_2 == 0x5201) {
        return;
      }
      if (param_2 == 21000) {
        return;
      }
    }
  }
  else {
    if (param_2 == 0x9204) {
      switch(param_3) {
      case 0:
        uVar4 = 0xffff;
        FUN_005033e0(param_9);
        FUN_0050b5e0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar4);
        uVar4 = 0xffff;
        FUN_005033e0(param_9);
        FUN_0051ff40(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar4);
        return;
      case 1:
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_0050b5e0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_0051ff40(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        return;
      case 2:
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_0050b6a0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_00520010(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        return;
      case 3:
        FUN_00503c30(param_9,param_4);
        FUN_0050b760(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,in_stack_fffffeb8);
        FUN_00503c30(param_9,param_4);
        FUN_005200e0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,in_stack_fffffeb8);
        return;
      case 4:
        goto switchD_0052d532_caseD_4;
      case 5:
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_0050b9a0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        uVar3 = (uint)param_4;
        FUN_005033e0(param_9);
        FUN_00520350(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
        return;
      default:
        return;
      }
    }
    if (param_2 == 0x9209) {
      local_5 = '\x01';
    }
  }
  if (local_5 == '\0') {
    local_14 = 0;
    while( true ) {
      local_108 = (undefined4 *)0x0;
      if (local_14 < *(ushort *)(in_ECX + 0x10)) {
        local_108 = *(undefined4 **)(*(int *)(in_ECX + 0xc) + (uint)local_14 * 4);
      }
      local_18 = local_108;
      local_14 = local_14 + 1;
      if (local_108 == (undefined4 *)0x0) break;
      FUN_00515830();
      iVar1 = **(int **)(*(int *)(in_ECX + 4) + 0x88);
      if (iVar1 == 0) {
        local_144 = 0;
      }
      else {
        local_144 = iVar1 + 0xc + *(int *)(*(int *)(iVar1 + 0xc) + 4);
      }
      (**(code **)*local_18)
                (local_144,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      FUN_00515860();
    }
  }
  else {
    local_10 = FUN_0052cb60(0x1001);
    while (local_10 != 0) {
      if ((*(ushort *)(local_10 + 0x98) == param_2) &&
         ((*(char *)(local_10 + 0x9c) == '\0' || (*(short *)(local_10 + 0x9a) == param_3)))) {
        if (*(char *)(local_10 + 0x9d) != '\0') {
          iVar1 = *(int *)(local_10 + 0x68);
          uVar4 = FUN_00503b30(local_74);
          puVar5 = local_68;
          (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc)) + 8))
                    (local_5c,puVar5,uVar4);
          FUN_00503b30(puVar5);
          cVar2 = FUN_005034a0(uVar4);
          if (cVar2 != '\0') goto LAB_0052dab9;
        }
        if (*(char *)(local_10 + 0x9d) == '\0') {
          uVar4 = param_9;
          (**(code **)(*(int *)(*(int *)(local_10 + 0x68) + 0x28 +
                               *(int *)(*(int *)(*(int *)(local_10 + 0x68) + 0x28) + 0xc)) + 8))
                    (local_80,param_9);
          cVar2 = FUN_005034a0(uVar4);
          if (cVar2 != '\0') {
LAB_0052dab9:
            FUN_00553940(param_9,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            FUN_00544620();
            return;
          }
        }
      }
      local_c = local_10;
      local_10 = FUN_0052cbe0(local_10);
      FUN_00544620();
    }
  }
  return;
switchD_0052d532_caseD_4:
  if (param_4 == 0) {
    uVar3 = (uint)param_5;
    FUN_005033e0(param_9);
    FUN_0050b820(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
    uVar3 = (uint)param_5;
    FUN_005033e0(param_9);
    FUN_005201b0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
    return;
  }
  if (param_4 != 1) {
    return;
  }
  uVar3 = (uint)param_5;
  FUN_005033e0(param_9);
  FUN_0050b8e0(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
  uVar3 = (uint)param_5;
  FUN_005033e0(param_9);
  FUN_00520280(in_stack_fffffeac,in_stack_fffffeb0,in_stack_fffffeb4,uVar3);
  return;
}

