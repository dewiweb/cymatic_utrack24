// rea decompile_all
// name: FUN_001b5b88
// address: 0x1b5b88
// body: available
// range: 0x1b5b88-0x1b5f79 inclusive
// range: 0x1b5f98-0x1b638b inclusive
// range: 0x1b6398-0x1b63fd inclusive
// range: 0x1b6400-0x1b6587 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b5b88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int local_5f0;
  int local_5ec;
  int local_5e8 [2];
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int local_5d4;
  int local_5d0;
  int aiStack_5a4 [9];
  int aiStack_580 [7];
  int local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  int local_54c;
  int *local_548;
  int local_544;
  int local_540;
  int local_53c;
  int local_538;
  int local_534;
  int local_530;
  int local_52c;
  code *local_528;
  int local_524;
  undefined *local_520;
  int local_518;
  undefined1 auStack_128 [260];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = param_4;
  local_1c = param_3;
  local_20 = param_2;
  local_24 = param_1;
  local_540 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b5f7c) + 0x68);
  local_52c = 0;
  local_534 = 0;
  local_564 = 0;
  if (local_540 == 0) {
    return 0xfffffffd;
  }
  if (*(int *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) == 0) {
    iVar11 = (int)&local_5f0 + DAT_001b5f7c;
    iVar9 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b5f7c + 8) + 4);
    *(undefined4 *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) = *(undefined4 *)(iVar9 + 0xc);
    uVar3 = DAT_001b5f80;
    if (*(int *)(iVar9 + 0x10) != 0) {
      uVar3 = FUN_001a1aa8();
      iVar11 = (int)&local_5f0 + DAT_001b5f7c;
    }
    *(undefined4 *)(iVar11 + 0x70) = uVar3;
  }
  iVar11 = DAT_001b5f88;
  iVar9 = DAT_001b5f84;
  if (*(int *)((int)aiStack_5a4 + DAT_001b5f7c + 4) == 0) {
    FUN_00179128(*(undefined4 *)((int)aiStack_5a4 + DAT_001b5f7c),
                 *(undefined4 *)((int)aiStack_5a4 + DAT_001b5f7c + 8),&local_564);
    if (local_564 != 0) {
      FUN_00187088(local_564,1);
      if ((*(int *)(local_564 + 0x200) == 2) || (*(int *)(local_564 + 0x200) == 3)) {
        FUN_00187088(local_564,1);
      }
      iVar6 = local_564;
      if (local_564 != 0) {
        if (((*(int *)(local_564 + 0x200) == 4) && (*(char *)(local_564 + iVar9 + 0x1c) != '\0')) &&
           (iVar9 = *(int *)((int)&DAT_00002f48 + local_564) * 0x410 + local_564,
           *(char *)((int)&DAT_00002f4c + iVar9) != '\0')) {
          iVar9 = iVar9 + iVar11;
          if (*(char *)(iVar9 + 0x210) == '\0') {
            *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) = iVar9;
            uVar3 = *(undefined4 *)(iVar9 + 0x20c);
          }
          else {
            *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) = iVar9 + 0x210;
            uVar3 = *(undefined4 *)(iVar9 + 0x20c);
          }
          *(undefined4 *)((int)aiStack_580 + DAT_001b5f7c) = uVar3;
        }
        if (*(int *)(iVar6 + 0x208) == 0) {
          if ((code *)*DAT_001b5f8c == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001b5f8c)();
          }
        }
      }
    }
    local_564 = 0;
