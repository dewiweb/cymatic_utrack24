// rea decompile_all
// name: FUN_00192ddc
// address: 0x192ddc
// body: available
// range: 0x192ddc-0x193031 inclusive
// range: 0x193038-0x1930c3 inclusive
// range: 0x1930c6-0x193115 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x192f74 to 0x193032 FUN_00193032 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00192ddc(int param_1,short *param_2,short *param_3,int param_4,undefined2 param_5,
                 int param_6,uint param_7,int param_8)

{
  short sVar1;
  int *piVar2;
  short *psVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  undefined4 in_stack_fffffd10;
  undefined2 uVar21;
  byte *pbVar22;
  code *local_2e8;
  int *local_2e4;
  int iStack_2e0;
  int local_2d8;
  short *local_2d4;
  int iStack_2d0;
  int local_2cc;
  int local_2ac;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [224];
  undefined1 auStack_c8 [16];
  undefined2 local_b8 [8];
  short sStack_a8;
  undefined2 uStack_a6;
  int *local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 *local_7c;
  int local_78;
  undefined1 *local_74;
  short *local_70;
  int local_6c;
  code *local_68;
  byte *local_64;
  int local_60;
  int local_5c;
  byte *local_58;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  code *local_48;
  int local_44;
  byte *local_40;
  short *local_3c;
  undefined4 local_38;
  int *piStack_34;
  int local_2c;
  int local_24;
  short *local_20;
  short *local_1c;
  int local_18;
  
  uVar21 = (undefined2)((uint)in_stack_fffffd10 >> 0x10);
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((param_6 == 0) || (iVar6 = FUN_00191fe4(), iVar6 == 0)) {
    local_68 = entry;
  }
  else {
    local_68 = (code *)0x1;
  }
  if (local_18 != 0) {
    iVar6 = FUN_00195a24(local_24,param_8,local_18);
    local_44 = 0;
    if (iVar6 == 0) goto LAB_00192e0e;
  }
  local_44 = 1;
LAB_00192e0e:
  local_38 = 0;
  local_5c = FUN_001b76b8(local_24,local_20,local_1c,local_18,CONCAT22(uVar21,param_5),&local_38);
  local_50 = 1;
  local_88 = &local_50;
  local_64 = (byte *)(uint)(ushort)local_20[3];
  local_58 = (byte *)((uint)(ushort)local_20[4] + (int)local_64);
  local_40 = local_58 + (ushort)local_20[5];
  local_70 = local_20 + 6;
  local_84 = 0;
  local_3c = local_70;
  if (((param_8 == 0) && ((int)((uint)*(byte *)(local_20 + 1) << 0x1e) < 0)) || (local_5c == 1)) {
    FUN_00193032();
    return;
  }
  local_60 = local_24 + 0x100;
  local_78 = local_24 + 0xc0;
  if (((local_68 == entry) && (local_5c != 3)) &&
     (-1 < (int)((uint)*(byte *)(local_20 + 1) << 0x1e))) {
    local_80 = *(byte *)((int)local_20 + 3) & 0xf;
    if ((((*(byte *)((int)local_20 + 3) & 0xf) == 0) || (local_80 == 3)) || (local_80 == 9)) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    local_4c = 0;
    local_6c = 0;
    local_74 = auStack_1b8;
LAB_00192fbe:
    if (((local_6c < (int)(uint)(ushort)local_20[2]) && (local_70 != (short *)0x0)) &&
       (local_70 < local_1c)) {
      local_70 = (short *)FUN_0018addc(local_20,local_70,local_1c,param_8,&local_2e8);
      if (local_70 != (short *)0x0) {
        sVar1 = *local_20;
        piVar18 = *(int **)(local_60 + 0x30);
        if (piVar18 != (int *)0x0) {
          local_54 = auStack_c8;
          local_7c = auStack_1b8;
          do {
            if (param_6 == 0) {
              uVar14 = piVar18[0x3f];
LAB_00192f36:
              if ((((uVar14 & 0xffff) == (param_7 & 0xffff)) &&
                  (*(short *)((int)piVar18 + 0x12e) == sVar1)) &&
                 ((((short)piVar18[0x8c] == *(short *)(local_54 + 0x10) &&
                   ((*(short *)((int)piVar18 + 0x232) == *(short *)(local_54 + 0x12) &&
                    ((int *)piVar18[1] == local_2e4)))) &&
                  (iVar6 = FUN_0003b48a(piVar18 + 0x4c,local_7c), iVar6 != 0)))) {
                if (piVar18 != (int *)0x0) {
                  if (local_2c == 0) {
                    FUN_000209c2(local_74);
                    iVar6 = FUN_0016dc78();
                    puVar4 = local_74;
                    piVar5 = local_2e4;
                    piVar19 = *(int **)(iVar6 * 4 + local_24 + 0x15c);
                    goto joined_r0x0019306e;
                  }
                  if (*DAT_00193374 != 0) {
                    uVar13 = FUN_000203e4(local_b8[0]);
                    FUN_00024642(3,DAT_00193378,piVar18[0x32],local_80,local_74,uVar13);
                  }
                  FUN_00037a00(local_24,piVar18);
                  local_4c = 1;
                }
                break;
              }
            }
            else if ((ushort *)piVar18[0x30] != (ushort *)0x0) {
              uVar14 = (uint)*(ushort *)piVar18[0x30];
              goto LAB_00192f36;
            }
            piVar18 = (int *)*piVar18;
          } while (piVar18 != (int *)0x0);
        }
      }
      goto LAB_00192fb8;
    }
    if (local_4c != 0) {
      if (*DAT_00193374 != 0) {
        local_2e8 = (code *)(uint)(ushort)local_20[5];
        if (local_2e8 == (code *)0x1) {
          local_2e4 = (int *)0x193384;
        }
        else {
          local_2e4 = (int *)&DAT_0019337c;
        }
        if (local_20[4] == 1) {
          puVar15 = (undefined *)0x1933c8;
        }
        else {
          puVar15 = &DAT_00193380;
        }
        if (local_20[3] == 1) {
          puVar16 = &DAT_001933d0;
        }
        else {
          puVar16 = &DAT_00193388;
        }
        FUN_00024642(3,s_Ignoring__2d_Answer_s__2d_Author_0019338c,local_20[3],puVar16,local_20[4],
                     puVar15);
      }
      return;
    }
  }
  else {
    local_70 = (short *)FUN_000244e8(local_20,local_1c);
  }
  local_6c = 0;
  local_2d4 = (short *)(local_24 + DAT_001933d4);
  local_2d8 = local_24 + 0x37;
  local_54 = (undefined1 *)(local_24 + 0x7c00);
  local_48 = (code *)(local_24 + DAT_001933d4 + -4);
  local_2cc = local_24 + 0x1f80;
  local_74 = (undefined1 *)(local_24 + DAT_001933d8);
  iVar6 = local_24 + DAT_001933dc;
  local_2ac = local_24 + 0x140;
  if (((0 < (int)local_40) && (local_70 != (short *)0x0)) && (local_70 < local_1c)) {
    FUN_00193116();
  }
  *(undefined1 *)(iVar6 + 0x10) = 0;
joined_r0x00193eba:
  iVar11 = local_50;
  if (iVar11 != 1) {
    local_50 = iVar11;
    FUN_000209c2(*(undefined4 *)(iVar11 + 0x20));
    iVar7 = FUN_0016dc78();
    iVar20 = *(int *)(iVar11 + 0x14);
    uVar13 = *(undefined4 *)(iVar11 + 0x20);
    iStack_2d0 = iVar7 * 4 + local_24;
    local_2cc = iStack_2d0 + 0x140;
    piVar18 = *(int **)(iStack_2d0 + 0x15c);
    while ((piVar18 != (int *)0x0 &&
           ((piVar18[1] != iVar20 || (iVar7 = FUN_0003b48a(piVar18[4],uVar13), iVar7 == 0))))) {
      piVar18 = (int *)*piVar18;
    }
    local_50 = *(int *)(local_50 + 0x4c);
    *(undefined4 *)(iVar11 + 0x4c) = 0;
    if (piVar18 != (int *)0x0) {
      for (piVar18 = (int *)piVar18[2]; piVar18 != (int *)0x0; piVar18 = (int *)*piVar18) {
        if ((((*(int *)(iVar11 + 0x1c) == piVar18[7]) &&
             ((*(int *)(iVar11 + 0x1c) != 0 || (*(int *)(iVar11 + 0x28) == piVar18[10])))) &&
            (*(short *)(iVar11 + 6) == *(short *)((int)piVar18 + 6))) &&
           (*(short *)(iVar11 + 8) == *(short *)(piVar18 + 2))) {
          iVar20 = *(int *)(local_78 + 0x1c);
          iVar7 = piVar18[0xc];
          iVar17 = *DAT_001943d8;
          if ((iVar20 - iVar7 < iVar17) &&
             (uVar14 = piVar18[3], iVar17 < (int)((iVar7 + iVar17 * uVar14) - iVar20))) {
            uVar12 = *(uint *)(iVar11 + 0xc);
            if ((uVar14 != uVar12) && (1 < uVar12)) {
              if (((uVar14 != 0xf0) || ((uVar12 != 0x3c || (*(short *)((int)piVar18 + 6) != 0x10))))
                 && ((*local_20 == 0 && (*_DAT_001943dc != 0)))) {
                uVar13 = FUN_0002272c(piVar18 + 1,piVar18[9] + 4,local_2d8);
                FUN_00024642(3,s____Correcting_TTL_from__4d_to__4_001943dd + 3,piVar18[3],
                             *(undefined4 *)(iVar11 + 0xc),uVar13);
              }
              piVar18[3] = *(undefined4 *)(iVar11 + 0xc);
            }
            iVar7 = *(int *)(local_78 + 0x1c);
LAB_00194072:
            piVar18[0xc] = iVar7;
          }
          else if ((iVar7 == iVar20) && ((piVar18[3] == 1 && (piVar18[0x11] == 4)))) {
            if (*_DAT_001943dc != 0) {
              uVar13 = FUN_0002272c(piVar18 + 1,piVar18[9] + 4,local_2d8);
              FUN_00024642(3,s_Cache_flush_for_DE_record__s_00194408,uVar13);
            }
            piVar18[3] = 0;
          }
          else if (iVar17 < (iVar7 + iVar17 * piVar18[3]) - iVar20) {
            piVar18[3] = 1;
            piVar18[0x11] = 4;
            iVar7 = *(int *)(local_78 + 0x1c) + -1;
            goto LAB_00194072;
          }
          FUN_0003f53c(local_24,piVar18);
        }
      }
    }
    if (*(int *)(iVar11 + 0x34) != 0) {
      iVar17 = *(int *)(iVar11 + 0x14);
      local_2e4 = *(int **)(iVar11 + 0x20);
      local_2d4 = (short *)(*(int *)(local_78 + 0x1c) + *DAT_001943d8);
      iVar7 = *(int *)(local_78 + 0x1c) + -0x10000000;
      iVar20 = iVar7;
      for (piVar18 = *(int **)(local_2cc + 0x1c); piVar18 != (int *)0x0; piVar18 = (int *)*piVar18)
      {
        if ((piVar18[1] == iVar17) && (iVar8 = FUN_0003b48a(piVar18[4],local_2e4), iVar8 != 0)) {
          if (piVar18 == (int *)0x0) goto LAB_00194116;
          piVar18 = (int *)piVar18[2];
          goto LAB_001940f2;
        }
      }
      piVar18 = (int *)0x0;
LAB_001940f2:
      if (piVar18 != (int *)0x0) {
        do {
          iVar17 = piVar18[0xc] + *DAT_001943d8 * piVar18[3];
          if ((-1 < (int)local_2d4 - iVar17) && (iVar7 - iVar17 < 0)) {
            iVar7 = iVar17;
          }
          piVar18 = (int *)*piVar18;
        } while (piVar18 != (int *)0x0);
      }
LAB_00194116:
      iVar17 = local_60;
      if (iVar7 - iVar20 < 1) {
        iVar7 = 0;
      }
      else if (iVar7 == 0) {
        iVar7 = 1;
      }
      *(int *)(iVar11 + 0x34) = iVar7;
      if (iVar7 == 0) {
        iVar7 = local_24;
        if (*(int *)(local_60 + 0x38) != 0) {
          uVar13 = FUN_000203e4(*(undefined2 *)(*(int *)(local_60 + 0x38) + 0x230));
          FUN_00024642(0,DAT_00194428,*(int *)(iVar17 + 0x38) + 0x130,uVar13);
        }
        puVar9 = *(undefined4 **)(iVar17 + 0x30);
        do {
          *(undefined4 **)(iVar17 + 0x38) = puVar9;
          do {
            puVar10 = puVar9;
            if ((puVar10 == (undefined4 *)0x0) || (puVar10 == *(undefined4 **)(iVar17 + 0x34))) {
              *(undefined4 *)(iVar17 + 0x38) = 0;
              goto joined_r0x00193eba;
            }
            iVar20 = FUN_00039ee8(iVar11 + 4,puVar10);
            if (iVar20 != 0) {
              FUN_0001ae54(iVar7,iVar11,1);
            }
            puVar9 = *(undefined4 **)(iVar17 + 0x38);
          } while (*(undefined4 **)(iVar17 + 0x38) != puVar10);
          puVar9 = (undefined4 *)*puVar10;
        } while( true );
      }
      if (0 < *(int *)(iStack_2d0 + 0x928) - iVar7) {
        *(int *)(iStack_2d0 + 0x928) = iVar7;
      }
      if (0 < *(int *)(local_78 + 0x30) - iVar7) {
        *(int *)(local_78 + 0x30) = iVar7;
      }
    }
    goto joined_r0x00193eba;
  }
  local_6c = 0;
  local_64 = auStack_1a8;
  local_50 = 1;
  local_70 = local_3c;
LAB_001945fa:
  if (local_6c < (int)(uint)(ushort)local_20[2]) goto LAB_0019460e;
  do {
    FUN_00193032();
LAB_0019460e:
  } while (local_70 == (short *)0x0);
  if (local_1c <= local_70) {
    return;
  }
  local_70 = (short *)FUN_0018addc(local_20,local_70,local_1c,param_8,&local_2d8);
  if (local_70 != (short *)0x0) {
    sVar1 = *local_20;
    local_58 = (byte *)(uint)(param_6 == 0);
    piVar18 = *(int **)(local_60 + 0x30);
    if (piVar18 != (int *)0x0) {
      local_2e4 = (int *)local_b8;
      local_2e8 = (code *)auStack_1a8;
      do {
        if (local_58 == (byte *)0x0) {
          if ((ushort *)piVar18[0x30] != (ushort *)0x0) {
            uVar14 = (uint)*(ushort *)piVar18[0x30];
            goto LAB_00194224;
          }
        }
        else {
          uVar14 = piVar18[0x3f];
LAB_00194224:
          if ((((((uVar14 & 0xffff) == (param_7 & 0xffff)) &&
                (*(short *)((int)piVar18 + 0x12e) == sVar1)) &&
               ((short)piVar18[0x8c] == (short)local_2e4[4])) &&
              ((*(short *)((int)piVar18 + 0x232) == *(short *)((int)local_2e4 + 0x12) &&
               ((short *)piVar18[1] == local_2d4)))) &&
             (iVar11 = FUN_0003b48a(piVar18 + 0x4c,local_2e8), iVar11 != 0)) {
            local_2e4 = piVar18;
            if (piVar18 != (int *)0x0) {
              iStack_2e0 = 0;
              FUN_000209c2(local_64);
              local_44 = FUN_0016dc78();
              pbVar22 = local_64;
              psVar3 = local_2d4;
              piVar18 = *(int **)(local_44 * 4 + local_24 + 0x15c);
              goto joined_r0x00194290;
            }
            break;
          }
        }
        piVar18 = (int *)*piVar18;
      } while (piVar18 != (int *)0x0);
    }
  }
  goto LAB_001945f4;
joined_r0x0019306e:
  if (piVar19 == (int *)0x0) goto LAB_00193090;
  if (((int *)piVar19[1] == piVar5) && (iVar6 = FUN_0003b48a(piVar19[4],puVar4), iVar6 != 0)) {
    if (piVar19 == (int *)0x0) goto LAB_00192fb8;
    piVar19 = (int *)piVar19[2];
    piVar5 = DAT_001933c4;
    goto joined_r0x00193094;
  }
  piVar19 = (int *)*piVar19;
  goto joined_r0x0019306e;
LAB_00193090:
  piVar19 = (int *)0x0;
  piVar5 = DAT_001933c4;
joined_r0x00193094:
  for (; piVar2 = DAT_001933c4, DAT_001933c4 = piVar5, piVar19 != (int *)0x0;
      piVar19 = (int *)*piVar19) {
    iVar6 = FUN_0003b56c(piVar19 + 1,piVar18);
    if (iVar6 != 0) {
      iVar11 = *(int *)(local_78 + 0x1c);
      iVar6 = *piVar2;
      piVar19[0x11] = 4;
      piVar19[0xc] = (iVar11 - iVar6 * piVar19[3]) + -1;
    }
    piVar5 = DAT_001933c4;
    DAT_001933c4 = piVar2;
  }
LAB_00192fb8:
  local_6c = local_6c + 1;
  goto LAB_00192fbe;
joined_r0x00194290:
  if (piVar18 == (int *)0x0) goto LAB_001942fe;
  if (((short *)piVar18[1] == psVar3) && (iVar11 = FUN_0003b48a(piVar18[4],pbVar22), iVar11 != 0)) {
    piVar19 = (int *)0x0;
    local_4c = (int)piVar18;
    if (piVar18 == (int *)0x0) goto LAB_0019430c;
    piVar19 = (int *)piVar18[2];
    piVar5 = DAT_001943d8;
    goto joined_r0x001942ae;
  }
  piVar18 = (int *)*piVar18;
  goto joined_r0x00194290;
LAB_001942fe:
  piVar19 = (int *)0x0;
  piVar5 = DAT_001943d8;
  local_4c = (int)piVar18;
joined_r0x001942ae:
  do {
    piVar18 = DAT_001943d8;
    DAT_001943d8 = piVar5;
    if (piVar19 == (int *)0x0) break;
    iVar11 = FUN_0003b56c(piVar19 + 1,local_2e4);
    piVar5 = (int *)iStack_2e0;
    if (iVar11 != 0) {
      if (0 < (piVar19[0xc] + *piVar18 * piVar19[3]) - *(int *)(local_78 + 0x1c)) break;
      piVar5 = piVar19;
      if (*(char *)(piVar19 + 1) != -0x10) {
        piVar5 = (int *)iStack_2e0;
      }
    }
    iStack_2e0 = (int)piVar5;
    piVar19 = (int *)*piVar19;
    piVar5 = DAT_001943d8;
    DAT_001943d8 = piVar18;
  } while( true );
LAB_0019430c:
  if (((param_8 == 0) && (sStack_a8 != 6)) && (iVar11 = FUN_00023df0(local_64), iVar11 != 0)) {
    if ((*(char *)((int)local_2e4 + 0x24f) == '\0') || (piVar19 != (int *)0x0)) {
      if (*_DAT_001943dc != 0) {
        uVar13 = FUN_000203e4(sStack_a8);
        FUN_00024642(3,DAT_0019442c,local_64,uVar13);
      }
    }
    else {
      if (*_DAT_001943dc != 0) {
        uVar13 = FUN_000203e4(sStack_a8);
        FUN_00024642(3,DAT_00194430,local_64,uVar13);
      }
      *(int **)(local_60 + 0x38) = local_2e4;
      FUN_0002172c(local_24);
      *(undefined4 *)(local_60 + 0x38) = 0;
    }
    goto LAB_001945f4;
  }
  if (piVar19 != (int *)0x0) goto LAB_001945f4;
  local_58 = local_64;
  iVar11 = 0;
  local_3c = local_2d4;
  uVar14 = 0x3c;
  if ((sStack_a8 == 6) && (iVar7 = FUN_0003b48a(local_64,&DAT_00194434), iVar7 != 0)) {
    uVar14 = DAT_0019443c;
  }
  if ((local_20[4] != 0) &&
     (local_70 = (short *)FUN_00024552(local_20,local_1c), local_70 != (short *)0x0)) {
    local_2e8 = local_48;
    local_70 = (short *)FUN_00021e6c(local_24,local_20,local_70,local_1c,param_8,0xa0);
    if ((local_70 != (short *)0x0) &&
       ((*(char *)(iVar6 + 0x10) != -0x10 && (*(short *)(iVar6 + 0x12) == 6)))) {
      uVar12 = *(uint *)(*(int *)((int)local_74 + 0x10) + 0x214);
      if ((*(uint *)((int)local_54 + 0x38) < uVar12) && (**(char **)((int)local_74 + 0xc) != '\0'))
      {
        uVar12 = *(uint *)((int)local_54 + 0x38);
      }
      if (uVar14 < uVar12) {
        uVar14 = uVar12;
      }
      if (sStack_a8 == 6) {
        iVar7 = FUN_0001eb78(local_64);
        iVar20 = FUN_0001eb78(*(undefined4 *)((int)local_74 + 0xc));
        if (iVar20 < iVar7 + -1) {
          uVar13 = thunk_FUN_0003fc2c(local_64);
          iVar17 = FUN_0003b48a(uVar13,*(undefined4 *)((int)local_74 + 0xc));
          if (iVar17 != 0) {
            iVar11 = (iVar7 - iVar20) + -1;
          }
        }
      }
    }
    *(undefined1 *)(iVar6 + 0x10) = 0;
  }
  if (iStack_2e0 != 0) {
    uVar12 = *(int *)(iStack_2e0 + 0xc) * 2;
    if (uVar14 <= uVar12 && uVar12 - uVar14 != 0) {
      uVar14 = uVar12;
    }
    if (0xe10 < uVar14) {
      uVar14 = 0xe10;
    }
  }
  if (local_5c == 2) {
LAB_0019455c:
    local_68 = (code *)&DAT_00001c20;
  }
  else if (local_5c == 3) {
    if (uVar14 != 0xffffffff) goto LAB_0019455c;
    local_68 = entry;
  }
  else {
    uVar12 = FUN_00006158(0x60000000,*DAT_00194624);
    if (uVar12 < uVar14) {
      uVar14 = uVar12;
    }
    local_68 = (code *)((uVar14 >> 2) + uVar14 + 2);
    if (local_68 < (code *)0xf) {
      local_68 = (code *)0xf;
    }
  }
  if (iStack_2e0 == 0) {
    piStack_34 = local_2e4 + 0x30;
    piVar18 = (int *)local_4c;
    while( true ) {
      local_4c = (int)piVar18;
      iStack_2e0 = piStack_34[2];
      local_2e4 = (int *)*DAT_00194628;
      local_2e8 = local_68;
      FUN_00024968(local_24,local_48,local_58,local_3c,sStack_a8,uStack_a6);
      FUN_0001eb94(local_24,local_44,local_4c,0);
      *(undefined1 *)(iVar6 + 0x10) = 0;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      local_58 = local_58 + *local_58 + 1;
      local_3c = (short *)FUN_000209c2();
      FUN_000209c2(local_58);
      local_44 = FUN_0016dc78();
      psVar3 = local_3c;
      piVar18 = *(int **)(local_44 * 4 + local_24 + 0x15c);
      pbVar22 = local_58;
      while ((piVar18 != (int *)0x0 &&
             (((short *)piVar18[1] != psVar3 ||
              (iVar7 = FUN_0003b48a(piVar18[4],pbVar22), iVar7 == 0))))) {
        piVar18 = (int *)*piVar18;
      }
    }
  }
  else {
    uVar13 = *(undefined4 *)(local_78 + 0x1c);
    *(undefined4 *)(iStack_2e0 + 0x44) = 0;
    *(undefined4 *)(iStack_2e0 + 0x30) = uVar13;
    *(code **)(iStack_2e0 + 0xc) = local_68;
    FUN_0003f53c(local_24);
    local_2e4[3] = *(int *)(local_78 + 0x1c);
    local_2e4[0x2b] = *(int *)(local_78 + 0x1c);
    piVar18 = DAT_00194624;
    local_2e4[7] = 0;
    local_2e4[4] = *piVar18 * 0xe10;
    local_2e4[0x2a] = 0;
    *(undefined1 *)(local_2e4 + 0x36) = 0;
  }
LAB_001945f4:
  local_6c = local_6c + 1;
  goto LAB_001945fa;
}

