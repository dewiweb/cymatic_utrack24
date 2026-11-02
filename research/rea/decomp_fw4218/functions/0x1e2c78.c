// rea decompile_all
// name: FUN_001e2c78
// address: 0x1e2c78
// body: available
// range: 0x1e2c78-0x1e2df7 inclusive
// range: 0x1e2dfc-0x1e304b inclusive
// range: 0x1e312a-0x1e3239 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e2c78(int param_1,short *param_2,undefined *param_3,int *param_4,uint param_5,
                 int param_6,uint param_7,int param_8)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  char *pcVar11;
  uint uVar12;
  undefined *puVar13;
  short *psVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint in_stack_ffffff38;
  undefined2 uVar17;
  undefined4 in_stack_ffffff40;
  undefined2 uVar18;
  undefined *local_a8;
  uint local_a4;
  undefined *local_a0;
  int local_9c;
  int *local_98;
  uint local_90;
  int local_24;
  short *psStack_20;
  undefined *local_1c;
  int *piStack_18;
  
  uVar18 = (undefined2)((uint)in_stack_ffffff40 >> 0x10);
  if (param_6 == 1) {
    param_6 = 0;
  }
  uVar12 = (int)param_3 - (int)param_2;
  local_24 = param_1;
  psStack_20 = param_2;
  local_1c = param_3;
  piStack_18 = param_4;
  if (uVar12 < 0xc) {
    FUN_0002a1c6(0,s_DNS_Message_from___a__d_to___a___001e304c,param_4,
                 (param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,param_6,
                 (param_7 & 0xff) << 8 | (param_7 & 0xffff) >> 8,uVar12);
    return;
  }
  iVar3 = (uint)(*(byte *)(param_2 + 1) >> 3) << 3;
  sVar2 = param_2[2];
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_2 + 5);
  *(char *)((int)param_2 + 5) = (char)sVar2;
  sVar2 = param_2[3];
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_2 + 7);
  *(char *)((int)param_2 + 7) = (char)sVar2;
  sVar2 = param_2[4];
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_2 + 9);
  *(char *)((int)param_2 + 9) = (char)sVar2;
  sVar2 = param_2[5];
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_2 + 0xb);
  *(char *)((int)param_2 + 0xb) = (char)sVar2;
  if (param_1 == 0) {
    FUN_0002a1c6(0,s_mDNSCoreReceive_ERROR_m_is_NULL_001e30a4);
    return;
  }
  if (param_4 != (int *)0x0) {
    if (*param_4 != 4) {
      if (*param_4 == 6) {
        in_stack_ffffff38 = param_4[2];
        if (((param_4[1] != 0 || in_stack_ffffff38 != 0) || (param_4[3] != 0 || param_4[4] != 0)) &&
           ((param_4[1] & in_stack_ffffff38 & param_4[3] & param_4[4]) != 0xffffffff))
        goto LAB_001e2d3a;
      }
      return;
    }
    if (param_4[1] == 0) {
      return;
    }
    if (param_4[1] == -1) {
      return;
    }
  }