LAB_001b5d96:
    iVar9 = 0;
    iVar11 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b5f7c) + 0x68);
    do {
      iVar6 = iVar9 * 0xcc + iVar11;
      if (*(int *)(iVar6 + 0xd8) < 1) {
        if ((0 < *(int *)(iVar6 + 0x14)) && (*(int *)(iVar6 + 0x28) != 0)) {
          iVar8 = FUN_0017d738();
          if (iVar8 < 1) {
            if (iVar8 != 0) goto LAB_001b5dc4;
            *(undefined4 *)(iVar6 + 0x28) = 0;
          }
        }
      }
      else {
LAB_001b5dc4:
        FUN_0017d6f4(iVar6 + 0x14);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
    local_520 = &DAT_00009e00 + *(int *)((int)aiStack_5a4 + DAT_001b5f7c);
    if (0 < *(int *)((int)aiStack_580 + DAT_001b5f7c + 4)) {
      iVar9 = 0;
LAB_001b5dec:
      iVar6 = iVar9 * 0xcc + local_540;
      iVar11 = *(int *)(iVar6 + 0x14);
      if ((iVar11 == 0) || (iVar11 != *(int *)((int)aiStack_580 + DAT_001b5f7c + 4)))
      goto LAB_001b5f98;
      local_5dc = *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 8);
      iVar11 = iVar9 * 0xcc + local_540;
      local_5d4 = iVar11 + 0xc0;
      local_5d0 = *(int *)(iVar11 + 0xd4);
      local_5f0 = 0;
      iVar11 = local_5dc + 0x58;
      while (iVar8 = FUN_001a4bc4(iVar11,local_5f0), iVar8 == 0) {
        iVar8 = FUN_001a4bdc(iVar11,local_5f0);
        local_5f0 = local_5f0 + 1;
        if ((((iVar8 != 0) && (iVar4 = *(int *)(iVar8 + 4), iVar4 != 0)) &&
            (*(int *)(iVar4 + 0xc) != 0)) && (0 < local_5d0)) {
          if (*(int *)(iVar4 + 0x10) != 0) {
            if ((code *)*DAT_001b5f8c == entry) {
              FUN_0018a280();
            }
            else {
              (*(code *)*DAT_001b5f8c)();
            }
          }
          if ((code *)*DAT_001b5f90 == entry) {
            uVar3 = FUN_0019b388(10);
          }
          else {
            uVar3 = (*(code *)*DAT_001b5f90)(10);
          }
          uVar1 = DAT_001b5f94;
          *(undefined4 *)(*(int *)(iVar8 + 4) + 0x10) = uVar3;
          FUN_000027f4(uVar3,9,uVar1,local_5d0);
          FUN_001a52cc(local_5dc);
        }
      }
      if (local_520[6] != '\0') {
        pcVar10 = (char *)(iVar6 + 0x8c);
        local_5dc = *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 8);
        iVar11 = 0;
        local_5d0 = *(int *)(local_5d4 + 0x10);
        if (((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) || (0 < local_5d0)) {
          local_5e8[0] = local_5dc + 0x58;
          while (iVar6 = FUN_001a4bc4(local_5e8[0],iVar11), iVar6 == 0) {
            iVar6 = FUN_001a4bdc(local_5e8[0],iVar11);
            iVar11 = iVar11 + 1;
            if (((iVar6 != 0) && (iVar8 = *(int *)(iVar6 + 4), iVar8 != 0)) &&
               (*(int *)(iVar8 + 0xc) != 0)) {
              if (0 < local_5d0) {
                if (*(int *)(iVar8 + 0x10) != 0) {
                  if ((code *)*DAT_001b5f8c == entry) {
                    FUN_0018a280();
                  }
                  else {
                    (*(code *)*DAT_001b5f8c)();
                  }
                }
                if ((code *)*DAT_001b5f90 == entry) {
                  uVar3 = FUN_0019b388(10);
                }
                else {
                  uVar3 = (*(code *)*DAT_001b5f90)(10);
                }
                uVar1 = DAT_001b5f94;
                *(undefined4 *)(*(int *)(iVar6 + 4) + 0x10) = uVar3;
                FUN_000027f4(uVar3,9,uVar1,local_5d0);
                FUN_001a52cc(local_5dc);
              }
              if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
                if (*(int *)(*(int *)(iVar6 + 4) + 0xc) != 0) {
                  if ((code *)*DAT_001b5f8c == entry) {
                    FUN_0018a280();
                  }
                  else {
                    (*(code *)*DAT_001b5f8c)();
                  }
                }
                uVar3 = FUN_001a6f50(pcVar10);
                *(undefined4 *)(*(int *)(iVar6 + 4) + 0xc) = uVar3;
                FUN_001a52cc(local_5dc);
              }
            }
          }
        }
      }
LAB_001b5fa0:
      if (iVar9 == 0x10) {
        *(undefined4 *)((int)aiStack_580 + DAT_001b638c + 4) = 0;
        goto LAB_001b6014;
      }
      if (*(int *)((int)aiStack_580 + DAT_001b638c + 4) < 1) goto LAB_001b6014;
      iVar11 = 0;
      local_5f0 = *(int *)((int)aiStack_5a4 + DAT_001b638c + 0xc);
      iVar6 = *(int *)((int)aiStack_580 + DAT_001b638c);
      local_5d8 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b638c) + 0x68);
      while (((iVar8 = iVar11 * 0xcc + local_5d8, *(int *)(iVar8 + 0x14) == 0 ||
              (iVar4 = FUN_001a6f04(iVar8 + 0x2c,local_5f0), iVar4 != 0)) ||
             (*(int *)(iVar8 + 0x70) != iVar6))) {
        iVar11 = iVar11 + 1;
        if (0xf < iVar11) {
LAB_001b600a:
          if (*(int *)((int)aiStack_580 + DAT_001b638c + 4) < 1) goto LAB_001b6014;
          goto LAB_001b6300;
        }
      }
      if (-1 < iVar11) {
        *(undefined4 *)((int)aiStack_580 + DAT_001b638c + 4) =
             *(undefined4 *)(iVar11 * 0xcc + local_540 + 0x14);
        iVar9 = iVar11;
      }
      goto LAB_001b600a;
    }
