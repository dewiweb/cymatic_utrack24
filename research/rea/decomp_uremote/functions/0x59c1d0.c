// rea decompile_all
// name: FUN_0059c1d0
// address: 0x59c1d0
// body: available
// range: 0x59c1d0-0x59daea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059c1d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  undefined4 uVar22;
  int local_33c;
  undefined2 local_258;
  undefined2 uStack_256;
  undefined2 local_254;
  undefined2 uStack_252;
  undefined2 local_248;
  undefined2 uStack_246;
  undefined2 local_244;
  undefined2 uStack_242;
  undefined2 local_238;
  undefined2 uStack_236;
  undefined2 local_234;
  undefined2 uStack_232;
  undefined2 local_228;
  undefined2 uStack_226;
  undefined2 local_224;
  undefined2 uStack_222;
  undefined2 local_208;
  undefined2 local_1f8;
  undefined2 uStack_1f6;
  undefined2 local_1f4;
  undefined2 uStack_1f2;
  undefined2 local_1d8;
  undefined2 local_1b8;
  undefined2 local_198;
  undefined1 local_18c [16];
  undefined1 local_17c [16];
  undefined1 local_16c [12];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144 [8];
  undefined1 local_13c [8];
  undefined1 local_134 [8];
  undefined1 local_12c [8];
  undefined1 local_124 [10];
  undefined1 local_11a [2];
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined1 local_100 [20];
  undefined1 local_ec [8];
  undefined1 local_e4 [4];
  undefined1 local_e0 [20];
  undefined1 local_cc [8];
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  undefined1 local_a8 [20];
  undefined1 local_94 [8];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [12];
  undefined2 local_5c;
  undefined1 local_5a;
  int local_58;
  undefined1 local_54 [12];
  undefined2 local_48;
  undefined1 local_46;
  int *local_44;
  int local_40;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  char local_19;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d71d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_74 = FUN_005af82d(0xf0,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (local_74 == 0) {
    local_33c = 0;
  }
  else {
    local_33c = FUN_0059c130();
  }
  local_70 = local_33c;
  local_8 = 0xffffffff;
  local_14 = local_33c;
  if (local_33c == 0) {
    ExceptionList = local_10;
    return 0;
  }
  *(undefined4 *)(local_33c + 0x60) = **(undefined4 **)(param_1 + 0x88);
  uVar3 = *(undefined2 *)(param_3 + 0x18);
  uVar5 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
                    (local_80);
  uVar5 = FUN_005358a0(uVar3,param_2,uVar5);
  *(undefined4 *)(local_14 + 0xe8) = uVar5;
  uVar22 = 0;
  uVar6 = -(uint)(*(char *)(*(int *)(local_14 + 0x60) + 0xad) != '\0') & 2000;
  uVar20 = 0;
  puVar18 = local_8c;
  uVar5 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x98))
                    (puVar18,param_5,0,uVar6,0,local_14);
  cVar2 = FUN_00544180(param_1,uVar5,puVar18,param_5,uVar20,uVar6,uVar22);
  if (cVar2 == '\0') {
    FUN_005442f0(1);
    ExceptionList = local_10;
    return 0;
  }
  if (*(int *)(local_14 + 0xe8) == 0) {
    FUN_0059adb0();
    ExceptionList = local_10;
    return 0;
  }
  local_19 = '\x01';
  local_18 = 5;
  *(uint *)(local_14 + 0xc0) = (uint)*(ushort *)(param_3 + 0x28);
  iVar13 = *(int *)(local_14 + 0xc0);
  if (0x328 < iVar13) {
    if (iVar13 < 0x1132) {
      if (iVar13 == 0x1131) {
        uVar5 = *(undefined4 *)(param_3 + 0x3c);
        uVar20 = *(undefined4 *)(param_3 + 0x40);
        *(undefined4 *)(local_14 + 200) = *(undefined4 *)(param_3 + 0x38);
        *(undefined4 *)(local_14 + 0xcc) = uVar5;
        local_198 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xd0) = local_198;
        cVar2 = FUN_00563680(local_14,1,local_14 + 200,*(undefined2 *)(param_3 + 0x2a),&DAT_0095c8a8
                            );
        local_19 = '\x01' - (cVar2 != '\0');
      }
      else if (iVar13 < 0x607) {
        if (iVar13 == 0x606) {
          FUN_00503bc0();
          local_6c = FUN_00565d60(*(undefined2 *)(param_3 + 0x2c));
          if (local_6c != 0) {
            FUN_00559900(local_18c,*(undefined2 *)(param_3 + 0x2e));
            FUN_00503de0(local_18c);
          }
          cVar2 = FUN_00503fe0();
          if (cVar2 == '\0') {
            FUN_00584d30(*(undefined2 *)(param_3 + 0x2c),*(undefined2 *)(param_3 + 0x2e),local_68,
                         local_5c,local_5a);
          }
        }
        else if (iVar13 == 0x33c) {
          *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x2a);
          *(undefined2 *)(local_14 + 0xe2) = *(undefined2 *)(param_3 + 0x2c);
          cVar2 = FUN_00563890(local_14,*(undefined2 *)(param_3 + 0x2a),
                               *(undefined2 *)(param_3 + 0x2c),0);
          local_19 = '\x01' - (cVar2 != '\0');
        }
        else if (iVar13 == 0x33f) {
          *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x2a);
          *(undefined2 *)(local_14 + 0xe2) = *(undefined2 *)(param_3 + 0x2c);
          cVar2 = FUN_00563890(local_14,*(undefined2 *)(param_3 + 0x2a),
                               *(undefined2 *)(param_3 + 0x2c),1);
          local_19 = '\x01' - (cVar2 != '\0');
        }
        else if (iVar13 == 0x605) {
          FUN_00503bc0();
          local_58 = FUN_00565d60(*(undefined2 *)(param_3 + 0x2c));
          if (local_58 != 0) {
            FUN_00559900(local_17c,*(undefined2 *)(param_3 + 0x2e));
            FUN_00503de0(local_17c);
          }
          cVar2 = FUN_00503fe0();
          if (cVar2 == '\0') {
            FUN_00584d30(*(undefined2 *)(param_3 + 0x2c),*(undefined2 *)(param_3 + 0x2e),local_54,
                         local_48,local_46);
          }
        }
      }
      else if (iVar13 == 0x728) {
        *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x2a);
        *(undefined4 *)(local_14 + 0xe4) = *(undefined4 *)(param_3 + 0x2c);
        cVar2 = FUN_00563bc0(local_14,5,*(undefined2 *)(local_14 + 0xe0),
                             *(undefined4 *)(local_14 + 0xe4));
        local_19 = '\x01' - (cVar2 != '\0');
      }
      else if (iVar13 == 0x937) {
        *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x30);
        *(undefined2 *)(local_14 + 0xe2) = *(undefined2 *)(param_3 + 0x2a);
        cVar2 = FUN_005639d0(local_14,*(undefined2 *)(local_14 + 0xe0),
                             *(undefined2 *)(local_14 + 0xe2),0);
        local_19 = '\x01' - (cVar2 != '\0');
      }
      else if (iVar13 == 0x940) {
        *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x30);
        *(undefined2 *)(local_14 + 0xe2) = *(undefined2 *)(param_3 + 0x2a);
        cVar2 = FUN_005639d0(local_14,*(undefined2 *)(local_14 + 0xe0),
                             *(undefined2 *)(local_14 + 0xe2),1);
        local_19 = '\x01' - (cVar2 != '\0');
      }
      goto switchD_0059c473_caseD_205;
    }
    if (0x2043 < iVar13) {
      if (iVar13 == 0x2336) {
        uVar5 = *(undefined4 *)(param_3 + 0x48);
        uVar20 = *(undefined4 *)(param_3 + 0x4c);
        uStack_256 = (undefined2)((uint)uVar5 >> 0x10);
        *(undefined2 *)(local_14 + 0xda) = uStack_256;
        local_258 = (undefined2)uVar5;
        *(undefined2 *)(local_14 + 0xd8) = local_258;
        local_254 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xdc) = local_254;
        uStack_252 = (undefined2)((uint)uVar20 >> 0x10);
        *(undefined2 *)(local_14 + 0xde) = uStack_252;
        cVar2 = FUN_00563b10(local_14,local_14 + 0xd8,*(undefined2 *)(param_3 + 0x2c),
                             *(undefined2 *)(param_3 + 0x2a));
        local_19 = '\x01' - (cVar2 != '\0');
      }
      else if (iVar13 == 0x3132) {
        uVar5 = *(undefined4 *)(param_3 + 0x3c);
        uVar20 = *(undefined4 *)(param_3 + 0x40);
        *(undefined4 *)(local_14 + 200) = *(undefined4 *)(param_3 + 0x38);
        *(undefined4 *)(local_14 + 0xcc) = uVar5;
        local_1d8 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xd0) = local_1d8;
        uVar5 = *(undefined4 *)(param_3 + 0x48);
        uVar20 = *(undefined4 *)(param_3 + 0x4c);
        uStack_1f6 = (undefined2)((uint)uVar5 >> 0x10);
        *(undefined2 *)(local_14 + 0xda) = uStack_1f6;
        local_1f8 = (undefined2)uVar5;
        *(undefined2 *)(local_14 + 0xd8) = local_1f8;
        local_1f4 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xdc) = local_1f4;
        uStack_1f2 = (undefined2)((uint)uVar20 >> 0x10);
        *(undefined2 *)(local_14 + 0xde) = uStack_1f2;
        cVar2 = FUN_00563680(local_14,3,local_14 + 200,*(undefined2 *)(param_3 + 0x2a),
                             local_14 + 0xd8);
        local_19 = '\x01' - (cVar2 != '\0');
      }
      else if (iVar13 == 0x3133) {
        uVar5 = *(undefined4 *)(param_3 + 0x3c);
        uVar20 = *(undefined4 *)(param_3 + 0x40);
        *(undefined4 *)(local_14 + 200) = *(undefined4 *)(param_3 + 0x38);
        *(undefined4 *)(local_14 + 0xcc) = uVar5;
        local_208 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xd0) = local_208;
        uVar5 = *(undefined4 *)(param_3 + 0x48);
        uVar20 = *(undefined4 *)(param_3 + 0x4c);
        uStack_226 = (undefined2)((uint)uVar5 >> 0x10);
        *(undefined2 *)(local_14 + 0xda) = uStack_226;
        local_228 = (undefined2)uVar5;
        *(undefined2 *)(local_14 + 0xd8) = local_228;
        local_224 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xdc) = local_224;
        uStack_222 = (undefined2)((uint)uVar20 >> 0x10);
        *(undefined2 *)(local_14 + 0xde) = uStack_222;
        cVar2 = FUN_00563680(local_14,2,local_14 + 200,*(undefined2 *)(param_3 + 0x2a),
                             local_14 + 0xd8);
        local_19 = '\x01' - (cVar2 != '\0');
      }
      goto switchD_0059c473_caseD_205;
    }
    if (iVar13 == 0x2043) {
      uVar5 = *(undefined4 *)(param_3 + 0x48);
      uVar20 = *(undefined4 *)(param_3 + 0x4c);
      uStack_246 = (undefined2)((uint)uVar5 >> 0x10);
      *(undefined2 *)(local_14 + 0xda) = uStack_246;
      local_248 = (undefined2)uVar5;
      *(undefined2 *)(local_14 + 0xd8) = local_248;
      local_244 = (undefined2)uVar20;
      *(undefined2 *)(local_14 + 0xdc) = local_244;
      uStack_242 = (undefined2)((uint)uVar20 >> 0x10);
      *(undefined2 *)(local_14 + 0xde) = uStack_242;
      cVar2 = FUN_00563830(local_14,local_14 + 0xd8);
      local_19 = '\x01' - (cVar2 != '\0');
      goto switchD_0059c473_caseD_205;
    }
    if (iVar13 == 0x113d) {
      uVar5 = *(undefined4 *)(param_3 + 0x3c);
      uVar20 = *(undefined4 *)(param_3 + 0x40);
      *(undefined4 *)(local_14 + 200) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(local_14 + 0xcc) = uVar5;
      local_1b8 = (undefined2)uVar20;
      *(undefined2 *)(local_14 + 0xd0) = local_1b8;
      cVar2 = FUN_00563680(local_14,4,local_14 + 200,*(undefined2 *)(param_3 + 0x2a),&DAT_0095c8a8);
      local_19 = '\x01' - (cVar2 != '\0');
      goto switchD_0059c473_caseD_205;
    }
    if (iVar13 != 0x113e) {
      if (iVar13 == 0x2034) {
        uVar5 = *(undefined4 *)(param_3 + 0x48);
        uVar20 = *(undefined4 *)(param_3 + 0x4c);
        uStack_236 = (undefined2)((uint)uVar5 >> 0x10);
        *(undefined2 *)(local_14 + 0xda) = uStack_236;
        local_238 = (undefined2)uVar5;
        *(undefined2 *)(local_14 + 0xd8) = local_238;
        local_234 = (undefined2)uVar20;
        *(undefined2 *)(local_14 + 0xdc) = local_234;
        uStack_232 = (undefined2)((uint)uVar20 >> 0x10);
        *(undefined2 *)(local_14 + 0xde) = uStack_232;
        cVar2 = FUN_00563680(local_14,5,&DAT_0095c898,0xffff,local_14 + 0xd8);
        local_19 = '\x01' - (cVar2 != '\0');
      }
      goto switchD_0059c473_caseD_205;
    }
