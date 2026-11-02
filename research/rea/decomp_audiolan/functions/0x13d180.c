// rea decompile_all
// name: FUN_0013d180
// address: 0x13d180
// body: available
// range: 0x13d180-0x13dabf inclusive
// range: 0x13dae8-0x13dde7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_0013d180(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  code **ppcVar13;
  uint uVar14;
  undefined1 uVar15;
  code *pcVar16;
  bool bVar17;
  code *local_110;
  undefined4 *local_10c;
  int local_108;
  undefined4 *local_104;
  int iStack_100;
  undefined4 local_fc;
  uint local_f8;
  uint local_f4;
  int iStack_f0;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  int local_c0;
  int local_bc;
  int aiStack_b8 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int aiStack_40 [4];
  int aiStack_30 [3];
  
  ppcVar13 = &local_110;
  iVar4 = FUN_0016d7a4(0xf0,DAT_0013dac0);
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)FUN_0012aa24(iVar4,DAT_0013dac8,DAT_0013dac4);
  *puVar5 = DAT_0013dacc;
  puVar5[0x32] = 0;
  puVar5[0x33] = 0;
  *(undefined2 *)(puVar5 + 0x34) = 0;
  *(undefined2 *)((int)puVar5 + 0xda) = 0;
  *(undefined2 *)(puVar5 + 0x36) = 0;
  *(undefined2 *)(puVar5 + 0x37) = 0;
  *(undefined2 *)((int)puVar5 + 0xde) = 0;
  puVar5[0x18] = *(undefined4 *)param_1[0x1f];
  (**(code **)(*param_1 + 0xd4))(auStack_80,param_1);
  uVar6 = FUN_000ed474(puVar5 + 0x1a,*(undefined2 *)(param_3 + 0x16),param_2,auStack_80);
  puVar5[0x3a] = uVar6;
  (**(code **)(*param_1 + 0xd4))(auStack_80,param_1);
  local_108 = 0;
  local_10c = (undefined4 *)0x0;
  if (*(char *)(puVar5[0x18] + 0x15d) != '\0') {
    local_10c = (undefined4 *)0x7d0;
  }
  local_110 = entry;
  local_104 = puVar5;
  iVar4 = FUN_000fb7e0(puVar5,param_1,auStack_80,param_5);
  uVar2 = DAT_0013dad0;
  if (iVar4 == 0) {
    FUN_000fbae8(puVar5,1);
    return (undefined4 *)0x0;
  }
  if (puVar5[0x3a] == 0) {
    FUN_0012a9dc(puVar5);
    return (undefined4 *)0x0;
  }
  uVar14 = (uint)*(ushort *)(param_3 + 0x24);
  uVar15 = 5;
  bVar17 = uVar14 == DAT_0013dad0;
  iVar4 = uVar14 - DAT_0013dad0;
  *(ushort *)(puVar5 + 0x30) = *(ushort *)(param_3 + 0x24);
  puVar10 = DAT_0013dadc;
  if (bVar17) {
    FUN_0010e7e0(aiStack_b8,uVar14,5);
    FUN_0010e7e0(auStack_88);
    FUN_0010e498(auStack_88,*(int *)param_1[0x1f] + 0x168);
    sVar1 = *(short *)(param_3 + 0x28);
    if (sVar1 == 0) {
      (**(code **)(*param_1 + 0x100))(auStack_70,param_1,1);
      FUN_0010e820(aiStack_b8,auStack_70);
      ppcVar13 = (code **)auStack_70;
LAB_0013d808:
      FUN_0010e7f4(ppcVar13);
    }
    else if (sVar1 == 1 || sVar1 == 2) {
      (**(code **)(*param_1 + 0x104))(auStack_68,param_1);
      FUN_0010e820(aiStack_b8,auStack_68);
      FUN_0010e7f4(auStack_68);
      FUN_0010e518(aiStack_b8,&DAT_0013dae4);
      if (*(short *)(param_3 + 0x28) == 1) {
        piVar7 = (int *)(**(code **)(*param_1 + 0x148))(param_1,*(undefined2 *)(param_3 + 0x26));
        if (piVar7 != (int *)0x0) {
          (**(code **)(*(int *)((int)piVar7 + *(int *)(*piVar7 + -0x9c)) + 0x38))
                    (&local_110,*(int *)(*piVar7 + -0x9c) + (int)piVar7);
          FUN_0010e5e0(aiStack_b8,&local_110);
          FUN_0010e7f4(&local_110);
        }
      }
      else {
        piVar7 = (int *)(**(code **)(*param_1 + 0x168))();
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 100))(&local_110);
          FUN_0010e5e0(aiStack_b8,&local_110);
          goto LAB_0013d808;
        }
      }
    }
    local_f4 = *(int *)param_1[0x1f] + 0x1b0;
    local_f8 = FUN_0015e6f4(auStack_88);
    local_fc = FUN_0015e6f4(aiStack_b8);
    iVar4 = param_1[0x1b];
    pcVar16 = (code *)param_1[0x18];
    uVar6 = *(undefined4 *)(*(int *)param_1[0x1f] + 0x188);
    local_bc = param_1[0x1a];
    puVar12 = (undefined4 *)param_1[0x19];
    puVar10 = (undefined4 *)param_1[0x1d];
    iVar11 = param_1[0x1e];
    local_c0 = param_1[0x1c];
    (**(code **)(*param_1 + 0xe8))(auStack_60,param_1);
    iStack_f0 = local_f4;
    local_f4 = local_f8;
    local_f8 = local_fc;
    local_110 = pcVar16;
    local_10c = puVar10;
    local_108 = iVar4;
    local_104 = puVar12;
    iStack_100 = iVar11;
    local_fc = uVar6;
    FUN_000f3e74(puVar5[0x3a],auStack_60,local_c0,local_bc);
    FUN_0010e7f4(auStack_88);
    piVar7 = aiStack_b8;
  }
  else {
    if ((int)uVar2 <= (int)uVar14) {
      iVar11 = iVar4 - DAT_0013dad8;
      if (iVar4 == DAT_0013dad8) {
        uVar6 = *(undefined4 *)(param_3 + 0x34);
        uVar3 = *(undefined2 *)(param_3 + 0x38);
        puVar5[0x32] = *(undefined4 *)(param_3 + 0x30);
        puVar5[0x33] = uVar6;
        *(undefined2 *)(puVar5 + 0x34) = uVar3;
        local_110 = (code *)(uint)*(ushort *)(param_3 + 0x26);
        local_10c = puVar10;
        iVar4 = FUN_00127f70(param_1,puVar5,1,puVar5 + 0x32);
      }
      else if (iVar4 < DAT_0013dad8) {
        if (iVar4 == 0x304) {
          FUN_0010f718(&iStack_100);
          iVar4 = FUN_00126cd8(param_1,*(undefined2 *)(param_3 + 0x28));
          if (iVar4 != 0) {
            FUN_00160270(&local_110,iVar4 + 0x54,*(undefined2 *)(param_3 + 0x2a));
            FUN_0010f738(&iStack_100,&local_110);
          }
          iVar4 = FUN_0015ea90(&iStack_100);
joined_r0x0013d984:
          if (iVar4 == 0) {
            local_110 = (code *)(local_f4 & 0xffff);
            local_10c = (undefined4 *)(local_f4 >> 0x10 & 0xff);
            FUN_000f3f4c(puVar5[0x3a],*(undefined2 *)(param_3 + 0x28),
                         *(undefined2 *)(param_3 + 0x2a),&iStack_100);
          }
          goto LAB_0013ddd0;
        }
        if (iVar4 < 0x305) {
          if (iVar4 == 0x26) {
            uVar15 = *(undefined1 *)(param_3 + 0x28);
LAB_0013d488:
            *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x26);
            puVar5[0x39] = 0;
            local_110 = entry;
            iVar4 = FUN_001270e4(param_1,puVar5,uVar15,*(undefined2 *)(puVar5 + 0x38));
          }
          else if (iVar4 == 0x3a) {
            *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x26);
            *(undefined2 *)((int)puVar5 + 0xe2) = *(undefined2 *)(param_3 + 0x28);
            local_110 = entry;
            iVar4 = FUN_00128898(param_1,puVar5,*(undefined2 *)(param_3 + 0x26),
                                 *(undefined2 *)(param_3 + 0x28));
          }
          else {
            if (iVar4 != 0x3d) {
              if (iVar4 != 0x303) goto LAB_0013ddd0;
              FUN_0010f718(&iStack_100,1,iVar11);
              iVar4 = FUN_00126cd8(param_1,*(undefined2 *)(param_3 + 0x28));
              if (iVar4 != 0) {
                FUN_00160270(&local_110,iVar4 + 0x40,*(undefined2 *)(param_3 + 0x2a));
                FUN_0010f738(&iStack_100,&local_110);
              }
              iVar4 = FUN_0015ea90(&iStack_100);
              goto joined_r0x0013d984;
            }
            *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x26);
            *(undefined2 *)((int)puVar5 + 0xe2) = *(undefined2 *)(param_3 + 0x28);
            local_110 = (code *)0x1;
            iVar4 = FUN_00128898(param_1,puVar5,*(undefined2 *)(param_3 + 0x26),
                                 *(undefined2 *)(param_3 + 0x28));
          }
        }
        else if (iVar4 == 0x426) {
          *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x26);
          local_110 = (code *)((uint)*(ushort *)(param_3 + 0x28) +
                              (uint)*(ushort *)(param_3 + 0x2a) * 0x10000);
          puVar5[0x39] = local_110;
          iVar4 = FUN_001270e4(param_1,puVar5,5,*(undefined2 *)(puVar5 + 0x38));
        }
        else if (iVar4 == 0x635) {
          *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x2c);
          *(undefined2 *)((int)puVar5 + 0xe2) = *(undefined2 *)(param_3 + 0x26);
          local_110 = entry;
          iVar4 = FUN_00129230(param_1,puVar5,*(undefined2 *)(puVar5 + 0x38));
        }
        else {
          if (iVar4 != 0x63e) goto LAB_0013ddd0;
          *(undefined2 *)(puVar5 + 0x38) = *(undefined2 *)(param_3 + 0x2c);
          *(undefined2 *)((int)puVar5 + 0xe2) = *(undefined2 *)(param_3 + 0x26);
          local_110 = (code *)0x1;
          iVar4 = FUN_00129230(param_1,puVar5,*(undefined2 *)(puVar5 + 0x38));
        }
      }
      else {
        iVar4 = iVar11 - DAT_0013dae0;
        if (iVar11 == DAT_0013dae0) {
          local_98 = *(undefined4 *)(param_3 + 0x40);
          uStack_94 = *(undefined4 *)(param_3 + 0x44);
          FUN_0016d9f8(&local_d0,&local_98);
          *(undefined2 *)((int)puVar5 + 0xda) = local_ce;
          *(undefined2 *)(puVar5 + 0x36) = local_d0;
          *(undefined2 *)(puVar5 + 0x37) = local_cc;
          *(undefined2 *)((int)puVar5 + 0xde) = local_ca;
          iVar4 = FUN_00128130(param_1,puVar5,puVar5 + 0x36);
        }
        else if (iVar11 < DAT_0013dae0) {
          if (iVar11 == 0xc) {
            uVar6 = *(undefined4 *)(param_3 + 0x34);
            uVar3 = *(undefined2 *)(param_3 + 0x38);
            puVar5[0x32] = *(undefined4 *)(param_3 + 0x30);
            puVar5[0x33] = uVar6;
            *(undefined2 *)(puVar5 + 0x34) = uVar3;
            local_110 = (code *)(uint)*(ushort *)(param_3 + 0x26);
            local_10c = puVar10;
            iVar4 = FUN_00127f70(param_1,puVar5,4,puVar5 + 0x32);
          }
          else {
            if (iVar11 == 0xd) goto LAB_0013d618;
            if (iVar11 != 0xf03) goto LAB_0013ddd0;
            local_a0 = *(undefined4 *)(param_3 + 0x40);
            uStack_9c = *(undefined4 *)(param_3 + 0x44);
            FUN_0016d9f8(&local_c8,&local_a0);
            uVar6 = DAT_0013ddec;
            local_10c = puVar5 + 0x36;
            *(undefined2 *)((int)puVar5 + 0xda) = local_c6;
            *(undefined2 *)(puVar5 + 0x36) = local_c8;
            *(undefined2 *)(puVar5 + 0x37) = local_c4;
            *(undefined2 *)((int)puVar5 + 0xde) = local_c2;
            local_110 = DAT_0013dde8;
            iVar4 = FUN_00127f70(param_1,puVar5,5,uVar6);
          }
        }
        else if (iVar4 == 0x2f3) {
          local_90 = *(undefined4 *)(param_3 + 0x40);
          uStack_8c = *(undefined4 *)(param_3 + 0x44);
          FUN_0016d9f8(&local_d8,&local_90);
          *(undefined2 *)((int)puVar5 + 0xda) = local_d6;
          *(undefined2 *)(puVar5 + 0x36) = local_d8;
          *(undefined2 *)(puVar5 + 0x37) = local_d4;
          *(undefined2 *)((int)puVar5 + 0xde) = local_d2;
          local_110 = (code *)(uint)*(ushort *)(param_3 + 0x26);
          iVar4 = FUN_00129b74(param_1,puVar5,puVar5 + 0x36,*(undefined1 *)(param_3 + 0x28));
        }
        else if (iVar4 == 0x10ef) {
          uVar6 = *(undefined4 *)(param_3 + 0x34);
          uVar3 = *(undefined2 *)(param_3 + 0x38);
          puVar5[0x32] = *(undefined4 *)(param_3 + 0x30);
          puVar5[0x33] = uVar6;
          *(undefined2 *)(puVar5 + 0x34) = uVar3;
          local_b0 = *(undefined4 *)(param_3 + 0x40);
          local_ac = *(undefined4 *)(param_3 + 0x44);
          FUN_0016d9f8(&local_e8,&local_b0);
          local_10c = puVar5 + 0x36;
          *(undefined2 *)((int)puVar5 + 0xda) = local_e6;
          *(undefined2 *)(puVar5 + 0x36) = local_e8;
          *(undefined2 *)(puVar5 + 0x37) = local_e4;
          *(undefined2 *)((int)puVar5 + 0xde) = local_e2;
          local_110 = (code *)(uint)*(ushort *)(param_3 + 0x26);
          iVar4 = FUN_00127f70(param_1,puVar5,3,puVar5 + 0x32);
        }
        else {
          if (iVar4 != 0x10f0) goto LAB_0013ddd0;
          uVar6 = *(undefined4 *)(param_3 + 0x34);
          uVar3 = *(undefined2 *)(param_3 + 0x38);
          puVar5[0x32] = *(undefined4 *)(param_3 + 0x30);
          puVar5[0x33] = uVar6;
          *(undefined2 *)(puVar5 + 0x34) = uVar3;
          local_a8 = *(undefined4 *)(param_3 + 0x40);
          local_a4 = *(undefined4 *)(param_3 + 0x44);
          FUN_0016d9f8(&local_e0,&local_a8);
          local_10c = puVar5 + 0x36;
          *(undefined2 *)((int)puVar5 + 0xda) = local_de;
          *(undefined2 *)(puVar5 + 0x36) = local_e0;
          *(undefined2 *)(puVar5 + 0x37) = local_dc;
          *(undefined2 *)((int)puVar5 + 0xde) = local_da;
          local_110 = (code *)(uint)*(ushort *)(param_3 + 0x26);
          iVar4 = FUN_00127f70(param_1,puVar5,2,puVar5 + 0x32);
        }
      }
      if (iVar4 == 1) {
        return puVar5;
      }
      goto LAB_0013ddd0;
    }
    if (uVar14 == 0x204) goto LAB_0013d584;
    if (uVar14 < 0x205) {
      if (uVar14 != 0x42) {
        if (uVar14 < 0x43) {
          if (uVar14 != 0x24) {
            if (uVar14 == 0x26) goto LAB_0013d4e0;
            if (uVar14 == 0x38) goto LAB_0013d618;
            if (uVar14 != 0x41) goto LAB_0013ddd0;
          }
LAB_0013d584:
          piVar7 = (int *)FUN_00125e58(param_1,uVar14,*(undefined2 *)(param_3 + 0x28));
          if (piVar7 == (int *)0x0) goto LAB_0013ddd0;
          (**(code **)(*piVar7 + 0xac))(&iStack_100,piVar7);
          uVar6 = (**(code **)(*piVar7 + 0x9c))(piVar7);
          (**(code **)(*piVar7 + 0xa0))(&local_c0,piVar7);
          uVar8 = FUN_0015e89c(&local_c0);
          uVar9 = (**(code **)(*piVar7 + 0x6c))(piVar7);
          local_110 = (code *)&iStack_100;
          FUN_000f3d8c(puVar5[0x3a],uVar9,uVar8,uVar6);
          piVar7 = &local_c0;
          goto LAB_0013d8a8;
        }
        if (uVar14 == 0x101) {
          uVar15 = *(undefined1 *)(param_3 + 0x26);
          (**(code **)(*param_1 + 0x100))(&local_108,param_1,uVar15);
          uVar6 = FUN_0015e89c(&local_108);
          FUN_000f4690(puVar5[0x3a],uVar15,uVar6);
          FUN_0010e7f4(&local_108);
          goto LAB_0013ddd0;
        }
        if (uVar14 == 0x128) goto LAB_0013d488;
        if (uVar14 != 0x203) goto LAB_0013ddd0;
      }
    }
    else {
      iVar4 = uVar14 - DAT_0013dad4;
      if (uVar14 != DAT_0013dad4) {
        if ((int)uVar14 < (int)DAT_0013dad4) {
          if (uVar14 != 0x225) {
            if (uVar14 == 0x227) goto LAB_0013d4e0;
            if (uVar14 != 0x22a) goto LAB_0013ddd0;
          }
          goto LAB_0013d584;
        }
        if ((iVar4 != 0xe && iVar4 != 0xf) && iVar4 != 0x10) goto LAB_0013ddd0;
LAB_0013d618:
        piVar7 = (int *)FUN_00126dcc(param_1,uVar14,*(undefined2 *)(param_3 + 0x28));
        if (piVar7 == (int *)0x0) goto LAB_0013ddd0;
        uVar6 = (**(code **)(*piVar7 + 0x100))(piVar7);
        iVar4 = (**(code **)(*piVar7 + 0xec))(piVar7);
        puVar10 = (undefined4 *)(**(code **)(*piVar7 + 0xfc))(piVar7);
        iVar11 = (**(code **)(*piVar7 + 0xf8))(piVar7);
        (**(code **)(*piVar7 + 0x5c))(aiStack_40,piVar7);
        (**(code **)(*param_1 + 0x1b0))(aiStack_30,param_1,aiStack_40);
        puVar12 = (undefined4 *)FUN_0015e89c(aiStack_30);
        (**(code **)(*piVar7 + 0x5c))(auStack_50,piVar7);
        uVar3 = (**(code **)(*piVar7 + 0xe8))(piVar7);
        FUN_0010e770(&local_c0,piVar7 + 0x1c);
        uVar8 = FUN_0015e89c(&local_c0);
        local_110 = (code *)auStack_50;
        local_10c = puVar12;
        local_108 = iVar11;
        local_104 = puVar10;
        iStack_100 = iVar4;
        local_fc = uVar6;
        FUN_000f41c4(puVar5[0x3a],*(undefined2 *)((int)piVar7 + 0xf2),uVar8,uVar3);
        FUN_0010e7f4(&local_c0);
        piVar7 = aiStack_30;
        goto LAB_0013d8a8;
      }
    }
LAB_0013d4e0:
    piVar7 = (int *)FUN_00125ec8(param_1,uVar14,*(undefined2 *)(param_3 + 0x28));
    if (piVar7 == (int *)0x0) goto LAB_0013ddd0;
    (**(code **)(*piVar7 + 0x5c))(&iStack_100,piVar7);
    (**(code **)(*param_1 + 0x1b0))(aiStack_40,param_1,&iStack_100);
    puVar10 = (undefined4 *)FUN_0015e89c(aiStack_40);
    (**(code **)(*piVar7 + 0x5c))(auStack_50,piVar7);
    iVar4 = piVar7[0x1a];
    FUN_0010e770(&local_c0,piVar7 + 0x1c);
    uVar6 = FUN_0015e89c(&local_c0);
    local_110 = (code *)auStack_50;
    local_10c = puVar10;
    FUN_000f3ef0(puVar5[0x3a],*(undefined2 *)((int)piVar7 + 0xf2),uVar6,iVar4);
    FUN_0010e7f4(&local_c0);
    piVar7 = aiStack_40;
  }
LAB_0013d8a8:
  FUN_0010e7f4(piVar7);
LAB_0013ddd0:
  FUN_0012a9dc(puVar5);
  return (undefined4 *)0x0;
}

