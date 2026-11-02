// rea decompile_all
// name: FUN_005542b0
// address: 0x5542b0
// body: available
// range: 0x5542b0-0x555939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005542b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined4 *local_2dc;
  uint uStack_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  int local_29c;
  undefined4 local_298;
  undefined4 local_294;
  int local_290;
  int local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  int local_268;
  int local_264;
  uint local_260;
  ushort local_25a;
  ushort local_258;
  char local_255;
  int local_254;
  undefined2 local_250;
  ushort local_24e;
  int local_24c;
  uint local_248;
  ushort local_242;
  ushort local_240;
  char local_23d;
  uint local_23c;
  char local_235;
  uint local_234;
  int local_230;
  undefined2 local_22a;
  undefined2 local_228;
  ushort local_226;
  int local_224;
  int local_220;
  int local_21c;
  ushort local_216;
  undefined1 *local_214;
  ushort local_210;
  ushort local_20e;
  ushort local_20c;
  short local_20a;
  int local_208;
  ushort local_204;
  ushort local_202;
  undefined1 *local_200;
  ushort local_1fa;
  ushort local_1f8;
  ushort local_1f6;
  ushort local_1f4;
  short local_1f2;
  int local_1f0;
  ushort local_1ea;
  ushort local_1e8;
  ushort local_1e6;
  undefined1 *local_1e4;
  ushort local_1e0;
  ushort local_1de;
  ushort local_1dc;
  short local_1da;
  int local_1d8;
  undefined4 local_1d4 [2];
  undefined4 local_1cc [2];
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180 [2];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158 [2];
  uint local_150;
  undefined2 local_14a;
  uint local_148;
  undefined1 *local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118 [2];
  uint local_110;
  undefined2 local_10a;
  uint local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [2];
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  undefined4 local_c0 [2];
  uint local_b8;
  undefined2 local_b2;
  uint local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_8c;
  int local_88;
  int local_84;
  ushort local_80;
  undefined2 local_7c;
  int local_70;
  undefined4 local_6c [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d37e5;
  local_10 = ExceptionList;
  uStack_2d8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2dc = (undefined4 *)0x5542f8;
  local_3c = uStack_2d8;
  FUN_00515830();
  if (*(int *)(local_264 + 0xb8) == 0) {
    if (*(int *)(local_264 + 0xcc) == 0) {
      if (*(int *)(local_264 + 0xe0) == 0) {
        if (*(int *)(local_264 + 0xf4) == 0) {
          if (*(int *)(local_264 + 0x108) != 0) {
            if ((param_1 == 0) || (local_24c = *(int *)(param_1 + 0x28), local_24c != 0x60121)) {
              if ((param_1 == 0) || (local_254 = *(int *)(param_1 + 0x28), local_254 != -0x7ff9ffdd)
                 ) {
                local_2dc = (undefined4 *)(uint)*(ushort *)(local_264 + 0x114);
                local_a0 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
                if (local_a0 == 0) {
                  local_2d4 = 0;
                }
                else {
                  local_2d4 = local_a0 + 0x28 + *(int *)(*(int *)(local_a0 + 0x28) + 0xc);
                }
                local_2dc = (undefined4 *)0x0;
                FUN_0059a1f0(1,local_264,(param_1 == 0) * '\x04' + -0x80,local_2d4,
                             *(undefined2 *)(local_264 + 0x116));
                if (local_a0 != 0) {
                  local_2dc = (undefined4 *)0x5558f3;
                  (**(code **)(*(int *)(local_a0 + 0x28 + *(int *)(*(int *)(local_a0 + 0x28) + 8)) +
                              4))();
                }
              }
              else {
                local_2dc = (undefined4 *)0x555603;
                FUN_005017d0();
                local_8 = 10;
                for (local_98 = 0; local_98 < *(ushort *)(param_1 + 0xce); local_98 = local_98 + 1)
                {
                  if (((local_98 < *(ushort *)(param_1 + 0xce)) && (*(int *)(param_1 + 0xdc) != 0))
                     && (*(int *)(*(int *)(param_1 + 0xdc) + local_98 * 4) != 0)) {
                    local_2dc = *(undefined4 **)(*(int *)(param_1 + 0xdc) + local_98 * 4);
                    FUN_00501d80();
                    local_255 = '\x01';
                  }
                  else {
                    local_255 = '\0';
                  }
                  if (local_255 == '\0') break;
                  local_258 = *(ushort *)(param_1 + 0xc0);
                  local_2dc = (undefined4 *)(uint)local_258;
                  local_9c = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
                  if (local_9c == 0) {
                    local_2d0 = 0;
                  }
                  else {
                    local_2d0 = local_9c + 0x28 + *(int *)(*(int *)(local_9c + 0x28) + 0xc);
                  }
                  local_25a = *(ushort *)(param_1 + 0xc2);
                  local_260 = (uint)*(ushort *)(param_1 + 0xce);
                  local_2dc = (undefined4 *)0x55575b;
                  local_2dc = (undefined4 *)FUN_00501d60();
                  FUN_0059a1f0(1,local_264,(-(uint)(local_98 < local_260 - 1) & 0xffffff7f) + 0x83,
                               local_2d0,local_25a + local_98);
                  if (local_9c != 0) {
                    local_2dc = (undefined4 *)0x5557e3;
                    (**(code **)(*(int *)(local_9c + 0x28 + *(int *)(*(int *)(local_9c + 0x28) + 8))
                                + 4))();
                  }
                }
                local_8 = 0xffffffff;
                local_2dc = (undefined4 *)0x5557fa;
                FUN_00501900();
              }
            }
            else {
              local_24e = *(ushort *)(param_1 + 0xc0);
              local_2dc = (undefined4 *)(uint)local_24e;
              local_8c = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
              if (local_8c == 0) {
                local_2c4 = 0;
              }
              else {
                local_2c4 = local_8c + 0x28 + *(int *)(*(int *)(local_8c + 0x28) + 0xc);
              }
              local_2dc = local_1d4;
              local_2cc = FUN_0054fed0();
              local_8 = 9;
              local_250 = *(undefined2 *)(param_1 + 0xc2);
              local_2dc = (undefined4 *)0x555552;
              local_2c8 = local_2cc;
              local_2dc = (undefined4 *)FUN_00501d60();
              FUN_0059a1f0(1,local_264,0x81,local_2c4,local_250);
              local_8 = 0xffffffff;
              local_2dc = (undefined4 *)0x555593;
              FUN_00501900();
              if (local_8c != 0) {
                local_2dc = (undefined4 *)0x5555cd;
                (**(code **)(*(int *)(local_8c + 0x28 + *(int *)(*(int *)(local_8c + 0x28) + 8)) + 4
                            ))();
              }
            }
            local_2dc = (undefined4 *)0x0;
            FUN_005560c0();
          }
        }
        else {
          if ((param_1 == 0) || (local_224 = *(int *)(param_1 + 0x28), local_224 != 0xe011f)) {
            if ((param_1 == 0) || (local_230 = *(int *)(param_1 + 0x28), local_230 != -0x3ff9ffde))
            {
              local_2dc = (undefined4 *)(uint)*(ushort *)(local_264 + 0x11a);
              local_88 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),2,local_264 + 0x138);
              if (local_88 == 0) {
                local_2c0 = 0;
              }
              else {
                local_2c0 = local_88 + 0x28 + *(int *)(*(int *)(local_88 + 0x28) + 0xc);
              }
              local_2dc = (undefined4 *)0x0;
              FUN_00599f80(1,local_264,(param_1 == 0) * '\x04' + -0x80,local_2c0,
                           *(undefined2 *)(local_264 + 0x114),0);
              if (local_88 != 0) {
                local_2dc = (undefined4 *)0x555430;
                (**(code **)(*(int *)(local_88 + 0x28 + *(int *)(*(int *)(local_88 + 0x28) + 8)) + 4
                            ))();
              }
            }
            else {
              local_2dc = (undefined4 *)0x5550fb;
              FUN_005017d0();
              local_8 = 8;
              for (local_80 = 0; local_80 < *(ushort *)(param_1 + 0xce); local_80 = local_80 + 1) {
                local_234 = (uint)local_80;
                if (((local_234 < *(ushort *)(param_1 + 0xce)) && (*(int *)(param_1 + 0xdc) != 0))
                   && (*(int *)(*(int *)(param_1 + 0xdc) + local_234 * 4) != 0)) {
                  local_2dc = *(undefined4 **)(*(int *)(param_1 + 0xdc) + local_234 * 4);
                  FUN_00501d80();
                  local_235 = '\x01';
                }
                else {
                  local_235 = '\0';
                }
                if (local_235 == '\0') break;
                local_23c = (uint)local_80;
                if ((local_23c < *(ushort *)(param_1 + 0xcc)) && (*(int *)(param_1 + 0xd8) != 0)) {
                  local_7c = *(undefined2 *)(*(int *)(param_1 + 0xd8) + local_23c * 2);
                  local_23d = '\x01';
                }
                else {
                  local_23d = '\0';
                }
                if (local_23d == '\0') break;
                local_240 = *(ushort *)(param_1 + 0xc0);
                local_2dc = (undefined4 *)(uint)local_240;
                local_84 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),2,local_264 + 0x138);
                if (local_84 == 0) {
                  local_2bc = 0;
                }
                else {
                  local_2bc = local_84 + 0x28 + *(int *)(*(int *)(local_84 + 0x28) + 0xc);
                }
                local_242 = *(ushort *)(param_1 + 0xc2);
                local_248 = (uint)*(ushort *)(param_1 + 0xce);
                local_2dc = (undefined4 *)0x5552a3;
                local_2dc = (undefined4 *)FUN_00501d60();
                FUN_00599f80(1,local_264,
                             (-(uint)((uint)local_80 < local_248 - 1) & 0xffffff7f) + 0x83,local_2bc
                             ,(uint)local_242 + (uint)local_80,local_7c);
                if (local_84 != 0) {
                  local_2dc = (undefined4 *)0x555321;
                  (**(code **)(*(int *)(local_84 + 0x28 + *(int *)(*(int *)(local_84 + 0x28) + 8)) +
                              4))();
                }
              }
              local_8 = 0xffffffff;
              local_2dc = (undefined4 *)0x555335;
              FUN_00501900();
            }
          }
          else {
            local_226 = *(ushort *)(param_1 + 0xc4);
            local_2dc = (undefined4 *)(uint)local_226;
            local_70 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),2,local_264 + 0x138);
            if (local_70 == 0) {
              local_2b0 = 0;
            }
            else {
              local_2b0 = local_70 + 0x28 + *(int *)(*(int *)(local_70 + 0x28) + 0xc);
            }
            local_2dc = local_1cc;
            local_2b8 = FUN_0054fed0();
            local_8 = 7;
            local_228 = *(undefined2 *)(param_1 + 0xc2);
            local_22a = *(undefined2 *)(param_1 + 0xc0);
            local_2dc = (undefined4 *)0x555052;
            local_2b4 = local_2b8;
            local_2dc = (undefined4 *)FUN_00501d60();
            FUN_00599f80(1,local_264,0x81,local_2b0,local_22a,local_228);
            local_8 = 0xffffffff;
            local_2dc = (undefined4 *)0x55509b;
            FUN_00501900();
            if (local_70 != 0) {
              local_2dc = (undefined4 *)0x5550c8;
              (**(code **)(*(int *)(local_70 + 0x28 + *(int *)(*(int *)(local_70 + 0x28) + 8)) + 4))
                        ();
            }
          }
          local_2dc = (undefined4 *)0x0;
          FUN_005560c0();
        }
      }
      else {
        if ((param_1 == 0) || (local_220 = *(int *)(param_1 + 0x28), local_220 != 0xf00001e)) {
          local_2dc = (undefined4 *)0x554ef4;
          FUN_00504000();
          local_2dc = local_6c;
          FUN_00599d90(1,local_264,0x80,local_264 + 0x130,local_6c,local_6c);
        }
        else {
          local_2dc = (undefined4 *)0x554dc4;
          FUN_00504000();
          local_2dc = (undefined4 *)0x554dcc;
          FUN_00504000();
          local_2dc = (undefined4 *)0x554dd4;
          FUN_00504000();
          local_19c = *(undefined4 *)(param_1 + 100);
          local_198 = *(undefined4 *)(param_1 + 0x68);
          local_194 = *(undefined4 *)(param_1 + 0x6c);
          local_1a8 = *(undefined4 *)(param_1 + 0x70);
          local_1a4 = *(undefined4 *)(param_1 + 0x74);
          local_1a0 = *(undefined4 *)(param_1 + 0x78);
          local_1b4 = *(undefined4 *)(param_1 + 0x7c);
          local_1b0 = *(undefined4 *)(param_1 + 0x80);
          local_1ac = *(undefined4 *)(param_1 + 0x84);
          local_1c4 = *(undefined4 *)(param_1 + 0x98);
          local_1c0 = *(undefined4 *)(param_1 + 0x9c);
          local_2dc = &local_48;
          local_1bc = local_1c4;
          local_1b8 = local_1c0;
          local_60 = local_1a8;
          local_5c = local_1a4;
          local_58 = local_1a0;
          local_54 = local_19c;
          local_50 = local_198;
          local_4c = local_194;
          local_48 = local_1b4;
          local_44 = local_1b0;
          local_40 = local_1ac;
          FUN_00599d90(1,local_264,0x81,&local_1bc,&local_54,&local_60);
        }
        local_2dc = (undefined4 *)0x0;
        FUN_005560c0();
      }
    }
    else {
      if ((param_1 == 0) || (local_21c = *(int *)(param_1 + 0x28), local_21c != 0x8000124)) {
        local_2dc = (undefined4 *)0x0;
        FUN_00599ba0(1,local_264,0x80,local_264 + 0x130);
      }
      else {
        local_190 = *(undefined4 *)(param_1 + 0x98);
        local_18c = *(undefined4 *)(param_1 + 0x9c);
        local_2dc = local_180;
        local_188 = local_190;
        local_184 = local_18c;
        local_2ac = FUN_0054fed0();
        local_8 = 6;
        local_2dc = (undefined4 *)0x554cf8;
        local_2a8 = local_2ac;
        local_2dc = (undefined4 *)FUN_00501d60();
        FUN_00599ba0(1,local_264,0x81,&local_188);
        local_8 = 0xffffffff;
        local_2dc = (undefined4 *)0x554d31;
        FUN_00501900();
      }
      local_2dc = (undefined4 *)0x0;
      FUN_005560c0();
    }
  }
  else {
    if ((param_1 == 0) || (local_1d8 = *(int *)(param_1 + 0x28), local_1d8 != 0x187e0f18)) {
      if ((param_1 == 0) || (local_1f0 = *(int *)(param_1 + 0x28), local_1f0 != 0x187e0119)) {
        if ((param_1 == 0) || (local_208 = *(int *)(param_1 + 0x28), local_208 != 0x181e011a)) {
          local_2dc = (undefined4 *)(local_264 + 0x120);
          FUN_00599310(1,local_264);
        }
        else {
          local_30 = 0;
          local_140 = *(undefined4 *)(param_1 + 0x98);
          local_13c = *(undefined4 *)(param_1 + 0x9c);
          local_34._2_2_ = (short)((uint)local_13c >> 0x10);
          local_20a = local_34._2_2_;
          bVar9 = local_34._2_2_ != 0;
          local_38 = local_140;
          local_34 = local_13c;
          if (bVar9) {
            local_20c = *(ushort *)(param_1 + 0xc0);
            local_2dc = (undefined4 *)(uint)local_20c;
            local_30 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
          }
          local_20e = *(ushort *)(param_1 + 0xc6);
          local_148 = (uint)local_20e;
          local_210 = *(ushort *)(param_1 + 0xc4);
          local_150 = (uint)local_210;
          if (local_30 == 0) {
            local_29c = 0;
          }
          else {
            local_29c = local_30 + 0x28 + *(int *)(*(int *)(local_30 + 0x28) + 0xc);
          }
          local_178 = *(undefined4 *)(param_1 + 0x88);
          local_174 = *(undefined4 *)(param_1 + 0x8c);
          local_170 = *(undefined4 *)(param_1 + 0x90);
          local_16c = *(undefined4 *)(param_1 + 0x94);
          local_2dc = local_158;
          local_168 = local_178;
          local_164 = local_174;
          local_160 = local_170;
          local_15c = local_16c;
          local_2a4 = FUN_0054fed0();
          local_8 = 5;
          local_144 = (undefined1 *)&local_2dc;
          local_214 = (undefined1 *)&local_2dc;
          local_14a = (undefined2)local_150;
          local_216 = *(ushort *)(param_1 + 0xc2);
          uVar1 = local_150 & 0xffff;
          uVar6 = (uint)local_216;
          iVar10 = local_29c;
          local_2a0 = local_2a4;
          uVar2 = FUN_00501d60(local_29c,uVar6,uVar1);
          FUN_00599250(1,local_264,&local_168,&local_38,uVar2,iVar10,uVar6,uVar1);
          local_8 = 0xffffffff;
          local_2dc = (undefined4 *)0x554be4;
          FUN_00501900();
          if (local_30 != 0) {
            local_2dc = (undefined4 *)0x554c0f;
            (**(code **)(*(int *)(local_30 + 0x28 + *(int *)(*(int *)(local_30 + 0x28) + 8)) + 4))()
            ;
          }
        }
      }
      else {
        local_20 = 0;
        local_100 = *(undefined4 *)(param_1 + 0x98);
        local_fc = *(undefined4 *)(param_1 + 0x9c);
        local_28._2_2_ = (short)((uint)local_fc >> 0x10);
        local_1f2 = local_28._2_2_;
        bVar9 = local_28._2_2_ != 0;
        local_2c = local_100;
        local_28 = local_fc;
        if (bVar9) {
          local_1f4 = *(ushort *)(param_1 + 0xc0);
          local_2dc = (undefined4 *)(uint)local_1f4;
          local_20 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
        }
        local_1f6 = *(ushort *)(param_1 + 0xca);
        local_2dc = (undefined4 *)(uint)local_1f6;
        local_24 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),2,local_264 + 0x138);
        local_1f8 = *(ushort *)(param_1 + 200);
        local_108 = (uint)local_1f8;
        local_1fa = *(ushort *)(param_1 + 0xc6);
        local_110 = (uint)local_1fa;
        if (local_24 == 0) {
          local_28c = 0;
        }
        else {
          local_28c = local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 0xc);
        }
        if (local_20 == 0) {
          local_290 = 0;
        }
        else {
          local_290 = local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 0xc);
        }
        local_138 = *(undefined4 *)(param_1 + 0x88);
        local_134 = *(undefined4 *)(param_1 + 0x8c);
        local_130 = *(undefined4 *)(param_1 + 0x90);
        local_12c = *(undefined4 *)(param_1 + 0x94);
        local_2dc = local_118;
        local_128 = local_138;
        local_124 = local_134;
        local_120 = local_130;
        local_11c = local_12c;
        local_298 = FUN_0054fed0();
        local_8 = 4;
        local_104 = (undefined1 *)&local_2dc;
        local_200 = (undefined1 *)&local_2dc;
        local_10a = (undefined2)local_110;
        local_202 = *(ushort *)(param_1 + 0xc4);
        local_204 = *(ushort *)(param_1 + 0xc2);
        uVar6 = local_110 & 0xffff;
        uVar1 = (uint)local_202;
        uVar7 = (uint)local_204;
        iVar10 = local_290;
        iVar11 = local_28c;
        local_294 = local_298;
        uVar2 = FUN_00501d60(local_290,uVar7,local_28c,uVar1,uVar6);
        FUN_00599180(1,local_264,&local_128,&local_2c,uVar2,iVar10,uVar7,iVar11,uVar1,uVar6);
        local_8 = 0xffffffff;
        local_2dc = (undefined4 *)0x55494a;
        FUN_00501900();
        if (local_20 != 0) {
          local_2dc = (undefined4 *)0x554975;
          (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 8)) + 4))();
        }
        if (local_24 != 0) {
          local_2dc = (undefined4 *)0x5549a0;
          (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 8)) + 4))();
        }
      }
    }
    else {
      local_14 = 0;
      local_a8 = *(undefined4 *)(param_1 + 0x98);
      local_a4 = *(undefined4 *)(param_1 + 0x9c);
      local_18._2_2_ = (short)((uint)local_a4 >> 0x10);
      local_1da = local_18._2_2_;
      bVar9 = local_18._2_2_ != 0;
      local_1c = local_a8;
      local_18 = local_a4;
      if (bVar9) {
        local_1dc = *(ushort *)(param_1 + 0xc0);
        local_2dc = (undefined4 *)(uint)local_1dc;
        local_14 = FUN_00519d80(*(undefined4 *)(local_264 + 0x10c),1,local_264 + 0x138);
      }
      local_1de = *(ushort *)(param_1 + 0xca);
      local_b0 = (uint)local_1de;
      local_1e0 = *(ushort *)(param_1 + 200);
      local_b8 = (uint)local_1e0;
      if (local_14 == 0) {
        local_268 = 0;
      }
      else {
        local_268 = local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc);
      }
      local_f8 = *(undefined4 *)(param_1 + 0x88);
      local_f4 = *(undefined4 *)(param_1 + 0x8c);
      local_f0 = *(undefined4 *)(param_1 + 0x90);
      local_ec = *(undefined4 *)(param_1 + 0x94);
      local_2dc = local_c0;
      local_e8 = local_f8;
      local_e4 = local_f4;
      local_e0 = local_f0;
      local_dc = local_ec;
      local_270 = FUN_00556050();
      local_8 = 0;
      local_2dc = local_c8;
      local_26c = local_270;
      local_278 = FUN_00556010();
      local_8._0_1_ = 1;
      local_2dc = local_d0;
      local_274 = local_278;
      local_280 = FUN_0054ff10();
      local_8._0_1_ = 2;
      local_2dc = local_d8;
      local_27c = local_280;
      local_288 = FUN_0054fed0();
      local_8._0_1_ = 3;
      local_ac = (undefined1 *)&local_2dc;
      local_1e4 = (undefined1 *)&local_2dc;
      local_b2 = (undefined2)local_b8;
      local_1e6 = *(ushort *)(param_1 + 0xc6);
      local_1e8 = *(ushort *)(param_1 + 0xc4);
      local_1ea = *(ushort *)(param_1 + 0xc2);
      uVar7 = local_b8 & 0xffff;
      uVar1 = (uint)local_1e6;
      uVar6 = (uint)local_1e8;
      local_284 = local_288;
      uVar2 = FUN_00501d60(uVar6,uVar1,uVar7);
      uVar3 = FUN_00501d60(uVar2);
      uVar4 = FUN_00501d60(uVar3);
      uVar8 = (uint)local_1ea;
      iVar10 = local_268;
      uVar5 = FUN_00501d60(local_268,uVar8,uVar4);
      FUN_005990a0(1,local_264,&local_e8,&local_1c,uVar5,iVar10,uVar8,uVar4,uVar3,uVar2,uVar6,uVar1,
                   uVar7);
      local_8._0_1_ = 2;
      local_2dc = (undefined4 *)0x554616;
      FUN_00501900();
      local_8._0_1_ = 1;
      local_2dc = (undefined4 *)0x554625;
      FUN_00501900();
      local_8 = (uint)local_8._1_3_ << 8;
      local_2dc = (undefined4 *)0x554634;
      FUN_00501900();
      local_8 = 0xffffffff;
      local_2dc = (undefined4 *)0x554646;
      FUN_00501900();
      if (local_14 != 0) {
        local_2dc = (undefined4 *)0x554671;
        (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 8)) + 4))();
      }
    }
    local_2dc = (undefined4 *)0x0;
    FUN_005560c0();
  }
  local_2dc = (undefined4 *)0x55591d;
  FUN_00515860();
  ExceptionList = local_10;
  uStack_2d8 = 0x555934;
  __security_check_cookie(local_3c ^ (uint)&stack0xfffffffc);
  return;
}

