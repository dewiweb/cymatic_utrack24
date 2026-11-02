// rea decompile_all
// name: FUN_0003de04
// address: 0x3de04
// body: available
// range: 0x3de04-0x3e06f inclusive
// range: 0x3e0d0-0x3e4cb inclusive
// range: 0x3e504-0x3e5bb inclusive
// range: 0x3e5be-0x3e905 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003de04(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int extraout_r1;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int unaff_r5;
  int *piVar17;
  int *in_stack_00000000;
  uint in_stack_00000004;
  int in_stack_00000008;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_0000001c;
  int *in_stack_00000020;
  undefined1 in_stack_0000016c;
  int *in_stack_00000384;
  int in_stack_0000039c;
  undefined4 auStack_14 [5];
  
  if ((*(int *)(*(int *)((int)&stack0x00000004 + DAT_0003e078) + 0x1c) == 0) ||
     (*(int *)(*(int *)(&stack0x00000060 + DAT_0003e074) + 0x142c) == 0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(&stack0x00000060 + DAT_0003e074);
    if (((*(short *)(*(int *)((int)&stack0x00000020 + DAT_0003e078) + 0x1c) ==
          *(short *)(iVar11 + 0x142c)) &&
        (*(short *)(*(int *)((int)&stack0x00000020 + DAT_0003e078) + 0x1e) ==
         *(short *)(iVar11 + 0x142e))) &&
       (*(short *)(*(int *)((int)&stack0x00000020 + DAT_0003e078) + 0x20) ==
        *(short *)(iVar11 + 0x1430))) {
      iVar11 = 0xc;
    }
    else {
      iVar11 = 0x12;
    }
    iVar11 = iVar11 + 0xb;
  }
  *(undefined4 *)((int)auStack_14 + DAT_0003e078) =
       *(undefined4 *)((int)&stack0x0000000c + DAT_0003e078);
  FUN_0002369c(*(undefined4 *)(&stack0x00000074 + DAT_0003e074),*DAT_0003e090,*DAT_0003e08c);
  piVar14 = *(int **)(*(int *)(&stack0x00000068 + DAT_0003e074) + 0x38);
  if (piVar14 != (int *)0x0) {
    in_stack_00000014 = *(int *)(&stack0x00000060 + DAT_0003e074) + 0x980;
    iVar5 = *(int *)(&stack0x00000060 + DAT_0003e074);
    do {
      if (((piVar14[0x23] == *(int *)(iVar5 + 0x1400)) && (piVar14[7] == *DAT_0003e094)) &&
         (iVar6 = FUN_00195602(piVar14,*(undefined4 *)(&stack0x00000060 + DAT_0003e074)), iVar6 == 0
         )) {
        if (*DAT_0003e098 != 0) {
          for (puVar16 = *(undefined4 **)(*(int *)(&stack0x00000078 + DAT_0003e074) + 0xc);
              puVar16 != (undefined4 *)0x0; puVar16 = (undefined4 *)*puVar16) {
            if (puVar16[0x500] == piVar14[0x23]) {
              in_stack_00000000 = (int *)((int)puVar16 + DAT_0003e09c);
              goto LAB_0003df20;
            }
          }
          in_stack_00000000 = (int *)0x0;
LAB_0003df20:
          uVar10 = FUN_0002272c(piVar14 + 1,piVar14[9] + 4,
                                *(undefined4 *)(&stack0x00000070 + DAT_0003e074));
          FUN_00024642(3,s_SendResponses__Not_Sending__s__o_0003e0a0,uVar10,in_stack_00000000);
        }
        iVar6 = FUN_000225c8(*(undefined4 *)(&stack0x00000060 + DAT_0003e074));
        piVar14[0x23] = iVar6;
      }
      else if (piVar14[0x23] == *(int *)(iVar5 + 0x1400)) {
        iVar7 = piVar14[9];
        iVar6 = piVar14[4];
        uVar8 = (uint)*(byte *)(piVar14 + 1);
        if ((uVar8 == 1) ||
           (((*(char *)(*(int *)((int)&stack0x00000004 + DAT_0003e078) + 0x15) == '\x02' &&
             (*(int *)(in_stack_00000014 + 8) == 0)) &&
            ((*(int *)(in_stack_00000014 + 0x1c) == 0 && (*(int *)(in_stack_00000014 + 0x30) == 0)))
            ))) {
          in_stack_0000000c = entry;
        }
        else {
          in_stack_0000000c = (code *)0x1;
        }
        in_stack_0000001c = piVar14 + 0x30;
        if ((piVar14[0x30] != 0) && (in_stack_0000000c != entry)) {
          if (((((uVar8 & 0x3f) >> 2 != 0) &&
               ((piVar14[0xb] == 0 || ((*(byte *)(piVar14[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
              ((piVar14[0xc] == 0 || ((*(byte *)(piVar14[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
             ((((piVar14[0xd] == 0 || ((*(byte *)(piVar14[0xd] + 4) & 0x3f) >> 2 != 0)) &&
               (uVar8 == 8)) && (in_stack_00000020 = piVar14 + 0x18, (char)piVar14[0x1f] != '\0'))))
          {
            if (((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1a) != 0) ||
                (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1c) != 0)) ||
               (iVar9 = DAT_0003e0c8,
               *(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1e) != 0)) {
              iVar9 = 0x5a0;
            }
            in_stack_00000004 =
                 ((iVar9 + *(int *)((int)&stack0x00000020 + DAT_0003e078)) - iVar11) + DAT_0003e0cc;
            in_stack_00000000 = (int *)0x0;
            iVar9 = FUN_000392b0(*(undefined4 *)((int)auStack_14 + DAT_0003e078 + 8),
                                 *(undefined4 *)((int)auStack_14 + DAT_0003e078),
                                 *(undefined4 *)((int)&stack0x00000008 + DAT_0003e078),piVar14 + 1);
            if (iVar9 == 0) goto LAB_0003e18c;
            *(int *)(&stack0x0000006c + DAT_0003e074) = iVar9;
            *(undefined1 *)(in_stack_00000020 + 7) = 0;
          }
          FUN_0003f3bc(piVar14 + 1,*in_stack_0000001c,(short)in_stack_0000001c[1]);
        }
        if ((*(byte *)(piVar14 + 1) & 0x32) != 0) {
          *(ushort *)(piVar14 + 2) = *(ushort *)(piVar14 + 2) | 0x8000;
        }
        if (((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1a) != 0) ||
            (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1c) != 0)) ||
           (iVar9 = DAT_0003e4cc, *(short *)(*(int *)(&stack0x0000005c + DAT_0003e074) + 0x1e) != 0)
           ) {
          iVar9 = 0x5a0;
        }
        in_stack_00000000 = (int *)0x0;
        if (in_stack_0000000c != entry) {
          in_stack_00000000 = (int *)piVar14[3];
        }
        in_stack_00000004 =
             ((iVar9 + *(int *)((int)&stack0x00000020 + DAT_0003e4d0)) - iVar11) + DAT_0003e4d4;
        in_stack_00000008 =
             FUN_000392b0(*(undefined4 *)((int)auStack_14 + DAT_0003e4d0 + 8),
                          *(undefined4 *)((int)auStack_14 + DAT_0003e4d0),
                          *(undefined4 *)((int)&stack0x00000008 + DAT_0003e4d0),piVar14 + 1);
        *(ushort *)(piVar14 + 2) = *(ushort *)(piVar14 + 2) & 0x7fff;
        if (in_stack_00000008 != 0) {
          *(int *)(&stack0x0000006c + DAT_0003e4d8) = in_stack_00000008;
          *(char *)(piVar14 + 0x1f) = (char)in_stack_0000000c;
        }
        if ((*in_stack_0000001c != 0) && (in_stack_0000000c != entry)) {
          FUN_0003f3bc(piVar14 + 1,iVar7,(short)iVar6);
        }
        if ((((*(int *)(&stack0x0000007c + DAT_0003e4d8) == 0) && (in_stack_0000000c != entry)) &&
            ((*(byte *)(piVar14 + 1) & 0x3f) >> 4 != 0)) && (piVar14[0x20] == 0)) {
          piVar14[0x20] = *DAT_0003e4dc;
        }
        if (in_stack_00000008 != 0) {
          if ((piVar14[0x21] == *DAT_0003e4dc) && (piVar14[7] == *_DAT_0003e4e0)) {
            iVar6 = FUN_000225c8(*(undefined4 *)(&stack0x00000060 + DAT_0003e4d8));
          }
          else {
            iVar6 = 0;
          }
          piVar14[0x23] = iVar6;
        }
      }
LAB_0003e18c:
      piVar14 = (int *)*piVar14;
    } while (piVar14 != (int *)0x0);
  }
  in_stack_00000008 = *(int *)(&stack0x0000006c + DAT_0003e4d8);
  piVar14 = *(int **)(*(int *)(&stack0x00000068 + DAT_0003e4d8) + 0x38);
  if (piVar14 != (int *)0x0) {
    piVar17 = (int *)(*(int *)(&stack0x00000060 + DAT_0003e4d8) + 0x1400);
    do {
      in_stack_0000000c = (code *)(piVar14 + 0x20);
      if (((((piVar14[0x22] == *piVar17) && ((*(byte *)(piVar14 + 1) & 0x3f) >> 2 != 0)) &&
           ((piVar14[0xb] == 0 || ((*(byte *)(piVar14[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
          ((piVar14[0xc] == 0 || ((*(byte *)(piVar14[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
         ((piVar14[0xd] == 0 || ((*(byte *)(piVar14[0xd] + 4) & 0x3f) >> 2 != 0)))) {
        if (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1a) == 0) {
          if ((*(byte *)(piVar14 + 1) & 0x32) != 0) {
            for (piVar15 = *(int **)(*(int *)(&stack0x00000068 + DAT_0003e4d8) + 0x38);
                piVar15 != (int *)0x0; piVar15 = (int *)*piVar15) {
              if ((((piVar15[0x2e] == *(int *)(unaff_r5 + 0x1c)) && (piVar15[0x2f] == *piVar17)) &&
                  (*(short *)((int)piVar15 + 6) == *(short *)((int)piVar14 + 6))) &&
                 (iVar5 = FUN_0003b734(piVar15,piVar14), iVar5 != 0)) goto LAB_0003e23a;
            }
          }
          *(undefined4 *)(in_stack_0000000c + 8) = 0;
        }
        else {
LAB_0003e23a:
          if (in_stack_00000008 != 0) {
            if (((*(int *)(&stack0x0000007c + DAT_0003e4d8) == 0) &&
                ((*(byte *)(piVar14 + 1) & 0x3f) >> 4 != 0)) && (*(int *)in_stack_0000000c == 0)) {
              *(int *)in_stack_0000000c = *DAT_0003e4dc;
            }
            if ((*(byte *)(piVar14 + 1) & 0x32) != 0) {
              *(ushort *)(piVar14 + 2) = *(ushort *)(piVar14 + 2) | 0x8000;
            }
            if (((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1a) != 0) ||
                (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1c) != 0)) ||
               (iVar5 = DAT_0003e4cc,
               *(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1e) != 0)) {
              iVar5 = 0x5a0;
            }
            in_stack_00000004 =
                 ((iVar5 + *(int *)((int)&stack0x00000020 + DAT_0003e4d0)) - iVar11) + DAT_0003e4d4;
            in_stack_00000000 = (int *)piVar14[3];
            in_stack_00000008 =
                 FUN_000392b0(((undefined4 *)((int)&stack0x00000000 + DAT_0003e4d0))[-3],
                              in_stack_00000008,
                              *(undefined4 *)((int)&stack0x00000000 + DAT_0003e4d0),piVar14 + 1);
            *(ushort *)(piVar14 + 2) = *(ushort *)(piVar14 + 2) & 0x7fff;
            if (in_stack_00000008 != 0) {
              *(int *)(&stack0x0000006c + DAT_0003e4d8) = in_stack_00000008;
              *(undefined4 *)(in_stack_0000000c + 8) = 0;
              *(undefined1 *)(piVar14 + 0x1f) = 1;
              *(undefined4 *)(in_stack_0000000c + 0x38) = *(undefined4 *)(unaff_r5 + 0x1c);
              *(int *)(in_stack_0000000c + 0x3c) = *piVar17;
            }
          }
        }
      }
      piVar14 = (int *)*piVar14;
    } while (piVar14 != (int *)0x0);
  }
  piVar14 = *(int **)(*(int *)(&stack0x00000068 + DAT_0003e4d8) + 0x38);
  if (piVar14 != (int *)0x0) {
    iVar5 = *(int *)(&stack0x00000060 + DAT_0003e4d8);
    do {
      piVar17 = piVar14 + 0x20;
      if ((*piVar17 == *DAT_0003e4dc) || (*piVar17 == *(int *)(iVar5 + 0x1400))) {
        in_stack_00000008 = 0;
        in_stack_0000000c = entry;
        in_stack_00000004 = 2;
        in_stack_00000010 = 0;
        in_stack_00000000 = (int *)piVar14[3];
        FUN_001995b4(&stack0x00000014,0,*_DAT_0003e4e0,0x2f);
        in_stack_0000001c = (int *)((uint)in_stack_0000001c | 0x8000);
        uVar8 = FUN_00020a0a(piVar14[8],piVar14[8] + 0x100);
        if (uVar8 < 0x101) {
          FUN_001952f0(*(undefined4 *)((int)&stack0x00000010 + DAT_0003e4d0),piVar14[8],uVar8);
        }
        else {
          in_stack_0000016c = 0;
        }
        FUN_001953c4(*(undefined4 *)(&stack0x00000018 + DAT_0003e4d0),0x20);
        for (piVar15 = *(int **)(*(int *)(&stack0x00000068 + DAT_0003e4d8) + 0x38);
            piVar15 != (int *)0x0; piVar15 = (int *)*piVar15) {
          if (((((*(byte *)(piVar15 + 1) & 0x3f) >> 2 != 0) &&
               ((piVar15[0xb] == 0 || ((*(byte *)(piVar15[0xb] + 4) & 0x3f) >> 2 != 0)))) &&
              ((piVar15[0xc] == 0 || ((*(byte *)(piVar15[0xc] + 4) & 0x3f) >> 2 != 0)))) &&
             (((piVar15[0xd] == 0 || ((*(byte *)(piVar15[0xd] + 4) & 0x3f) >> 2 != 0)) &&
              (iVar6 = FUN_0003b734(piVar15,piVar14), iVar6 != 0)))) {
            uVar1 = *(ushort *)((int)piVar15 + 6);
            if (0xfe < uVar1) {
              uVar10 = FUN_0002272c(piVar15 + 1,piVar15[9] + 4,
                                    *(undefined4 *)(&stack0x00000070 + DAT_0003e4d8));
              FUN_00024642(0,s___Can_t_create_NSEC_for_record___0003e4e2 + 2,uVar10);
              if (piVar15 != (int *)0x0) {
                if (*(int *)(&stack0x0000006c + DAT_0003e4d8) != 0) goto LAB_0003e4aa;
                goto LAB_0003e4a0;
              }
              break;
            }
            (&stack0x00000270)[uVar1 >> 3] =
                 (&stack0x00000270)[uVar1 >> 3] | (byte)(0x80 >> (uVar1 & 7));
          }
        }
        if (((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1a) != 0) ||
            (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1c) != 0)) ||
           (iVar6 = DAT_0003e4cc, *(short *)(*(int *)(&stack0x0000005c + DAT_0003e4d8) + 0x1e) != 0)
           ) {
          iVar6 = 0x5a0;
        }
        in_stack_00000004 =
             ((iVar6 + *(int *)((int)&stack0x00000020 + DAT_0003e4d0)) - iVar11) + DAT_0003e4d4;
        in_stack_00000000 = in_stack_00000020;
        puVar16 = (undefined4 *)((int)&stack0x00000000 + DAT_0003e4d0);
        iVar6 = FUN_000392b0(puVar16[-3],puVar16[-5],*puVar16,&stack0x00000018);
        if (iVar6 == 0) {
LAB_0003e4a0:
          if (*piVar17 != *DAT_0003e4dc) goto LAB_0003e51a;
        }
        else {
          *(int *)(&stack0x0000006c + DAT_0003e4d8) = iVar6;
        }
LAB_0003e4aa:
        *piVar17 = 0;
        piVar15 = DAT_0003e4dc;
        for (piVar17 = (int *)*piVar14; piVar17 != (int *)0x0; piVar17 = (int *)*piVar17) {
          iVar6 = FUN_0003b734(piVar17,piVar14);
          if (iVar6 != 0) {
            iVar6 = piVar17[0x20];
            if ((iVar6 == *piVar15) || (iVar6 == *(int *)(iVar5 + 0x1400))) {
              piVar17[0x20] = 0;
            }
          }
        }
      }
LAB_0003e51a:
      piVar14 = (int *)*piVar14;
    } while (piVar14 != (int *)0x0);
  }
  if ((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1a) == 0) &&
     (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1e) == 0)) {
    uVar10 = thunk_FUN_00021db0(**(undefined4 **)(&stack0x00000060 + DAT_0003e908));
    *(undefined4 *)(&stack0x00000060 + DAT_0003e908) = uVar10;
    *(undefined4 *)(&stack0x0000007c + DAT_0003e908) = 0;
  }
  else {
    if (iVar11 != 0) {
      in_stack_00000004 = 0x20;
      in_stack_00000000 = (int *)DAT_0003e90c;
      in_stack_00000008 = 0;
      in_stack_0000000c = entry;
      in_stack_00000010 = 0;
      FUN_001995b4(&stack0x00000378,0,*DAT_0003e910,0x29);
      iVar11 = DAT_0003e908;
      in_stack_00000004 = *(int *)((int)&stack0x00000020 + DAT_0003e914);
      iVar5 = *(int *)(&stack0x00000060 + DAT_0003e908);
      *(undefined1 *)(in_stack_0000039c + 8) = 0;
      *(undefined1 *)(in_stack_0000039c + 9) =
           *(undefined1 *)(*(int *)(&stack0x00000084 + iVar11) + 0x16);
      FUN_0016d964(in_stack_0000039c + 10,*(undefined4 *)((int)&stack0x00000014 + DAT_0003e914));
      FUN_0016d964(in_stack_0000039c + 0x10,iVar5 + DAT_0003e918);
      FUN_0016d964(in_stack_0000039c + 0x16,DAT_0003e91c);
      *(undefined1 *)(in_stack_0000039c + 4) = 4;
      *(undefined1 *)(in_stack_0000039c + 5) = 0;
      if (((*(short *)(in_stack_00000004 + 0x1c) == *(short *)(iVar5 + 0x142c)) &&
          (*(short *)(in_stack_00000004 + 0x1e) == *(short *)(iVar5 + 0x142e))) &&
         (*(short *)(in_stack_00000004 + 0x20) == *(short *)(iVar5 + 0x1430))) {
        iVar11 = 0xc;
      }
      else {
        iVar11 = 0x12;
      }
      *(char *)(in_stack_0000039c + 6) = (char)(iVar11 + -4);
      *(char *)(in_stack_0000039c + 7) = (char)((uint)(iVar11 + -4) >> 8);
      if (((*(short *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1a) != 0) ||
          (*(short *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1c) != 0)) ||
         (iVar11 = DAT_0003e920, *(short *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1e) != 0))
      {
        iVar11 = 0x5a0;
      }
      in_stack_00000004 = iVar11 + *(int *)((int)&stack0x00000020 + DAT_0003e914) + DAT_0003e924;
      puVar16 = (undefined4 *)((int)&stack0x00000000 + DAT_0003e914);
      in_stack_00000000 = in_stack_00000384;
      iVar11 = FUN_000392b0(puVar16[-3],puVar16[-5],*puVar16,&stack0x0000037c);
      if (iVar11 == 0) {
        if ((uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1a) +
            (uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1c) +
            (uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1e) == 1) {
          if (*_DAT_0003e928 == 0) goto LAB_0003e704;
          in_stack_00000008 =
               FUN_0002272c(&stack0x0000037c,in_stack_0000039c + 4,
                            *(undefined4 *)(&stack0x00000070 + DAT_0003e908));
          in_stack_00000004 = (uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1e);
          in_stack_00000000 =
               (int *)(uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1c);
          uVar3 = *(undefined2 *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1a);
          uVar2 = *(undefined2 *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x18);
          uVar12 = 2;
          uVar10 = DAT_0003e948;
        }
        else {
          in_stack_00000008 =
               FUN_0002272c(&stack0x0000037c,in_stack_0000039c + 4,
                            *(undefined4 *)(&stack0x00000070 + DAT_0003e908));
          in_stack_00000004 = (uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1e);
          in_stack_00000000 =
               (int *)(uint)*(ushort *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1c);
          uVar3 = *(undefined2 *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x1a);
          uVar2 = *(undefined2 *)(*(int *)(&stack0x0000005c + DAT_0003e908) + 0x18);
          uVar12 = 0;
          uVar10 = DAT_0003e944;
        }
        FUN_00024642(uVar12,uVar10,uVar2,uVar3);
      }
      else {
        *(int *)(&stack0x0000006c + DAT_0003e908) = iVar11;
        if (*_DAT_0003e928 != 0) {
          uVar10 = FUN_0002272c(&stack0x0000037c,in_stack_0000039c + 4,
                                *(undefined4 *)(&stack0x00000070 + DAT_0003e908));
          FUN_00024642(2,s____SendResponses_put__s_0003e929 + 3,uVar10);
        }
      }
    }
LAB_0003e704:
    if (*(char *)(*(int *)(&stack0x00000060 + DAT_0003e908) + 5) != '\0') {
      in_stack_0000000c = entry;
      in_stack_00000010 = 0;
      in_stack_00000008 = CONCAT22(in_stack_00000008._2_2_,*DAT_0003e94c);
      in_stack_00000000 = (int *)0x0;
      in_stack_00000004 = DAT_0003e950;
      FUN_0019569c(*(undefined4 *)(&stack0x000000a0 + DAT_0003e908),
                   *(undefined4 *)(&stack0x00000074 + DAT_0003e908),
                   *(undefined4 *)(&stack0x0000006c + DAT_0003e908),
                   *(undefined4 *)(*(int *)(&stack0x00000060 + DAT_0003e908) + 0x1400));
    }
    if (*(char *)(*(int *)(&stack0x00000060 + DAT_0003e908) + 6) != '\0') {
      in_stack_0000000c = entry;
      in_stack_00000010 = 0;
      in_stack_00000008 = CONCAT22(in_stack_00000008._2_2_,*DAT_0003e94c);
      in_stack_00000000 = (int *)0x0;
      in_stack_00000004 = DAT_0003e954;
      FUN_0019569c(*(undefined4 *)(&stack0x000000a0 + DAT_0003e908),
                   *(undefined4 *)(&stack0x00000074 + DAT_0003e908),
                   *(undefined4 *)(&stack0x0000006c + DAT_0003e908),
                   *(undefined4 *)(*(int *)(&stack0x00000060 + DAT_0003e908) + 0x1400));
    }
    if (*(int *)(unaff_r5 + 0x2c) == 0) {
      FUN_0016da64(*_DAT_0003e958 + 9);
      iVar11 = extraout_r1 + *(int *)(unaff_r5 + 0x1c);
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      *(int *)(unaff_r5 + 0x2c) = iVar11;
    }
    iVar11 = *(int *)(&stack0x0000007c + DAT_0003e908);
    *(int *)(&stack0x0000007c + DAT_0003e908) = iVar11 + 1;
    if (999 < iVar11 + 1) {
      FUN_00024642(0,s___SendResponses_exceeded_loop_li_0003e95a + 2,
                   *(undefined4 *)(&stack0x0000007c + DAT_0003e908));
      goto LAB_0003e7e0;
    }
  }
  if (*(int *)(&stack0x00000060 + DAT_0003e908) != 0) {
    FUN_0003de04();
  }
LAB_0003e7e0:
  iVar11 = *(int *)(*(int *)(&stack0x00000078 + DAT_0003e908) + 4);
  if (iVar11 != 0) {
    uVar10 = FUN_0002272c(iVar11 + 4,*(int *)(iVar11 + 0x24) + 4,
                          *(undefined4 *)(&stack0x00000070 + DAT_0003e908));
    FUN_00024642(0,s_SendResponses_ERROR_m_>CurrentRe_0003e98c,uVar10);
  }
  iVar11 = *(int *)(*(int *)(&stack0x00000068 + DAT_0003e908) + 0x38);
  *(int *)(*(int *)(&stack0x00000078 + DAT_0003e908) + 4) = iVar11;
  while (iVar11 != 0) {
    puVar16 = *(undefined4 **)(*(int *)(&stack0x00000078 + DAT_0003e908) + 4);
    *(undefined4 *)(*(int *)(&stack0x00000078 + DAT_0003e908) + 4) = *puVar16;
    if (puVar16[0x23] != 0) {
      if ((*(char *)(puVar16 + 0x1e) != '\x02') && (*(char *)(puVar16 + 0x1e) != '\x03')) {
        in_stack_00000004 =
             FUN_0002272c(puVar16 + 1,puVar16[9] + 4,
                          *(undefined4 *)(&stack0x00000070 + DAT_0003e908));
        in_stack_00000000 = (int *)(uint)*(byte *)(puVar16 + 1);
        FUN_00024642(0,s_SendResponses__No_active_interfa_0003e9c0,puVar16[0x23],puVar16[7]);
      }
      puVar16[0x23] = 0;
    }
    if ((puVar16[0x21] != 0) || (*(char *)(puVar16 + 1) == '\x01')) {
      iVar11 = puVar16[0x30];
      if (iVar11 != 0) {
        in_stack_00000010 = *(undefined4 *)((int)&stack0x00000020 + DAT_0003e914);
        in_stack_00000008 = puVar16[9];
        uVar3 = *(undefined2 *)(puVar16 + 4);
        FUN_0003f3bc(puVar16 + 1,iVar11,*(undefined2 *)(puVar16 + 0x31));
        puVar16[0x30] = 0;
        if ((code *)puVar16[0x32] != entry) {
          (*(code *)puVar16[0x32])(in_stack_00000010,puVar16,in_stack_00000008,uVar3);
        }
      }
      if ((*(char *)(puVar16 + 1) == '\x01') && (*(char *)((int)puVar16 + 0x7b) == '\0')) {
        if (((puVar16[7] != *DAT_0003e910) || (*(char *)((int)puVar16 + 0x46) != '\0')) ||
           (iVar11 = FUN_00023df0(puVar16[8]), iVar11 != 0)) {
          FUN_0001dfb0(*(undefined4 *)((int)&stack0x00000020 + DAT_0003e914),puVar16);
        }
      }
      else {
        puVar16[0x21] = 0;
        *(undefined1 *)((int)puVar16 + 0x7f) = 0;
        puVar4 = DAT_0003ea00;
        puVar16[0x24] = *DAT_0003e9fc;
        uVar10 = puVar4[1];
        uVar12 = puVar4[2];
        uVar13 = puVar4[3];
        puVar16[0x25] = *puVar4;
        puVar16[0x26] = uVar10;
        puVar16[0x27] = uVar12;
        puVar16[0x28] = uVar13;
      }
    }
    iVar11 = *(int *)(*(int *)(&stack0x00000078 + DAT_0003e908) + 4);
  }
  return;
}