LAB_001e2d3a:
  uVar17 = (undefined2)(in_stack_ffffff38 >> 0x10);
  iVar6 = param_8;
  FUN_001e8170(param_1,DAT_001e3084);
  puVar10 = local_1c;
  iVar4 = local_24;
  *(int *)(local_24 + 0x110) = *(int *)(local_24 + 0x110) + 1;
  if (iVar3 == 0) {
    local_a8 = local_1c;
    iVar3 = local_24;
    local_98 = param_4;
    if ((((param_4 == (int *)0x0) || (param_6 == 0)) || (iVar4 = FUN_001e24cc(param_6), iVar4 != 0))
       || (iVar4 = FUN_001e5f0c(iVar3,iVar6,local_98), iVar4 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    if (((iVar6 == 0) && (param_6 != 0)) && (iVar4 = FUN_001e24cc(param_6), iVar4 != 0)) {
      local_9c = uVar12 - 0xc;
      local_a4 = (uint)(ushort)param_2[5];
      if (local_a4 == 1) {
        local_a0 = &DAT_001e30d8;
      }
      else {
        local_a0 = &DAT_001e30c4;
      }
      if (param_2[4] == 1) {
        local_a8 = &DAT_001e30dc;
      }
      else {
        local_a8 = &DAT_001e30c8;
      }
      if (param_2[3] == 1) {
        puVar10 = &DAT_001e30e4;
      }
      else {
        puVar10 = &DAT_001e30d0;
      }
      if (param_2[2] == 1) {
        puVar13 = &DAT_001e30e4;
      }
      else {
        puVar13 = &DAT_001e30d0;
      }
      local_90 = param_7;
      FUN_0002a1c6(0,DAT_001e30d4,local_98,(param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,param_6,
                   (param_7 & 0xff) << 8 | (param_7 & 0xffff) >> 8,0,param_2[2],puVar13,param_2[3],
                   puVar10,param_2[4]);
    }
    else {
      uVar5 = FUN_001e24cc(param_6);
      iVar8 = iVar3 + DAT_001e30e8;
      iVar4 = FUN_0003de10(iVar3,param_2,local_a8,local_98,iVar6,
                           (param_5 & 0xffff) != (uint)*DAT_001e30ec,uVar5,uVar7,iVar8);
      if (iVar4 != 0) {
        FUN_001e5b84(iVar3,iVar8,iVar4,iVar6,0,local_98,param_5 & 0xffff,0,0);
      }
    }
  }
  else if (iVar3 == 0x80) {
    FUN_001e32c4(local_24,param_2,local_1c,param_4,CONCAT22(uVar17,(short)param_5),param_6,
                 CONCAT22(uVar18,(short)param_7),iVar6);
  }
  else if (iVar3 == 0x28) {
    FUN_001e4b14(local_24,param_2,local_1c,param_4,CONCAT22(uVar17,(short)param_5),param_6,
                 CONCAT22(uVar18,(short)param_7),param_8);
  }
  else if (iVar3 == 0xa8) {
    if (param_8 != 0) {
      iVar3 = 0xe10;
      iVar6 = FUN_0002a168(param_2,local_1c,8);
      if (iVar6 != 0) {
        iVar6 = FUN_000279c8(iVar4,param_2,iVar6,puVar10,0,0x80,iVar4 + DAT_001e30f0);
        if (((iVar6 != 0) && (iVar6 = iVar4 + DAT_001e30f4, *(char *)(iVar6 + 0x10) != -0x10)) &&
           (*(short *)(iVar6 + 0x12) == 0x29)) {
          uVar1 = *(ushort *)(iVar6 + 0x1c);
          iVar6 = *(int *)(iVar4 + DAT_001e30f8 + 0x10);
          for (psVar14 = (short *)(iVar6 + 4); psVar14 < (short *)(iVar6 + (uint)uVar1 + 4);
              psVar14 = psVar14 + 0xc) {
            if ((*psVar14 == 2) && (iVar3 = *(int *)(psVar14 + 2), *DAT_001e308c != 0)) {
              FUN_0002a1c6(2,s_Sleep_Proxy_granted_lease_time___001e30fc,iVar3);
            }
          }
        }
        *(undefined1 *)(iVar4 + DAT_001e30f4 + 0x10) = 0;
      }
      iVar6 = *(int *)(&DAT_00001fc4 + iVar4);
      if (iVar6 != 0) {
        uVar7 = FUN_00028288(iVar6 + 4,*(int *)(iVar6 + 0x24) + 4,iVar4 + 0x37);
        FUN_0002a1c6(0,s_mDNSCoreReceiveUpdateR_ERROR_m_>_001e323c,uVar7);
      }
      *(int *)(&DAT_00001fc4 + iVar4) = *(int *)(&DAT_00001fb8 + iVar4);
      if (*(int *)(&DAT_00001fb8 + iVar4) != 0) {
        local_a0 = (undefined *)(iVar4 + 0xc0);
        iVar6 = iVar4 + 0x37;
        do {
          puVar15 = *(undefined4 **)(&DAT_00001fc4 + iVar4);
          if (((puVar15[7] == param_8) ||
              ((puVar15[7] == 0 &&
               ((*(char *)((int)puVar15 + 0x46) != '\0' ||
                (iVar8 = FUN_00029974(puVar15[8]), iVar8 != 0)))))) &&
             (*(short *)(puVar15 + 0x3a) == *param_2)) {
            *(undefined2 *)(puVar15 + 0x3a) = *DAT_001e327c;
            iVar8 = *(int *)(local_a0 + 0x1c) + *DAT_001e3280 * iVar3;
            if (iVar8 == 0) {
              iVar8 = 1;
            }
            puVar15[0x38] = iVar8;
            if (*_DAT_001e3284 != 0) {
              uVar7 = FUN_00028288(puVar15 + 1,puVar15[9] + 4,iVar6);
              if (*(int3 *)((int)puVar15 + 0x49) == 0 && *(char *)(puVar15 + 0x13) == '\0') {
                pcVar11 = s_registered_001e3294;
              }
              else {
                pcVar11 = s____transferred_001e3285 + 3;
              }
              FUN_0002a1c6(2,s_Sleep_Proxy__s_record__5d__s_001e32a0,pcVar11,iVar3,uVar7);
            }
            if (*(int3 *)((int)puVar15 + 0x49) != 0 || *(char *)(puVar15 + 0x13) != '\0') {
              FUN_001c6cb8((int)puVar15 + 0x49,DAT_001e32c0);
              *(undefined1 *)(puVar15 + 0x1f) = 0;
              FUN_001e6734(iVar4,puVar15,0);
            }
          }
          puVar9 = *(undefined4 **)(&DAT_00001fc4 + iVar4);
          if (puVar9 == puVar15) {
            puVar9 = (undefined4 *)*puVar15;
            *(undefined4 **)(&DAT_00001fc4 + iVar4) = puVar9;
          }
        } while (puVar9 != (undefined4 *)0x0);
      }
    }
    if (*(int *)(iVar4 + 0x124) != 0) {
      *(undefined4 *)(iVar4 + 0x128) = *(undefined4 *)(iVar4 + 0xdc);
    }
  }
  else {
    FUN_0002a1c6(0,DAT_001e3088,(char)param_2[1],*(undefined1 *)((int)param_2 + 3),param_4,
                 (param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,param_6,
                 (param_7 & 0xff) << 8 | (param_7 & 0xffff) >> 8,uVar12,param_8);
    if ((*DAT_001e308c != 0) && (uVar16 = 0, 0 < (int)uVar12)) {
      do {
        iVar3 = FUN_001eaf9c(&local_a8,0x80,&DAT_001e3090,uVar16);
        iVar3 = (int)&local_a8 + iVar3;
        do {
          if ((int)uVar16 < (int)uVar12) {
            iVar4 = FUN_001eaf9c(iVar3,0x80,s__02X_001e3098,*(undefined1 *)((int)param_2 + uVar16));
            iVar3 = iVar4 + iVar3;
          }
          uVar16 = uVar16 + 1;
        } while ((uVar16 & 0xf) != 0);
        if (*DAT_001e308c != 0) {
          FUN_0002a1c6(3,&DAT_001e30a0,&local_a8);
        }
      } while ((int)uVar16 < (int)uVar12);
    }
  }
  FUN_001eac48(local_24,DAT_001e3084);
  return;
}

