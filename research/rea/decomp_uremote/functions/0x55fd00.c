// rea decompile_all
// name: FUN_0055fd00
// address: 0x55fd00
// body: available
// range: 0x55fd00-0x560539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055fd00(ushort param_1,undefined4 param_2,undefined2 param_3,ushort param_4,
                 undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined2 *param_8)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 in_stack_ffffff20;
  undefined4 in_stack_ffffff24;
  undefined4 in_stack_ffffff28;
  undefined4 in_stack_ffffff2c;
  int iVar6;
  int local_cc;
  undefined4 *local_a4;
  undefined1 local_3e [2];
  undefined4 *local_3c;
  ushort local_38;
  int local_34;
  int local_30;
  short local_2c;
  undefined1 local_28 [16];
  ushort local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_1 < 0x2204) {
    if (param_1 == 0x2203) goto LAB_00560347;
    if (param_1 < 0x2051) {
      if (param_1 == 0x2050) {
        if ((*(uint *)(in_ECX + 0x6c) & 0x80000000) != 0) {
          FUN_0050b570(1);
        }
        goto LAB_00560347;
      }
      if (param_1 < 0x2032) {
        if (param_1 == 0x2031) {
          if (*(int *)(in_ECX + 0x14c) == 0) {
            return;
          }
          iVar6 = FUN_0052e6e0();
          if ((uint)(iVar6 - *(int *)(in_ECX + 0x150)) < 0x1f5) {
            return;
          }
          puVar4 = (ushort *)
                   (**(code **)(*(int *)(*(int *)(in_ECX + 0x14c) + 0x28 +
                                        *(int *)(*(int *)(*(int *)(in_ECX + 0x14c) + 0x28) + 0x10))
                               + 8))(local_3e);
          if ((param_4 << 0xc & *puVar4 & 0xf000) == 0) {
            return;
          }
          uVar1 = *param_8;
          uVar5 = FUN_00503c30(param_2,param_3);
          FUN_00503bc0();
          FUN_00503de0(uVar5);
          local_18 = param_4;
          local_16 = param_5;
          local_14 = param_6;
          local_10 = 0;
          local_e = 0;
          local_c = 0;
          local_12 = uVar1;
          FUN_0059f420(local_28,2);
          (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x14c))()
          ;
          return;
        }
        if ((param_1 == 0x1203) || (param_1 == 0x2020)) goto LAB_00560347;
      }
      else if (param_1 == 0x2032) {
        FUN_00503c60(&DAT_0095c854);
        FUN_00526ed0(0,0,in_stack_ffffff20,in_stack_ffffff24,in_stack_ffffff28,in_stack_ffffff2c);
        if (*(int *)(in_ECX + 0x14c) == 0) {
          return;
        }
        (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x14c))();
        return;
      }
    }
    else {
      if (param_1 == 0x2051) {
        if ((*(uint *)(in_ECX + 0x6c) & 0x80000000) != 0) {
          FUN_0050b4f0(1);
        }
        goto LAB_00560347;
      }
      if (param_1 == 0x2052) {
        if ((*(uint *)(in_ECX + 0x6c) & 0x80000000) != 0) {
          FUN_0050b570(2);
        }
        goto LAB_00560347;
      }
      if (param_1 == 0x2053) {
        if ((*(uint *)(in_ECX + 0x6c) & 0x80000000) != 0) {
          FUN_0050b4f0(2);
        }
        goto LAB_00560347;
      }
    }
  }
  else if (param_1 < 0x5209) {
    if (param_1 == 21000) {
      FUN_0059e2f0();
      return;
    }
    if (param_1 == 0x3030) goto LAB_00560347;
    if (param_1 == 0x3210) {
      FUN_00521bd0(in_ECX);
      return;
    }
    if (param_1 == 0x5201) {
      local_2c = 0;
      local_30 = FUN_0056a030(param_3);
      if (local_30 == 0) {
        local_34 = FUN_0056a030(param_3);
        if (local_34 != 0) {
          if ((param_4 & 1) != 0) {
            cVar2 = FUN_00567da0();
            local_2c = local_2c + (ushort)(cVar2 != '\0');
          }
          if ((param_4 & 2) != 0) {
            sVar3 = (**(code **)(*(int *)(local_34 + 0x28 +
                                         *(int *)(*(int *)(local_34 + 0x28) + 0xc)) + 0x34))();
            local_2c = local_2c + sVar3;
          }
        }
      }
      else {
        if ((param_4 & 1) != 0) {
          sVar3 = (**(code **)(*(int *)(local_30 + 0x28 + *(int *)(*(int *)(local_30 + 0x28) + 0x10)
                                       ) + 0x5c))();
          local_2c = local_2c + sVar3;
        }
        if ((param_4 & 2) != 0) {
          sVar3 = (**(code **)(*(int *)(local_30 + 0x28 + *(int *)(*(int *)(local_30 + 0x28) + 0xc))
                              + 0x34))();
          local_2c = local_2c + sVar3;
        }
      }
      (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x174))
                (param_2,0x9202,param_3,param_4,local_2c,0,0,&DAT_0095c854);
      return;
    }
  }
  else if (((param_1 == 0x9202) || (param_1 == 0x9204)) || (param_1 == 0x9209)) goto LAB_00560347;
  local_5 = '\x01';
LAB_00560347:
  if (*(int *)(in_ECX + 0x110) != 0) {
    if (in_ECX == 0) {
      local_cc = 0;
    }
    else {
      local_cc = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    uVar5 = FUN_00501d60(param_8,param_2);
    (**(code **)**(undefined4 **)(in_ECX + 0x110))
              (local_cc,param_1,param_3,param_4,param_5,param_6,uVar5);
  }
  if (local_5 != '\0') {
    local_38 = 0;
    while( true ) {
      local_a4 = (undefined4 *)0x0;
      if (local_38 < *(ushort *)(in_ECX + 0x104)) {
        local_a4 = *(undefined4 **)(*(int *)(in_ECX + 0x100) + (uint)local_38 * 4);
      }
      local_3c = local_a4;
      local_38 = local_38 + 1;
      if (local_a4 == (undefined4 *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      uVar5 = FUN_00501d60(param_8,param_2,iVar6);
      (**(code **)*local_3c)(iVar6,param_1,param_3,param_4,param_5,param_6,uVar5);
      FUN_00515860();
    }
  }
  return;
}

