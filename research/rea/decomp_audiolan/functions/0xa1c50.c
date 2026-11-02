// rea decompile_all
// name: FUN_000a1c50
// address: 0xa1c50
// body: available
// range: 0xa1c50-0xa25e7 inclusive
// range: 0xa2630-0xa2e6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000a21d0) */
/* WARNING: Removing unreachable block (ram,0x000a21d8) */
/* WARNING: Removing unreachable block (ram,0x000a21e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000a1c50(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int ********ppppppppiVar5;
  int ********ppppppppiVar6;
  uint *puVar7;
  undefined1 *puVar8;
  int *****pppppiVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int *******pppppppiVar13;
  uint uVar14;
  int ******ppppppiVar15;
  int ******ppppppiVar16;
  undefined1 *puVar17;
  int ******ppppppiVar18;
  int ******ppppppiVar19;
  int ********ppppppppiVar20;
  int ********ppppppppiVar21;
  int ******ppppppiVar22;
  int iVar23;
  int ******ppppppiVar24;
  int ******ppppppiVar25;
  uint uVar26;
  int *piVar27;
  bool bVar28;
  int *******local_198 [2];
  undefined4 local_190;
  int ****local_18c;
  int ******local_188;
  int ******local_184;
  undefined4 local_180;
  int ******local_178;
  int *******local_174;
  uint local_170;
  int ****local_16c;
  int ****local_168;
  undefined4 local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined2 local_154;
  undefined2 local_152;
  int ******local_150;
  undefined4 local_14c;
  undefined2 local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined4 local_130;
  undefined1 *local_12c;
  undefined1 *local_128;
  int local_124;
  undefined4 local_120;
  int ****local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  int *****local_114;
  int *****local_110;
  undefined1 *local_10c;
  undefined2 local_108;
  undefined2 local_106;
  int ******local_104;
  undefined4 local_100;
  undefined2 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_dc;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  int ******local_cc;
  int ******local_c8;
  int ******local_c4;
  int ******local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b4;
  int ******local_b0;
  int ******local_ac;
  uint local_a8;
  int *****local_a4;
  int ******local_a0;
  int ******local_9c;
  int ******local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  int ****local_84;
  int ******local_80;
  undefined1 *local_7c;
  undefined1 auStack_78 [4];
  int *local_74;
  int ******local_6c;
  undefined4 local_68;
  undefined1 local_64;
  uint local_60;
  int ******local_5c;
  undefined4 local_58;
  uint local_54 [3];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  uint local_38 [2];
  int *piStack_30;
  int local_2c;
  int *piStack_28;
  
  uVar11 = DAT_000a25e8;
  piStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  if (param_1[0x165] != 0) {
    iVar23 = *param_3;
    ppppppppiVar20 = *(int *********)(iVar23 + -4);
    local_18c = (int ****)0x0;
    uVar11 = DAT_000a2600;
    if (ppppppppiVar20 != (int ********)0x0) {
      piVar3 = (int *)FUN_00002428();
      ppppppppiVar21 = ppppppppiVar20;
      do {
        ppppppppiVar21 = (int ********)((int)ppppppppiVar21 + -1);
        uVar14 = (uint)*(byte *)(iVar23 + (int)ppppppppiVar21);
        uVar11 = DAT_000a2600;
        if (*(char *)(*piVar3 + uVar14) != ' ') {
          if (uVar14 != 0x2f) goto LAB_000a1dfc;
          break;
        }
        local_18c = (int ****)((uVar14 + (int)local_18c * 10) - 0x30);
      } while (ppppppppiVar21 != (int ********)0x0);
      if (local_18c != (int ****)0x0) {
        ppppppppiVar5 = ppppppppiVar20;
        if (ppppppppiVar21 < ppppppppiVar20) {
          ppppppppiVar5 = ppppppppiVar21;
        }
        ppppppppiVar21 = (int ********)&local_178;
        if ((int ********)0xfffffff1 < ppppppppiVar5) {
          local_198[0] = (int *******)0xfffffff1;
          FUN_0010f7cc(8,DAT_000a25ec,DAT_000a25ec,ppppppppiVar5);
        }
        local_6c = (int ******)DAT_000a25f0;
        local_178 = (int ******)DAT_000a25f0;
        if (ppppppppiVar5 != (int ********)0x0) {
          local_198[0] = (int *******)ppppppppiVar5;
          local_184 = (int ******)0x80;
          ppppppppiVar6 = (int ********)&local_184;
          if ((int ********)0x80 < ppppppppiVar5) {
            ppppppppiVar6 = local_198;
          }
          iVar4 = FUN_001da28c(ppppppppiVar21,*ppppppppiVar6,ppppppppiVar5);
          local_178 = (int ******)(iVar4 + 0xc);
        }
        if (iVar23 != 0) {
          FUN_00003628(local_178,iVar23,ppppppppiVar5);
        }
        local_54[0] = *(uint *)(local_2c + 4);
        piVar3 = *(int **)param_1[0x60];
        bVar28 = piVar3 != (int *)param_1[0x60];
        if (bVar28) {
          ppppppppiVar20 = local_198;
        }
        local_b0 = (int ******)DAT_000a25f4;
        if (bVar28) {
          ppppppppiVar21 = &local_174;
        }
        local_84 = (int ****)DAT_000a25f8;
        local_58 = DAT_000a25fc;
        if (bVar28) {
          do {
            ppppppppiVar5 = *(int *********)(piVar3[0xc] + -4);
            if (ppppppppiVar5 == (int ********)local_178[-1]) {
              local_198[0] = (int *******)ppppppppiVar5;
              local_174 = (int *******)local_178[-1];
              ppppppppiVar6 = ppppppppiVar21;
              if (ppppppppiVar5 <= local_178[-1]) {
                ppppppppiVar6 = ppppppppiVar20;
              }
              iVar23 = FUN_0000339c(piVar3[0xc],local_178,*ppppppppiVar6);
              if (((iVar23 == 0) && (*(int *******)(piVar3[0xc] + -4) == (int ******)local_178[-1]))
                 && ((int ****)(uint)*(ushort *)(piVar3 + 7) == local_18c)) {
                FUN_00154f7c(local_2c,(char)piVar3[0x1c]);
                FUN_001d1308(auStack_48,piVar3 + 0x15,local_54);
                FUN_0006c3f8(piVar3 + 0x11,*(uint *)(local_2c + 8) & 0xff,local_54[0] & 0xff);
                uVar14 = DAT_000a2608;
                local_168 = (int ****)(uint)*(byte *)((int)piVar3 + 0xe);
                local_16c = (int ****)CONCAT22(local_16c._2_2_,0x500);
                local_15c = (undefined1 *)0x0;
                local_170 = DAT_000a2604;
                local_164 = 0;
                local_160 = (undefined1 *)0x0;
                local_16c = (int ****)CONCAT31(local_16c._1_3_,1);
                FUN_0006c618(&local_164,piVar3 + 0x11);
                (**(code **)(*param_1 + 0xcc))(param_1,&local_170);
                local_188 = (int ******)(uint)*(byte *)((int)piVar3 + 0xe);
                local_18c = (int ****)((uint)local_18c & 0xffffff00);
                local_190 = local_58;
                local_184 = local_6c;
                iVar23 = (**(code **)(*param_1 + 0xd0))(param_1,&local_190);
                if (iVar23 != 0) {
                  FUN_00155038(local_2c,local_184);
                }
                local_190 = local_58;
                FUN_001da314(&local_184);
                local_170 = uVar14;
                FUN_0010fa20(local_164,(int)local_15c - local_164 >> 1,0);
                if (local_178 == (int ******)(DAT_000a260c + 3)) {
                  return;
                }
                pppppppiVar13 = (int *******)(local_178 + -3);
                ppppppiVar15 = *pppppppiVar13;
                if (ppppppiVar15 != (int ******)0xffffffff) {
                  if (pppppppiVar13 == (int *******)DAT_000a260c) {
                    return;
                  }
                  *pppppppiVar13 = (int ******)((int)ppppppiVar15 + -1);
                  if (ppppppiVar15 != (int ******)0x0) {
                    return;
                  }
                }
                FUN_0010fa20(local_178 + -3,(int)local_178[-2] + 0xe,0);
                return;
              }
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)param_1[0x60]);
        }
        local_a0 = (int ******)(**(code **)(*param_1 + 0xc4))(param_1);
        local_9c = *(int *******)(param_1[0x4d] + 0x150);
        local_16c = (int ****)param_1[0x173];
        uVar14 = param_1[0x166];
        uVar26 = 0;
        bVar28 = uVar14 < DAT_000a2610;
        piVar3 = DAT_000a2614;
        if (bVar28) {
          param_1[0x166] = uVar14 + 2;
          piVar3 = param_1 + 0x166;
        }
        local_98 = (int ******)(uVar14 & 0xffff);
        if (!bVar28) {
          param_1[0x166] = (int)piVar3;
        }
        while (*(char *)((int)param_1 + uVar26 + 0x188) != '\0') {
          uVar26 = uVar26 + 1;
          if (0xf < uVar26) {
            FUN_000028a4(_DAT_000a2618);
            FUN_001da314(&local_178);
            return;
          }
        }
        *(undefined1 *)((int)param_1 + uVar26 + 0x188) = 1;
        ppppppiVar15 = (int ******)0x0;
        local_a4 = (int *****)(param_1[0x4d] + 0x134);
        piVar3 = *(int **)(param_1[0x4d] + 0x144);
        ppppppiVar24 = (int ******)0x0;
        piVar27 = (int *)*piVar3;
        ppppppiVar25 = (int ******)0x0;
        ppppppiVar22 = ppppppiVar15;
        if (piVar27 != piVar3) {
          do {
            uVar1 = (undefined1)piVar27[2];
            uVar2 = FUN_000395a0(uVar1);
            local_180._0_2_ = CONCAT11(uVar2,uVar1);
            if (ppppppiVar15 == ppppppiVar25) {
              uVar14 = (int)ppppppiVar15 - (int)ppppppiVar24 >> 1;
              if (uVar14 < (uint)((int)ppppppiVar25 - (int)ppppppiVar24 >> 1)) {
                ppppppiVar22 = (int ******)((int)ppppppiVar15 + 2);
                if (ppppppiVar15 != (int ******)0x0) {
                  *(undefined1 *)ppppppiVar15 = *(undefined1 *)((int)ppppppiVar15 + -2);
                  *(undefined1 *)((int)ppppppiVar15 + 1) = *(undefined1 *)((int)ppppppiVar15 + -1);
                }
                iVar23 = ((int)ppppppiVar15 + -2) - (int)ppppppiVar15 >> 1;
                iVar4 = 1;
                if (1 < iVar23 + 1) {
                  ppppppiVar16 = ppppppiVar15;
                  puVar8 = (undefined1 *)((int)ppppppiVar15 + -2);
                  do {
                    iVar4 = iVar4 + 1;
                    *(undefined1 *)((int)ppppppiVar16 + -2) = puVar8[-2];
                    *(undefined1 *)((int)ppppppiVar16 + -1) = puVar8[-1];
                    ppppppiVar16 = (int ******)((int)ppppppiVar16 + -2);
                    puVar8 = puVar8 + -2;
                  } while (iVar4 < iVar23 + 1);
                }
                *(undefined1 *)ppppppiVar15 = uVar1;
                *(undefined1 *)((int)ppppppiVar15 + 1) = uVar2;
              }
              else {
                local_a8 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
                if (local_a8 < uVar14 + 1) {
                  local_a8 = uVar14 + 1;
                }
                local_184 = (int ******)FUN_0010f82c(local_a8 << 1,0);
                ppppppiVar22 = local_184;
                for (ppppppiVar16 = ppppppiVar24; ppppppiVar16 != ppppppiVar15;
                    ppppppiVar16 = (int ******)((int)ppppppiVar16 + 2)) {
                  if (ppppppiVar22 != (int ******)0x0) {
                    *(undefined1 *)ppppppiVar22 = *(undefined1 *)ppppppiVar16;
                    *(undefined1 *)((int)ppppppiVar22 + 1) = *(undefined1 *)((int)ppppppiVar16 + 1);
                  }
                  ppppppiVar22 = (int ******)((int)ppppppiVar22 + 2);
                }
                puVar8 = (undefined1 *)
                         ((int)local_184 + ((int)ppppppiVar15 - (int)ppppppiVar24 & 0xfffffffeU));
                if (puVar8 != (undefined1 *)0x0) {
                  *puVar8 = (undefined1)local_180;
                  puVar8[1] = local_180._1_1_;
                }
                FUN_0010fa20(ppppppiVar24,(int)ppppppiVar25 - (int)ppppppiVar24 >> 1,0);
                ppppppiVar22 = (int ******)
                               ((int)local_184 +
                               ((int)ppppppiVar15 - (int)ppppppiVar24 >> 1) * 2 + 2);
                ppppppiVar25 = (int ******)((int)local_184 + local_a8 * 2);
                ppppppiVar24 = local_184;
              }
            }
            else {
              ppppppiVar22 = (int ******)((int)ppppppiVar15 + 2);
              if (ppppppiVar15 != (int ******)0x0) {
                *(undefined1 *)ppppppiVar15 = uVar1;
                *(undefined1 *)((int)ppppppiVar15 + 1) = uVar2;
              }
            }
            piVar27 = (int *)*piVar27;
            ppppppiVar15 = ppppppiVar22;
          } while (piVar27 != (int *)*(int *)((int)local_a4 + 0x10));
        }
        local_188 = local_9c;
        local_ac = local_98;
        local_88 = uVar26 & 0xff;
        local_a8 = (uint)local_18c & 0xffff;
        local_a4 = (int *****)((uint)local_a0 & 0xffff);
        local_184 = (int ******)(s__RTP_Decoder_000a261b + 1);
        ppppppiVar15 = (int ******)FUN_000034d0();
        local_80 = local_6c;
        if (ppppppiVar15 != (int ******)0x0) {
          pppppppiVar13 = &local_98;
          if ((int ******)0x80 < ppppppiVar15) {
            pppppppiVar13 = &local_9c;
          }
          local_9c = ppppppiVar15;
          local_98 = (int ******)0x80;
          iVar23 = FUN_001da28c(&local_80,*pppppppiVar13,ppppppiVar15);
          local_80 = (int ******)(iVar23 + 0xc);
        }
        FUN_00003628(local_80,local_184,ppppppiVar15);
        local_9c = (int ******)&local_178;
        local_a0 = (int ******)&local_80;
        FUN_00159fa0(auStack_78,param_1[0x4d]);
        local_98 = (int ******)param_1[0x165];
        local_94 = (uint)*(byte *)(param_1 + 0x66);
        local_170 = (uint)*(byte *)((int)param_1 + 0x19a);
        local_7c = auStack_78;
        local_174 = (int *******)(**(code **)(*param_1 + 0xd8))(param_1);
        local_90 = (**(code **)(*param_1 + 0xdc))(param_1);
        local_8c = DAT_000a2628;
        local_74 = param_1 + 0x4c;
        local_160 = (undefined1 *)0x0;
        local_18c = (int ****)DAT_000a262c;
        local_168 = (int ****)DAT_000a262c;
        local_15c = (undefined1 *)0x0;
        local_158 = (undefined1 *)0x0;
        local_164._0_3_ = CONCAT12((char)local_88,0x200);
        local_164 = CONCAT13(local_164._3_1_,(undefined3)local_164);
        local_88 = (int)ppppppiVar22 - (int)ppppppiVar24 >> 1;
        local_38[0] = 1;
        puVar7 = local_38;
        if (local_88 != 0) {
          puVar7 = &local_88;
        }
        uVar14 = *puVar7;
        local_160 = (undefined1 *)FUN_0010f82c(uVar14 << 1,0);
        puVar8 = local_160;
        for (ppppppiVar15 = ppppppiVar24; ppppppiVar15 != ppppppiVar22;
            ppppppiVar15 = (int ******)((int)ppppppiVar15 + 2)) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = *(undefined1 *)ppppppiVar15;
            puVar8[1] = *(undefined1 *)((int)ppppppiVar15 + 1);
          }
          puVar8 = puVar8 + 2;
        }
        local_15c = local_160 + ((int)ppppppiVar22 - (int)ppppppiVar24 >> 1) * 2;
        local_158 = local_160 + uVar14 * 2;
        local_154 = (undefined2)local_a8;
        local_152 = SUB42(local_a4,0);
        local_150 = local_188;
        local_148 = SUB42(local_ac,0);
        iVar23 = FUN_001da408(&local_144,local_a0);
        iVar23 = FUN_001da408(iVar23 + 4,local_9c);
        iVar23 = FUN_001da408(iVar23 + 4,local_7c);
        *(int *******)(iVar23 + 4) = local_98;
        *(char *)(iVar23 + 8) = (char)local_94;
        *(char *)(iVar23 + 9) = (char)local_170;
        *(char *)(iVar23 + 10) = (char)local_174;
        *(char *)(iVar23 + 0xb) = (char)local_90;
        *(undefined4 *)(iVar23 + 0xc) = local_8c;
        *(undefined4 *)(iVar23 + 0x10) = 0;
        *(undefined4 *)(iVar23 + 0x14) = 0;
        *(undefined4 *)(iVar23 + 0x18) = 0;
        *(int **)(iVar23 + 0x1c) = local_74;
        *(int *****)(iVar23 + -0x10) = local_16c;
        if (*(int *)(iVar23 + -0x20) - *(int *)(iVar23 + -0x24) >> 1 != 0) {
          *(undefined1 *)(iVar23 + -0x28) = 1;
        }
        FUN_001da314(auStack_78);
        FUN_001da314(&local_80);
        FUN_0006c3f8(&local_12c,*(uint *)(local_2c + 8) & 0xff,local_54[0] & 0xff);
        local_110 = (int *****)0x0;
        local_118 = (undefined1)local_164;
        local_10c = (undefined1 *)0x0;
        local_117 = local_164._1_1_;
        local_116 = local_164._2_1_;
        local_11c = local_18c;
        local_114 = (int *****)0x0;
        iVar23 = (int)local_15c - (int)local_160 >> 1;
        if (iVar23 == 0) {
          iVar23 = 1;
        }
        local_114 = (int *****)FUN_0010f82c(iVar23 << 1,0);
        ppppppiVar15 = (int ******)local_114;
        for (puVar8 = local_160; puVar8 != local_15c; puVar8 = puVar8 + 2) {
          if (ppppppiVar15 != (int ******)0x0) {
            *(undefined1 *)ppppppiVar15 = *puVar8;
            *(undefined1 *)((int)ppppppiVar15 + 1) = puVar8[1];
          }
          ppppppiVar15 = (int ******)((int)ppppppiVar15 + 2);
        }
        local_10c = (undefined1 *)((int)local_114 + iVar23 * 2);
        local_110 = (int *****)((int)local_114 + ((int)local_15c - (int)local_160 & 0xfffffffeU));
        local_108 = local_154;
        local_106 = local_152;
        local_104 = local_150;
        local_fc = local_148;
        if (*(int *)(local_144 + -0xc) == -1) {
          uVar11 = *(undefined4 *)(local_144 + -4);
          local_f8 = FUN_001da28c(&local_f8,uVar11,uVar11);
          local_f8 = local_f8 + 0xc;
          FUN_00003628(local_f8,local_144,uVar11);
        }
        else {
          pppppiVar9 = (int *****)(local_144 + -0xc);
          local_f8 = local_144;
          if (pppppiVar9 != DAT_000a260c) {
            *pppppiVar9 = (int ****)((int)*pppppiVar9 + 1);
          }
        }
        if (*(int *)(local_140 + -0xc) == -1) {
          uVar11 = *(undefined4 *)(local_140 + -4);
          local_f4 = FUN_001da28c(&local_f4,uVar11,uVar11);
          local_f4 = local_f4 + 0xc;
          FUN_00003628(local_f4,local_140,uVar11);
        }
        else {
          pppppiVar9 = (int *****)(local_140 + -0xc);
          local_f4 = local_140;
          if (pppppiVar9 != DAT_000a260c) {
            *pppppiVar9 = (int ****)((int)*pppppiVar9 + 1);
          }
        }
        if (*(int *)(local_13c + -0xc) == -1) {
          uVar11 = *(undefined4 *)(local_13c + -4);
          local_f0 = FUN_001da28c(&local_f0,uVar11,uVar11);
          local_f0 = local_f0 + 0xc;
          FUN_00003628(local_f0,local_13c,uVar11);
        }
        else {
          pppppiVar9 = (int *****)(local_13c + -0xc);
          local_f0 = local_13c;
          if (pppppiVar9 != DAT_000a260c) {
            *pppppiVar9 = (int ****)((int)*pppppiVar9 + 1);
          }
        }
        local_ec = local_138;
        local_e8 = local_134;
        local_e7 = local_133;
        local_e6 = local_132;
        local_e5 = local_131;
        local_e4 = local_130;
        local_e0 = (undefined1 *)0x0;
        local_dc = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        iVar23 = (int)local_128 - (int)local_12c >> 1;
        iVar4 = 1;
        if (iVar23 != 0) {
          iVar4 = iVar23;
        }
        local_e0 = (undefined1 *)FUN_0010f82c(iVar4 << 1,0);
        puVar8 = local_e0;
        for (puVar17 = local_12c; puVar17 != local_128; puVar17 = puVar17 + 2) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = *puVar17;
            puVar8[1] = puVar17[1];
          }
          puVar8 = puVar8 + 2;
        }
        local_d8 = local_e0 + iVar4 * 2;
        local_dc = local_e0 + ((int)local_128 - (int)local_12c & 0xfffffffe);
        local_d4 = local_120;
        local_100 = local_14c;
        local_d0 = (undefined4 *)0x0;
        local_c0 = (int ******)0x0;
        local_bc = 0;
        local_b8 = 0;
        local_c4 = (int ******)0x0;
        local_c8 = (int ******)0x0;
        local_cc = (int ******)0x0;
        local_184 = (int ******)0x1;
        puVar10 = (undefined4 *)FUN_0010f82c(0xc,0);
        uVar11 = FUN_0010f82c(0x14,0);
        puVar10[2] = uVar11;
        *puVar10 = local_d0;
        puVar10[1] = local_184;
        local_c0 = (int ******)puVar10[2];
        local_c4 = local_c0 + 5;
        local_c8 = local_c0 + 5;
        local_c0[2] = (int *****)0x0;
        local_c0[3] = (int *****)0x0;
        *(undefined1 *)local_c0 = 0;
        local_c0[1] = (int *****)0x0;
        local_c0[2] = (int *****)local_c0;
        local_c0[3] = (int *****)local_c0;
        local_b4 = 0;
        local_d0 = puVar10;
        FUN_001d1308(auStack_40,&local_d0,local_54);
        piVar3 = param_1 + 0x5c;
        local_188 = (int ******)param_1[0x60];
        ppppppiVar15 = (int ******)param_1[0x5d];
        if (ppppppiVar15 == (int ******)0x0) {
          ppppppiVar15 = (int ******)param_1[0x5e];
          if (ppppppiVar15 == (int ******)param_1[0x5f]) {
            uVar14 = 1;
            if (*piVar3 != 0) {
              uVar12 = *(uint *)(*piVar3 + 4);
              uVar14 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
              if (uVar14 < uVar12 + 1) {
                uVar14 = uVar12 + 1;
              }
            }
            piVar27 = (int *)FUN_0010f82c(0xc,0);
            iVar23 = FUN_0010f82c(uVar14 * 0x74,0);
            piVar27[2] = iVar23;
            *piVar27 = *piVar3;
            piVar27[1] = uVar14;
            *piVar3 = (int)piVar27;
            ppppppiVar15 = (int ******)piVar27[2];
            param_1[0x5e] = (int)ppppppiVar15;
            param_1[0x5f] = (int)(ppppppiVar15 + uVar14 * 0x1d);
          }
          param_1[0x5e] = (int)(ppppppiVar15 + 0x1d);
        }
        else {
          param_1[0x5d] = (int)*ppppppiVar15;
        }
        ppppppiVar16 = ppppppiVar15 + 2;
        local_184 = ppppppiVar15;
        if (ppppppiVar16 != (int ******)0x0) {
          local_a4 = &local_11c;
          *ppppppiVar16 = (int *****)local_b0;
          *(undefined1 *)(ppppppiVar15 + 3) = local_118;
          *ppppppiVar16 = (int *****)local_84;
          *(undefined1 *)((int)ppppppiVar15 + 0xd) = local_117;
          *ppppppiVar16 = (int *****)local_18c;
          *(undefined1 *)((int)ppppppiVar15 + 0xe) = local_116;
          local_a0 = &local_114;
          ppppppiVar16 = ppppppiVar15 + 4;
          *ppppppiVar16 = (int *****)0x0;
          ppppppiVar15[5] = (int *****)0x0;
          ppppppiVar15[6] = (int *****)0x0;
          local_180 = (int ******)((int)local_110 - (int)local_114 >> 1);
          pppppppiVar13 = (int *******)&local_180;
          if (local_180 == (int ******)0x0) {
            pppppppiVar13 = &local_9c;
          }
          local_9c = (int ******)0x1;
          local_b0 = *pppppppiVar13;
          pppppiVar9 = (int *****)FUN_0010f82c((int)local_b0 << 1,0);
          *ppppppiVar16 = pppppiVar9;
          for (ppppppiVar18 = (int ******)local_114; ppppppiVar18 != (int ******)local_110;
              ppppppiVar18 = (int ******)((int)ppppppiVar18 + 2)) {
            if (pppppiVar9 != (int *****)0x0) {
              *(undefined1 *)pppppiVar9 = *(undefined1 *)ppppppiVar18;
              *(undefined1 *)((int)pppppiVar9 + 1) = *(undefined1 *)((int)ppppppiVar18 + 1);
            }
            pppppiVar9 = (int *****)((int)pppppiVar9 + 2);
          }
          ppppppiVar18 = (int ******)local_a0[1];
          ppppppiVar19 = (int ******)*local_a0;
          ppppppiVar15[6] = (int *****)((int)*ppppppiVar16 + (int)local_b0 * 2);
          ppppppiVar15[5] =
               (int *****)((int)*ppppppiVar16 + ((int)ppppppiVar18 - (int)ppppppiVar19 >> 1) * 2);
          *(undefined2 *)(ppppppiVar15 + 7) = local_108;
          *(undefined2 *)((int)ppppppiVar15 + 0x1e) = local_106;
          ppppppiVar15[8] = (int *****)local_104;
          *(undefined2 *)(ppppppiVar15 + 10) = local_fc;
          iVar23 = FUN_001da408(ppppppiVar15 + 0xb,&local_f8);
          iVar23 = FUN_001da408(iVar23 + 4,&local_f4);
          iVar23 = FUN_001da408(iVar23 + 4,&local_f0);
          *(undefined4 *)(iVar23 + 4) = local_ec;
          *(undefined1 *)(iVar23 + 8) = local_e8;
          *(undefined1 *)(iVar23 + 9) = local_e7;
          *(undefined1 *)(iVar23 + 10) = local_e6;
          *(undefined1 *)(iVar23 + 0xb) = local_e5;
          *(undefined4 *)(iVar23 + 0xc) = local_e4;
          piVar3 = (int *)(iVar23 + 0x10);
          *piVar3 = 0;
          *(undefined4 *)(iVar23 + 0x14) = 0;
          *(undefined4 *)(iVar23 + 0x18) = 0;
          local_16c = (int ****)((int)local_dc - (int)local_e0 >> 1);
          local_b0 = (int ******)0x1;
          local_174 = (int *******)&local_16c;
          if ((int ******)local_16c == (int ******)0x0) {
            local_174 = &local_b0;
          }
          local_174 = (int *******)*local_174;
          puVar8 = (undefined1 *)FUN_0010f82c((int)local_174 << 1,0);
          *piVar3 = (int)puVar8;
          for (puVar17 = local_e0; puVar17 != local_dc; puVar17 = puVar17 + 2) {
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = *puVar17;
              puVar8[1] = puVar17[1];
            }
            puVar8 = puVar8 + 2;
          }
          *(int *)(iVar23 + 0x18) = *piVar3 + (int)local_174 * 2;
          *(uint *)(iVar23 + 0x14) = ((int)local_dc - (int)local_e0 & 0xfffffffeU) + *piVar3;
          *(undefined4 *)(iVar23 + 0x1c) = local_d4;
          *(undefined4 *)(iVar23 + -0x10) = local_100;
          iVar23 = FUN_001dbffc(iVar23 + 0x20,local_a4 + 0x13);
          *(undefined1 *)(iVar23 + 0x1c) = *(undefined1 *)(local_a4 + 0x1a);
        }
        *local_184 = (int *****)local_188;
        local_184[1] = local_188[1];
        *local_188[1] = (int ****)local_184;
        local_188[1] = (int *****)local_184;
        param_1[0x61] = param_1[0x61] + 1;
        FUN_00154f7c(local_2c,0);
        (**(code **)(*param_1 + 0xcc))(param_1,&local_168);
        local_64 = 0;
        local_68 = local_58;
        local_5c = local_6c;
        local_60 = uVar26;
        iVar23 = (**(code **)(*param_1 + 0xd0))(param_1,&local_68);
        if (iVar23 != 0) {
          FUN_00155038(local_2c,local_5c);
        }
        local_68 = local_58;
        FUN_001da314(&local_5c);
        if (local_c0 != (int ******)0x0) {
          local_180 = local_c0;
          local_184 = (int ******)local_c0[2];
          FUN_001d0bd8(&local_170,&local_d0,&local_184,&local_180);
          local_c0[3] = (int *****)local_cc;
          local_cc = local_c0;
          piVar3 = local_d0;
          while (local_d0 = piVar3, piVar3 != (int *)0x0) {
            local_d0 = (undefined4 *)*piVar3;
            FUN_0010fa20(piVar3[2],piVar3[1],0);
            FUN_0010fa20(piVar3,1,0);
            piVar3 = local_d0;
          }
        }
        local_11c = local_18c;
        FUN_0010fa20(local_e0,(int)local_d8 - (int)local_e0 >> 1,0);
        FUN_001da314(&local_f0);
        FUN_001da314(&local_f4);
        FUN_001da314(&local_f8);
        FUN_0010fa20(local_114,(int)local_10c - (int)local_114 >> 1,0);
        local_168 = local_18c;
        FUN_0010fa20(local_12c,local_124 - (int)local_12c >> 1,0);
        FUN_001da314(&local_13c);
        FUN_001da314(&local_140);
        FUN_001da314(&local_144);
        FUN_0010fa20(local_160,(int)local_158 - (int)local_160 >> 1,0);
        for (ppppppiVar15 = ppppppiVar24; ppppppiVar15 != ppppppiVar22;
            ppppppiVar15 = (int ******)((int)ppppppiVar15 + 2)) {
        }
        FUN_0010fa20(ppppppiVar24,(int)ppppppiVar25 - (int)ppppppiVar24 >> 1,0);
        if (local_178 != local_6c) {
          pppppppiVar13 = (int *******)(local_178 + -3);
          ppppppiVar15 = *pppppppiVar13;
          if (ppppppiVar15 != (int ******)0xffffffff) {
            if (pppppppiVar13 == (int *******)DAT_000a260c) {
              return;
            }
            *pppppppiVar13 = (int ******)((int)ppppppiVar15 + -1);
            if (ppppppiVar15 != (int ******)0x0) {
              return;
            }
          }
          FUN_0010fa20(local_178 + -3,(int)local_178[-2] + 0xe,0);
          return;
        }
        return;
      }
    }
  }
LAB_000a1dfc:
  FUN_000028a4(uVar11);
  return;
}

