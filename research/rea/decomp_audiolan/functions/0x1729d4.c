// rea decompile_all
// name: FUN_001729d4
// address: 0x1729d4
// body: available
// range: 0x1729d4-0x172c75 inclusive
// range: 0x172c78-0x172db7 inclusive
// range: 0x172e34-0x173009 inclusive
// range: 0x17300c-0x173215 inclusive
// range: 0x173254-0x1735e9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001729d4(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  code *pcVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  char *pcVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 *puVar29;
  undefined4 local_144 [29];
  undefined4 auStack_d0 [3];
  byte abStack_c4 [8];
  undefined4 uStack_bc;
  undefined1 auStack_b8 [28];
  undefined4 auStack_9c [11];
  undefined4 auStack_70 [7];
  undefined4 auStack_54 [8];
  byte abStack_34 [16];
  int *piStack_24;
  undefined4 local_20;
  int local_1c [2];
  undefined4 *puVar30;
  int *piVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  
  iVar8 = DAT_00172db8;
  local_1c[1] = param_4;
  local_1c[0] = param_3;
  local_20 = param_2;
  piStack_24 = param_1;
  pcVar26 = &DAT_00172dc0;
  iVar17 = DAT_00172db8 + -0x24;
  iVar25 = DAT_00172db8 + -0x24;
  iVar28 = DAT_00172db8 + -0x24;
  iVar18 = DAT_00172db8 + -0x24;
  iVar2 = DAT_00172db8 + -0x24;
  iVar3 = DAT_00172db8 + -0x24;
  iVar4 = DAT_00172db8 + -0x24;
  iVar5 = DAT_00172db8 + -0x24;
  iVar6 = DAT_00172db8 + -0x24;
  iVar7 = DAT_00172db8 + -0x24;
  puVar29 = (undefined4 *)((int)&piStack_24 + DAT_00172db8);
  puVar30 = (undefined4 *)((int)&piStack_24 + DAT_00172db8);
  piVar31 = (int *)((int)&piStack_24 + DAT_00172db8);
  piVar32 = (int *)((int)&piStack_24 + DAT_00172db8);
  puVar33 = (undefined4 *)((int)&piStack_24 + DAT_00172db8);
  puVar34 = (undefined4 *)((int)&piStack_24 + DAT_00172db8);
  iVar12 = DAT_00172dbc + DAT_00172db8 + -0x24;
  uVar27 = *(undefined4 *)(&stack0x00000014 + iVar12 + 0x24);
  if (*(int *)(&stack0xfffffff4 + iVar12 + 0x24) == 0) {
    return -2;
  }
  if (param_1 == (int *)0x0) {
    return -2;
  }
  if (*param_1 == 0) {
    return -5;
  }
  if (param_1[3] == 0) {
    return -5;
  }
  iVar12 = FUN_001a6f04(s_Digest_00172dc4);
  if (iVar12 != 0) {
    return -1;
  }
  if (((param_1[6] != 0) && (iVar12 = FUN_001a6f04(&DAT_00172dc0), iVar12 != 0)) &&
     (iVar12 = FUN_001a6f04(s__MD5__00172dcc,param_1[6]), iVar12 != 0)) {
    iVar12 = FUN_001a6f04(s_AKAv1_MD5_00172dd4,param_1[6]);
    if ((iVar12 == 0) || (iVar12 = FUN_001a6f04(s__AKAv1_MD5__00172de0,param_1[6]), iVar12 == 0)) {
      pcVar26 = s_AKAv1_MD5_00172dd4;
    }
    else {
      iVar12 = FUN_001a6f04(s_AKAv2_MD5_00172dec,param_1[6]);
      if ((iVar12 != 0) && (iVar12 = FUN_001a6f04(s__AKAv2_MD5__00172df8,param_1[6]), iVar12 != 0))
      {
        return -1;
      }
      pcVar26 = s_AKAv2_MD5_00172dec;
    }
  }
  iVar12 = FUN_001a20d8((int)&piStack_24 + DAT_00172e08 + iVar8);
  if (iVar12 != 0) {
    return iVar12;
  }
  uVar13 = FUN_001a6f50(s_Digest_00172dc4);
  FUN_001a23b4(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),uVar13);
  FUN_001a9074(param_1);
  uVar13 = FUN_001a6f50();
  FUN_001a23cc(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),uVar13);
  piVar9 = DAT_00172e10;
  if (*(int *)(*(int *)(&stack0x0000003c + DAT_00172e0c + iVar8) + 8) == 0) {
    if ((code *)*DAT_00172e10 == entry) {
      puVar14 = (undefined1 *)FUN_0019b388(3);
    }
    else {
      puVar14 = (undefined1 *)(*(code *)*DAT_00172e10)(3);
    }
    *(undefined1 **)(*(int *)(&stack0x0000003c + DAT_00172e0c + iVar8) + 8) = puVar14;
    *puVar14 = 0x22;
    *(undefined1 *)(*(int *)(*(int *)(&stack0x0000003c + DAT_00172e0c + iVar8) + 8) + 1) = 0x22;
    *(undefined1 *)(*(int *)(*(int *)(&stack0x0000003c + DAT_00172e0c + iVar8) + 8) + 2) = 0;
  }
  FUN_001a9068(param_1);
  uVar13 = FUN_001a6f50();
  FUN_001a23c0(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),uVar13);
  iVar12 = FUN_001a906c(param_1);
  if (iVar12 != 0) {
    FUN_001a906c(param_1);
    uVar13 = FUN_001a6f50();
    FUN_001a23c8(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),uVar13);
  }
  if (*piVar9 == 0) {
    iVar12 = FUN_000034d0(*(undefined4 *)(&stack0xfffffff0 + DAT_00172dbc + iVar8));
    iVar12 = FUN_0019b388(iVar12 + 3);
  }
  else {
    iVar12 = FUN_000034d0(*(undefined4 *)(&stack0xfffffff0 + DAT_00172dbc + iVar8));
    iVar12 = (*(code *)*piVar9)(iVar12 + 3);
  }
  iVar20 = *(int *)(&stack0x0000003c + DAT_00172e0c + iVar8);
  *(int *)(iVar20 + 4) = iVar12;
  if (iVar12 == 0) {
    FUN_001a1fbc(iVar20);
    return -4;
  }
  FUN_000028d8(iVar12,&DAT_00172e14,*(undefined4 *)(&stack0xfffffff0 + DAT_00172dbc + iVar8));
  if (*DAT_00172e10 == 0) {
    iVar12 = FUN_000034d0(*(undefined4 *)(&stack0xffffffec + DAT_00172dbc + iVar8));
    iVar12 = FUN_0019b388(iVar12 + 3);
  }
  else {
    iVar12 = FUN_000034d0(*(undefined4 *)(&stack0xffffffec + DAT_00172dbc + iVar8));
    iVar12 = (*(code *)*DAT_00172e10)(iVar12 + 3);
  }
  if (iVar12 == 0) {
    FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8));
    return -4;
  }
  FUN_000028d8(iVar12,&DAT_00172e14,*(undefined4 *)(&stack0xffffffec + DAT_00172dbc + iVar8));
  FUN_001a23d4(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),iVar12);
  uVar13 = FUN_001a6f50(pcVar26);
  FUN_001a23b0(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8),uVar13);
  pcVar15 = (char *)FUN_001a9070(param_1);
  if (((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) ||
     (uVar16 = FUN_000034d0(pcVar15), uVar16 < 4)) {
    pcVar15 = (char *)0x0;
  }
  iVar17 = DAT_00172e1c + iVar17;
  *(undefined4 *)(&stack0xffffffec + iVar17 + 0x24) = 0;
  *(undefined4 *)(&stack0x00000024 + iVar17 + 0x24) =
       *(undefined4 *)(&stack0x000000f0 + iVar17 + 0x24);
  *(undefined4 *)(&stack0xfffffff4 + iVar17 + 0x24) = 0;
  *(undefined4 *)(&stack0x0000002c + iVar17 + 0x24) = uVar27;
  *(undefined4 *)(&stack0xfffffff0 + iVar17 + 0x24) = 0;
  iVar25 = DAT_00172dbc + iVar25;
  *(undefined4 *)((int)auStack_d0 + iVar25 + 0x24) =
       *(undefined4 *)(&stack0xffffffec + iVar25 + 0x24);
  *(undefined4 *)((int)local_144 + iVar25 + 0x30) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x34) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x38) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x3c) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x40) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x44) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x48) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x4c) = 0;
  *(undefined4 *)((int)local_144 + iVar25 + 0x50) = 0;
  iVar17 = FUN_001a20d4(*(undefined4 *)((int)local_144 + iVar25 + 0x24));
  if (iVar17 == 0) {
    uVar27 = FUN_001a6f50(&DAT_00172e18);
    *(undefined4 *)(&stack0x00000040 + DAT_00172e0c + iVar8) = uVar27;
  }
  else {
    FUN_001a20d4(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8));
    uVar27 = FUN_001a6f8c();
    *(undefined4 *)(&stack0x00000040 + DAT_00172e0c + iVar8) = uVar27;
  }
  uVar27 = *(undefined4 *)(&stack0xfffffff4 + DAT_00172dbc + iVar8);
  iVar17 = FUN_001a9068(param_1);
  if (iVar17 == 0) {
    FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8));
    if (*(int *)(&stack0x00000040 + DAT_00172e0c + iVar8) != 0) {
      if ((code *)*DAT_00172e28 == entry) {
        FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_00172e0c + iVar8));
      }
      else {
        (*(code *)*DAT_00172e28)();
      }
    }
    return -5;
  }
  FUN_001a9068(param_1);
  uVar13 = FUN_001a6f8c();
  *(undefined4 *)(&stack0x00000044 + DAT_00172e0c + iVar8) = uVar13;
  if (pcVar15 == (char *)0x0) {
LAB_00172f16:
    iVar17 = FUN_001a6f04(pcVar26,&DAT_0017322c);
    if (iVar17 == 0) {
      if ((*(int *)(&stack0x0000000c + DAT_00173248 + iVar8) == 0) ||
         (**(char **)(&stack0x0000000c + DAT_00173248 + iVar8) == '\0')) {
        iVar17 = (int)&piStack_24 + DAT_0017324c + iVar8;
        uVar13 = *(undefined4 *)(iVar17 + -0x74);
        *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(iVar17 + -0x4c);
        *(int *)((int)local_1c + iVar8) = iVar17;
        *puVar29 = uVar13;
        FUN_000206e0(&DAT_0017322c,*(undefined4 *)(iVar17 + -0x14),*(undefined4 *)(iVar17 + -0x78),
                     uVar27);
      }
      else {
        iVar17 = *(int *)(&stack0x0000000c + DAT_00173248 + iVar8);
      }
      iVar25 = (int)&piStack_24 + DAT_00173250 + iVar8;
      uVar27 = *(undefined4 *)(iVar25 + -0x2c);
      *(undefined4 *)((int)local_1c + iVar8) = *(undefined4 *)(iVar25 + -0x30);
      *(undefined4 *)((int)local_1c + iVar8 + 4) = uVar27;
      *(int *)(&stack0xffffffec + iVar8) = iVar25 + -0x94;
      *(int *)(&stack0xfffffff0 + iVar8) = iVar25;
      *puVar30 = *(undefined4 *)(iVar25 + -0x6c);
      *(undefined4 *)((int)&local_20 + iVar8) = 0;
      FUN_000207ac(iVar17,*(undefined4 *)(iVar25 + -0x98),*(undefined4 *)(iVar25 + -0x68),
                   *(undefined4 *)(iVar25 + -0x70));
    }
    else {
      iVar17 = FUN_001a6f04(pcVar26,s_AKAv1_MD5_00173230);
      if (iVar17 == 0) {
        iVar17 = (int)&piStack_24 + DAT_00173220 + iVar8;
        *(undefined4 *)(iVar17 + 0x40) = 1;
      }
      else {
        iVar17 = (int)&piStack_24 + DAT_00173220 + iVar8;
        *(undefined4 *)(iVar17 + 0x40) = 2;
      }
      *(undefined4 *)(iVar17 + 0x4c) = uVar27;
      uVar27 = *(undefined4 *)(&stack0x00000044 + DAT_00173218 + iVar8);
      *(undefined4 *)(iVar17 + 0x58) = *(undefined4 *)(iVar17 + 0x40);
      iVar25 = (int)local_1c + iVar8;
      puVar14 = (undefined1 *)((int)&piStack_24 + DAT_0017323c + iVar8);
      *(undefined1 **)(iVar17 + 0x38) = puVar14;
      *puVar14 = 0;
      FUN_000027f4(iVar25,0x800,&DAT_00173240,uVar27);
      iVar18 = DAT_00173218 + iVar18;
      *(undefined1 *)((int)local_1c + iVar18 + 0x24) = 0;
      *(int *)(&stack0x00000090 + iVar18 + 0x24) = iVar25;
      uVar27 = FUN_000034d0(iVar25);
      *(undefined4 *)(&stack0x00000004 + DAT_00173220 + iVar8) = uVar27;
      if ((code *)*DAT_00173244 == entry) {
        iVar17 = FUN_0019b388(((uint)(*(int *)(&stack0x00000004 + DAT_00173220 + iVar8) * 3) >> 2) +
                              8);
      }
      else {
        iVar17 = (*(code *)*DAT_00173244)
                           (((uint)(*(int *)(&stack0x00000004 + DAT_00173220 + iVar8) * 3) >> 2) + 8
                           );
      }
      if (iVar17 != 0) {
        uVar24 = 0;
        iVar25 = 0;
        uVar16 = uVar24;
        if (4 < *(uint *)(&stack0x00000004 + DAT_00173220 + iVar8)) {
          do {
            uVar27 = FUN_0017e434(*(undefined1 *)
                                   (*(int *)(&stack0x00000010 + DAT_00173220 + iVar8) + uVar16));
            iVar28 = DAT_00173220 + iVar2;
            *(undefined4 *)(&stack0x00000020 + iVar28 + 0x24) = uVar27;
            iVar28 = *(int *)(&stack0x00000010 + iVar28 + 0x24) + uVar16;
            uVar27 = FUN_0017e434(*(undefined1 *)(iVar28 + 1));
            *(undefined4 *)(&stack0x00000008 + DAT_00173220 + iVar8) = uVar27;
            uVar27 = FUN_0017e434(*(undefined1 *)(iVar28 + 2));
            *(undefined4 *)(&stack0x0000000c + DAT_00173220 + iVar8) = uVar27;
            bVar11 = FUN_0017e434(*(undefined1 *)(iVar28 + 3));
            iVar18 = DAT_00173220;
            iVar28 = DAT_00173220 + iVar3;
            *(byte *)(iVar17 + iVar25) =
                 (byte)(*(int *)(&stack0x00000020 + iVar28 + 0x24) << 2) |
                 (byte)((*(uint *)(&stack0x00000008 + iVar28 + 0x24) & 0x3f) >> 4);
            uVar24 = uVar16 + 4;
            *(byte *)(iVar17 + iVar25 + 1) =
                 (byte)(*(int *)(&stack0x00000008 + iVar18 + iVar8) << 4) |
                 (byte)((*(uint *)(&stack0x0000000c + DAT_00173220 + iVar8) & 0x3f) >> 2);
            iVar28 = DAT_00173220 + iVar4;
            *(byte *)(iVar17 + iVar25 + 2) =
                 (byte)(*(int *)(&stack0x0000000c + iVar28 + 0x24) << 6) | bVar11 & 0x3f;
            iVar25 = iVar25 + 3;
            uVar21 = uVar16 + 8;
            uVar16 = uVar24;
          } while (uVar21 < *(uint *)(&stack0x00000004 + iVar28 + 0x24));
        }
        iVar28 = iVar25;
        if (uVar24 <= *(uint *)(&stack0x00000004 + DAT_00173220 + iVar8)) {
          uVar27 = FUN_0017e434(*(undefined1 *)
                                 (*(int *)(&stack0x00000010 + DAT_00173220 + iVar8) + uVar24));
          iVar5 = DAT_00173220 + iVar5;
          *(undefined4 *)(&stack0x00000020 + iVar5 + 0x24) = uVar27;
          if (uVar24 + 1 < *(uint *)(&stack0x00000004 + iVar5 + 0x24)) {
            uVar16 = FUN_0017e434(*(undefined1 *)
                                   (*(int *)(&stack0x00000010 + DAT_00173220 + iVar8) + uVar24 + 1))
            ;
          }
          else {
            uVar16 = 0xffffffff;
          }
          if (uVar24 + 2 < *(uint *)(&stack0x00000004 + DAT_00173220 + iVar8)) {
            uVar27 = FUN_0017e434(*(undefined1 *)
                                   (*(int *)(&stack0x00000010 + DAT_00173220 + iVar8) + uVar24 + 2))
            ;
            iVar18 = (int)&piStack_24 + DAT_00173220 + iVar8;
            *(undefined4 *)(iVar18 + 0x30) = uVar27;
          }
          else {
            iVar18 = (int)&piStack_24 + DAT_00173220 + iVar8;
            *(undefined4 *)(iVar18 + 0x30) = 0xffffffff;
          }
          if (uVar24 + 3 < *(uint *)(iVar18 + 0x28)) {
            iVar18 = FUN_0017e434(*(undefined1 *)
                                   (*(int *)(&stack0x00000010 + DAT_00173220 + iVar8) + uVar24 + 3))
            ;
          }
          else {
            iVar18 = -1;
          }
          if (uVar16 != 0xffffffff) {
            *(byte *)(iVar17 + iVar25) =
                 (byte)(*(int *)(&stack0x00000020 + DAT_00173220 + iVar8) << 2) |
                 (byte)((uVar16 & 0x3f) >> 4);
            iVar28 = iVar25 + 1;
            if (*(int *)(&stack0x0000000c + DAT_00173220 + iVar8) != -1) {
              *(byte *)(iVar17 + iVar28) =
                   (byte)(uVar16 << 4) |
                   (byte)((*(uint *)(&stack0x0000000c + DAT_00173220 + iVar8) & 0x3f) >> 2);
              iVar28 = iVar25 + 2;
              if (iVar18 != -1) {
                *(byte *)(iVar17 + iVar28) =
                     (byte)(*(int *)(&stack0x0000000c + DAT_00173220 + iVar8) << 6) |
                     (byte)iVar18 & 0x3f;
                iVar28 = iVar25 + 3;
              }
            }
          }
        }
        *(undefined1 *)(iVar17 + iVar28) = 0;
        if (iVar17 != 0) {
          if (iVar28 < 0x20) {
            if ((code *)*DAT_0017321c == entry) {
              FUN_0018a280(iVar17);
            }
            else {
              (*(code *)*DAT_0017321c)(iVar17);
            }
          }
          else {
            FUN_00003628((int)&piStack_24 + DAT_001735ec + iVar8,iVar17,0x10);
            FUN_0016d964((int)&piStack_24 + DAT_001735f0 + iVar8,iVar17 + 0x10);
            FUN_0016d998((int)&piStack_24 + DAT_001735f4 + iVar8,iVar17 + 0x18);
            if ((code *)*DAT_001735f8 == entry) {
              FUN_0018a280(iVar17);
            }
            else {
              (*(code *)*DAT_001735f8)(iVar17);
            }
            iVar17 = FUN_000034d0(*(undefined4 *)(&stack0x00000028 + DAT_001735fc + iVar8));
            iVar6 = DAT_001735fc + iVar6;
            puVar14 = &stack0x00000094 + iVar6 + 0x24;
            FUN_00003628(puVar14,*(undefined4 *)(&stack0x00000028 + iVar6 + 0x24),iVar17);
            FUN_00003860(puVar14 + iVar17,0x10 - iVar17);
            *piVar31 = (int)(&stack0x000000cc + iVar6 + 0x24);
            FUN_00189a7c(puVar14,&stack0x00000084 + iVar6 + 0x24,&stack0x000000d4 + iVar6 + 0x24,
                         DAT_00173600);
            FUN_0000339c(&stack0x000000c4 + iVar6 + 0x24,&stack0x000000cc + iVar6 + 0x24,8);
            pbVar19 = &stack0xfffffffc + iVar6 + 0x24;
            *(undefined1 **)((int)&local_20 + iVar8) = &stack0x000000dc + iVar6 + 0x24;
            *piVar32 = (int)(&stack0x000000b4 + iVar6 + 0x24);
            FUN_00189bf8(puVar14,&stack0x00000084 + iVar6 + 0x24,pbVar19,
                         &stack0x000000a4 + iVar6 + 0x24);
            iVar17 = DAT_00173604;
            puVar14 = *(undefined1 **)(&stack0x00000014 + iVar6 + 0x24);
            *puVar14 = *(undefined1 *)(DAT_00173604 + (uint)(*pbVar19 >> 4));
            puVar14[1] = *(undefined1 *)(iVar17 + (*pbVar19 & 0xf));
            bVar11 = (&stack0xfffffffd)[iVar6 + 0x24];
            iVar25 = 3;
            do {
              bVar1 = pbVar19[2];
              puVar14[2] = *(undefined1 *)(iVar17 + (uint)(bVar11 >> 4));
              puVar14[3] = *(undefined1 *)(iVar17 + (bVar11 & 0xf));
              bVar11 = pbVar19[3];
              puVar14[4] = *(undefined1 *)(iVar17 + (uint)(bVar1 >> 4));
              puVar14[5] = *(undefined1 *)(iVar17 + (bVar1 & 0xf));
              puVar14 = puVar14 + 4;
              iVar25 = iVar25 + -1;
              pbVar19 = pbVar19 + 2;
            } while (iVar25 != 0);
            *(undefined1 *)(*(int *)(&stack0x00000014 + DAT_001735fc + iVar8) + 0xe) =
                 *(undefined1 *)
                  (iVar17 + (uint)(*(byte *)((int)&local_20 + DAT_00173608 + iVar8 + 3) >> 4));
            *(undefined1 *)(*(int *)(&stack0x00000014 + DAT_001735fc + iVar8) + 0xf) =
                 *(undefined1 *)
                  (iVar17 + (*(byte *)((int)&local_20 + DAT_00173608 + iVar8 + 3) & 0xf));
            *(undefined1 *)(*(int *)(&stack0x00000014 + DAT_001735fc + iVar8) + 0x10) = 0;
          }
          if ((*(int *)(&stack0x00000034 + DAT_001735fc + iVar8) != 1) &&
             (*(int *)(&stack0x00000034 + DAT_001735fc + iVar8) == 2)) {
            pbVar23 = (byte *)((int)&piStack_24 + DAT_0017360c + iVar8);
            *(undefined1 *)(*(int *)(&stack0x00000014 + DAT_001735fc + iVar8) + 0x50) = 0;
            iVar17 = DAT_00173604;
            pbVar19 = pbVar23 + -0x10;
            iVar25 = 0x10;
            puVar14 = (undefined1 *)(*(int *)(pbVar23 + -0xa0) + 0x10);
            do {
              bVar11 = *pbVar23;
              bVar1 = *pbVar19;
              pbVar23 = pbVar23 + 1;
              *puVar14 = *(undefined1 *)(iVar17 + (uint)(bVar11 >> 4));
              pbVar19 = pbVar19 + 1;
              puVar14[1] = *(undefined1 *)(iVar17 + (bVar11 & 0xf));
              puVar14[0x20] = *(undefined1 *)(iVar17 + (uint)(bVar1 >> 4));
              puVar14[0x21] = *(undefined1 *)(iVar17 + (bVar1 & 0xf));
              iVar25 = iVar25 + -1;
              puVar14 = puVar14 + 2;
            } while (iVar25 != 0);
          }
        }
      }
      if ((*(int *)(&stack0x0000000c + DAT_00173610 + iVar8) == 0) ||
         (**(char **)(&stack0x0000000c + DAT_00173610 + iVar8) == '\0')) {
        iVar17 = (int)&piStack_24 + DAT_00173614 + iVar8;
        uVar27 = *(undefined4 *)(iVar17 + -0x4c);
        *puVar33 = *(undefined4 *)(iVar17 + -0x74);
        *(undefined4 *)((int)&local_20 + iVar8) = uVar27;
        *(int *)((int)local_1c + iVar8) = iVar17;
        FUN_000206e0(&DAT_00173618,*(undefined4 *)(iVar17 + -0x14),*(undefined4 *)(iVar17 + -0x78));
      }
      else {
        iVar17 = *(int *)(&stack0x0000000c + DAT_00173610 + iVar8);
      }
      iVar25 = (int)&piStack_24 + DAT_0017361c + iVar8;
      uVar27 = *(undefined4 *)(iVar25 + -0x2c);
      *(undefined4 *)((int)local_1c + iVar8) = *(undefined4 *)(iVar25 + -0x30);
      *(undefined4 *)((int)local_1c + iVar8 + 4) = uVar27;
      *(int *)(&stack0xffffffec + iVar8) = iVar25 + -0x94;
      *(int *)(&stack0xfffffff0 + iVar8) = iVar25;
      uVar27 = *(undefined4 *)(iVar25 + -0x6c);
      *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(iVar25 + -0x40);
      *puVar34 = uVar27;
      FUN_000207ac(iVar17,*(undefined4 *)(iVar25 + -0x98),*(undefined4 *)(iVar25 + -0x68),
                   *(undefined4 *)(iVar25 + -0x70));
    }
    if ((code *)*DAT_00173620 == entry) {
      iVar17 = FUN_0019b388(0x23);
    }
    else {
      iVar17 = (*(code *)*DAT_00173620)(0x23);
    }
    if (iVar17 != 0) {
      FUN_000027f4(iVar17,0x23,&DAT_00173624,(int)&piStack_24 + DAT_0017361c + iVar8);
      *(undefined1 *)(iVar17 + 0x22) = 0;
      FUN_001a23d0(*(undefined4 *)(&stack0x0000003c + DAT_0017362c + iVar8),iVar17);
      if (*(int *)(&stack0x00000044 + DAT_0017362c + iVar8) != 0) {
        if ((code *)*DAT_001735f8 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_0017362c + iVar8));
        }
        else {
          (*(code *)*DAT_001735f8)();
        }
      }
      if (*(int *)(&stack0xffffffec + DAT_001735fc + iVar8) != 0) {
        if ((code *)*DAT_001735f8 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0xffffffec + DAT_001735fc + iVar8));
        }
        else {
          (*(code *)*DAT_001735f8)();
        }
      }
      if (*(int *)(&stack0x00000040 + DAT_0017362c + iVar8) != 0) {
        if ((code *)*DAT_001735f8 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_0017362c + iVar8));
        }
        else {
          (*(code *)*DAT_001735f8)();
        }
      }
      if (*(int *)(&stack0xfffffff0 + DAT_001735fc + iVar8) != 0) {
        if ((code *)*DAT_001735f8 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0xfffffff0 + DAT_001735fc + iVar8));
        }
        else {
          (*(code *)*DAT_001735f8)();
        }
      }
      if (*(int *)(&stack0xfffffff4 + DAT_001735fc + iVar8) != 0) {
        if ((code *)*DAT_001735f8 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0xfffffff4 + DAT_001735fc + iVar8));
        }
        else {
          (*(code *)*DAT_001735f8)();
        }
      }
      iVar7 = DAT_0017362c + iVar7;
      **(undefined4 **)(&stack0x00000190 + iVar7 + 0x24) =
           *(undefined4 *)(&stack0x0000003c + iVar7 + 0x24);
      return 0;
    }
    FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_0017362c + iVar8));
    if (*(int *)(&stack0x00000044 + DAT_0017362c + iVar8) != 0) {
      if ((code *)*DAT_001735f8 == entry) {
        FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_0017362c + iVar8));
      }
      else {
        (*(code *)*DAT_001735f8)();
      }
    }
    if (*(int *)(&stack0xffffffec + DAT_001735fc + iVar8) != 0) {
      if ((code *)*DAT_001735f8 == entry) {
        FUN_0018a280(*(undefined4 *)(&stack0xffffffec + DAT_001735fc + iVar8));
      }
      else {
        (*(code *)*DAT_001735f8)();
      }
    }
    if (*(int *)(&stack0x00000040 + DAT_0017362c + iVar8) != 0) {
      if ((code *)*DAT_001735f8 == entry) {
        FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_0017362c + iVar8));
      }
      else {
        (*(code *)*DAT_001735f8)();
      }
    }
    if (*(int *)(&stack0xfffffff0 + DAT_001735fc + iVar8) != 0) {
      if ((code *)*DAT_001735f8 == entry) {
        FUN_0018a280(*(undefined4 *)(&stack0xfffffff0 + DAT_001735fc + iVar8));
      }
      else {
        (*(code *)*DAT_001735f8)();
      }
    }
    if (*(int *)(&stack0xfffffff4 + DAT_001735fc + iVar8) == 0) {
      return -4;
    }
    pcVar22 = (code *)*DAT_001735f8;