LAB_001b6014:
    iVar9 = 0;
    local_5f0 = *(int *)((int)aiStack_5a4 + DAT_001b638c + 0xc);
    iVar6 = *(int *)((int)aiStack_580 + DAT_001b638c);
    iVar11 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b638c) + 0x68);
    do {
      iVar8 = iVar9 * 0xcc + iVar11;
      if (((*(int *)(iVar8 + 0x14) != 0) &&
          (iVar4 = FUN_001a6f04(iVar8 + 0x2c,local_5f0), iVar4 == 0)) &&
         (*(int *)(iVar8 + 0x70) == iVar6)) {
        if (-1 < iVar9) goto LAB_001b62a0;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
    local_550 = *(int *)((int)aiStack_5a4 + DAT_001b638c);
    local_548 = *(int **)((int)aiStack_5a4 + DAT_001b638c + 0xc);
    local_544 = *(int *)((int)aiStack_580 + DAT_001b638c);
    local_524 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b638c) + 0x68);
    local_538 = 0;
    local_5ec = -1;
    FUN_000038a0(local_5e8,0x80);
    local_53c = 0;
    local_560 = 0;
    local_55c = 0;
    local_558 = 0;
    local_554 = 0;
    local_54c = 0;
    do {
      iVar9 = local_53c * 0xcc + local_524;
      if (*(int *)(iVar9 + 0x14) == 0) break;
      if (*(int *)(iVar9 + 0xe0) == 0) {
        local_53c = local_53c + 1;
        goto LAB_001b60b8;
      }
      local_53c = local_53c + 2;
    } while (local_53c < 0x10);
