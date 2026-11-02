// rea decompile_all
// name: FUN_00592850
// address: 0x592850
// body: available
// range: 0x592850-0x593e26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592850(int param_1,int *param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  bool bVar9;
  int local_210;
  int local_208;
  int local_1f8;
  int local_1f0;
  int local_1e8;
  int local_1d8;
  int local_1d0;
  int *local_1a8;
  undefined4 *local_18c;
  undefined4 *local_170;
  undefined4 *local_154;
  undefined4 *local_138;
  undefined4 *local_11c;
  undefined4 *local_fc;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  int local_80;
  int *local_7c;
  ushort local_78;
  int local_74;
  undefined4 *local_70;
  ushort local_6c;
  int local_68;
  char local_64;
  byte local_63;
  byte local_62;
  char local_59;
  undefined4 *local_58;
  ushort local_54;
  undefined4 *local_50;
  ushort local_4c;
  undefined4 *local_48;
  ushort local_44;
  ushort local_40;
  int *local_3c;
  char local_38;
  byte local_37;
  undefined1 local_36;
  char local_35;
  char local_34;
  byte local_33;
  uint local_30;
  char local_29;
  undefined4 *local_28;
  ushort local_24;
  ushort local_20;
  undefined4 *local_1c;
  ushort local_18;
  ushort local_14;
  char local_10;
  undefined1 local_f;
  undefined1 local_e;
  int local_c;
  byte local_5;
  
  local_30 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(in_ECX + 0x38) == 0) ||
      ((**(code **)**(undefined4 **)(in_ECX + 0x38))(param_1,param_2,param_3),
      *(char *)(in_ECX + 0x40) == '\0')) && (param_3 == '\0')) {
    if (*(short *)(in_ECX + 0x34) == 0) {
      bVar9 = true;
    }
    else {
      bVar9 = **(int **)(in_ECX + 0x30) == 0;
    }
    if (!bVar9) {
      local_80 = (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 0x24))()
      ;
      local_5 = (**(code **)(*(int *)(local_80 + 0x28 + *(int *)(*(int *)(local_80 + 0x28) + 0xc)) +
                            0x24))();
      uVar6 = (**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0xc))();
      switch(uVar6) {
      case 0x8200:
        local_c = (**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0x24))();
        if (((local_5 != 0) && (local_5 < 0x11)) &&
           ((*(int *)(in_ECX + 0x5c) == 0 &&
            (cVar2 = (**(code **)(*(int *)(local_c + 0x28 +
                                          *(int *)(*(int *)(local_c + 0x28) + 0x10)) + 0x30))(),
            cVar2 != '\0')))) {
          local_f = (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0x10)
                                         ) + 0x40))();
          local_e = (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0x10)
                                         ) + 0x2c))();
          iVar7 = (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0x10))
                              + 0x18))();
          if (iVar7 == 2) {
            local_20 = (**(code **)(*(int *)(local_c + 0x28 +
                                            *(int *)(*(int *)(local_c + 0x28) + 0x10)) + 0x10))();
            cVar2 = (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0x10)
                                         ) + 8))();
            if ((cVar2 == '\0') || ((0xfeff < local_20 && (local_20 < 0xff80)))) {
              if ((*(ushort *)(local_c + 0x78) & 0x8000) == 0) {
                local_10 = local_5 + 0x7f;
              }
              else {
                local_10 = local_5 + 0x8f;
                local_e = 0;
              }
              local_24 = 0;
              while( true ) {
                local_11c = (undefined4 *)0x0;
                if (local_24 < *(ushort *)(in_ECX + 0x34)) {
                  local_11c = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_24 * 4);
                }
                local_28 = local_11c;
                local_24 = local_24 + 1;
                if (local_11c == (undefined4 *)0x0) break;
                FUN_00515830();
                if (*(int *)(in_ECX + 0x18) == 0) {
                  local_1d8 = 0;
                }
                else {
                  local_1d8 = *(int *)(in_ECX + 0x18) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
                }
                uVar6 = (**(code **)(*param_2 + 0x24))(local_a0);
                (**(code **)*local_28)(local_1d8,3,&local_10,uVar6);
                FUN_00515860();
              }
            }
          }
          else if (iVar7 == 0x10) {
            local_14 = (**(code **)(*(int *)(local_c + 0x28 +
                                            *(int *)(*(int *)(local_c + 0x28) + 0x10)) + 0x10))();
            cVar2 = (**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0x10)
                                         ) + 8))();
            if ((cVar2 == '\0') || ((0xfeff < local_14 && (local_14 < 0xff80)))) {
              local_10 = local_5 + 0x8f;
              local_18 = 0;
              while( true ) {
                local_fc = (undefined4 *)0x0;
                if (local_18 < *(ushort *)(in_ECX + 0x34)) {
                  local_fc = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_18 * 4);
                }
                local_1c = local_fc;
                local_18 = local_18 + 1;
                if (local_fc == (undefined4 *)0x0) break;
                FUN_00515830();
                if (*(int *)(in_ECX + 0x18) == 0) {
                  local_1d0 = 0;
                }
                else {
                  local_1d0 = *(int *)(in_ECX + 0x18) + 0x28 +
                              *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
                }
                uVar6 = (**(code **)(*param_2 + 0x24))(local_90);
                (**(code **)*local_1c)(local_1d0,3,&local_10,uVar6);
                FUN_00515860();
              }
            }
          }
        }
        break;
      case 0x8201:
        local_3c = (int *)(**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0x24)
                          )();
        local_29 = '\0';
        if (((local_5 != 0) && (local_5 < 0x11)) && (*(int *)(in_ECX + 0x5c) == 0)) {
          sVar5 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c
                              ))();
          if (sVar5 == 0x80) {
            cVar2 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28) + 8)
                    )();
            if (cVar2 == '\0') {
              local_38 = local_5 - 0x31;
              uVar8 = (**(code **)(*local_3c + 0x20))();
              local_37 = (byte)((int)(uVar8 & 0xffff) >> 9);
              local_29 = '\x02';
            }
            else {
              local_40 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28)
                                     + 0x10))();
              if ((0xfeff < local_40) && (local_40 < 0xff80)) {
                local_38 = local_5 + 0x9f;
                local_37 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x10))();
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                local_29 = '\x03';
              }
            }
          }
          else if (sVar5 == 0x81) {
            local_38 = local_5 - 0x21;
            uVar8 = (**(code **)(*local_3c + 0x20))();
            local_37 = (byte)((int)(uVar8 & 0xffff) >> 2) & 0x7f;
            uVar8 = (**(code **)(*local_3c + 0x20))();
            local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
            local_29 = '\x03';
          }
          else {
            uVar3 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28) +
                                0x6c))();
            if (uVar3 < 0x20) {
              iVar7 = *(int *)(in_ECX + 0x54);
              if (iVar7 == 0) {
                local_38 = local_5 + 0xaf;
                local_37 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                local_29 = '\x03';
              }
              else if (iVar7 == 1) {
                local_38 = local_5 + 0xaf;
                local_37 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                local_35 = local_5 + 0xaf;
                local_34 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                local_34 = local_34 + ' ';
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_33 = (byte)((int)(uVar8 & 0xffff) >> 2) & 0x7f;
                local_29 = '\x06';
              }
              else if (iVar7 == 2) {
                local_38 = local_5 + 0xaf;
                local_37 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_33 = (byte)((int)(uVar8 & 0xffff) >> 2) & 0x7f;
                local_35 = local_5 + 0xaf;
                local_34 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                local_34 = local_34 + ' ';
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                local_29 = '\x06';
              }
            }
            else {
              uVar3 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28) +
                                  0x6c))();
              if (uVar3 < 0x40) {
                local_38 = local_5 + 0xaf;
                local_37 = (**(code **)(*(int *)((int)local_3c +
                                                *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                uVar8 = (**(code **)(*local_3c + 0x20))();
                local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                local_29 = '\x03';
              }
              else {
                uVar3 = (**(code **)(*(int *)((int)local_3c + *(int *)(local_3c[10] + 0x10) + 0x28)
                                    + 0x6c))();
                if (uVar3 < 0x80) {
                  local_38 = local_5 + 0xaf;
                  local_37 = (**(code **)(*(int *)((int)local_3c +
                                                  *(int *)(local_3c[10] + 0x10) + 0x28) + 0x6c))();
                  uVar8 = (**(code **)(*local_3c + 0x20))();
                  local_36 = (undefined1)((int)(uVar8 & 0xffff) >> 9);
                  local_29 = '\x03';
                }
              }
            }
          }
        }
        if (local_29 != '\0') {
          if (local_29 == '\x06') {
            local_44 = 0;
            while( true ) {
              local_138 = (undefined4 *)0x0;
              if (local_44 < *(ushort *)(in_ECX + 0x34)) {
                local_138 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_44 * 4);
              }
              local_48 = local_138;
              local_44 = local_44 + 1;
              if (local_138 == (undefined4 *)0x0) break;
              FUN_00515830();
              if (*(int *)(in_ECX + 0x18) == 0) {
                local_1e8 = 0;
              }
              else {
                local_1e8 = *(int *)(in_ECX + 0x18) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
              }
              uVar6 = (**(code **)(*param_2 + 0x24))(local_b0);
              (**(code **)*local_48)(local_1e8,3,&local_38,uVar6);
              FUN_00515860();
            }
            local_4c = 0;
            while( true ) {
              local_154 = (undefined4 *)0x0;
              if (local_4c < *(ushort *)(in_ECX + 0x34)) {
                local_154 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_4c * 4);
              }
              local_50 = local_154;
              local_4c = local_4c + 1;
              if (local_154 == (undefined4 *)0x0) break;
              FUN_00515830();
              if (*(int *)(in_ECX + 0x18) == 0) {
                local_1f0 = 0;
              }
              else {
                local_1f0 = *(int *)(in_ECX + 0x18) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
              }
              uVar6 = (**(code **)(*param_2 + 0x24))(local_c0);
              (**(code **)*local_50)(local_1f0,3,&local_35,uVar6);
              FUN_00515860();
            }
          }
          else {
            local_54 = 0;
            while( true ) {
              local_170 = (undefined4 *)0x0;
              if (local_54 < *(ushort *)(in_ECX + 0x34)) {
                local_170 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_54 * 4);
              }
              local_58 = local_170;
              local_54 = local_54 + 1;
              if (local_170 == (undefined4 *)0x0) break;
              FUN_00515830();
              if (*(int *)(in_ECX + 0x18) == 0) {
                local_1f8 = 0;
              }
              else {
                local_1f8 = *(int *)(in_ECX + 0x18) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
              }
              uVar6 = (**(code **)(*param_2 + 0x24))(local_d0);
              (**(code **)*local_58)(local_1f8,local_29,&local_38,uVar6);
              FUN_00515860();
            }
          }
        }
        break;
      case 0x8202:
        local_68 = (**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0x24))();
        local_59 = '\0';
        if ((local_5 == 0) && (*(int *)(in_ECX + 0x5c) == 0)) {
          uVar4 = (**(code **)(*(int *)(local_68 + 0x28 + *(int *)(*(int *)(local_68 + 0x28) + 0x10)
                                       ) + 0x74))();
          switch(uVar4) {
          case 0x209:
            local_64 = -0xf;
            local_63 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_63 = local_63 & 0x7f;
            local_59 = '\x02';
            break;
          case 0x20a:
            local_64 = -0xe;
            local_63 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_63 = local_63 & 0x7f;
            uVar8 = (**(code **)(*(int *)(local_68 + 0x28 +
                                         *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_62 = (byte)((int)(uVar8 & 0xffff) >> 7) & 0x7f;
            local_59 = '\x03';
            break;
          case 0x20b:
            local_64 = -0xd;
            local_63 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_63 = local_63 & 0x7f;
            local_59 = '\x02';
            break;
          case 0x20e:
            local_64 = -10;
            local_59 = '\x01';
          }
        }
        else if ((local_5 != 0) && ((local_5 < 0x11 && (*(int *)(in_ECX + 0x5c) == 0)))) {
          sVar5 = (**(code **)(*(int *)(local_68 + 0x28 + *(int *)(*(int *)(local_68 + 0x28) + 0x10)
                                       ) + 0x74))();
          if (sVar5 == 0x160) {
            local_64 = local_5 + 0xbf;
            local_63 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_63 = local_63 & 0x7f;
            local_59 = '\x02';
          }
          else {
            local_64 = local_5 + 0xaf;
            local_63 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x74))();
            local_62 = (**(code **)(*(int *)(local_68 + 0x28 +
                                            *(int *)(*(int *)(local_68 + 0x28) + 0x10)) + 0x7c))();
            local_62 = local_62 & 0x7f;
            local_59 = '\x03';
          }
        }
        if (local_59 != '\0') {
          local_6c = 0;
          while( true ) {
            local_18c = (undefined4 *)0x0;
            if (local_6c < *(ushort *)(in_ECX + 0x34)) {
              local_18c = *(undefined4 **)(*(int *)(in_ECX + 0x30) + (uint)local_6c * 4);
            }
            local_70 = local_18c;
            local_6c = local_6c + 1;
            if (local_18c == (undefined4 *)0x0) break;
            FUN_00515830();
            if (*(int *)(in_ECX + 0x18) == 0) {
              local_208 = 0;
            }
            else {
              local_208 = *(int *)(in_ECX + 0x18) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
            }
            uVar6 = (**(code **)(*param_2 + 0x24))(local_e0);
            (**(code **)*local_70)(local_208,local_59,&local_64,uVar6);
            FUN_00515860();
          }
        }
        break;
      case 0x8204:
        if (local_5 == 0) {
          local_74 = (**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0x24))();
          local_78 = 0;
          while( true ) {
            local_1a8 = (int *)0x0;
            if (local_78 < *(ushort *)(in_ECX + 0x34)) {
              local_1a8 = *(int **)(*(int *)(in_ECX + 0x30) + (uint)local_78 * 4);
            }
            local_7c = local_1a8;
            local_78 = local_78 + 1;
            if (local_1a8 == (int *)0x0) break;
            FUN_00515830();
            if (*(int *)(in_ECX + 0x18) == 0) {
              local_210 = 0;
            }
            else {
              local_210 = *(int *)(in_ECX + 0x18) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x28) + 0xc);
            }
            uVar6 = (**(code **)(*param_2 + 0x24))(local_f0);
            uVar6 = (**(code **)(*(int *)(local_74 + 0x28 +
                                         *(int *)(*(int *)(local_74 + 0x28) + 0x10)) + 8))(uVar6);
            uVar1 = (**(code **)(*(int *)(local_74 + 0x28 +
                                         *(int *)(*(int *)(local_74 + 0x28) + 0x10)) + 4))(uVar6);
            uVar1 = (*(code *)**(undefined4 **)
                                (local_74 + 0x28 + *(int *)(*(int *)(local_74 + 0x28) + 0x10)))
                              (uVar1);
            (**(code **)(*local_7c + 4))(local_210,uVar1);
            FUN_00515860();
          }
          cVar2 = (*(code *)**(undefined4 **)
                              (local_74 + 0x28 + *(int *)(*(int *)(local_74 + 0x28) + 0x10)))();
          if (cVar2 == '\0') {
            uVar6 = FUN_0052e6e0();
            *(undefined4 *)(in_ECX + 0x5c) = uVar6;
          }
          else {
            *(undefined4 *)(in_ECX + 0x5c) = 0;
          }
        }
      }
    }
  }
  __security_check_cookie(local_30 ^ (uint)&stack0xfffffffc);
  return;
}

