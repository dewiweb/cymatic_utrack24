// rea decompile_all
// name: FUN_005a9640
// address: 0x5a9640
// body: available
// range: 0x5a9640-0x5aa631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9640(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined4 *local_294;
  undefined4 *local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  undefined4 *local_268;
  int local_264;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  ushort local_24e;
  int *local_24c;
  int *local_248;
  undefined4 local_244;
  undefined4 local_240;
  ushort local_23a;
  int *local_238;
  int *local_234;
  undefined4 local_230;
  int local_22c;
  ushort local_226;
  undefined4 local_224;
  undefined4 local_220;
  ushort local_21a;
  int *local_218;
  undefined4 *local_214;
  ushort local_210;
  ushort local_20e;
  undefined4 local_20c;
  undefined1 *local_208;
  undefined4 local_204;
  ushort local_1fe;
  int *local_1fc;
  int *local_1f8;
  undefined4 local_1f4;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  ushort local_1e6;
  int *local_1e4;
  int *local_1e0;
  undefined4 local_1dc;
  undefined1 *local_1d8;
  undefined4 local_1d4;
  ushort local_1ce;
  int *local_1cc;
  int *local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  ushort local_1ba;
  int *local_1b8;
  int *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ushort local_19e;
  int *local_19c;
  int *local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  ushort local_182;
  int *local_180;
  int *local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158 [4];
  undefined4 local_148;
  undefined4 local_144 [3];
  int local_138;
  undefined4 local_134 [3];
  int local_128;
  undefined1 local_124 [16];
  undefined4 local_114 [3];
  int local_108;
  undefined1 local_104 [16];
  uint local_f4;
  undefined1 local_ec [16];
  uint local_dc;
  undefined1 local_d4 [16];
  uint local_c4;
  undefined4 local_bc [4];
  undefined4 local_ac [4];
  undefined4 local_9c [4];
  int *local_8c;
  ushort local_88;
  int *local_84;
  ushort local_80;
  ushort local_7c;
  undefined4 *local_78;
  undefined4 *local_64;
  ushort local_60;
  int *local_3c;
  ushort local_38;
  int *local_34;
  ushort local_30;
  int *local_2c;
  ushort local_28;
  int *local_24;
  ushort local_20;
  int local_1c;
  int *local_18;
  ushort local_14;
  int local_10;
  int *local_c;
  ushort local_8;
  
  local_260 = *(byte *)(param_1 + 0x1e) - 0x45;
  local_25c = in_ECX;
  switch(*(byte *)(param_1 + 0x1e)) {
  case 0x45:
    local_290 = (undefined4 *)0x5a9ff0;
    local_108 = FUN_005686d0();
    local_20e = *(ushort *)(local_25c + 0xfa);
    local_290 = (undefined4 *)(uint)local_20e;
    local_294 = local_114;
    uVar1 = (**(code **)(*(int *)(local_108 + 0x28 + *(int *)(*(int *)(local_108 + 0x28) + 0xc)) +
                        0x98))();
    FUN_00503c30(uVar1);
    local_294 = (undefined4 *)(uint)*(byte *)(param_1 + 0x1f);
    puVar2 = local_124;
    uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                      (puVar2);
    FUN_00559780(uVar1,puVar2);
    break;
  case 0x46:
    local_290 = (undefined4 *)0x5aa329;
    FUN_00568cf0();
    break;
  case 0x47:
    local_78 = param_1;
    local_230 = param_1[0x3c];
    local_290 = &local_148;
    local_294 = local_158;
    local_148 = local_230;
    uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))();
    local_7c = FUN_00568d50(uVar1);
    if ((local_7c & 1) != 0) {
      local_80 = 0;
      while( true ) {
        local_23a = local_80;
        local_238 = (int *)(local_25c + 0x110);
        local_234 = (int *)0x0;
        if (local_80 < *(ushort *)(local_25c + 0x114)) {
          local_234 = *(int **)(*local_238 + (uint)local_80 * 4);
        }
        local_84 = local_234;
        local_80 = local_80 + 1;
        if (local_234 == (int *)0x0) break;
        local_240 = *(undefined4 *)(local_25c + 0x2c);
        local_294 = (undefined4 *)0x5aa437;
        FUN_00515830();
        if (local_25c == 0) {
          local_288 = 0;
        }
        else {
          local_288 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
        }
        local_294 = (undefined4 *)0x3;
        uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                          (local_168);
        (**(code **)(*local_84 + 8))(local_288,uVar1);
        local_244 = *(undefined4 *)(local_25c + 0x2c);
        local_294 = (undefined4 *)0x5aa4cb;
        FUN_00515860();
      }
    }
    if ((local_7c & 2) != 0) {
      local_88 = 0;
      while( true ) {
        local_24e = local_88;
        local_24c = (int *)(local_25c + 0x110);
        local_248 = (int *)0x0;
        if (local_88 < *(ushort *)(local_25c + 0x114)) {
          local_248 = *(int **)(*local_24c + (uint)local_88 * 4);
        }
        local_8c = local_248;
        local_88 = local_88 + 1;
        if (local_248 == (int *)0x0) break;
        local_254 = *(undefined4 *)(local_25c + 0x2c);
        local_294 = (undefined4 *)0x5aa588;
        FUN_00515830();
        if (local_25c == 0) {
          local_28c = 0;
        }
        else {
          local_28c = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
        }
        local_294 = (undefined4 *)0x1003;
        uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                          (local_178);
        (**(code **)(*local_8c + 8))(local_28c,uVar1);
        local_258 = *(undefined4 *)(local_25c + 0x2c);
        local_294 = (undefined4 *)0x5aa627;
        FUN_00515860();
      }
    }
    break;
  case 0x83:
    local_290 = (undefined4 *)0x5aa0a9;
    local_128 = FUN_005686d0();
    local_210 = *(ushort *)(local_25c + 0xfa);
    local_290 = (undefined4 *)(uint)local_210;
    local_294 = local_134;
    uVar1 = (**(code **)(*(int *)(local_128 + 0x28 + *(int *)(*(int *)(local_128 + 0x28) + 0xc)) +
                        0x98))();
    FUN_00503c30(uVar1);
    local_60 = 0;
    while( true ) {
      local_21a = local_60;
      local_218 = (int *)(local_25c + 0x118);
      local_214 = (undefined4 *)0x0;
      if (local_60 < *(ushort *)(local_25c + 0x11c)) {
        local_214 = *(undefined4 **)(*local_218 + (uint)local_60 * 4);
      }
      local_64 = local_214;
      local_60 = local_60 + 1;
      if (local_214 == (undefined4 *)0x0) break;
      local_220 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5aa1aa;
      FUN_00515830();
      if (local_25c == 0) {
        local_284 = 0;
      }
      else {
        local_284 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_294 = (undefined4 *)param_1[0x1f];
      (**(code **)*local_64)(local_284);
      local_224 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5aa215;
      FUN_00515860();
    }
    break;
  case 0x84:
    local_290 = (undefined4 *)0x5aa22a;
    local_138 = FUN_005686d0();
    local_226 = *(ushort *)(local_25c + 0xfa);
    local_290 = (undefined4 *)(uint)local_226;
    local_294 = local_144;
    uVar1 = (**(code **)(*(int *)(local_138 + 0x28 + *(int *)(*(int *)(local_138 + 0x28) + 0xc)) +
                        0x98))();
    FUN_00503c30(uVar1);
    if (*(char *)(param_1 + 0x21) != '\0') {
      local_294 = (undefined4 *)param_1[0x1f];
      FUN_005a8ec0(param_1[0x20],0);
    }
    if (*(int *)(local_25c + 0x124) != 0) {
      local_22c = *(int *)(local_25c + 0x124);
      local_294 = param_1;
      (**(code **)(*(int *)(local_22c + 4 + *(int *)(*(int *)(local_22c + 4) + 4)) + 0x24))();
      FUN_00577e60();
    }
    break;
  case 0xc0:
    local_8 = 0;
    while( true ) {
      local_182 = local_8;
      local_180 = (int *)(local_25c + 0x110);
      local_17c = (int *)0x0;
      if (local_8 < *(ushort *)(local_25c + 0x114)) {
        local_17c = *(int **)(*local_180 + (uint)local_8 * 4);
      }
      local_c = local_17c;
      local_8 = local_8 + 1;
      if (local_17c == (int *)0x0) break;
      local_188 = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9728;
      FUN_00515830();
      if (local_25c == 0) {
        local_264 = 0;
      }
      else {
        local_264 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_290 = local_9c;
      local_294 = (undefined4 *)0x5a9785;
      local_294 = (undefined4 *)
                  (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                            ();
      (**(code **)(*local_c + 0xc))(local_264);
      local_18c = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a97ba;
      FUN_00515860();
    }
    break;
  case 0xc1:
    local_28 = 0;
    while( true ) {
      local_1ce = local_28;
      local_1cc = (int *)(local_25c + 0x110);
      local_1c8 = (int *)0x0;
      if (local_28 < *(ushort *)(local_25c + 0x114)) {
        local_1c8 = *(int **)(*local_1cc + (uint)local_28 * 4);
      }
      local_2c = local_1c8;
      local_28 = local_28 + 1;
      if (local_1c8 == (int *)0x0) break;
      local_1d4 = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9c0b;
      FUN_00515830();
      local_c4 = (uint)*(ushort *)(param_1 + 0x1f);
      if (local_25c == 0) {
        local_278 = 0;
      }
      else {
        local_278 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_1d8 = (undefined1 *)&local_290;
      local_294 = (undefined4 *)0x5a9c6e;
      local_294 = (undefined4 *)FUN_00501d60();
      uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                        (local_d4,param_1 + 0x22,param_1 + 0x2e);
      (**(code **)(*local_2c + 0x18))(local_278,uVar1);
      local_1dc = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9ce5;
      FUN_00515860();
    }
    break;
  case 0xc2:
    local_30 = 0;
    while( true ) {
      local_1e6 = local_30;
      local_1e4 = (int *)(local_25c + 0x110);
      local_1e0 = (int *)0x0;
      if (local_30 < *(ushort *)(local_25c + 0x114)) {
        local_1e0 = *(int **)(*local_1e4 + (uint)local_30 * 4);
      }
      local_34 = local_1e0;
      local_30 = local_30 + 1;
      if (local_1e0 == (int *)0x0) break;
      local_1ec = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9d88;
      FUN_00515830();
      local_dc = (uint)*(ushort *)((int)param_1 + 0x7e);
      if (local_25c == 0) {
        local_27c = 0;
      }
      else {
        local_27c = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_290 = (undefined4 *)(uint)*(ushort *)((int)param_1 + 0x82);
      local_1f0 = (undefined1 *)&local_294;
      local_294 = local_290;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_294._0_2_ = *(ushort *)((int)param_1 + 0x7e);
      uVar1 = FUN_00501d60();
      uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                        (local_ec,param_1 + 0x22,*(undefined2 *)(param_1 + 0x1f),uVar1);
      (**(code **)(*local_34 + 0x1c))(local_27c,uVar1);
      local_1f4 = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9e69;
      FUN_00515860();
    }
    break;
  case 0xc3:
    local_38 = 0;
    while( true ) {
      local_1fe = local_38;
      local_1fc = (int *)(local_25c + 0x110);
      local_1f8 = (int *)0x0;
      if (local_38 < *(ushort *)(local_25c + 0x114)) {
        local_1f8 = *(int **)(*local_1fc + (uint)local_38 * 4);
      }
      local_3c = local_1f8;
      local_38 = local_38 + 1;
      if (local_1f8 == (int *)0x0) break;
      local_204 = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9f0c;
      FUN_00515830();
      local_f4 = (uint)*(ushort *)(param_1 + 0x1f);
      if (local_25c == 0) {
        local_280 = 0;
      }
      else {
        local_280 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_208 = (undefined1 *)&local_290;
      local_294 = (undefined4 *)0x5a9f6f;
      local_294 = (undefined4 *)FUN_00501d60();
      uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))
                        (local_104,param_1 + 0x22);
      (**(code **)(*local_3c + 0x20))(local_280,uVar1);
      local_20c = *(undefined4 *)(local_25c + 0x2c);
      local_290 = (undefined4 *)0x5a9fdb;
      FUN_00515860();
    }
    break;
  case 200:
    local_190 = *(undefined4 *)(in_ECX + 0x2c);
    local_194 = *(undefined4 *)(in_ECX + 0x2c);
    local_290 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x1f);
    local_294 = local_ac;
    uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))();
    local_10 = FUN_00519d80(local_190,1,uVar1);
    local_14 = 0;
    while( true ) {
      local_19e = local_14;
      local_19c = (int *)(local_25c + 0x110);
      local_198 = (int *)0x0;
      if (local_14 < *(ushort *)(local_25c + 0x114)) {
        local_198 = *(int **)(*local_19c + (uint)local_14 * 4);
      }
      local_18 = local_198;
      local_14 = local_14 + 1;
      if (local_198 == (int *)0x0) break;
      local_1a4 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5a98cc;
      FUN_00515830();
      if (local_10 == 0) {
        local_268 = (undefined4 *)0x0;
      }
      else {
        local_268 = (undefined4 *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 0xc));
      }
      if (local_25c == 0) {
        local_26c = 0;
      }
      else {
        local_26c = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_294 = local_268;
      (**(code **)(*local_18 + 0x10))(local_26c);
      local_1a8 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5a9960;
      FUN_00515860();
    }
    if (local_10 != 0) {
      local_294 = (undefined4 *)0x5a9990;
      (**(code **)(*(int *)(local_10 + 0x28 + *(int *)(*(int *)(local_10 + 0x28) + 8)) + 4))();
    }
    break;
  case 0xc9:
    local_1ac = *(undefined4 *)(in_ECX + 0x2c);
    local_1b0 = *(undefined4 *)(in_ECX + 0x2c);
    local_290 = (undefined4 *)(uint)*(ushort *)(param_1 + 0x1f);
    local_294 = local_bc;
    uVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[10] + 0xc) + 0x28) + 0x24))();
    local_1c = FUN_00519d80(local_1ac,2,uVar1);
    local_20 = 0;
    while( true ) {
      local_1ba = local_20;
      local_1b8 = (int *)(local_25c + 0x110);
      local_1b4 = (int *)0x0;
      if (local_20 < *(ushort *)(local_25c + 0x114)) {
        local_1b4 = *(int **)(*local_1b8 + (uint)local_20 * 4);
      }
      local_24 = local_1b4;
      local_20 = local_20 + 1;
      if (local_1b4 == (int *)0x0) break;
      local_1c0 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5a9a9f;
      FUN_00515830();
      if (local_1c == 0) {
        local_270 = 0;
      }
      else {
        local_270 = local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 0xc);
      }
      if (local_25c == 0) {
        local_274 = 0;
      }
      else {
        local_274 = local_25c + 0x28 + *(int *)(*(int *)(local_25c + 0x28) + 0x10);
      }
      local_294 = (undefined4 *)(uint)*(ushort *)((int)param_1 + 0x7e);
      (**(code **)(*local_24 + 0x14))(local_274,local_270);
      local_1c4 = *(undefined4 *)(local_25c + 0x2c);
      local_294 = (undefined4 *)0x5a9b3b;
      FUN_00515860();
    }
    if (local_1c != 0) {
      local_294 = (undefined4 *)0x5a9b6d;
      (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
    }
  }
  return;
}

