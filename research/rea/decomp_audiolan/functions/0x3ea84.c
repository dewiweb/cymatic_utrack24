// rea decompile_all
// name: FUN_0003ea84
// address: 0x3ea84
// body: available
// range: 0x3ea84-0x3ee9b inclusive
// range: 0x3ee9e-0x3eecd inclusive
// range: 0x3ef9c-0x3f127 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ea84(int param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined1 auStack_3f8 [4];
  undefined1 auStack_3f4 [4];
  undefined2 local_3f0;
  undefined4 local_3ec;
  undefined2 local_3e8;
  undefined2 local_3e6;
  int local_3d4;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int3 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  
  local_68 = param_2 + 0x1420;
  if (((*(short *)(param_1 + 0x1c) == *(short *)(param_2 + 0x142c)) &&
      (*(short *)(param_1 + 0x1e) == *(short *)(param_2 + 0x142e))) &&
     (*(short *)(param_1 + 0x20) == *(short *)(param_2 + 0x1430))) {
    local_2c = 0xc;
  }
  else {
    local_2c = 0x12;
  }
  local_2c = local_2c + 0x13;
  local_84 = param_2 + 0x9c0;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_0016db4c(*(undefined4 *)(param_2 + 0x9cc));
  iVar6 = extraout_r1 * 0x14 + local_20;
  local_30 = iVar6 + 0x980;
  uVar9 = local_1c & 0xffff;
  local_70 = local_24 + 0x100;
  local_80 = local_20 + DAT_0003eed0;
  local_8c = local_24 + 0xc0;
  local_90 = extraout_r1;
  if (*(int *)(iVar6 + 0x988) == 0) {
    iVar6 = *(int *)(local_24 + 0xdc) + *DAT_0003eedc;
    *(int *)(local_84 + 0x10) = iVar6;
    if (0 < *(int *)(local_24 + 0x128) - iVar6) {
      *(int *)(local_24 + 0x128) = iVar6;
    }
    if (*_DAT_0003eee0 != 0) {
      FUN_00024642(2,s____SendSPSRegistration___s_SPS___0003eee1 + 3,local_80,
                   *(undefined4 *)(local_84 + 0xc),extraout_r1,
                   extraout_r1 * 0x260 + local_20 + 0x398);
    }
LAB_0003eeb0:
    if ((uVar9 == 0) && (*(int *)(local_84 + 0xc) < 8)) {
      *(int *)(local_84 + 0xc) = *(int *)(local_84 + 0xc) + 1;
    }
    return;
  }
  local_64 = local_24 + 0x1f80;
  local_60 = (int *)(local_20 + 0x1400);
  local_78 = local_24 + 0x37;
  local_74 = local_24 + DAT_0003eed8;
  local_88 = local_24 + DAT_0003eed4;
  if (uVar9 == 0) {
    for (piVar5 = *(int **)(&DAT_00001fb8 + local_24); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5
        ) {
      if ((1 < *(byte *)(piVar5 + 1)) &&
         (((piVar5[7] == *local_60 ||
           ((piVar5[7] == 0 &&
            ((*(char *)((int)piVar5 + 0x46) != '\0' || (iVar2 = FUN_00023df0(piVar5[8]), iVar2 != 0)
             ))))) && (iVar2 = FUN_00195368(local_18,(int)piVar5 + 0x47,0x14), iVar2 != 0)))) {
        piVar5[0x23] = *DAT_0003ef20;
      }
    }
  }
  local_4c = local_24 + DAT_0003ef24;
  local_48 = local_24 + DAT_0003ef24 + -4;
  local_44 = (int3 *)(local_18 + 2);
  local_40 = local_24 + 0x1c;
  local_3c = local_20 + DAT_0003ef28;
  local_38 = local_24 + DAT_0003ef2c;
  local_34 = local_24 + DAT_0003ef30;
  local_5c = local_90 * 2 + local_20 + 0x9c0;
  local_58 = iVar6 + DAT_0003ef34;
  local_6c = local_90 * 0x260 + local_20;
  local_50 = local_6c + 0x240;
  do {
    iVar6 = local_24;
    local_94 = local_4c;
    uVar8 = local_1c;
    if (uVar9 == 0) {
      iVar2 = 0;
      do {
        iVar4 = FUN_0019560c(DAT_0003ef3c);
        uVar8 = (uint)CONCAT11((char)(iVar4 + 1),(char)((uint)(iVar4 + 1) >> 8));
        for (piVar5 = *(int **)(&DAT_00001fb8 + iVar6); piVar5 != (int *)0x0;
            piVar5 = (int *)*piVar5) {
          if (uVar8 == *(ushort *)(piVar5 + 0x3a)) goto LAB_0003ecaa;
        }
        piVar5 = *(int **)(iVar6 + 0x130);
        while( true ) {
          if (piVar5 == (int *)0x0) goto LAB_0003ec30;
          if (uVar8 == *(ushort *)((int)piVar5 + 0x12e)) break;
          piVar5 = (int *)*piVar5;
        }
LAB_0003ecaa:
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
    }
LAB_0003ec30:
    FUN_0002369c(local_74,uVar8,*DAT_0003ef38);
    for (piVar5 = *(int **)(local_64 + 0x38); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      if (((piVar5[0x23] != 0) ||
          ((uVar9 != 0 &&
           ((((piVar5[7] != *DAT_0003ef40 || (*(char *)((int)piVar5 + 0x46) != '\0')) ||
             (iVar6 = FUN_00023df0(piVar5[8]), iVar6 != 0)) &&
            ((*(ushort *)(piVar5 + 0x3a) == uVar9 &&
             (-1 < *(int *)(local_8c + 0x1c) - (piVar5[0x2d] + piVar5[0x2c]))))))))) &&
         (iVar6 = FUN_00195368(local_18,(int)piVar5 + 0x47,0x14), iVar6 != 0)) {
        iVar6 = DAT_0003ef44;
        if (*(short *)(local_88 + 0x1c) != 0) {
          iVar6 = 0x5a0;
        }
        iVar6 = ((iVar6 + local_24) - local_2c) + DAT_0003ef24;
        if ((*(byte *)(piVar5 + 1) & 0x32) != 0) {
          *(ushort *)(piVar5 + 2) = *(ushort *)(piVar5 + 2) | 0x8000;
        }
        iVar2 = FUN_000392b0(local_74,local_94,local_48,piVar5 + 1,piVar5[3],iVar6);
        *(ushort *)(piVar5 + 2) = *(ushort *)(piVar5 + 2) & 0x7fff;
        if (iVar2 == 0) {
          if (*_DAT_0003eee0 != 0) {
            uVar3 = FUN_0002272c(piVar5 + 1,piVar5[9] + 4,local_78);
            FUN_00024642(2,s_SendSPSRegistration_put__s_FAILE_0003ef70,local_80,
                         (local_94 - local_24) + DAT_0003ef6c,(iVar6 - local_24) + DAT_0003ef6c,
                         uVar3);
          }
        }
        else {
          if (*_DAT_0003eee0 != 0) {
            uVar3 = FUN_0002272c(piVar5 + 1,piVar5[9] + 4,local_78);
            FUN_00024642(2,s_SendSPSRegistration_put__s__s_0003ef48,local_80,uVar3);
          }
          piVar5[0x23] = 0;
          iVar6 = *DAT_0003eedc;
          piVar5[0x2c] = iVar6;
          iVar4 = *(int *)(local_8c + 0x1c);
          piVar5[0x2d] = iVar4;
          iVar4 = iVar4 + iVar6;
          *(undefined2 *)(piVar5 + 0x3a) = *(undefined2 *)(local_88 + 0x14);
          local_94 = iVar2;
          if (-1 < *(int *)(local_8c + 0x3c) - iVar4) {
            *(int *)(local_8c + 0x3c) = iVar4;
          }
        }
      }
    }
    if (*(short *)(local_88 + 0x1c) == 0) {
      *(int *)(local_84 + 0x10) = *(int *)(local_8c + 0x1c) + *DAT_0003eedc * 10;
      goto LAB_0003eeb0;
    }
    uVar10 = 0;
    FUN_001995b4(auStack_3f8,0,*DAT_0003ef40,0x29,DAT_0003ef68,0x20,0,0,0);
    iVar2 = local_24;
    iVar6 = local_3d4;
    local_3f0 = 0x5a0;
    local_3e8 = 0x30;
    local_3e6 = 0x30;
    *(undefined2 *)(local_3d4 + 4) = 2;
    *(undefined2 *)(local_3d4 + 6) = 4;
    *(undefined **)(local_3d4 + 8) = &DAT_00001c20;
    if (*local_44 == 0 && *(char *)((int)local_44 + 3) == '\0') {
      puVar7 = (undefined1 *)(local_3d4 + 0x1c);
      *(undefined1 *)(local_3d4 + 0x20) = 0;
      *(undefined1 *)(local_3d4 + 0x21) = *(undefined1 *)(local_70 + 0x16);
      FUN_0016d964(local_3d4 + 0x22,local_40);
      FUN_0016d964(iVar6 + 0x28,local_3c);
      FUN_0016d964(iVar6 + 0x2e,DAT_0003f128);
      *puVar7 = 4;
      *(undefined1 *)(iVar6 + 0x1d) = 0;
      if (((*(short *)(iVar2 + 0x1c) == *(short *)(local_68 + 0xc)) &&
          (*(short *)(iVar2 + 0x1e) == *(short *)(local_68 + 0xe))) &&
         (*(short *)(iVar2 + 0x20) == *(short *)(local_68 + 0x10))) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = 0x12;
      }
      *(char *)(iVar6 + 0x1e) = (char)(iVar2 + -4);
      *(char *)(iVar6 + 0x1f) = (char)((uint)(iVar2 + -4) >> 8);
    }
    else {
      FUN_00003628(local_3d4 + 0x20,local_18,0x14);
      *(undefined2 *)(local_3d4 + 0x1c) = 4;
      if (((*(short *)(local_18 + 2) == *(short *)(local_18 + 8)) &&
          (*(short *)(local_18 + 4) == *(short *)(local_18 + 10))) &&
         (*(short *)(local_18 + 6) == *(short *)(local_18 + 0xc))) {
        sVar1 = 0xc;
      }
      else {
        sVar1 = 0x12;
      }
      *(short *)(local_3d4 + 0x1e) = sVar1 + -4;
    }
    piVar5 = DAT_0003f12c;
    if (*DAT_0003f12c != 0) {
      uVar3 = FUN_0002272c(auStack_3f4,local_3d4 + 4,local_78);
      FUN_00024642(2,DAT_0003f130,local_80,uVar3);
    }
    iVar6 = FUN_000392b0(local_74,local_94,local_34,auStack_3f4,local_3ec,local_38);
    if (iVar6 == 0) {
      uVar3 = FUN_0002272c(auStack_3f4,local_3d4 + 4,local_78);
      FUN_00024642(0,s___SendSPSRegistration__Failed_to_0003f16e + 2,
                   *(undefined2 *)(local_88 + 0x1c),uVar3);
    }
    else {
      if (*piVar5 != 0) {
        uVar8 = (uint)*(ushort *)(local_88 + 0x1c);
        FUN_00024642(2,_DAT_0003f138,local_80,*(undefined4 *)(local_84 + 0xc),local_90,
                     (*(uint *)(local_88 + 0x14) & 0xff) << 8 |
                     (*(uint *)(local_88 + 0x14) & 0xffff) >> 8,uVar8,
                     (iVar6 - local_24) + DAT_0003f134,local_58,
                     *(ushort *)(local_5c + 4) << 8 | *(ushort *)(local_5c + 4) >> 8);
        uVar10 = (undefined2)(uVar8 >> 0x10);
      }
      iVar6 = FUN_0019569c(local_24,local_74,iVar6,*local_60,0,local_58,
                           CONCAT22(uVar10,*(undefined2 *)(local_5c + 4)),0,0);
      if (iVar6 != 0) {
        if (*piVar5 != 0) {
          FUN_00024642(2,s___SendSPSRegistration__mDNSSendD_0003f13a + 2);
        }
        if ((*(int *)(local_30 + 8) == 6) && (*(int *)(local_50 + 0x38) == -1)) {
          if (*DAT_0003f12c != 0) {
            FUN_00024642(2,_DAT_0003f16c,local_90,local_6c + 0x398);
          }
          *(undefined2 *)(local_6c + 0x498) = 1;
          FUN_00199948(local_24,local_6c + 0x268);
          return;
        }
      }
    }
  } while( true );
}

