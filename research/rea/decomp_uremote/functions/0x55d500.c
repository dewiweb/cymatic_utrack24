// rea decompile_all
// name: FUN_0055d500
// address: 0x55d500
// body: available
// range: 0x55d500-0x55e524 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d500(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  undefined1 *local_2cc;
  uint uStack_2c8;
  undefined4 local_2c4;
  int local_2c0;
  uint local_2bc;
  uint local_2b8;
  int local_2b4;
  uint local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  ushort local_29c;
  short local_29a;
  undefined2 local_298;
  undefined2 local_296;
  undefined4 local_290;
  undefined4 *local_28c;
  undefined4 local_288;
  undefined4 *local_284;
  undefined4 local_26c;
  int local_268;
  int *local_264;
  undefined4 local_258;
  undefined4 *local_254;
  undefined4 local_23c;
  int local_238;
  int *local_234;
  undefined2 local_222;
  undefined2 local_220;
  undefined2 local_21e;
  undefined2 local_21c;
  undefined2 local_21a;
  undefined4 local_218;
  undefined4 *local_214;
  undefined2 local_210;
  undefined2 local_20e;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined4 local_1fc;
  undefined4 *local_1f8;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined1 *local_1e8;
  ushort local_1e2;
  short local_1e0;
  ushort local_1de;
  ushort local_1dc;
  ushort local_1da;
  int local_1d8;
  int *local_1d4;
  undefined4 local_1d0;
  undefined4 *local_1cc;
  undefined1 *local_1c8;
  int local_1c4;
  int local_1c0;
  int *local_1bc;
  byte local_1b7;
  byte local_1b6;
  char local_1b5;
  undefined1 *local_1b4;
  undefined4 local_1b0;
  undefined4 *local_1ac;
  int local_1a0;
  ushort local_19c;
  ushort local_19a;
  ushort local_198;
  short local_196;
  undefined1 local_194 [32];
  undefined1 *local_174;
  undefined1 *local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 local_158 [88];
  undefined1 local_100 [94];
  char local_a2;
  char local_a1;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [88];
  int local_30;
  uint local_2c;
  char local_25;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3ff8;
  local_10 = ExceptionList;
  uStack_2c8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = *(uint *)(param_3 + 0x10) & 0xff;
  local_2a4 = uVar5 - 0x51;
  local_2a0 = in_ECX;
  switch(uVar5) {
  case 0x51:
    local_14 = param_3;
    if ((*(ushort *)(param_3 + 0x18) & 0x100) == 0) {
      local_2ac = *(ushort *)(param_3 + 0x18) - 5;
      switch(*(ushort *)(param_3 + 0x18)) {
      case 5:
        local_2cc = (undefined1 *)0x0;
        FUN_005628d0(1,0);
        break;
      case 6:
        local_2cc = (undefined1 *)0x1;
        FUN_005628d0(1,0);
        break;
      case 0x85:
        local_2cc = (undefined1 *)0x0;
        FUN_005628d0(0,1);
        break;
      case 0x86:
        local_2cc = (undefined1 *)0x1;
        FUN_005628d0(0,1);
      }
    }
    else {
      local_196 = *(short *)(param_3 + 0x1a);
      if (local_196 == -1) {
        local_2cc = (undefined1 *)0x55d5be;
        local_18 = (undefined1 *)FUN_0056a060();
        while (local_18 != (undefined1 *)0x0) {
          local_2cc = local_18;
          FUN_0055d240(local_14);
          local_2cc = local_18;
          local_18 = (undefined1 *)FUN_0056a0a0();
        }
        local_2cc = (undefined1 *)0x55d605;
        local_1c = (undefined1 *)FUN_0056a060();
        while (local_1c != (undefined1 *)0x0) {
          local_2cc = local_1c;
          FUN_0055d240(local_14);
          local_2cc = local_1c;
          local_1c = (undefined1 *)FUN_0056a0a0();
        }
      }
      else {
        local_198 = *(ushort *)(param_3 + 0x1a);
        local_2cc = (undefined1 *)(uint)local_198;
        local_2a8 = FUN_00508140();
        if (local_2a8 == 3) {
          local_19a = *(ushort *)(local_14 + 0x1a);
          local_2cc = (undefined1 *)(uint)local_19a;
          local_2cc = (undefined1 *)FUN_0056a030();
          local_20 = local_2cc;
          FUN_0055d240(local_14);
        }
        else if (local_2a8 == 6) {
          local_19c = *(ushort *)(local_14 + 0x1a);
          local_2cc = (undefined1 *)(uint)local_19c;
          local_2cc = (undefined1 *)FUN_0056a030();
          local_24 = local_2cc;
          FUN_0055d240(local_14);
        }
      }
    }
    break;
  case 0x52:
    local_25 = '\0';
    local_30 = param_3;
    local_2c = *(uint *)(in_ECX + 0x84);
    if ((local_2c & 4) != 0) {
      local_2cc = (undefined1 *)(param_3 + 0x18);
      sVar2 = FUN_00502a70();
      if (sVar2 != 0) {
        local_2cc = (undefined1 *)0x55d7cc;
        local_2cc = (undefined1 *)FUN_00501d60();
        (**(code **)(*(int *)(local_2a0 + 0x28 + *(int *)(*(int *)(local_2a0 + 0x28) + 0xc)) + 0xb4)
        )();
        local_25 = '\x01';
        local_2cc = (undefined1 *)0x6;
        FUN_0055f9c0();
      }
    }
    if ((local_2c & 8) != 0) {
      local_1a0 = *(int *)(local_30 + 0x20);
      if (*(int *)(local_2a0 + 0x4c) != local_1a0) {
        local_2cc = (undefined1 *)0x55d84a;
        FUN_00512300();
        local_8 = 0;
        local_2cc = (undefined1 *)(local_2a0 + 0x48);
        FUN_005337f0();
        local_1ac = *(undefined4 **)(local_2a0 + 0x88);
        local_1b0 = *local_1ac;
        local_2cc = (undefined1 *)0x0;
        FUN_00529f40(local_88);
        local_2cc = (undefined1 *)(local_2a0 + 0x48);
        FUN_00526570();
        local_2cc = *(undefined1 **)(local_30 + 0x20);
        local_1b4 = local_2cc;
        FUN_00526c80(local_2a0);
        *(undefined4 *)(local_2a0 + 0x58) = 0;
        local_25 = '\x01';
        local_2cc = (undefined1 *)0x0;
        FUN_0055f9c0();
        local_8 = 0xffffffff;
        local_2cc = (undefined1 *)0x55d916;
        FUN_005123f0();
      }
      local_1b5 = *(char *)(local_30 + 0x28);
      if ((local_1b5 != -1) &&
         (local_1b6 = *(byte *)(local_30 + 0x28), *(uint *)(local_2a0 + 0x54) != (uint)local_1b6)) {
        local_1b7 = *(byte *)(local_30 + 0x28);
        *(uint *)(local_2a0 + 0x54) = (uint)local_1b7;
        local_2cc = (undefined1 *)0x7;
        FUN_0055f9c0();
      }
    }
    if ((local_2c & 0x10) != 0) {
      local_1bc = *(int **)(local_2a0 + 0x88);
      local_1c0 = *local_1bc;
      local_1c4 = *(int *)(local_30 + 0x24);
      local_2cc = (undefined1 *)0x55d9f0;
      local_168 = local_1c0;
      iVar3 = (**(code **)(*(int *)(local_1c0 + 0xc + *(int *)(*(int *)(local_1c0 + 0xc) + 4)) +
                          0xf0))();
      if (iVar3 != local_1c4) {
        local_2cc = *(undefined1 **)(local_30 + 0x24);
        local_1cc = *(undefined4 **)(local_2a0 + 0x88);
        local_1d0 = *local_1cc;
        local_1c8 = local_2cc;
        FUN_00511290();
        local_25 = '\0';
      }
    }
    if (local_25 != '\0') {
      local_1d4 = *(int **)(local_2a0 + 0x88);
      local_1d8 = *local_1d4;
      local_2cc = (undefined1 *)0x55daa4;
      local_16c = local_1d8;
      (**(code **)(*(int *)(local_1d8 + 0xc + *(int *)(*(int *)(local_1d8 + 0xc) + 4)) + 0xb0))();
    }
    break;
  case 0x60:
    local_8c = param_3;
    local_2b0 = (uint)*(ushort *)(param_3 + 0x18);
    if (local_2b0 == 1) {
      local_2cc = (undefined1 *)0x55dae7;
      FUN_005695e0();
      local_2cc = (undefined1 *)0x55daf8;
      FUN_005695e0();
    }
    else if (local_2b0 == 2) {
      local_2cc = (undefined1 *)0x55db0b;
      FUN_00569620();
      local_2cc = (undefined1 *)0x55db1c;
      FUN_00569620();
    }
    break;
  case 0x61:
    local_90 = param_3;
    if ((*(ushort *)(param_3 + 0x18) & 4) == 0) {
      local_2bc = (uint)*(ushort *)(param_3 + 0x18);
      if (local_2bc == 1) {
        local_2cc = (undefined1 *)0x55dc60;
        FUN_005695e0();
        local_2cc = (undefined1 *)0x55dc71;
        FUN_005695e0();
      }
      else if (local_2bc == 2) {
        local_2cc = (undefined1 *)0x55dc84;
        FUN_00569620();
        local_2cc = (undefined1 *)0x55dc95;
        FUN_00569620();
      }
    }
    else {
      local_94 = 0;
      local_1da = *(ushort *)(param_3 + 0x1a);
      local_2cc = (undefined1 *)(uint)local_1da;
      local_2b4 = FUN_00508140();
      if (local_2b4 == 3) {
        local_1dc = *(ushort *)(local_90 + 0x1a);
        local_2cc = (undefined1 *)(uint)local_1dc;
        local_94 = FUN_0056a030();
      }
      else if (local_2b4 == 6) {
        local_1de = *(ushort *)(local_90 + 0x1a);
        local_2cc = (undefined1 *)(uint)local_1de;
        local_94 = FUN_0056a030();
      }
      if (local_94 != 0) {
        local_2b8 = (uint)*(ushort *)(local_90 + 0x18);
        if (local_2b8 == 5) {
          local_2cc = (undefined1 *)0x55dc1c;
          FUN_00568c90();
        }
        else if (local_2b8 == 6) {
          local_2cc = (undefined1 *)0x55dc29;
          FUN_00568cc0();
        }
      }
    }
    break;
  case 0x80:
    local_98 = param_3;
    local_1e0 = *(short *)(param_3 + 0x18);
    if (local_1e0 == 0x1203) {
      local_1e2 = *(ushort *)(param_3 + 0x1a);
      local_174 = (undefined1 *)(uint)local_1e2;
      local_170 = (undefined1 *)&local_2cc;
      local_1e8 = (undefined1 *)&local_2cc;
      local_2cc = local_174;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_2cc._0_2_ = local_1e2;
      FUN_00521430(param_2);
    }
    else {
      local_2cc = (undefined1 *)(uint)DAT_00951014;
      cVar1 = FUN_00503960(DAT_0095100c);
      if (cVar1 == '\0') {
        local_1fe = *(undefined2 *)(local_98 + 0x20);
        local_200 = *(undefined2 *)(local_98 + 0x1e);
        local_202 = *(undefined2 *)(local_98 + 0x1c);
        local_204 = *(undefined2 *)(local_98 + 0x1a);
        local_206 = *(undefined2 *)(local_98 + 0x18);
        local_2cc = (undefined1 *)(local_98 + 0x2c);
        FUN_0055fd00(local_206,param_2,local_204,local_202,local_200,local_1fe,local_98 + 0x24);
      }
      else {
        local_1ea = *(undefined2 *)(local_98 + 0x20);
        local_1ec = *(undefined2 *)(local_98 + 0x1e);
        local_1ee = *(undefined2 *)(local_98 + 0x1c);
        local_1f0 = *(undefined2 *)(local_98 + 0x1a);
        local_1f2 = *(undefined2 *)(local_98 + 0x18);
        local_1f8 = *(undefined4 **)(local_2a0 + 0x88);
        local_1fc = *local_1f8;
        local_2cc = param_2;
        iVar3 = local_98 + 0x2c;
        uVar4 = FUN_00501d60(iVar3);
        FUN_0052d3e0(*(undefined2 *)(param_1 + 8),local_1f2,local_1f0,local_1ee,local_1ec,local_1ea,
                     uVar4,iVar3);
      }
    }
    break;
  case 0x81:
    local_9c = param_3;
    local_2cc = (undefined1 *)(uint)DAT_00951014;
    cVar1 = FUN_00503960(DAT_0095100c);
    if (cVar1 == '\0') {
      local_21a = *(undefined2 *)(local_9c + 0x20);
      local_21c = *(undefined2 *)(local_9c + 0x1e);
      local_21e = *(undefined2 *)(local_9c + 0x1c);
      local_220 = *(undefined2 *)(local_9c + 0x1a);
      local_222 = *(undefined2 *)(local_9c + 0x18);
      local_2cc = (undefined1 *)(local_9c + 0x2c);
      FUN_0055fd00(local_222,param_2,local_220,local_21e,local_21c,local_21a,local_9c + 0x24);
    }
    else {
      local_208 = *(undefined2 *)(local_9c + 0x20);
      local_20a = *(undefined2 *)(local_9c + 0x1e);
      local_20c = *(undefined2 *)(local_9c + 0x1c);
      local_20e = *(undefined2 *)(local_9c + 0x1a);
      local_210 = *(undefined2 *)(local_9c + 0x18);
      local_214 = *(undefined4 **)(local_2a0 + 0x88);
      local_218 = *local_214;
      local_2cc = param_2;
      iVar3 = local_9c + 0x2c;
      uVar4 = FUN_00501d60(iVar3);
      FUN_0052d3e0(*(undefined2 *)(param_1 + 8),local_210,local_20e,local_20c,local_20a,local_208,
                   uVar4,iVar3);
    }
    break;
  case 0x90:
    local_a0 = param_3;
    local_2c0 = *(int *)(param_3 + 0x18) + -1;
    switch(local_2c0) {
    case 0:
      local_2cc = param_2;
      local_a2 = FUN_00579740();
      local_2cc = param_2;
      local_a1 = FUN_00570ce0();
      if ((local_a2 == '\0') && (local_a1 == '\0')) {
        local_2cc = (undefined1 *)0x55e11b;
        FUN_00512300();
        local_8 = 1;
        local_234 = *(int **)(local_2a0 + 0x88);
        local_238 = *local_234;
        local_23c = *(undefined4 *)(local_238 + 0xd8);
        local_2cc = (undefined1 *)(local_2a0 + 0x48);
        FUN_005350f0(local_23c,4);
        local_2cc = param_2;
        FUN_00522ac0();
        local_254 = *(undefined4 **)(local_2a0 + 0x88);
        local_258 = *local_254;
        local_2cc = (undefined1 *)0x0;
        FUN_00529f40(local_100);
        local_8 = 0xffffffff;
        local_2cc = (undefined1 *)0x55e1cd;
        FUN_005123f0();
      }
      break;
    case 1:
      local_2cc = (undefined1 *)0x55e1da;
      cVar1 = FUN_005039c0();
      if (cVar1 == '\0') {
        local_2cc = (undefined1 *)0x55e1f0;
        FUN_00512300();
        local_8 = 2;
        local_264 = *(int **)(local_2a0 + 0x88);
        local_268 = *local_264;
        local_26c = *(undefined4 *)(local_268 + 0xd8);
        local_2cc = (undefined1 *)(local_2a0 + 0x48);
        FUN_005350f0(local_26c,3);
        local_2cc = param_2;
        FUN_00522ac0();
        local_284 = *(undefined4 **)(local_2a0 + 0x88);
        local_288 = *local_284;
        local_2cc = (undefined1 *)0x0;
        FUN_00529f40(local_158);
        local_8 = 0xffffffff;
        local_2cc = (undefined1 *)0x55e2a2;
        FUN_005123f0();
      }
      break;
    case 2:
      local_2cc = (undefined1 *)0x0;
      FUN_00526660(param_2);
      local_28c = *(undefined4 **)(local_2a0 + 0x88);
      local_290 = *local_28c;
      local_2cc = param_2;
      FUN_0051fb00();
      break;
    case 3:
      local_2cc = (undefined1 *)0x1;
      FUN_00526660(param_2);
    }
    break;
  case 0x91:
    local_15c = param_3;
    local_2c4 = *(undefined4 *)(param_3 + 0x18);
    switch(local_2c4) {
    case 0:
      local_2cc = (undefined1 *)0x55e357;
      FUN_00503bc0();
      local_2cc = (undefined1 *)(local_15c + 0x20);
      FUN_00552310();
      local_296 = *(undefined2 *)(local_15c + 0x1c);
      local_2cc = local_194;
      FUN_005659e0(3,local_296);
      break;
    case 1:
      local_298 = *(undefined2 *)(param_3 + 0x1c);
      local_2cc = &DAT_0095c868;
      FUN_005659e0(4,local_298);
      break;
    case 2:
      local_2cc = (undefined1 *)0x0;
      (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x148))();
      break;
    case 3:
      local_2cc = (undefined1 *)0x1;
      (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x148))();
    }
    break;
  case 0x92:
    local_160 = param_3;
    local_29a = *(short *)(param_3 + 0x18);
    if (local_29a == 0) {
      if (*(int *)(in_ECX + 0x14c) != 0) {
        local_2cc = (undefined1 *)0x55e4a8;
        (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x14c))();
      }
    }
    else {
      local_29c = *(ushort *)(param_3 + 0x1a);
      local_2cc = (undefined1 *)(uint)local_29c;
      local_164 = FUN_0056a030();
      if (local_164 != 0) {
        local_2cc = (undefined1 *)0x55e514;
        (**(code **)(*(int *)(local_164 + 0x28 + *(int *)(*(int *)(local_164 + 0x28) + 0x10)) + 0x38
                    ))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

