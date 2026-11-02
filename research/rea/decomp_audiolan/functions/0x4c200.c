// rea decompile_all
// name: FUN_0004c200
// address: 0x4c200
// body: available
// range: 0x4c200-0x4c57b inclusive
// range: 0x4c60c-0x4cac3 inclusive
// range: 0x4cb04-0x4cdb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0004c6fc) */
/* WARNING: Removing unreachable block (ram,0x0004c620) */
/* WARNING: Removing unreachable block (ram,0x0004c830) */
/* WARNING: Removing unreachable block (ram,0x0004c56c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004c200(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 **ppuVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  undefined1 ***pppuVar17;
  int *piVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  uint extraout_r12;
  uint extraout_r12_00;
  int *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  int *local_a0;
  int local_9c;
  undefined1 **local_98;
  undefined1 auStack_94 [4];
  undefined1 **local_90;
  undefined1 ***local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  uint local_80;
  undefined *local_7c;
  undefined1 *local_78;
  uint local_70;
  undefined1 *local_6c [2];
  undefined4 local_64;
  undefined1 auStack_60 [16];
  int *local_50;
  undefined4 local_48 [2];
  int local_40;
  int local_3c;
  int local_38;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar2 = FUN_0004dc9c();
  if (iVar2 == 0) {
    FUN_000151c4(s_I_________ERROR__No_valid_factor_0004c57e + 10);
    return 0;
  }
  iVar2 = 0;
  local_84 = _DAT_0004c57c;
  local_88 = _DAT_0004c57c;
  local_6c[0] = _DAT_0004c57c;
  iVar15 = 0;
  uVar21 = *(uint *)s_I_________ERROR__No_valid_factor_0004c57e._2_4_;
  bVar1 = true;
  local_40 = 1;
  local_70 = *(uint *)s_I_________ERROR__No_valid_factor_0004c57e._6_4_;
  iVar4 = 0;
  local_80 = uVar21;
  while( true ) {
    iVar3 = FUN_0004b968(param_1,iVar4);
    if (iVar3 == 0) break;
    FUN_0004b8f0(param_1,iVar3);
    iVar4 = iVar4 + 1;
  }
  FUN_0004b9ac(param_1,s_I_________ERROR__No_valid_factor_0004c57e + 0x36);
  local_3c = param_1 + 0x1061;
  local_38 = param_1 + 0x1000;
  while (iVar4 = FUN_0018a0b4(0,uVar21,param_1 + iVar15 + 0x1061,0x800 - iVar15), iVar4 == 0) {
    uVar10 = 0;
    if (uVar21 == local_80) {
      iVar4 = FUN_00003960(local_3c,_DAT_0004c5d4);
      if (iVar4 != 0) {
        FUN_000151c4(s___ERROR__No_factory_configuratio_0004c5d6 + 2);
        goto LAB_0004c920;
      }
      uVar10 = 0x1b;
    }
    uVar21 = uVar21 + (0x800 - iVar15);
joined_r0x0004c318:
    uVar11 = uVar10;
    if (!bVar1) goto LAB_0004c914;
    for (; uVar11 < 0x800; uVar11 = uVar11 + 1) {
      if (*(char *)(param_1 + uVar11 + 0x1061) == '\0') goto LAB_0004c350;
    }
    if (uVar11 != 0x800) {
LAB_0004c350:
      iVar4 = param_1 + uVar10;
      if (*(char *)(DAT_0004c600 + iVar4) == '[') {
        iVar15 = FUN_00003960(iVar4 + 0x1061,DAT_0004c608);
        if (iVar15 != 0) {
          if (iVar2 != 0) {
            local_98 = &local_88;
            local_90 = *(undefined1 ***)(local_88 + -4);
            uVar6 = FUN_000034d0(&DAT_0004c604);
            FUN_001da110(local_98,local_90,0,&DAT_0004c604,uVar6,0,uVar6);
          }
          local_90 = &local_88;
          uVar23 = *(undefined4 *)(local_88 + -4);
          uVar6 = FUN_000034d0(iVar4 + 0x1062);
          FUN_001da110(local_90,uVar23,0,iVar4 + 0x1062,uVar6,0,uVar6);
          iVar2 = iVar2 + 1;
          FUN_0004b224(param_1,local_88,s_I_________ERROR__No_valid_factor_0004c57e + 0x36);
          goto LAB_0004c858;
        }
        goto LAB_0004c93c;
      }
      if (*(char *)(DAT_0004c600 + iVar4) != ']') {
        if (*(int *)(local_6c[0] + -4) == 0) {
          pppuVar17 = (undefined1 ***)(iVar4 + 0x1061);
          ppuVar9 = local_6c;
          iVar4 = FUN_000034d0(pppuVar17);
          if (iVar4 != 0) {
            uVar6 = *(undefined4 *)(local_6c[0] + -4);
            goto LAB_0004c780;
          }
          iVar4 = *(int *)(local_6c[0] + -0xc);
          piVar18 = (int *)(local_6c[0] + -0xc);
          if (iVar4 == 0) {
            *(undefined4 *)(local_6c[0] + -4) = 0;
            *local_6c[0] = 0;
          }
          else {
            if (local_6c[0] != local_84) {
              if (iVar4 == -1) {
                FUN_0010fa20(piVar18,*(int *)(local_6c[0] + -8) + 0xe,0);
              }
              else if (piVar18 != DAT_0004caf8) {
                *piVar18 = iVar4 + -1;
              }
            }
            local_6c[0] = local_84;
          }
        }
        else {
          FUN_001da408(&local_98,&local_88);
          local_8c = &local_98;
          local_7c = &DAT_0004c604;
          puVar22 = local_98[-1];
          uVar6 = FUN_000034d0(&DAT_0004c604);
          FUN_001da110(local_8c,puVar22,0,local_7c,uVar6,0,uVar6);
          puVar22 = local_98[-1];
          local_78 = local_6c[0];
          iVar15 = *(int *)(local_6c[0] + -4);
          if ((local_98[-2] < puVar22 + iVar15) || ((undefined1 *)0x1 < local_98[-3] + 1)) {
            local_7c = (undefined *)0x0;
            local_8c = &local_98;
            if ((undefined1 *)(-iVar15 - 0xfU) < puVar22) {
              FUN_0010f7cc(8,s_I_________ERROR__No_valid_factor_0004c57e + 0x36,
                           s_I_________ERROR__No_valid_factor_0004c57e + 0x36,puVar22,
                           (undefined1 *)(-iVar15 - 0xfU));
            }
            FUN_001da110(local_8c,local_98[-1],0,local_6c[0],*(undefined4 *)(local_6c[0] + -4),
                         local_7c,iVar15);
          }
          else {
            FUN_00003628((undefined1 *)((int)local_98 + (int)puVar22),local_6c[0],iVar15 + 1);
            local_98[-1] = puVar22 + iVar15;
          }
          FUN_0004b224(param_1,local_98,iVar4 + 0x1061);
          local_8c = (undefined1 ***)((uint)local_8c & 0xffffff00);
          FUN_001da110(local_6c,0,*(undefined4 *)(local_6c[0] + -4),&local_8c,0,0,0);
          FUN_001da44c(&local_98);
        }
        goto LAB_0004c858;
      }
      if (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          uVar6 = *(undefined4 *)(local_88 + -4);
          local_90 = (undefined1 **)((uint)local_90 & 0xffffff00);
          ppuVar9 = &local_88;
          pppuVar17 = &local_90;
          iVar4 = 0;
LAB_0004c780:
          FUN_001da110(ppuVar9,0,uVar6,pppuVar17,iVar4,0,iVar4);
          goto LAB_0004c858;
        }
        uVar7 = FUN_000034d0();
        uVar10 = extraout_r12;
        if (0xfffffff1 < uVar7) {
          FUN_0010f7cc(8,s_I_________ERROR__No_valid_factor_0004c57e + 0x36,
                       s_I_________ERROR__No_valid_factor_0004c57e + 0x36,uVar7,0xfffffff1);
          uVar10 = extraout_r12_00;
        }
        local_8c = *(undefined1 ****)(local_88 + -4);
        for (pppuVar17 = local_8c; pppuVar17 != (undefined1 ***)0x0;
            pppuVar17 = (undefined1 ***)((int)pppuVar17 - 1)) {
          if (uVar7 != 0) {
            uVar8 = uVar7 & 1;
            if (uVar8 != 0) {
              uVar10 = (uint)(byte)local_88[(int)pppuVar17 - 1];
            }
            uVar14 = 0;
            if (uVar8 != 0) {
              do {
                if (uVar10 == (byte)(&DAT_0004c604)[uVar14]) goto LAB_0004c6a4;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar8);
            }
            if (uVar8 < uVar7) {
              do {
                if (((uint)(byte)local_88[(int)pppuVar17 - 1] == (uint)(byte)(&DAT_0004c604)[uVar8])
                   || (uVar10 = (uint)*(byte *)(uVar8 + 0x4c605),
                      (byte)local_88[(int)pppuVar17 - 1] == uVar10)) goto LAB_0004c6a4;
                uVar8 = uVar8 + 2;
              } while (uVar8 < uVar7);
            }
          }
        }
        goto LAB_0004c72c;
      }
      pcVar5 = s_ERROR__Invalid_level_0004cae0;
      goto LAB_0004c740;
    }
    if (!bVar1) goto LAB_0004c914;
    iVar15 = 0;
    if (uVar10 < 0x800) {
      uVar11 = 0x800 - uVar10;
      if (0 < (int)uVar11) {
        uVar7 = uVar11 & 1;
        if (uVar7 == 1) {
          *(undefined1 *)(local_38 + 0x61) = *(undefined1 *)(uVar10 + param_1 + 0x1061);
        }
        uVar8 = (uint)(uVar7 == 1);
        for (; uVar7 < uVar11; uVar7 = uVar7 + 2) {
          iVar4 = uVar8 + 1;
          *(undefined1 *)(param_1 + uVar8 + 0x1061) =
               *(undefined1 *)(uVar10 + uVar8 + param_1 + 0x1061);
          uVar8 = uVar8 + 2;
          *(undefined1 *)(DAT_0004c600 + param_1 + iVar4) =
               *(undefined1 *)(DAT_0004c600 + uVar10 + iVar4 + param_1);
        }
      }
      iVar15 = 0x800 - uVar10;
    }
    if (local_70 <= uVar21) goto LAB_0004c914;
  }
  pcVar5 = s_ERROR__flashRead_failed_0004c5b8;
LAB_0004c740:
  FUN_000151c4(pcVar5);
LAB_0004c914:
  if (local_40 != 0) {
LAB_0004c920:
    FUN_001da44c(local_6c);
    FUN_001da44c(&local_88);
    return 0;
  }
LAB_0004c93c:
  FUN_001dc9f4(&local_b0,auStack_30);
  FUN_001dc9f4(auStack_60,auStack_2c);
  cVar19 = '\0';
  cVar20 = '\0';
  FUN_0004c028(param_1,0,&local_b0,&local_64);
  FUN_0004c028(param_1,1,auStack_60,local_48);
  piVar18 = (int *)*local_a0;
  if ((piVar18 != local_a0) && (*(char *)(piVar18[2] + 0xc) == 'I')) {
    piVar16 = (int *)(piVar18[2] + 4);
    uVar21 = *(uint *)(*piVar16 + -4);
    uVar10 = FUN_000034d0();
    iVar2 = *piVar16;
    uVar11 = *(uint *)(iVar2 + -4);
    if (uVar11 < uVar21) {
      uVar21 = uVar11;
    }
    uVar11 = uVar21;
    if (uVar10 <= uVar21) {
      uVar11 = uVar10;
    }
    iVar2 = FUN_0000339c(iVar2,s_USER_0_0004cafc,uVar11);
    if ((iVar2 == 0 && uVar21 == uVar10) && (*(int *)(*(char **)(piVar18[2] + 8) + -4) != 0)) {
      cVar20 = **(char **)(piVar18[2] + 8);
    }
  }
  piVar18 = (int *)*local_50;
  if ((piVar18 != local_50) && (*(char *)(piVar18[2] + 0xc) == 'I')) {
    piVar16 = (int *)(piVar18[2] + 4);
    uVar21 = *(uint *)(*piVar16 + -4);
    uVar10 = FUN_000034d0();
    iVar2 = *piVar16;
    uVar11 = *(uint *)(iVar2 + -4);
    if (uVar11 < uVar21) {
      uVar21 = uVar11;
    }
    uVar11 = uVar21;
    if (uVar10 <= uVar21) {
      uVar11 = uVar10;
    }
    iVar2 = FUN_0000339c(iVar2,s_USER_0_0004cafc,uVar11);
    if ((iVar2 == 0 && uVar21 == uVar10) && (*(int *)(*(char **)(piVar18[2] + 8) + -4) != 0)) {
      cVar19 = **(char **)(piVar18[2] + 8);
    }
  }
  if (cVar20 == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 1;
    if (cVar19 == '\0') {
      FUN_0004cdc4(&local_b0);
      puVar12 = (undefined4 *)FUN_001a0808(0x10,1);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = DAT_0004cdb8;
        iVar2 = FUN_001da358(puVar12 + 1,s_USER_0_0004cafc,&local_98);
        iVar2 = FUN_001da358(iVar2 + 4,&DAT_0004cdb4,auStack_94);
        puVar12 = (undefined4 *)(iVar2 + -8);
        *(undefined1 *)(iVar2 + 4) = 0x49;
        *puVar12 = DAT_0004cdbc;
      }
      if (local_ac == (undefined4 *)0x0) {
        if (local_a8 == local_a4) {
          uVar21 = 1;
          if (local_b0 != (int *)0x0) {
            uVar10 = local_b0[1];
            uVar21 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
            if (uVar21 < uVar10 + 1) {
              uVar21 = uVar10 + 1;
            }
          }
          piVar18 = (int *)FUN_0010f82c(0xc,0);
          iVar2 = FUN_0010f82c(uVar21 * 0xc,0);
          piVar18[2] = iVar2;
          *piVar18 = (int)local_b0;
          piVar18[1] = uVar21;
          local_a8 = (undefined4 *)piVar18[2];
          local_a4 = local_a8 + uVar21 * 3;
          local_b0 = piVar18;
        }
        puVar13 = local_a8;
        local_a8 = local_a8 + 3;
      }
      else {
        puVar13 = local_ac;
        local_ac = (undefined4 *)*local_ac;
      }
      if (puVar13 + 2 != (undefined4 *)0x0) {
        puVar13[2] = puVar12;
      }
      *puVar13 = local_a0;
      puVar13[1] = local_a0[1];
      *(undefined4 **)local_a0[1] = puVar13;
      local_a0[1] = (int)puVar13;
      local_9c = local_9c + 1;
      FUN_0004de94(param_1,&local_b0);
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = local_48[0];
      piVar18 = (int *)*local_50;
      if (piVar18 != local_50) {
        do {
          (**(code **)(*(int *)piVar18[2] + 0xc))((int *)piVar18[2],param_1);
          piVar18 = (int *)*piVar18;
        } while (piVar18 != local_50);
      }
    }
    goto LAB_0004cd78;
  }
  if (cVar19 == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = local_64;
    piVar18 = (int *)*local_a0;
    if (piVar18 != local_a0) {
      do {
        (**(code **)(*(int *)piVar18[2] + 0xc))((int *)piVar18[2],param_1);
        piVar18 = (int *)*piVar18;
      } while (piVar18 != local_a0);
    }
    goto LAB_0004cd78;
  }
  if (cVar20 == 'A') {
    if (cVar19 != 'C') goto LAB_0004cb50;
  }
  else if (cVar20 == 'B') {
    if (cVar19 != 'A') goto LAB_0004cb50;
  }
  else if (cVar20 == 'C') {
    if (cVar19 != 'B') goto LAB_0004cb50;
  }
  else if ((cVar19 != 'A' && cVar19 != 'B') && cVar19 != 'C') {
LAB_0004cb50:
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = local_64;
    piVar18 = (int *)*local_a0;
    if (piVar18 != local_a0) {
      do {
        (**(code **)(*(int *)piVar18[2] + 0xc))((int *)piVar18[2],param_1);
        piVar18 = (int *)*piVar18;
      } while (piVar18 != local_a0);
    }
    goto LAB_0004cd78;
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x50) = local_48[0];
  piVar18 = (int *)*local_50;
  if (piVar18 != local_50) {
    do {
      (**(code **)(*(int *)piVar18[2] + 0xc))((int *)piVar18[2],param_1);
      piVar18 = (int *)*piVar18;
    } while (piVar18 != local_50);
  }
LAB_0004cd78:
  FUN_0004cdc4(&local_b0);
  FUN_0004cdc4(auStack_60);
  FUN_001dca74(auStack_60);
  FUN_001dca74(&local_b0);
  FUN_001da44c(local_6c);
  FUN_001da44c(&local_88);
  return 1;
LAB_0004c6a4:
  pppuVar17 = (undefined1 ***)((int)pppuVar17 - 1);
  if (pppuVar17 == (undefined1 ***)0xffffffff) {
LAB_0004c72c:
    FUN_000151c4(s___ERROR__Invalid_path_0004cac6 + 2);
    bVar1 = false;
  }
  else {
    local_98 = &local_88;
    if (local_8c < pppuVar17) {
      FUN_0010f7cc(9,_DAT_0004cac4,_DAT_0004cac4,pppuVar17,local_8c);
    }
    local_7c = (undefined *)((uint)local_7c & 0xffffff00);
    FUN_001da110(local_98,pppuVar17,*(int *)(local_88 + -4) - (int)pppuVar17,&local_7c,0,0,0);
  }
LAB_0004c858:
  uVar10 = uVar11 + 1;
  goto joined_r0x0004c318;
}