switchD_0059c473_caseD_239:
    local_2c = FUN_00565cb0(*(undefined4 *)(local_14 + 0xc0),*(undefined2 *)(param_3 + 0x2c));
    if (local_2c != 0) {
      puVar18 = local_100;
      uVar5 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0xc)) +
                          0x18))(puVar18);
      puVar21 = local_108;
      (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x30))
                (puVar21,uVar5);
      local_8 = 5;
      FUN_0056aec0(local_124);
      local_8._0_1_ = 6;
      puVar19 = local_11a;
      puVar8 = (ushort *)
               (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0x10)) +
                           8))(puVar19);
      uVar6 = (uint)*puVar8;
      uVar3 = *(undefined2 *)(local_2c + 0xfa);
      uVar20 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0x10)) +
                           0x18))();
      uVar4 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0x10)) +
                          0xc))(uVar20);
      uVar4 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0x10)) +
                          0x14))(uVar4);
      uVar22 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0x10)) +
                           0x10))(uVar4);
      uVar22 = FUN_00501d60(uVar22);
      uVar22 = (**(code **)(*(int *)(local_2c + 0x28 + *(int *)(*(int *)(local_2c + 0x28) + 0xc)) +
                           0x18))(local_118,uVar22);
      uVar9 = FUN_00501d60(uVar6,uVar22);
      FUN_00584c70(uVar3,uVar9,uVar6,uVar22,uVar20,puVar19,puVar21,uVar5,puVar18);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00501900();
      local_8 = 0xffffffff;
      FUN_00501900();
    }
    goto switchD_0059c473_caseD_205;
  }
  if (iVar13 == 0x328) {
    local_18 = (uint)*(ushort *)(param_3 + 0x2c);
LAB_0059c65a:
    *(undefined2 *)(local_14 + 0xe0) = *(undefined2 *)(param_3 + 0x2a);
    *(undefined4 *)(local_14 + 0xe4) = 0;
    cVar2 = FUN_00563bc0(local_14,local_18,*(undefined2 *)(local_14 + 0xe0),0);
    local_19 = '\x01' - (cVar2 != '\0');
    goto switchD_0059c473_caseD_205;
  }
  if (iVar13 < 0x204) {
    if (iVar13 != 0x203) {
      if (iVar13 < 0x42) {
        if ((iVar13 == 0x41) || (iVar13 == 0x24)) goto switchD_0059c473_caseD_204;
        if (iVar13 != 0x26) {
          if (iVar13 != 0x38) goto switchD_0059c473_caseD_205;
          goto switchD_0059c473_caseD_239;
        }
      }
      else if (iVar13 != 0x42) {
        if (iVar13 == 0x101) {
          local_20 = (uint)*(ushort *)(param_3 + 0x2a);
          (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0xbc))
                    (local_94,local_20);
          local_8 = 1;
          uVar5 = FUN_00501d60();
          FUN_00584b40(local_20 & 0xffff,uVar5);
          local_8 = 0xffffffff;
          FUN_00501900();
          goto switchD_0059c473_caseD_205;
        }
        if (iVar13 != 0x128) goto switchD_0059c473_caseD_205;
        goto LAB_0059c65a;
      }
    }