LAB_001b60b8:
    if (local_53c == 0x10) {
LAB_001b60d0:
      iVar9 = -1;
    }
    else {
      local_5f0 = 6;
      iVar9 = FUN_001753ec(local_550,&local_538,local_548,local_544);
      iVar11 = local_538;
      iVar6 = local_538;
      if (iVar9 != 0) goto LAB_001b60d0;
      for (; local_538 = iVar6, iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x1c)) {
        if ((*(int *)(iVar11 + 0xc) == 0) || (*(int *)(iVar11 + 0xc) == 6)) {
          FUN_00003418(local_5e8,local_548);
          local_518 = local_544;
          iVar9 = 0;
          iVar6 = *(int *)(local_550 + 0x68);
          local_528 = (code *)local_5e8;
          do {
            iVar8 = iVar9 * 0xcc + iVar6;
            if (((*(int *)(iVar8 + 0x14) != 0) &&
                (iVar4 = FUN_001a6f04(iVar8 + 0x2c,local_528), iVar4 == 0)) &&
               (*(int *)(iVar8 + 0x70) == local_518)) {
              if (-1 < iVar9) {
                FUN_00174846(local_538);
                goto LAB_001b629c;
              }
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x10);
        }
        iVar6 = local_538;
      }
      if (iVar6 == 0) {
        FUN_00174846();
        iVar9 = -1;
LAB_001b629c:
        if (-1 < iVar9) {
LAB_001b62a0:
          puVar2 = DAT_001b6390;
          local_5dc = iVar9 * 0xcc + local_540;
          *(undefined4 *)((int)aiStack_580 + DAT_001b638c + 4) = *(undefined4 *)(local_5dc + 0x14);
          local_5d4 = *(int *)((int)aiStack_5a4 + DAT_001b638c + 8);
          local_5d8 = local_5dc + 0xc0;
          local_5d0 = *(int *)(local_5dc + 0xd4);
          iVar11 = 0;
          local_5e8[0] = local_5d4 + 0x58;
          while (iVar6 = FUN_001a4bc4(local_5e8[0],iVar11), iVar6 == 0) {
            iVar6 = FUN_001a4bdc(local_5e8[0],iVar11);
            iVar11 = iVar11 + 1;
            if ((((iVar6 != 0) && (iVar8 = *(int *)(iVar6 + 4), iVar8 != 0)) &&
                (*(int *)(iVar8 + 0xc) != 0)) && (0 < local_5d0)) {
              if (*(int *)(iVar8 + 0x10) != 0) {
                if ((code *)*DAT_001b6394 == entry) {
                  FUN_0018a280();
                }
                else {
                  (*(code *)*DAT_001b6394)();
                }
              }
              if ((code *)*puVar2 == entry) {
                uVar3 = FUN_0019b388(10);
              }
              else {
                uVar3 = (*(code *)*puVar2)(10);
              }
              uVar1 = DAT_001b6588;
              *(undefined4 *)(*(int *)(iVar6 + 4) + 0x10) = uVar3;
              FUN_000027f4(uVar3,9,uVar1,local_5d0);
              FUN_001a52cc(local_5d4);
            }
          }
          if (local_520[6] != '\0') {
            FUN_0017d854(*(undefined4 *)((int)aiStack_5a4 + DAT_001b638c),
                         *(undefined4 *)((int)aiStack_5a4 + DAT_001b638c + 8),local_5dc + 0x8c,
                         *(undefined4 *)(local_5d8 + 0x10));
          }
        }
      }
      else {
        iVar9 = -1;
        do {
          if ((*(int *)(iVar6 + 0xc) == 0) || (*(int *)(iVar6 + 0xc) == 6)) {
            FUN_00003418(local_5e8,local_548);
            local_5ec = FUN_00191ed0(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),
                                     *(undefined4 *)(iVar6 + 0xc));
            if (-1 < local_5ec) {
              uVar5 = FUN_00190c68(local_5ec,3,0);
              if ((-1 < (int)uVar5) && (iVar11 = FUN_00190c68(local_5ec,4,uVar5 | 1), -1 < iVar11))
              {
                local_5f0 = 4;
                local_528 = (code *)0x1;
                FUN_00191b64(local_5ec,6,1,&local_528);
                FUN_001799a6(local_550,*(undefined4 *)(local_550 + 0x2c),local_5ec);
                iVar11 = FUN_00190b64(local_5ec,*(undefined4 *)(iVar6 + 0x14),
                                      *(undefined4 *)(iVar6 + 0x10));
                if (-1 < iVar11) break;
                local_530 = 0;
                FUN_00190c40(local_5ec,&local_530);
                if (local_530 == 0xb) {
                  iVar11 = FUN_0017d738(local_5ec);
                  if (0 < iVar11) {
                    local_54c = *(int *)(iVar6 + 0x10);
                    FUN_00003628(&local_560,*(undefined4 *)(iVar6 + 0x14),0x10);
                    break;
                  }
                  if (iVar11 == 0) {
                    local_54c = 0;
                    FUN_00003628(&local_560,*(undefined4 *)(iVar6 + 0x14),0x10);
                    break;
                  }
                }
              }
              FUN_00190b04(local_5ec);
              local_5ec = -1;
            }
          }
          iVar6 = *(int *)(iVar6 + 0x1c);
        } while (iVar6 != 0);
        FUN_00174846(local_538);
        if (0 < local_5ec) {
          iVar11 = local_53c * 0xcc + local_524;
          *(int *)(iVar11 + 0x14) = local_5ec;
          *(undefined4 *)(iVar11 + 0x18) = 0;
          *(undefined4 *)(iVar11 + 0x1c) = 0;
          *(undefined4 *)(iVar11 + 0x20) = 0;
          *(undefined4 *)(iVar11 + 0x24) = 0;
          *(int *)(iVar11 + 0x28) = local_54c;
          if (local_54c != 0) {
            FUN_000037d0(iVar11 + 0x18,&local_560,local_54c);
          }
          piVar7 = local_548;
          if (local_5e8[0]._0_1_ != (code)0x0) {
            piVar7 = local_5e8;
          }
          FUN_001a702a(iVar11 + 0x2c,piVar7,0x40);
          *(int *)(iVar11 + 0x70) = local_544;
          local_550 = 0;
          local_54c = 0;
          local_544 = 0;
          local_530 = 0x10;
          local_548 = (int *)0x0;
          iVar6 = FUN_00190d0c(local_5ec,&local_550,&local_530);
          iVar9 = local_53c;
          if ((iVar6 == 0) && (local_550._1_1_ == '\x02')) {
            *(uint *)(iVar11 + 0xd4) = (uint)(local_550._2_2_ >> 8) | (local_550._2_2_ & 0xff) << 8;
          }
          goto LAB_001b629c;
        }
      }
    }
    if (0 < *(int *)((int)aiStack_580 + DAT_001b638c + 4)) {
LAB_001b6300:
      local_5e0 = FUN_0017d738(*(undefined4 *)((int)aiStack_580 + DAT_001b638c + 4));
      if (local_5e0 < 1) {
        if (local_5e0 == 0) {
          local_5e8[0] = local_5e0;
          FUN_001a5664(*(undefined4 *)((int)aiStack_5a4 + DAT_001b658c + 8),0,&local_5e0);
          FUN_001a7c44(*(int *)(*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 0xac) + 8,
                       &DAT_001b65a8,local_5e8);
          iVar11 = *(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 0xa4;
          if (((local_5e8[0] == 0) && (local_5e0 != 0)) && (*(int *)(local_5e0 + 4) != 0)) {
            FUN_001a4cbc(iVar11);
          }
          iVar6 = FUN_001a6880(*(undefined4 *)((int)aiStack_5a4 + DAT_001b658c + 8),&local_534,
                               &local_52c);
          if (((local_5e8[0] == 0) && (local_5e0 != 0)) && (*(int *)(local_5e0 + 4) != 0)) {
            FUN_001a4a80(iVar11,local_5e0,0);
          }
          if ((iVar6 == 0) && (local_52c != 0)) {
            if ((-1 < iVar9) && (*(int *)(*(int *)((int)aiStack_5a4 + DAT_001b658c) + 0xd0) == 1)) {
              iVar11 = iVar9 * 0xcc + local_540 + 0x2c;
              iVar9 = FUN_001a6f04(*(undefined4 *)((int)aiStack_5a4 + DAT_001b658c + 0xc),iVar11);
              if (((iVar9 != 0) &&
                  (*(int *)(*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 0xc) == 0)) &&
                 (iVar9 = FUN_00003960(*(undefined4 *)
                                        (*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 8),
                                       s_REGISTER_001b6590), iVar9 == 0)) {
                FUN_000038a0(&local_528,0x500);
                FUN_000027f4(&local_528,0x400,&DAT_001b65b0,
                             *(undefined4 *)((int)aiStack_5a4 + DAT_001b658c + 0xc));
                FUN_000027f4(auStack_128,0x100,&DAT_001b65b0,iVar11);
                FUN_00187990(*(undefined4 *)((int)aiStack_5a4 + DAT_001b658c),9,&local_528);
              }
            }
            iVar11 = *(int *)((int)aiStack_580 + DAT_001b658c + 4);
            iVar6 = *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b658c) + 0x68);
            iVar9 = 0;
            do {
              iVar8 = iVar9 * 0xcc + iVar6;
              if (*(int *)(iVar8 + 0x14) == iVar11) {
                iVar9 = iVar9 * 0xcc + iVar6 + 0x14;
LAB_001b6558:
                if (iVar9 != 0) {
                  uVar3 = FUN_0017d7b8(iVar9,local_534,local_52c);
                  goto LAB_001b6560;
                }
                break;
              }
              if (*(int *)(iVar8 + 0xe0) == iVar11) {
                iVar9 = iVar9 * 0xcc + iVar6 + 0xe0;
                goto LAB_001b6558;
              }
              iVar9 = iVar9 + 2;
            } while (iVar9 < 0x10);
            uVar3 = 0xffffffff;
LAB_001b6560:
            if (local_534 == 0) {
              return uVar3;
            }
            if ((code *)*DAT_001b65ac != entry) {
              (*(code *)*DAT_001b65ac)();
              return uVar3;
            }
            FUN_0018a280();
            return uVar3;
          }
          if (local_534 != 0) {
            if ((code *)*DAT_001b65ac == entry) {
              FUN_0018a280();
            }
            else {
              (*(code *)*DAT_001b65ac)();
            }
          }
        }
      }
      else {
        iVar9 = FUN_001a4490(0);
        if ((((*(int *)((int)aiStack_5a4 + DAT_001b638c + 4) == 0) ||
             (uVar5 = iVar9 - *(int *)(*(int *)((int)aiStack_5a4 + DAT_001b638c + 4) + 0x30),
             uVar5 < 0xb)) || (0xc < uVar5)) ||
           (((local_564 != 0 && (*(int *)(*(int *)((int)aiStack_5a4 + DAT_001b638c + 8) + 0xc) == 0)
             ) && (((iVar9 = FUN_00003960(*(undefined4 *)
                                           (*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 8),
                                          s_REGISTER_001b6590), iVar9 == 0 ||
                    ((*(int *)(*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 0xc) == 0 &&
                     (iVar9 = FUN_00003960(*(undefined4 *)
                                            (*(int *)((int)aiStack_5a4 + DAT_001b658c + 8) + 8),
                                           s_OPTIONS_001b659c), iVar9 == 0)))) &&
                   (iVar9 = FUN_0018708e(local_564 + DAT_001b65a4), 0 < iVar9))))))
        goto LAB_001b63f2;
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    iVar6 = *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 4);
    local_564 = *(int *)(iVar6 + 0x2b48);
    if (local_564 == 0) goto LAB_001b5d96;
    FUN_00187088(local_564,0);
    if ((*(int *)(local_564 + 0x200) == 2) || (*(int *)(local_564 + 0x200) == 3)) {
      FUN_00187088(local_564,0);
    }
    iVar8 = *(int *)(local_564 + 0x200);
    if (iVar8 == 0) {
      if ((*(int *)(local_564 + 0x208) == 0) && (local_564 != 0)) {
        if ((code *)*DAT_001b5f8c == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_001b5f8c)();
        }
      }
      local_564 = 0;
      iVar9 = *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 4);
