// rea decompile_all
// name: FUN_00041fb8
// address: 0x41fb8
// body: available
// range: 0x41fb8-0x423ab inclusive
// range: 0x42454-0x4287f inclusive
// range: 0x428b0-0x428e3 inclusive
// range: 0x428e6-0x42a63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00041fb8(uint param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int extraout_r1;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  undefined1 *puVar30;
  int *piVar31;
  int *piVar32;
  int iVar33;
  undefined4 *puVar34;
  int local_2c [5];
  uint local_18;
  undefined4 *puVar35;
  int *piVar36;
  undefined4 *puVar37;
  int *piVar38;
  undefined4 *puVar39;
  int *piVar40;
  int *piVar41;
  int *piVar42;
  int *piVar43;
  int *piVar44;
  int *piVar45;
  int *piVar46;
  int *piVar47;
  int *piVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  int *piVar51;
  int *piVar52;
  int *piVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  undefined4 *puVar56;
  uint *puVar57;
  uint *puVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  uint *puVar61;
  int iVar62;
  
  iVar15 = DAT_000423ac;
  local_18 = param_1;
  iVar33 = DAT_000423ac + -0x18;
  iVar20 = DAT_000423ac + -0x18;
  iVar24 = DAT_000423ac + -0x18;
  iVar23 = DAT_000423ac + -0x18;
  iVar4 = DAT_000423ac + -0x18;
  iVar5 = DAT_000423ac + -0x18;
  iVar6 = DAT_000423ac + -0x18;
  iVar7 = DAT_000423ac + -0x18;
  iVar8 = DAT_000423ac + -0x18;
  iVar9 = DAT_000423ac + -0x18;
  iVar10 = DAT_000423ac + -0x18;
  iVar11 = DAT_000423ac + -0x18;
  iVar12 = DAT_000423ac + -0x18;
  iVar13 = DAT_000423ac + -0x18;
  iVar14 = DAT_000423ac + -0x18;
  puVar34 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar35 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  piVar36 = (int *)((int)&local_18 + DAT_000423ac);
  puVar37 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  piVar38 = (int *)((int)&local_18 + DAT_000423ac);
  puVar39 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  piVar40 = (int *)((int)&local_18 + DAT_000423ac);
  piVar41 = (int *)((int)&local_18 + DAT_000423ac);
  piVar42 = (int *)((int)&local_18 + DAT_000423ac);
  piVar43 = (int *)((int)&local_18 + DAT_000423ac);
  piVar44 = (int *)((int)&local_18 + DAT_000423ac);
  piVar45 = (int *)((int)&local_18 + DAT_000423ac);
  piVar46 = (int *)((int)&local_18 + DAT_000423ac);
  piVar47 = (int *)((int)&local_18 + DAT_000423ac);
  piVar48 = (int *)((int)&local_18 + DAT_000423ac);
  puVar49 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar50 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  piVar51 = (int *)((int)&local_18 + DAT_000423ac);
  piVar52 = (int *)((int)&local_18 + DAT_000423ac);
  piVar53 = (int *)((int)&local_18 + DAT_000423ac);
  puVar54 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar55 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar56 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar57 = (uint *)((int)&local_18 + DAT_000423ac);
  puVar58 = (uint *)((int)&local_18 + DAT_000423ac);
  puVar59 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar60 = (undefined4 *)((int)&local_18 + DAT_000423ac);
  puVar61 = (uint *)((int)&local_18 + DAT_000423ac);
  iVar62 = (int)&local_18 + DAT_000423ac;
  iVar18 = DAT_000423b0 + DAT_000423ac + -0x18;
  *(undefined4 *)(&stack0x00000064 + iVar18 + 0x18) = 0;
  *(undefined4 *)(&stack0xfffffffc + DAT_000423ac) = 0;
  iVar18 = *(int *)(&stack0x00000088 + iVar18 + 0x18);
  *(int *)(&stack0x00000060 + DAT_000423b0 + DAT_000423ac) = iVar18 + 0x1fc0;
  uVar19 = thunk_FUN_0002790c(*(undefined4 *)(&DAT_00001fcc + iVar18));
  iVar18 = DAT_000423b4;
  iVar33 = DAT_000423b0 + iVar33;
  *(undefined4 *)(&stack0x00000048 + iVar33 + 0x18) = uVar19;
  iVar33 = *(int *)(&stack0x00000088 + iVar33 + 0x18);
  *(int *)(iVar33 + 0xfc) = *(int *)(iVar33 + 0xdc) + 0x78000000;
  iVar18 = iVar18 + iVar20;
  *(int *)(&stack0xffffffec + iVar18 + 0x18) = *(int *)(&stack0x00000008 + iVar18 + 0x18) + 0x100;
  if (*(char *)(*(int *)(&stack0x00000008 + iVar18 + 0x18) + 0x115) == '\x01') {
    *(undefined4 *)(&stack0xffffffec + iVar15) = *(undefined4 *)(&stack0x00000008 + iVar18 + 0x18);
    iVar20 = *(int *)((int)local_2c + iVar18 + 0x24);
    *(int *)(&stack0x00000004 + iVar15) = iVar20;
    puVar21 = (undefined4 *)thunk_FUN_0002790c(*(undefined4 *)(iVar20 + 0xc));
    piVar28 = DAT_000423b8;
    if (puVar21 != (undefined4 *)0x0) {
      iVar20 = *(int *)(&stack0xffffffec + iVar15);
      do {
        if ((puVar21[0x273] != 0) && (*(int *)(iVar20 + 0xdc) + *piVar28 * 10 == puVar21[0x274])) {
          puVar21[0x274] = puVar21[0x274] + 1;
        }
        puVar21 = (undefined4 *)thunk_FUN_0002790c(*puVar21);
      } while (puVar21 != (undefined4 *)0x0);
    }
    piVar28 = *(int **)(&DAT_00001fb8 + *(int *)(&stack0xffffffec + iVar15));
    if (piVar28 != (int *)0x0) {
      *(int *)(&stack0xfffffff0 + iVar15) = *(int *)(&stack0xffffffec + iVar15) + 0x37;
      *(int *)(&stack0x00000008 + iVar15) = *(int *)(&stack0xffffffec + iVar15) + 0xc0;
      do {
        if ((((piVar28[7] != *DAT_000423bc) || (*(char *)((int)piVar28 + 0x46) != '\0')) ||
            (iVar20 = FUN_00029974(piVar28[8]), iVar20 != 0)) &&
           (((short)piVar28[0x3a] != 0 &&
            (-1 < *(int *)(*(int *)(&stack0x00000008 + iVar15) + 0x1c) -
                  (piVar28[0x2d] + piVar28[0x2c]))))) {
          for (puVar21 = (undefined4 *)
                         thunk_FUN_0002790c(*(undefined4 *)
                                             (*(int *)(&stack0x00000004 + iVar15) + 0xc));
              puVar21 != (undefined4 *)0x0; puVar21 = (undefined4 *)thunk_FUN_0002790c(*puVar21)) {
            if ((piVar28[7] == 0) || (piVar28[7] == puVar21[0x500])) {
              if (*_DAT_000423c0 != 0) {
                uVar19 = FUN_00028288(piVar28 + 1,piVar28[9] + 4,
                                      *(undefined4 *)(&stack0xfffffff0 + iVar15));
                FUN_0002a1c6(2,s____RetrySPSRegistrations___s_000423c1 + 3,uVar19);
              }
              FUN_00043668(*(undefined4 *)(&stack0xffffffec + iVar15),puVar21,piVar28[0x3a]);
            }
          }
        }
        piVar28 = (int *)*piVar28;
      } while (piVar28 != (int *)0x0);
    }
    puVar21 = (undefined4 *)
              thunk_FUN_0002790c(*(undefined4 *)(*(int *)(&stack0x00000004 + iVar15) + 0xc));
    if (puVar21 != (undefined4 *)0x0) {
      iVar20 = *(int *)(&stack0xffffffec + iVar15);
      do {
        iVar18 = puVar21[0x273];
        if (((iVar18 != 0) && (*(int *)(iVar20 + 0xdc) + *DAT_000423b8 * 10 == puVar21[0x274])) &&
           (iVar18 < 8)) {
          puVar21[0x273] = iVar18 + 1;
        }
        puVar21 = (undefined4 *)thunk_FUN_0002790c(*puVar21);
      } while (puVar21 != (undefined4 *)0x0);
    }
  }
  iVar20 = _DAT_000423e0;
  iVar18 = *(int *)(&stack0x00000008 + DAT_000423b4 + iVar15);
  iVar24 = DAT_000423b0 + iVar24;
  *(int *)(&stack0x00000050 + iVar24 + 0x18) = iVar18 + 0x1f80;
  piVar28 = *(int **)(&DAT_00001fb8 + iVar18);
  *(int *)(&stack0x00000058 + iVar24 + 0x18) = *(int *)(&stack0x00000088 + iVar24 + 0x18) + 0x37;
  for (; piVar28 != (int *)0x0; piVar28 = (int *)*piVar28) {
    *(int **)(&stack0x00000018 + iVar15) = piVar28 + 0x18;
    if (*(char *)((int)piVar28 + 0x7f) != '\0') {
      uVar19 = *(undefined4 *)(iVar20 + 0xc);
      uVar25 = *(undefined4 *)(iVar20 + 0x10);
      uVar26 = *(undefined4 *)(iVar20 + 0x14);
      *puVar34 = *(undefined4 *)(iVar20 + 8);
      *(undefined4 *)(&stack0xffffffec + iVar15) = uVar19;
      *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar25;
      *(undefined4 *)(&stack0xfffffff4 + iVar15) = uVar26;
      *(undefined4 *)(&stack0xfffffff8 + iVar15) = *(undefined4 *)(iVar20 + 0x18);
      uVar19 = *(undefined4 *)(iVar20 + 0x20);
      uVar25 = *(undefined4 *)(iVar20 + 0x24);
      uVar26 = *(undefined4 *)(iVar20 + 0x28);
      *(undefined4 *)(&stack0x00000004 + iVar15) = *(undefined4 *)(iVar20 + 0x1c);
      *(undefined4 *)(&stack0x00000008 + iVar15) = uVar19;
      *(undefined4 *)(&stack0x0000000c + iVar15) = uVar25;
      *(undefined4 *)(&stack0x00000010 + iVar15) = uVar26;
      *(undefined4 *)(&stack0x00000014 + iVar15) = *(undefined4 *)(iVar20 + 0x2c);
      *(int *)(&stack0xffffffec + iVar15) = piVar28[0x24];
      uVar19 = piVar28[0x25];
      uVar25 = piVar28[0x26];
      uVar26 = piVar28[0x27];
      *(int *)(&stack0x00000014 + iVar15) = piVar28[0x28];
      *(undefined4 *)(&stack0x00000008 + iVar15) = uVar19;
      *(undefined4 *)(&stack0x0000000c + iVar15) = uVar25;
      *(undefined4 *)(&stack0x00000010 + iVar15) = uVar26;
      if (piVar28[0x24] != 0) {
        FUN_00040634(*(undefined4 *)(&stack0x00000008 + DAT_000423b4 + iVar15),iVar62,piVar28[0x21],
                     &stack0x00000014 + iVar15);
      }
      if ((piVar28[0x25] != 0 || piVar28[0x26] != 0) || (piVar28[0x27] != 0 || piVar28[0x28] != 0))
      {
        FUN_00040634(*(undefined4 *)(&stack0x00000008 + DAT_000423b4 + iVar15),
                     &stack0x00000004 + iVar15,piVar28[0x21]);
      }
      if (*(char *)(*(int *)(&stack0x00000018 + iVar15) + 0x1f) != '\0') {
        uVar19 = FUN_00028288(piVar28 + 1,piVar28[9] + 4,
                              *(undefined4 *)(&stack0x00000058 + DAT_000423b0 + iVar15));
        FUN_0002a1c6(0,s_z__SendResponses__ERROR__rr_>Imm_000423e1 + 3,uVar19);
        *(undefined1 *)(*(int *)(&stack0x00000018 + iVar15) + 0x1f) = 0;
      }
    }
  }
  iVar23 = DAT_000423b4 + iVar23;
  iVar20 = *(int *)(*(int *)(&stack0x00000050 + DAT_000423b0 + iVar15) + 0x38);
  *(int *)(&stack0x00000360 + iVar15) = iVar20;
  *(int *)(&stack0xfffffff4 + iVar23 + 0x18) =
       *(int *)(&stack0x00000008 + iVar23 + 0x18) + DAT_0004241c;
  while (iVar20 != 0) {
    while( true ) {
      iVar20 = *(int *)(&stack0x00000360 + iVar15);
      if ((*(int *)(iVar20 + 0xd0) == 0) || (*(int *)(iVar33 + 0xdc) - *(int *)(iVar20 + 0xd0) < 0))
      goto LAB_00042246;
      uVar22 = *(int *)(iVar20 + 0xcc) + 1;
      *(uint *)(iVar20 + 0xcc) = uVar22;
      if (9 < uVar22) break;
      iVar24 = *(int *)(iVar20 + 0xd0) + *DAT_000423b8 * 6;
      if (iVar24 == 0) {
        iVar24 = 1;
      }
      *(int *)(iVar20 + 0xd0) = iVar24;
    }
    *(undefined4 *)(iVar20 + 0xd0) = 0;
LAB_00042246:
    iVar24 = *(int *)(&stack0x00000360 + iVar15);
    iVar23 = iVar24 + 0x60;
    if (*(char *)(iVar24 + 0x7b) != '\0') {
      iVar18 = *(int *)(&stack0x00000360 + iVar15);
      iVar27 = *(int *)(iVar18 + 0xb0);
      if (-1 < *(int *)(iVar33 + 0xdc) - (*(int *)(iVar18 + 0xb4) + iVar27)) {
        if (*(byte *)(*(int *)(&stack0x00000360 + iVar15) + 4) == 1) {
          iVar20 = *(int *)(&stack0x00000360 + iVar15);
          *(int *)(&stack0x00000004 + iVar15) = iVar20 + 0x41;
          if (*(int3 *)(iVar20 + 0x49) == 0 && *(char *)(iVar20 + 0x4c) == '\0') {
            *(undefined4 *)(iVar18 + 0x84) = *DAT_00042450;
          }
          else {
            if (*_DAT_000423c0 != 0) {
              uVar19 = FUN_00028288(*(int *)(&stack0x00000360 + iVar15) + 4,
                                    *(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x24) + 4,
                                    *(undefined4 *)(&stack0x00000058 + DAT_000423b0 + iVar15));
              *puVar35 = uVar19;
              FUN_0002a1c6(2,s_SendResponses__Sending_wakeup__2_00042420,
                           *(byte *)(iVar24 + 0x7b) - 3,*(int *)(&stack0x00000360 + iVar15) + 0x4f);
            }
            *(undefined4 *)(&stack0xffffffec + iVar15) =
                 *(undefined4 *)(*(int *)(&stack0x00000360 + iVar15) + 0x1c);
            *(int *)(&stack0xfffffff0 + iVar15) = *(int *)(&stack0x00000360 + iVar15) + 0x4f;
            *(int *)(&stack0xfffffff8 + iVar15) = *(int *)(&stack0x00000360 + iVar15) + 0x55;
            iVar20 = *(int *)(&stack0xfffffff4 + DAT_000423b4 + iVar15);
            *(int *)(&stack0xfffffff4 + iVar15) = iVar20;
            puVar21 = *(undefined4 **)(*(int *)(&stack0x00000060 + DAT_000423b0 + iVar15) + 0xc);
LAB_00042344:
            if (puVar21 == (undefined4 *)0x0) {
              FUN_0002a1c6(0,DAT_00042884,*(int *)(&stack0xffffffec + iVar15));
            }
            else {
              if (puVar21[0x500] != *(int *)(&stack0xffffffec + iVar15)) goto LAB_00042342;
              FUN_001c6cb8(iVar20,*(undefined4 *)(&stack0xfffffff0 + iVar15));
              puVar30 = (undefined1 *)(iVar20 + 5);
              iVar24 = 3;
              do {
                puVar30[1] = *(undefined1 *)(puVar21 + 0x50b);
                puVar30 = puVar30 + 2;
                iVar24 = iVar24 + -1;
                *puVar30 = *(undefined1 *)(puVar21 + 0x50b);
              } while (iVar24 != 0);
              *(undefined1 *)(iVar20 + 0xc) = 8;
              *(undefined1 *)(iVar20 + 0xd) = 0x42;
              FUN_00003c08(iVar20 + 0xe,6,0xff);
              iVar23 = 0;
              iVar24 = 0;
              do {
                FUN_001c6cb8(iVar20 + 0x14 + iVar23,*(undefined4 *)(&stack0xfffffff0 + iVar15));
                iVar23 = iVar23 + 6;
                iVar24 = iVar24 + 1;
              } while (iVar24 < 0x10);
              FUN_001c6cb8(iVar20 + 0x74,*(undefined4 *)(&stack0xfffffff8 + iVar15));
              FUN_001e58ec(*(undefined4 *)(&stack0xfffffff4 + iVar15),iVar20 + 0x7a,
                           *(undefined4 *)(&stack0xffffffec + iVar15));
              FUN_001c6dd0(*(undefined4 *)(&stack0xfffffff4 + iVar15),0xff);
              FUN_001e58ec(*(undefined4 *)(&stack0xfffffff4 + iVar15),iVar20 + 0x7a,
                           *(undefined4 *)(&stack0xffffffec + iVar15));
            }
            uVar19 = DAT_00042880;
            piVar28 = *(int **)(&stack0x00000360 + iVar15);
            if (piVar28 != (int *)0x0) {
              *(int *)(&stack0x00000008 + iVar15) = (int)piVar28 + 0x51;
              do {
                *(int **)(&stack0x00000000 + iVar15) = piVar28 + 0x18;
                if (((*(char *)((int)piVar28 + 0x7b) != '\0') &&
                    (piVar28[7] == *(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x1c))) &&
                   ((*(short *)((int)piVar28 + 0x4f) ==
                     *(short *)(*(int *)(&stack0x00000004 + iVar15) + 0xe) &&
                    ((*(short *)((int)piVar28 + 0x51) == **(short **)(&stack0x00000008 + iVar15) &&
                     (*(short *)((int)piVar28 + 0x53) ==
                      *(short *)(*(int *)(&stack0x00000008 + iVar15) + 2))))))) {
                  if ((piVar28[0x17] == 6) && (*(char *)((int)piVar28 + 0x7b) == '\x12')) {
                    if (*DAT_00042888 != 0) {
                      uVar25 = FUN_00028288(piVar28 + 1,piVar28[9] + 4,
                                            *(undefined4 *)
                                             (&stack0x00000058 + DAT_0004288c + iVar15));
                      *(undefined4 *)(&stack0xffffffec + iVar15) = uVar25;
                      iVar20 = *(int *)(&stack0x00000000 + iVar15);
                      *piVar36 = (int)piVar28 + 0x4f;
                      FUN_0002a1c6(2,DAT_00042890,*(byte *)(iVar20 + 0x1b) - 3,(int)piVar28 + 0x49);
                    }
                    *(int *)(&stack0xffffffec + iVar15) = (int)piVar28 + 0x4f;
                    *puVar37 = *(undefined4 *)(&stack0x00000000 + iVar15);
                    *(undefined4 *)(&stack0xfffffff4 + iVar15) = DAT_00042894;
                    *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar19;
                    FUN_000408d8(*(undefined4 *)(&stack0x00000008 + DAT_00042898 + iVar15),0x88,0x20
                                 ,piVar28);
                  }
                  piVar28[0x2d] = *(int *)(iVar33 + 0xdc);
                  bVar17 = *(char *)(*(int *)(&stack0x00000000 + iVar15) + 0x1b) - 1;
                  *(byte *)(*(int *)(&stack0x00000000 + iVar15) + 0x1b) = bVar17;
                  if (bVar17 < 4) {
                    FUN_001c6cb8((int)piVar28 + 0x49,DAT_0004289c);
                  }
                }
                piVar28 = (int *)*piVar28;
              } while (piVar28 != (int *)0x0);
            }
          }
        }
        else if (((((*(byte *)(*(int *)(&stack0x00000360 + iVar15) + 4) & 0x3f) >> 2 != 0) &&
                  ((*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x2c) == 0 ||
                   ((*(byte *)(*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x2c) + 4) & 0x3f) >>
                    2 != 0)))) &&
                 ((*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x30) == 0 ||
                  ((*(byte *)(*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x30) + 4) & 0x3f) >> 2
                   != 0)))) &&
                ((*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x34) == 0 ||
                 ((*(byte *)(*(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x34) + 4) & 0x3f) >> 2
                  != 0)))) {
          iVar29 = *(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x5c);
          if (iVar29 == 0) {
            *(int *)(iVar18 + 0x84) = *DAT_000428ac;
            if (*(int *)(&stack0xfffffffc + iVar15) < iVar27) {
              *(int *)(&stack0xfffffffc + iVar15) = iVar27;
            }
            if (*(int *)(iVar20 + 0xd4) != 0) {
              *(undefined4 *)(iVar20 + 0xd4) = 0;
            }
          }
          else {
            *(char *)(iVar24 + 0x7b) = *(char *)(iVar24 + 0x7b) + -1;
            *(int *)(iVar18 + 0xb0) = iVar27 << 1;
            *(undefined4 *)(iVar18 + 0xb4) = *(undefined4 *)(iVar33 + 0xdc);
            if (iVar29 == 4) {
              if (*DAT_00042888 != 0) {
                uVar19 = FUN_00028288(*(int *)(&stack0x00000360 + iVar15) + 4,
                                      *(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x24) + 4,
                                      *(undefined4 *)(&stack0x00000058 + DAT_0004288c + iVar15));
                iVar20 = *(int *)(&stack0x00000360 + iVar15);
                *piVar38 = *(int *)(&stack0x00000360 + iVar15) + 0x4f;
                *(undefined4 *)(&stack0xffffffec + iVar15) = uVar19;
                FUN_0002a1c6(2,DAT_000428a0,*(undefined1 *)(iVar24 + 0x7b),iVar20 + 0x49);
              }
              *(undefined4 *)(&stack0xfffffff0 + iVar15) = DAT_000428a4;
              *puVar39 = DAT_0004289c;
              *(int *)(&stack0xffffffec + iVar15) = iVar23;
              FUN_0004050c(*(undefined4 *)(&stack0x00000008 + DAT_00042898 + iVar15),1,
                           *(undefined4 *)(&stack0x00000360 + iVar15),iVar23);
            }
            else if (iVar29 == 6) {
              if (*DAT_00042888 != 0) {
                uVar19 = FUN_00028288(*(int *)(&stack0x00000360 + iVar15) + 4,
                                      *(int *)(*(int *)(&stack0x00000360 + iVar15) + 0x24) + 4,
                                      *(undefined4 *)(&stack0x00000058 + DAT_0004288c + iVar15));
                iVar20 = *(int *)(&stack0x00000360 + iVar15);
                *piVar40 = *(int *)(&stack0x00000360 + iVar15) + 0x4f;
                *(undefined4 *)(&stack0xffffffec + iVar15) = uVar19;
                FUN_0002a1c6(2,DAT_000428a8,*(undefined1 *)(iVar24 + 0x7b),iVar20 + 0x49);
              }
              *(undefined4 *)(&stack0xfffffff0 + iVar15) = DAT_00042880;
              *(undefined4 *)(&stack0xffffffec + iVar15) = 0;
              *(undefined4 *)(&stack0xfffffff4 + iVar15) = DAT_00042894;
              *piVar41 = iVar23;
              FUN_000408d8(*(undefined4 *)(&stack0x00000008 + DAT_00042898 + iVar15),0x88,0x20,
                           *(undefined4 *)(&stack0x00000360 + iVar15));
            }
          }
        }
      }
    }
    iVar20 = **(int **)(&stack0x00000360 + iVar15);
    *(int *)(&stack0x00000360 + iVar15) = iVar20;
  }
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_0004288c + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    iVar20 = *DAT_000428ac;
    do {
      if (((piVar28[7] != 0) && (piVar28[0x21] != 0)) ||
         (((iVar24 = piVar28[0x2c], iVar24 <= *(int *)(&stack0xfffffffc + iVar15) &&
           (((((*(char *)((int)piVar28 + 0x7b) != '\0' &&
               (-1 < (*(int *)(iVar33 + 0xdc) + iVar24 / 2) - (piVar28[0x2d] + iVar24))) &&
              (piVar28[0x17] == 0)) && ((*(byte *)(piVar28 + 1) & 0x3f) >> 2 != 0)) &&
            ((piVar28[0xb] == 0 || ((*(byte *)(piVar28[0xb] + 4) & 0x3f) >> 2 != 0)))))) &&
          (((piVar28[0xc] == 0 || ((*(byte *)(piVar28[0xc] + 4) & 0x3f) >> 2 != 0)) &&
           ((piVar28[0xd] == 0 || ((*(byte *)(piVar28[0xd] + 4) & 0x3f) >> 2 != 0)))))))) {
        piVar28[0x21] = iVar20;
      }
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_0004288c + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    *(undefined **)(&stack0xfffffffc + iVar15) =
         &DAT_00001c80 + *(int *)(&stack0x00000008 + DAT_00042898 + iVar15);
    *(undefined **)(&stack0x00000004 + iVar15) =
         &DAT_00001c40 + *(int *)(&stack0x00000008 + DAT_00042898 + iVar15);
    *(int *)(&stack0x00000000 + iVar15) =
         *(int *)(&stack0x00000008 + DAT_00042898 + iVar15) + 0x1cc0;
    do {
      *(int **)(&stack0xfffffff0 + iVar15) = piVar28 + 0x20;
      if (piVar28[0x21] != 0) {
        if ((*(short *)((int)piVar28 + 6) == 0x21) &&
           (piVar31 = *(int **)(*(int *)(&stack0x00000050 + DAT_0004288c + iVar15) + 0x38),
           piVar31 != (int *)0x0)) {
          do {
            if ((((((*(short *)((int)piVar31 + 6) == 1) || (*(short *)((int)piVar31 + 6) == 0x1c))
                  && ((*(byte *)(piVar31 + 1) & 0x3f) >> 2 != 0)) &&
                 ((((piVar31[0xb] == 0 || ((*(byte *)(piVar31[0xb] + 4) & 0x3f) >> 2 != 0)) &&
                   ((piVar31[0xc] == 0 || ((*(byte *)(piVar31[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
                  (((piVar31[0xd] == 0 || ((*(byte *)(piVar31[0xd] + 4) & 0x3f) >> 2 != 0)) &&
                   (-1 < *(int *)(*(int *)(&stack0xfffffff0 + iVar15) + 0x38) - piVar31[0x2e]))))))
                && ((piVar28[6] == piVar31[5] &&
                    (iVar20 = FUN_000400ea(piVar28[9] + 10,piVar31[8]), iVar20 != 0)))) &&
               ((*(int *)(*(int *)(&stack0xfffffff0 + iVar15) + 4) == *DAT_000428ac ||
                (*(int *)(*(int *)(&stack0xfffffff0 + iVar15) + 4) == piVar31[7])))) {
              piVar31[0x22] = piVar31[7];
            }
            piVar31 = (int *)*piVar31;
          } while (piVar31 != (int *)0x0);
          if (*(int *)(*(int *)(&stack0xfffffff0 + iVar15) + 4) == 0) goto LAB_0004280e;
        }
        if ((((((char)piVar28[1] == '\b') && (*(short *)((int)piVar28 + 6) == 0xc)) &&
             (((*(byte *)(*(int *)(&stack0x00000004 + iVar15) + 0x18) & 0x3f) >> 2 != 0 &&
              ((**(int **)(&stack0xfffffffc + iVar15) == 0 ||
               ((*(byte *)(**(int **)(&stack0xfffffffc + iVar15) + 4) & 0x3f) >> 2 != 0)))))) &&
            ((*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 4) == 0 ||
             ((*(byte *)(*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 4) + 4) & 0x3f) >> 2 != 0)))
            ) && (((*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 8) == 0 ||
                   ((*(byte *)(*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 8) + 4) & 0x3f) >> 2
                    != 0)) &&
                  (iVar20 = FUN_00040098(piVar28[9] + 4,
                                         *(undefined4 *)(*(int *)(&stack0x00000004 + iVar15) + 0x34)
                                        ), iVar20 != 0)))) {
          if (*(int *)(*(int *)(&stack0x00000000 + iVar15) + 0x18) == 0) {
            *(undefined4 *)(*(int *)(&stack0x00000000 + iVar15) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0xfffffff0 + iVar15) + 4);
          }
          else {
            *(int *)(*(int *)(&stack0x00000000 + iVar15) + 0x18) = *DAT_000428ac;
          }
        }
      }
LAB_0004280e:
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  for (piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_0004288c + iVar15) + 0x38);
      piVar28 != (int *)0x0; piVar28 = (int *)*piVar28) {
    if ((*(byte *)(piVar28 + 1) & 0x32) != 0) {
      *piVar42 = (int)(piVar28 + 0x20);
      if (piVar28[0x21] == 0) {
        if (*(int *)(*piVar45 + 8) != 0) {
          for (piVar31 = *(int **)(*(int *)(&stack0x00000050 + DAT_00042cd4 + iVar15) + 0x38);
              piVar31 != (int *)0x0; piVar31 = (int *)*piVar31) {
            if ((((*(byte *)(piVar31 + 1) & 0x3f) >> 2 != 0) &&
                ((piVar31[0xb] == 0 || ((*(byte *)(piVar31[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
               (((piVar31[0xc] == 0 || ((*(byte *)(piVar31[0xc] + 4) & 0x3f) >> 2 != 0)) &&
                (((piVar31[0xd] == 0 || ((*(byte *)(piVar31[0xd] + 4) & 0x3f) >> 2 != 0)) &&
                 ((piVar31[0x22] != *(int *)(*piVar46 + 8) &&
                  ((*(short *)((int)piVar31 + 6) == *(short *)((int)piVar28 + 6) &&
                   (iVar20 = FUN_00040394(piVar31,piVar28), iVar20 != 0)))))))))) {
              piVar31[0x22] = *(undefined4 *)(*piVar47 + 8);
            }
          }
        }
      }
      else {
        for (piVar31 = *(int **)(*(int *)(&stack0x00000050 + DAT_0004288c + iVar15) + 0x38);
            piVar31 != (int *)0x0; piVar31 = (int *)*piVar31) {
          if (((((*(byte *)(piVar31 + 1) & 0x3f) >> 2 != 0) &&
               ((piVar31[0xb] == 0 || ((*(byte *)(piVar31[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
              ((piVar31[0xc] == 0 || ((*(byte *)(piVar31[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
             (((piVar31[0xd] == 0 || ((*(byte *)(piVar31[0xd] + 4) & 0x3f) >> 2 != 0)) &&
              ((piVar31[0x21] != *DAT_000428ac &&
               (((piVar31[0x21] != *(int *)(*piVar43 + 4) &&
                 (*(short *)((int)piVar31 + 6) == *(short *)((int)piVar28 + 6))) &&
                (iVar20 = FUN_00040394(piVar31,piVar28), iVar20 != 0)))))))) {
            if (piVar31[0x21] == 0) {
              iVar20 = *(int *)(*piVar44 + 4);
            }
            else {
              iVar20 = *DAT_00042cd0;
            }
            piVar31[0x21] = iVar20;
          }
        }
      }
    }
  }
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_00042cd4 + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    *(int *)(&stack0xfffffff4 + iVar15) =
         *(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15) + 0x1400;
    do {
      iVar20 = piVar28[0x21];
      if (iVar20 == *DAT_00042cd0) {
        iVar24 = 0;
        if ((*(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15) != 0) &&
           (iVar24 = piVar28[7], iVar24 == 0)) {
          iVar24 = **(int **)(&stack0xfffffff4 + iVar15);
        }
        piVar28[0x23] = iVar24;
        piVar28[0x22] = 0;
        piVar28[0x2e] = *(int *)(iVar33 + 0xdc);
        piVar28[0x2f] = iVar20;
        if ((*(char *)((int)piVar28 + 0x7b) != '\0') &&
           (iVar20 = piVar28[0x2c],
           -1 < (*(int *)(iVar33 + 0xdc) + iVar20 / 2) - (piVar28[0x2d] + iVar20))) {
          *(char *)((int)piVar28 + 0x7b) = *(char *)((int)piVar28 + 0x7b) + -1;
          if ((char)piVar28[1] != '\x01') {
            piVar28[0x2c] = iVar20 << 1;
          }
          piVar28[0x2d] = *(int *)(iVar33 + 0xdc);
        }
      }
      else if (iVar20 != 0) {
        piVar28[0x22] = 0;
        piVar28[0x23] = iVar20;
        piVar28[0x2e] = *(int *)(iVar33 + 0xdc);
        piVar28[0x2f] = iVar20;
      }
      FUN_0004408c(*(undefined4 *)(&stack0x00000008 + DAT_00042cd8 + iVar15),piVar28);
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  if (*(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15) == 0) goto LAB_00043440;
  iVar4 = DAT_00042cd8 + iVar4;
  *(int *)(&stack0xfffffff0 + iVar4 + 0x18) =
       *(int *)(&stack0x00000008 + iVar4 + 0x18) + DAT_00042cdc;
  *(undefined1 **)(&stack0xfffffff8 + iVar4 + 0x18) = &stack0x00000154 + iVar15;
  *(undefined1 **)(&stack0x00000000 + iVar4 + 0x18) = &stack0x00000258 + iVar15;
  *(int *)(&stack0xfffffffc + iVar4 + 0x18) = *(int *)(&stack0x00000008 + iVar4 + 0x18) + 0x1c;
  piVar28 = (int *)((int)&local_18 + DAT_00042cd8 + iVar15);
  *piVar28 = *(int *)(&stack0x00000008 + iVar4 + 0x18) + DAT_00042ce0;
  iVar5 = DAT_00042cd4 + iVar5;
  *(int *)(&stack0x0000005c + iVar5 + 0x18) = piVar28[8] + DAT_00042ce8;
  *(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) =
       *(int *)(&stack0x00000088 + iVar5 + 0x18) + DAT_00042ce4;
  if ((*(int *)(*(int *)(&stack0xffffffec + DAT_00042cd8 + iVar15) + 0x1c) == 0) ||
     (*(int *)(*(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15) + 0x142c) == 0)) {
    iVar20 = 0;
  }
  else {
    iVar20 = *(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15);
    if (((*(short *)(*(int *)(&stack0x00000008 + DAT_00042cd8 + iVar15) + 0x1c) ==
          *(short *)(iVar20 + 0x142c)) &&
        (*(short *)(*(int *)(&stack0x00000008 + DAT_00042cd8 + iVar15) + 0x1e) ==
         *(short *)(iVar20 + 0x142e))) &&
       (*(short *)(*(int *)(&stack0x00000008 + DAT_00042cd8 + iVar15) + 0x20) ==
        *(short *)(iVar20 + 0x1430))) {
      iVar20 = 0xc;
    }
    else {
      iVar20 = 0x12;
    }
    iVar20 = iVar20 + 0xb;
  }
  *(int *)(&stack0x00000364 + iVar15) = iVar20;
  iVar6 = DAT_00042cd8 + iVar6;
  *(undefined4 *)((int)local_2c + iVar6 + 0x18) = *(undefined4 *)(&stack0xfffffff4 + iVar6 + 0x18);
  FUN_000291f8(*(undefined4 *)(&stack0x0000005c + DAT_00042cd4 + iVar15),*DAT_00042cf0,*DAT_00042cec
              );
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_00042cd4 + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    *(int *)(&stack0xfffffffc + iVar15) = *(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15) + 0x980
    ;
    iVar20 = *(int *)(&stack0x00000048 + DAT_00042cd4 + iVar15);
    do {
      if (((piVar28[0x23] == *(int *)(iVar20 + 0x1400)) && (piVar28[7] == *DAT_00042cf4)) &&
         (iVar24 = FUN_001e5aea(piVar28,*(undefined4 *)(&stack0x00000048 + DAT_00042cd4 + iVar15)),
         iVar24 == 0)) {
        if (*DAT_00042cf8 != 0) {
          for (puVar21 = *(undefined4 **)(*(int *)(&stack0x00000060 + DAT_00042cd4 + iVar15) + 0xc);
              puVar21 != (undefined4 *)0x0; puVar21 = (undefined4 *)*puVar21) {
            if (puVar21[0x500] == piVar28[0x23]) {
              iVar24 = (int)puVar21 + DAT_00042cfc;
              goto LAB_00042b80;
            }
          }
          iVar24 = 0;
LAB_00042b80:
          *piVar48 = iVar24;
          uVar19 = FUN_00028288(piVar28 + 1,piVar28[9] + 4,
                                *(undefined4 *)(&stack0x00000058 + DAT_00042cd4 + iVar15));
          FUN_0002a1c6(3,s_SendResponses__Not_Sending__s__o_00042d00,uVar19,*puVar49);
        }
        iVar24 = FUN_00028124(*(undefined4 *)(&stack0x00000048 + DAT_00042cd4 + iVar15));
        piVar28[0x23] = iVar24;
      }
      else if (piVar28[0x23] == *(int *)(iVar20 + 0x1400)) {
        *(int *)(&stack0x0000035c + iVar15) = piVar28[9];
        *(uint *)(&stack0x00000358 + iVar15) = (uint)*(ushort *)(piVar28 + 4);
        uVar22 = (uint)*(byte *)(piVar28 + 1);
        if ((uVar22 == 1) ||
           (((*(char *)(*(int *)(&stack0xffffffec + DAT_00042cd8 + iVar15) + 0x15) == '\x02' &&
             (*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 8) == 0)) &&
            ((*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 0x1c) == 0 &&
             (*(int *)(*(int *)(&stack0xfffffffc + iVar15) + 0x30) == 0)))))) {
          uVar19 = 0;
        }
        else {
          uVar19 = 1;
        }
        *(undefined4 *)(&stack0xfffffff4 + iVar15) = uVar19;
        *(int **)(&stack0x00000004 + iVar15) = piVar28 + 0x30;
        if ((piVar28[0x30] != 0) && (*(int *)(&stack0xfffffff4 + iVar15) != 0)) {
          if (((((uVar22 & 0x3f) >> 2 != 0) &&
               ((piVar28[0xb] == 0 || ((*(byte *)(piVar28[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
              ((piVar28[0xc] == 0 || ((*(byte *)(piVar28[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
             ((((piVar28[0xd] == 0 || ((*(byte *)(piVar28[0xd] + 4) & 0x3f) >> 2 != 0)) &&
               (uVar22 == 8)) &&
              (*(int **)(&stack0x00000008 + iVar15) = piVar28 + 0x18, (char)piVar28[0x1f] != '\0')))
             ) {
            if (((*(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1a) != 0) ||
                (*(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1c) != 0)) ||
               (iVar24 = DAT_00042d28,
               *(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1e) != 0)) {
              iVar24 = 0x5a0;
            }
            *(int *)(&stack0xffffffec + iVar15) =
                 ((iVar24 + *(int *)(&stack0x00000008 + DAT_00042cd8 + iVar15)) -
                 *(int *)(&stack0x00000364 + iVar15)) + DAT_00042d2c;
            iVar24 = DAT_00042cd8 + iVar7;
            *puVar50 = 0;
            iVar24 = FUN_0003ef54(*(undefined4 *)((int)local_2c + iVar24 + 0x20),
                                  *(undefined4 *)((int)local_2c + iVar24 + 0x18),
                                  *(undefined4 *)(&stack0xfffffff0 + iVar24 + 0x18),piVar28 + 1);
            if (iVar24 == 0) goto LAB_00042dec;
            *(int *)(&stack0x00000054 + DAT_00042cd4 + iVar15) = iVar24;
            *(undefined1 *)(*(int *)(&stack0x00000008 + iVar15) + 0x1c) = 0;
          }
          FUN_0004401c(piVar28 + 1,**(undefined4 **)(&stack0x00000004 + iVar15),
                       *(undefined2 *)(*(undefined4 **)(&stack0x00000004 + iVar15) + 1));
        }
        if ((*(byte *)(piVar28 + 1) & 0x32) != 0) {
          *(ushort *)(piVar28 + 2) = *(ushort *)(piVar28 + 2) | 0x8000;
        }
        if (((*(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1a) != 0) ||
            (*(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1c) != 0)) ||
           (iVar24 = DAT_0004312c,
           *(short *)(*(int *)(&stack0x00000044 + DAT_00042cd4 + iVar15) + 0x1e) != 0)) {
          iVar24 = 0x5a0;
        }
        iVar23 = 0;
        if (*(int *)(&stack0xfffffff4 + iVar15) != 0) {
          iVar23 = piVar28[3];
        }
        *(int *)(&stack0xffffffec + iVar15) =
             ((iVar24 + *(int *)(&stack0x00000008 + DAT_00043130 + iVar15)) -
             *(int *)(&stack0x00000364 + iVar15)) + DAT_00043134;
        *piVar51 = iVar23;
        iVar24 = DAT_00043130 + iVar8;
        uVar19 = FUN_0003ef54(*(undefined4 *)((int)local_2c + iVar24 + 0x20),
                              *(undefined4 *)((int)local_2c + iVar24 + 0x18),
                              *(undefined4 *)(&stack0xfffffff0 + iVar24 + 0x18),piVar28 + 1);
        *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar19;
        *(ushort *)(piVar28 + 2) = *(ushort *)(piVar28 + 2) & 0x7fff;
        if (*(int *)(&stack0xfffffff0 + iVar15) != 0) {
          *(int *)(&stack0x00000054 + DAT_00043138 + iVar15) = *(int *)(&stack0xfffffff0 + iVar15);
          *(char *)(piVar28 + 0x1f) = (char)*(undefined4 *)(&stack0xfffffff4 + iVar15);
        }
        if ((**(int **)(&stack0x00000004 + iVar15) != 0) &&
           (*(int *)(&stack0xfffffff4 + iVar15) != 0)) {
          FUN_0004401c(piVar28 + 1,*(undefined4 *)(&stack0x0000035c + iVar15),
                       *(undefined4 *)(&stack0x00000358 + iVar15));
        }
        if ((((*(int *)(&stack0x00000064 + DAT_00043138 + iVar15) == 0) &&
             (*(int *)(&stack0xfffffff4 + iVar15) != 0)) &&
            ((*(byte *)(piVar28 + 1) & 0x3f) >> 4 != 0)) && (piVar28[0x20] == 0)) {
          piVar28[0x20] = *DAT_0004313c;
        }
        if (*(int *)(&stack0xfffffff0 + iVar15) != 0) {
          if ((piVar28[0x21] == *DAT_0004313c) && (piVar28[7] == *_DAT_00043140)) {
            iVar24 = FUN_00028124(*(undefined4 *)(&stack0x00000048 + DAT_00043138 + iVar15));
          }
          else {
            iVar24 = 0;
          }
          piVar28[0x23] = iVar24;
        }
      }
LAB_00042dec:
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  *(undefined4 *)(&stack0xfffffff0 + iVar15) =
       *(undefined4 *)(&stack0x00000054 + DAT_00043138 + iVar15);
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_00043138 + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    piVar31 = (int *)(*(int *)(&stack0x00000048 + DAT_00043138 + iVar15) + 0x1400);
    do {
      *(int **)(&stack0xfffffff4 + iVar15) = piVar28 + 0x20;
      if (((((piVar28[0x22] == *piVar31) && ((*(byte *)(piVar28 + 1) & 0x3f) >> 2 != 0)) &&
           ((piVar28[0xb] == 0 || ((*(byte *)(piVar28[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
          ((piVar28[0xc] == 0 || ((*(byte *)(piVar28[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
         ((piVar28[0xd] == 0 || ((*(byte *)(piVar28[0xd] + 4) & 0x3f) >> 2 != 0)))) {
        if (*(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1a) == 0) {
          if ((*(byte *)(piVar28 + 1) & 0x32) != 0) {
            for (piVar32 = *(int **)(*(int *)(&stack0x00000050 + DAT_00043138 + iVar15) + 0x38);
                piVar32 != (int *)0x0; piVar32 = (int *)*piVar32) {
              if ((((piVar32[0x2e] == *(int *)(iVar33 + 0xdc)) && (piVar32[0x2f] == *piVar31)) &&
                  (*(short *)((int)piVar32 + 6) == *(short *)((int)piVar28 + 6))) &&
                 (iVar20 = FUN_00040394(piVar32,piVar28), iVar20 != 0)) goto LAB_00042e9a;
            }
          }
          *(undefined4 *)(*(int *)(&stack0xfffffff4 + iVar15) + 8) = 0;
        }
        else {
LAB_00042e9a:
          if (*(int *)(&stack0xfffffff0 + iVar15) != 0) {
            if (((*(int *)(&stack0x00000064 + DAT_00043138 + iVar15) == 0) &&
                ((*(byte *)(piVar28 + 1) & 0x3f) >> 4 != 0)) &&
               (**(int **)(&stack0xfffffff4 + iVar15) == 0)) {
              **(int **)(&stack0xfffffff4 + iVar15) = *DAT_0004313c;
            }
            if ((*(byte *)(piVar28 + 1) & 0x32) != 0) {
              *(ushort *)(piVar28 + 2) = *(ushort *)(piVar28 + 2) | 0x8000;
            }
            if (((*(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1a) != 0) ||
                (*(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1c) != 0)) ||
               (iVar20 = DAT_0004312c,
               *(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1e) != 0)) {
              iVar20 = 0x5a0;
            }
            iVar24 = piVar28[3];
            *(int *)(&stack0xffffffec + iVar15) =
                 ((iVar20 + *(int *)(&stack0x00000008 + DAT_00043130 + iVar15)) -
                 *(int *)(&stack0x00000364 + iVar15)) + DAT_00043134;
            *piVar52 = iVar24;
            puVar21 = (undefined4 *)((int)&local_18 + DAT_00043130 + iVar15);
            uVar19 = FUN_0003ef54(puVar21[-3],*(undefined4 *)(&stack0xfffffff0 + iVar15),*puVar21,
                                  piVar28 + 1);
            *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar19;
            *(ushort *)(piVar28 + 2) = *(ushort *)(piVar28 + 2) & 0x7fff;
            if (*(int *)(&stack0xfffffff0 + iVar15) != 0) {
              *(int *)(&stack0x00000054 + DAT_00043138 + iVar15) =
                   *(int *)(&stack0xfffffff0 + iVar15);
              *(undefined4 *)(*(int *)(&stack0xfffffff4 + iVar15) + 8) = 0;
              *(undefined1 *)(piVar28 + 0x1f) = 1;
              *(undefined4 *)(*(int *)(&stack0xfffffff4 + iVar15) + 0x38) =
                   *(undefined4 *)(iVar33 + 0xdc);
              *(int *)(*(int *)(&stack0xfffffff4 + iVar15) + 0x3c) = *piVar31;
            }
          }
        }
      }
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  piVar28 = *(int **)(*(int *)(&stack0x00000050 + DAT_00043138 + iVar15) + 0x38);
  if (piVar28 != (int *)0x0) {
    *(int *)(&stack0x00000368 + iVar15) =
         *(int *)(&stack0x00000048 + DAT_00043138 + iVar15) + 0x1400;
    do {
      piVar31 = piVar28 + 0x20;
      if ((*piVar31 == *DAT_0004313c) || (*piVar31 == **(int **)(&stack0x00000368 + iVar15))) {
        *(undefined4 *)(&stack0xfffffff0 + iVar15) = 0;
        *(undefined4 *)(&stack0xfffffff4 + iVar15) = 0;
        *(undefined4 *)(&stack0xffffffec + iVar15) = 2;
        *(undefined4 *)(&stack0xfffffff8 + iVar15) = 0;
        *piVar53 = piVar28[3];
        FUN_001e9a9c(&stack0xfffffffc + iVar15,0,*_DAT_00043140,0x2f);
        *(ushort *)(&stack0x00000004 + iVar15) = *(ushort *)(&stack0x00000004 + iVar15) | 0x8000;
        uVar22 = FUN_00025d12(piVar28[8],piVar28[8] + 0x100);
        if (uVar22 < 0x101) {
          FUN_001e57d8(*(undefined4 *)(&stack0xfffffff8 + DAT_00043130 + iVar15),piVar28[8],uVar22);
        }
        else {
          (&stack0x00000154)[iVar15] = 0;
        }
        FUN_001e58ac(*(undefined4 *)(&stack0x00000000 + DAT_00043130 + iVar15),0x20);
        for (piVar32 = *(int **)(*(int *)(&stack0x00000050 + DAT_00043138 + iVar15) + 0x38);
            piVar32 != (int *)0x0; piVar32 = (int *)*piVar32) {
          if ((((*(byte *)(piVar32 + 1) & 0x3f) >> 2 != 0) &&
              ((piVar32[0xb] == 0 || ((*(byte *)(piVar32[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
             (((piVar32[0xc] == 0 || ((*(byte *)(piVar32[0xc] + 4) & 0x3f) >> 2 != 0)) &&
              (((piVar32[0xd] == 0 || ((*(byte *)(piVar32[0xd] + 4) & 0x3f) >> 2 != 0)) &&
               (iVar20 = FUN_00040394(piVar32,piVar28), iVar20 != 0)))))) {
            uVar1 = *(ushort *)((int)piVar32 + 6);
            if (0xfe < uVar1) {
              uVar19 = FUN_00028288(piVar32 + 1,piVar32[9] + 4,
                                    *(undefined4 *)(&stack0x00000058 + DAT_00043138 + iVar15));
              FUN_0002a1c6(0,s_r__Can_t_create_NSEC_for_record___00043141 + 3,uVar19);
              if (piVar32 != (int *)0x0) {
                if (*(int *)(&stack0x00000054 + DAT_00043138 + iVar15) == 0) goto LAB_00043100;
                goto LAB_0004310a;
              }
              break;
            }
            iVar20 = (uint)(uVar1 >> 3) + iVar15;
            (&stack0x00000258)[iVar20] = (&stack0x00000258)[iVar20] | (byte)(0x80 >> (uVar1 & 7));
          }
        }
        if (((*(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1a) != 0) ||
            (*(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1c) != 0)) ||
           (iVar20 = DAT_0004312c,
           *(short *)(*(int *)(&stack0x00000044 + DAT_00043138 + iVar15) + 0x1e) != 0)) {
          iVar20 = 0x5a0;
        }
        *(int *)(&stack0xffffffec + iVar15) =
             ((iVar20 + *(int *)(&stack0x00000008 + DAT_00043130 + iVar15)) -
             *(int *)(&stack0x00000364 + iVar15)) + DAT_00043134;
        *puVar54 = *(undefined4 *)(&stack0x00000008 + iVar15);
        puVar21 = (undefined4 *)((int)&local_18 + DAT_00043130 + iVar15);
        iVar20 = FUN_0003ef54(puVar21[-3],puVar21[-5],*puVar21,&stack0x00000000 + iVar15);
        if (iVar20 == 0) {
LAB_00043100:
          if (*piVar31 != *DAT_0004313c) goto LAB_0004317a;
        }
        else {
          *(int *)(&stack0x00000054 + DAT_00043138 + iVar15) = iVar20;
        }
LAB_0004310a:
        *piVar31 = 0;
        piVar32 = DAT_0004313c;
        for (piVar31 = (int *)*piVar28; piVar31 != (int *)0x0; piVar31 = (int *)*piVar31) {
          iVar20 = FUN_00040394(piVar31,piVar28);
          if (iVar20 != 0) {
            iVar20 = piVar31[0x20];
            if ((iVar20 == *piVar32) || (iVar20 == **(int **)(&stack0x00000368 + iVar15))) {
              piVar31[0x20] = 0;
            }
          }
        }
      }
LAB_0004317a:
      piVar28 = (int *)*piVar28;
    } while (piVar28 != (int *)0x0);
  }
  if ((*(short *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1a) == 0) &&
     (*(short *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1e) == 0)) {
    uVar19 = thunk_FUN_0002790c(**(undefined4 **)(&stack0x00000048 + DAT_00043568 + iVar15));
    iVar9 = DAT_00043568 + iVar9;
    *(undefined4 *)(&stack0x00000048 + iVar9 + 0x18) = uVar19;
    *(undefined4 *)(&stack0x00000064 + iVar9 + 0x18) = 0;
  }
  else {
    if (*(int *)(&stack0x00000364 + iVar15) != 0) {
      *(undefined4 *)(&stack0xffffffec + iVar15) = 0x20;
      *puVar55 = DAT_0004356c;
      *(undefined4 *)(&stack0xfffffff0 + iVar15) = 0;
      *(undefined4 *)(&stack0xfffffff4 + iVar15) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar15) = 0;
      FUN_001e9a9c(&stack0x00000360 + iVar15,0,*DAT_00043570,0x29);
      *(undefined2 *)(&stack0x00000368 + iVar15) = 0x5a0;
      *(undefined2 *)(&stack0x00000370 + iVar15) = 0x18;
      *(undefined2 *)(&stack0x00000372 + iVar15) = 0x18;
      *(undefined4 *)(&stack0xffffffec + iVar15) =
           *(undefined4 *)(&stack0x00000008 + DAT_00043574 + iVar15);
      iVar20 = *(int *)(&stack0x00000384 + iVar15);
      iVar10 = DAT_00043568 + iVar10;
      iVar24 = *(int *)(&stack0x00000048 + iVar10 + 0x18);
      *(undefined1 *)(iVar20 + 8) = 0;
      *(undefined1 *)(iVar20 + 9) =
           *(undefined1 *)(*(int *)(&stack0x0000006c + iVar10 + 0x18) + 0x16);
      FUN_001c6cb8(iVar20 + 10,*(undefined4 *)(&stack0xfffffffc + DAT_00043574 + iVar15));
      FUN_001c6cb8(iVar20 + 0x10,iVar24 + DAT_00043578);
      FUN_001c6cb8(iVar20 + 0x16,DAT_0004357c);
      *(undefined1 *)(iVar20 + 4) = 4;
      *(undefined1 *)(iVar20 + 5) = 0;
      if (((*(short *)(*(int *)(&stack0xffffffec + iVar15) + 0x1c) == *(short *)(iVar24 + 0x142c))
          && (*(short *)(*(int *)(&stack0xffffffec + iVar15) + 0x1e) == *(short *)(iVar24 + 0x142e))
          ) && (*(short *)(*(int *)(&stack0xffffffec + iVar15) + 0x20) ==
                *(short *)(iVar24 + 0x1430))) {
        iVar24 = 0xc;
      }
      else {
        iVar24 = 0x12;
      }
      *(char *)(iVar20 + 6) = (char)(iVar24 + -4);
      *(char *)(iVar20 + 7) = (char)((uint)(iVar24 + -4) >> 8);
      if (((*(short *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1a) != 0) ||
          (*(short *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1c) != 0)) ||
         (iVar20 = DAT_00043580,
         *(short *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1e) != 0)) {
        iVar20 = 0x5a0;
      }
      *(int *)(&stack0xffffffec + iVar15) =
           iVar20 + *(int *)(&stack0x00000008 + DAT_00043574 + iVar15) + DAT_00043584;
      *puVar56 = *(undefined4 *)(&stack0x0000036c + iVar15);
      puVar21 = (undefined4 *)((int)&local_18 + DAT_00043574 + iVar15);
      iVar20 = FUN_0003ef54(puVar21[-3],puVar21[-5],*puVar21,&stack0x00000364 + iVar15);
      if (iVar20 == 0) {
        if ((uint)*(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1a) +
            (uint)*(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1c) +
            (uint)*(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1e) == 1) {
          if (*_DAT_00043588 == 0) goto LAB_00043364;
          uVar19 = FUN_00028288(&stack0x00000364 + iVar15,*(int *)(&stack0x00000384 + iVar15) + 4,
                                *(undefined4 *)(&stack0x00000058 + DAT_00043568 + iVar15));
          uVar1 = *(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1c);
          *(uint *)(&stack0xffffffec + iVar15) =
               (uint)*(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1e);
          *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar19;
          *puVar58 = (uint)uVar1;
          uVar3 = *(undefined2 *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1a);
          uVar2 = *(undefined2 *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x18);
          uVar25 = 2;
          uVar19 = DAT_000435a8;
        }
        else {
          uVar19 = FUN_00028288(&stack0x00000364 + iVar15,*(int *)(&stack0x00000384 + iVar15) + 4,
                                *(undefined4 *)(&stack0x00000058 + DAT_00043568 + iVar15));
          uVar1 = *(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1c);
          *(uint *)(&stack0xffffffec + iVar15) =
               (uint)*(ushort *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1e);
          *(undefined4 *)(&stack0xfffffff0 + iVar15) = uVar19;
          *puVar57 = (uint)uVar1;
          uVar3 = *(undefined2 *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x1a);
          uVar2 = *(undefined2 *)(*(int *)(&stack0x00000044 + DAT_00043568 + iVar15) + 0x18);
          uVar25 = 0;
          uVar19 = DAT_000435a4;
        }
        FUN_0002a1c6(uVar25,uVar19,uVar2,uVar3);
      }
      else {
        *(int *)(&stack0x00000054 + DAT_00043568 + iVar15) = iVar20;
        if (*_DAT_00043588 != 0) {
          uVar19 = FUN_00028288(&stack0x00000364 + iVar15,*(int *)(&stack0x00000384 + iVar15) + 4,
                                *(undefined4 *)(&stack0x00000058 + DAT_00043568 + iVar15));
          FUN_0002a1c6(2,s____SendResponses_put__s_00043589 + 3,uVar19);
        }
      }
    }
LAB_00043364:
    if (*(char *)(*(int *)(&stack0x00000048 + DAT_00043568 + iVar15) + 5) != '\0') {
      *(undefined4 *)(&stack0xfffffff4 + iVar15) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar15) = 0;
      *(undefined2 *)(&stack0xfffffff0 + iVar15) = *DAT_000435ac;
      *puVar59 = 0;
      *(undefined4 *)(&stack0xffffffec + iVar15) = DAT_000435b0;
      iVar11 = DAT_00043568 + iVar11;
      FUN_001e5b84(*(undefined4 *)(&stack0x00000088 + iVar11 + 0x18),
                   *(undefined4 *)(&stack0x0000005c + iVar11 + 0x18),
                   *(undefined4 *)(&stack0x00000054 + iVar11 + 0x18),
                   *(undefined4 *)(*(int *)(&stack0x00000048 + DAT_00043568 + iVar15) + 0x1400));
    }
    if (*(char *)(*(int *)(&stack0x00000048 + DAT_00043568 + iVar15) + 6) != '\0') {
      *(undefined4 *)(&stack0xfffffff4 + iVar15) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar15) = 0;
      *(undefined2 *)(&stack0xfffffff0 + iVar15) = *DAT_000435ac;
      *puVar60 = 0;
      *(undefined4 *)(&stack0xffffffec + iVar15) = _DAT_000435b4;
      iVar12 = DAT_00043568 + iVar12;
      FUN_001e5b84(*(undefined4 *)(&stack0x00000088 + iVar12 + 0x18),
                   *(undefined4 *)(&stack0x0000005c + iVar12 + 0x18),
                   *(undefined4 *)(&stack0x00000054 + iVar12 + 0x18),
                   *(undefined4 *)(*(int *)(&stack0x00000048 + DAT_00043568 + iVar15) + 0x1400));
    }
    if (*(int *)(iVar33 + 0xec) == 0) {
      FUN_001c6de8(*(int *)s_r__LW__SendResponses_exceeded_lo_000435b5._3_4_ + 9);
      iVar20 = extraout_r1 + *(int *)(iVar33 + 0xdc);
      if (iVar20 == 0) {
        iVar20 = 1;
      }
      *(int *)(iVar33 + 0xec) = iVar20;
    }
    iVar13 = DAT_00043568 + iVar13;
    iVar33 = *(int *)(&stack0x00000064 + iVar13 + 0x18);
    *(int *)(&stack0x00000064 + iVar13 + 0x18) = iVar33 + 1;
    if (999 < iVar33 + 1) {
      FUN_0002a1c6(0,s_r__LW__SendResponses_exceeded_lo_000435b5 + 7,
                   *(undefined4 *)(&stack0x00000064 + DAT_00043568 + iVar15));
      goto LAB_00043440;
    }
  }
  if (*(int *)(&stack0x00000048 + DAT_00043568 + iVar15) != 0) {
    FUN_00042a64();
  }
LAB_00043440:
  iVar33 = *(int *)(*(int *)(&stack0x00000060 + DAT_00043568 + iVar15) + 4);
  if (iVar33 != 0) {
    uVar19 = FUN_00028288(iVar33 + 4,*(int *)(iVar33 + 0x24) + 4,
                          *(undefined4 *)(&stack0x00000058 + DAT_00043568 + iVar15));
    FUN_0002a1c6(0,s_SendResponses_ERROR_m_>CurrentRe_000435ec,uVar19);
  }
  iVar14 = DAT_00043568 + iVar14;
  iVar33 = *(int *)(*(int *)(&stack0x00000050 + iVar14 + 0x18) + 0x38);
  *(int *)(*(int *)(&stack0x00000060 + iVar14 + 0x18) + 4) = iVar33;
  while (iVar33 != 0) {
    puVar21 = *(undefined4 **)(*(int *)(&stack0x00000060 + DAT_00043568 + iVar15) + 4);
    *(undefined4 *)(*(int *)(&stack0x00000060 + DAT_00043568 + iVar15) + 4) = *puVar21;
    if (puVar21[0x23] != 0) {
      if ((*(char *)(puVar21 + 0x1e) != '\x02') && (*(char *)(puVar21 + 0x1e) != '\x03')) {
        uVar19 = FUN_00028288(puVar21 + 1,puVar21[9] + 4,
                              *(undefined4 *)(&stack0x00000058 + DAT_00043568 + iVar15));
        bVar17 = *(byte *)(puVar21 + 1);
        *(undefined4 *)(&stack0xffffffec + iVar15) = uVar19;
        *puVar61 = (uint)bVar17;
        FUN_0002a1c6(0,s_SendResponses__No_active_interfa_00043620,puVar21[0x23],puVar21[7]);
      }
      puVar21[0x23] = 0;
    }
    if ((puVar21[0x21] != 0) || (*(char *)(puVar21 + 1) == '\x01')) {
      iVar33 = puVar21[0x30];
      if (iVar33 != 0) {
        *(undefined4 *)(&stack0xfffffff8 + iVar15) =
             *(undefined4 *)(&stack0x00000008 + DAT_00043574 + iVar15);
        *(undefined4 *)(&stack0xfffffff0 + iVar15) = puVar21[9];
        uVar3 = *(undefined2 *)(puVar21 + 4);
        FUN_0004401c(puVar21 + 1,iVar33,*(undefined2 *)(puVar21 + 0x31));
        puVar21[0x30] = 0;
        if ((code *)puVar21[0x32] != entry) {
          (*(code *)puVar21[0x32])
                    (*(undefined4 *)(&stack0xfffffff8 + iVar15),puVar21,
                     *(undefined4 *)(&stack0xfffffff0 + iVar15),uVar3);
        }
      }
      if ((*(char *)(puVar21 + 1) == '\x01') && (*(char *)((int)puVar21 + 0x7b) == '\0')) {
        if (((puVar21[7] != *DAT_00043570) || (*(char *)((int)puVar21 + 0x46) != '\0')) ||
           (iVar33 = FUN_00029974(puVar21[8]), iVar33 != 0)) {
          FUN_00023dbc(*(undefined4 *)(&stack0x00000008 + DAT_00043574 + iVar15),puVar21);
        }
      }
      else {
        puVar21[0x21] = 0;
        *(undefined1 *)((int)puVar21 + 0x7f) = 0;
        puVar16 = DAT_00043660;
        puVar21[0x24] = *DAT_0004365c;
        uVar19 = puVar16[1];
        uVar25 = puVar16[2];
        uVar26 = puVar16[3];
        puVar21[0x25] = *puVar16;
        puVar21[0x26] = uVar19;
        puVar21[0x27] = uVar25;
        puVar21[0x28] = uVar26;
      }
    }
    iVar33 = *(int *)(*(int *)(&stack0x00000060 + DAT_00043568 + iVar15) + 4);
  }
  s_r__LW__SendResponses_exceeded_lo_000435b5[3] =
       (char)s_r__LW__SendResponses_exceeded_lo_000435b5._3_4_;
  s_r__LW__SendResponses_exceeded_lo_000435b5[4] =
       SUB41(s_r__LW__SendResponses_exceeded_lo_000435b5._3_4_,1);
  s_r__LW__SendResponses_exceeded_lo_000435b5[5] =
       SUB41(s_r__LW__SendResponses_exceeded_lo_000435b5._3_4_,2);
  s_r__LW__SendResponses_exceeded_lo_000435b5[6] =
       SUB41(s_r__LW__SendResponses_exceeded_lo_000435b5._3_4_,3);
  return;
LAB_00042342:
  puVar21 = (undefined4 *)*puVar21;
  goto LAB_00042344;
}