switchD_0059c473_caseD_227:
    local_24 = FUN_00565b50(*(undefined4 *)(local_14 + 0xc0),*(undefined2 *)(param_3 + 0x2c));
    if (local_24 != 0) {
      puVar18 = local_a8;
      uVar5 = (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 0xc)) +
                          0x18))(puVar18);
      (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x30))
                (local_b0,uVar5);
      local_8 = 2;
      FUN_0056aec0(local_cc);
      local_8._0_1_ = 3;
      uVar5 = *(undefined4 *)(local_24 + 0x70);
      uVar3 = *(undefined2 *)(local_24 + 0xfa);
      local_c4 = uVar5;
      uVar20 = FUN_00501d60();
      uVar20 = (**(code **)(*(int *)(local_24 + 0x28 + *(int *)(*(int *)(local_24 + 0x28) + 0xc)) +
                           0x18))(local_c0,uVar20);
      uVar22 = FUN_00501d60(uVar5,uVar20);
      FUN_00584bf0(uVar3,uVar22,uVar5,uVar20,puVar18);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00501900();
      local_8 = 0xffffffff;
      FUN_00501900();
    }
  }
  else {
    switch(iVar13) {
    case 0x204:
    case 0x225:
    case 0x22a:
switchD_0059c473_caseD_204:
      local_28 = FUN_00565c00(*(undefined4 *)(local_14 + 0xc0),*(undefined2 *)(param_3 + 0x2c));
      if (local_28 != 0) {
        puVar18 = local_ec;
        (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 0xc)) + 0x34))
                  (puVar18);
        local_8 = 4;
        puVar21 = local_e4;
        puVar7 = (undefined4 *)
                 (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 0xc))
                             + 0x2c))(puVar21);
        uVar5 = *puVar7;
        puVar19 = local_e0;
        uVar20 = (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 0xc))
                             + 0x40))(puVar19);
        uVar5 = FUN_00501d60(uVar5,uVar20);
        uVar3 = (**(code **)(*(int *)(local_28 + 0x28 + *(int *)(*(int *)(local_28 + 0x28) + 0xc)) +
                            0x24))(uVar5);
        FUN_00584b80(uVar3,puVar19,puVar21,puVar18);
        local_8 = 0xffffffff;
        FUN_00501900();
      }
      break;
    case 0x227:
    case 0x22b:
      goto switchD_0059c473_caseD_227;
    case 0x239:
    case 0x23a:
    case 0x23b:
      goto switchD_0059c473_caseD_239;
    case 0x302:
      FUN_005017d0();
      local_8 = 7;
      FUN_005017d0();
      local_8._0_1_ = 8;
      FUN_00501e80(**(int **)(param_1 + 0x88) + 0xb8);
      uVar1 = *(ushort *)(param_3 + 0x2c);
      if (uVar1 == 0) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0xbc))(local_12c,1);
        local_8._0_1_ = 9;
        FUN_00501d80(uVar5);
        local_8._0_1_ = 8;
        FUN_00501900();
      }
      else if ((uVar1 != 0) && (uVar1 < 3)) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                            0xc0))(local_134);
        local_8._0_1_ = 10;
        FUN_00501d80(uVar5);
        local_8._0_1_ = 8;
        FUN_00501900();
        FUN_00502720(&DAT_009114f0);
        if (*(short *)(param_3 + 0x2c) == 1) {
          local_40 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)
                                          ) + 0x100))(*(undefined2 *)(param_3 + 0x2a));
          if (local_40 != 0) {
            uVar5 = (**(code **)(*(int *)(local_40 + 4 + *(int *)(*(int *)(local_40 + 4) + 8)) + 8))
                              (local_13c);
            local_8._0_1_ = 0xb;
            FUN_005026d0(uVar5);
            local_8._0_1_ = 8;
            FUN_00501900();
          }
        }
        else {
          local_44 = (int *)(**(code **)(*(int *)(param_1 + 0x28 +
                                                 *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x124))
                                      (*(undefined2 *)(param_3 + 0x2a));
          if (local_44 != (int *)0x0) {
            uVar5 = (**(code **)(*local_44 + 0x34))(local_144);
            local_8._0_1_ = 0xc;
            FUN_005026d0(uVar5);
            local_8._0_1_ = 8;
            FUN_00501900();
          }
        }
      }
      uVar5 = *(undefined4 *)(**(int **)(param_1 + 0x88) + 0xd8);
      uVar20 = *(undefined4 *)(param_1 + 0x84);
      uVar22 = *(undefined4 *)(param_1 + 0x70);
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      uVar17 = *(undefined4 *)(param_1 + 0x80);
      uVar16 = *(undefined4 *)(param_1 + 0x6c);
      uVar15 = *(undefined4 *)(param_1 + 0x74);
      uVar14 = *(undefined4 *)(param_1 + 0x7c);
      iVar13 = **(int **)(param_1 + 0x88) + 0x100;
      local_160 = uVar14;
      local_15c = uVar15;
      local_158 = uVar16;
      local_154 = uVar17;
      local_150 = uVar9;
      local_14c = uVar22;
      local_148 = uVar20;
      uVar10 = FUN_00501cb0(iVar13);
      uVar11 = FUN_00501cb0(uVar10);
      uVar12 = (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) +
                           0xa4))(local_16c,uVar14,uVar15,uVar16,uVar17,uVar9,uVar22,uVar20,uVar5,
                                  uVar11);
      FUN_00584a80(uVar12,uVar14,uVar15,uVar16,uVar17,uVar9,uVar22,uVar20,uVar5,uVar11,uVar10,iVar13
                  );
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_00501900();
      local_8 = 0xffffffff;
      FUN_00501900();
    }
  }
switchD_0059c473_caseD_205:
  if (local_19 != '\0') {
    FUN_0059adb0();
    local_14 = 0;
  }
  ExceptionList = local_10;
  return local_14;
}