joined_r0x001b5d1e:
      local_564 = 0;
      if (iVar9 != 0) {
        local_564 = 0;
        *(undefined4 *)(iVar6 + 0x2b48) = 0;
      }
      goto LAB_001b5d96;
    }
    if (((iVar8 != 1) && (iVar8 != 2)) && (iVar8 != 3)) {
      if (iVar8 == 4) {
        if ((*(char *)(local_564 + iVar9 + 0x1c) != '\0') &&
           (iVar9 = *(int *)((int)&DAT_00002f48 + local_564) * 0x410 + local_564,
           *(char *)((int)&DAT_00002f4c + iVar9) != '\0')) {
          iVar9 = iVar9 + iVar11;
          if (*(char *)(iVar9 + 0x210) == '\0') {
            *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) = iVar9;
            uVar3 = *(undefined4 *)(iVar9 + 0x20c);
          }
          else {
            *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 0xc) = iVar9 + 0x210;
            uVar3 = *(undefined4 *)(iVar9 + 0x20c);
          }
          *(undefined4 *)((int)aiStack_580 + DAT_001b5f7c) = uVar3;
        }
      }
      else if ((iVar8 == 6) || (iVar8 == 5)) {
        if ((*(int *)(local_564 + 0x208) == 0) && (local_564 != 0)) {
          if ((code *)*DAT_001b5f8c == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001b5f8c)();
          }
        }
        local_564 = 0;
        iVar9 = *(int *)((int)aiStack_5a4 + DAT_001b5f7c + 4);
        goto joined_r0x001b5d1e;
      }
      goto LAB_001b5d96;
    }
LAB_001b63f2:
    uVar3 = 1;
  }
  return uVar3;
LAB_001b5f98:
  iVar9 = iVar9 + 1;
  if (0xf < iVar9) goto LAB_001b5fa0;
  goto LAB_001b5dec;
}