joined_r0x00172ed6:
    if (pcVar22 == entry) {
      FUN_0018a280(*(undefined4 *)(&stack0xfffffff4 + DAT_00173220 + iVar8));
    }
    else {
      (*pcVar22)(*(undefined4 *)(&stack0xfffffff4 + DAT_00173220 + iVar8));
    }
  }
  else {
    iVar17 = FUN_001a6f50(&DAT_00172e20);
    piVar9 = DAT_00172e10;
    *(int *)(&stack0xfffffff0 + DAT_00172e1c + iVar8) = iVar17;
    if (iVar17 == 0) {
      FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8));
      if (*(int *)(&stack0x00000044 + DAT_00172e0c + iVar8) != 0) {
        if ((code *)*DAT_00172e28 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_00172e0c + iVar8));
        }
        else {
          (*(code *)*DAT_00172e28)();
        }
      }
      if (*(int *)(&stack0x00000040 + DAT_00172e0c + iVar8) == 0) {
        return -4;
      }
      pcVar22 = (code *)*DAT_00172e28;
      uVar27 = *(undefined4 *)(&stack0x00000040 + DAT_00172e0c + iVar8);
    }
    else {
      if ((code *)*DAT_00172e10 == entry) {
        iVar17 = FUN_0019b388(10);
      }
      else {
        iVar17 = (*(code *)*DAT_00172e10)(10);
      }
      iVar28 = DAT_00172e1c + iVar28;
      *(int *)(&stack0xfffffff4 + iVar28 + 0x24) = iVar17;
      if (iVar17 != 0) {
        FUN_000027f4(*(undefined4 *)(&stack0xfffffff4 + iVar28 + 0x24),9,&DAT_00172e2c,
                     *(undefined4 *)(&stack0x0000011c + iVar28 + 0x24));
        iVar17 = FUN_001a6f50(*(undefined4 *)(&stack0x00000118 + iVar28 + 0x24));
        *(int *)(&stack0xffffffec + iVar28 + 0x24) = iVar17;
        if (iVar17 == 0) {
          FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00173218 + iVar8));
          if (*(int *)(&stack0x00000044 + DAT_00173218 + iVar8) != 0) {
            if ((code *)*DAT_0017321c == entry) {
              FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_00173218 + iVar8));
            }
            else {
              (*(code *)*DAT_0017321c)();
            }
          }
          if (*(int *)(&stack0x00000040 + DAT_00173218 + iVar8) != 0) {
            if ((code *)*DAT_0017321c == entry) {
              FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_00173218 + iVar8));
            }
            else {
              (*(code *)*DAT_0017321c)();
            }
          }
          puVar10 = DAT_0017321c;
          if ((code *)*DAT_0017321c == entry) {
            FUN_0018a280(*(undefined4 *)(&stack0xfffffff0 + DAT_00173220 + iVar8));
          }
          else {
            (*(code *)*DAT_0017321c)();
          }
          pcVar22 = (code *)*puVar10;
        }
        else {
          uVar13 = FUN_001a6f50(&DAT_00172e20);
          FUN_001a23bc(*(undefined4 *)((int)auStack_54 + iVar28 + 0x34),uVar13);
          uVar13 = FUN_001a6f50(*(undefined4 *)(&stack0xfffffff4 + iVar28 + 0x24));
          FUN_001a23c4(*(undefined4 *)((int)auStack_54 + iVar28 + 0x34),uVar13);
          if (*piVar9 == 0) {
            iVar17 = FUN_000034d0(*(undefined4 *)(&stack0xffffffec + DAT_00172e1c + iVar8));
            iVar17 = FUN_0019b388(iVar17 + 3);
          }
          else {
            iVar17 = FUN_000034d0(*(undefined4 *)(&stack0xffffffec + DAT_00172e1c + iVar8));
            iVar17 = (*(code *)*piVar9)(iVar17 + 3);
          }
          if (iVar17 != 0) {
            FUN_000028d8(iVar17,&DAT_00173224,
                         *(undefined4 *)(&stack0xffffffec + DAT_00173220 + iVar8));
            FUN_001a23b8(*(undefined4 *)(&stack0x0000003c + DAT_00173218 + iVar8),iVar17);
            goto LAB_00172f16;
          }
          FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00173218 + iVar8));
          if (*(int *)(&stack0x00000044 + DAT_00173218 + iVar8) != 0) {
            if ((code *)*DAT_0017321c == entry) {
              FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_00173218 + iVar8));
            }
            else {
              (*(code *)*DAT_0017321c)();
            }
          }
          puVar10 = DAT_0017321c;
          if ((code *)*DAT_0017321c == entry) {
            FUN_0018a280(*(undefined4 *)(&stack0xffffffec + DAT_00173220 + iVar8));
          }
          else {
            (*(code *)*DAT_0017321c)();
          }
          if (*(int *)(&stack0x00000040 + DAT_00173218 + iVar8) != 0) {
            if ((code *)*puVar10 == entry) {
              FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_00173218 + iVar8));
            }
            else {
              (*(code *)*puVar10)();
            }
          }
          if ((code *)*puVar10 == entry) {
            FUN_0018a280(*(undefined4 *)(&stack0xfffffff0 + DAT_00173220 + iVar8));
          }
          else {
            (*(code *)*puVar10)();
          }
          pcVar22 = (code *)*puVar10;
        }
        goto joined_r0x00172ed6;
      }
      FUN_001a1fbc(*(undefined4 *)(&stack0x0000003c + DAT_00172e0c + iVar8));
      if (*(int *)(&stack0x00000044 + DAT_00172e0c + iVar8) != 0) {
        if ((code *)*DAT_00172e28 == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0x00000044 + DAT_00172e0c + iVar8));
        }
        else {
          (*(code *)*DAT_00172e28)();
        }
      }
      if (*(int *)(&stack0x00000040 + DAT_00173218 + iVar8) != 0) {
        if ((code *)*DAT_0017321c == entry) {
          FUN_0018a280(*(undefined4 *)(&stack0x00000040 + DAT_00173218 + iVar8));
        }
        else {
          (*(code *)*DAT_0017321c)();
        }
      }
      pcVar22 = (code *)*DAT_0017321c;
      uVar27 = *(undefined4 *)(&stack0xfffffff0 + DAT_00173220 + iVar8);
    }
    if (pcVar22 == entry) {
      FUN_0018a280(uVar27);
    }
    else {
      (*pcVar22)();
    }
  }
  return -4;
}

