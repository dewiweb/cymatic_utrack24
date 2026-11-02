// rea decompile_all
// name: FUN_001f1784
// address: 0x1f1784
// body: available
// range: 0x1f1784-0x1f258f inclusive
// range: 0x1f8af0-0x1f8b53 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f185c to 0x248c40 FUN_00248c40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f1920 to 0x248dc0 FUN_00248dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f1944 to 0x248dc0 FUN_00248dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f1a40 to 0x248dc0 FUN_00248dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f1aa0 to 0x249444 FUN_00249444 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f1bcc to 0x248dc0 FUN_00248dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1f258c to 0x249444 FUN_00249444 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_001f1784(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar9;
  undefined4 extraout_r1_03;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iStack_74;
  uint uStack_70;
  
  uVar2 = param_4 & 0x7fffffff;
  uVar5 = param_2 & 0x7fffffff;
  if (((uint)(param_1 != 0) + param_2 * 2 + DAT_001f2590 < (uint)(DAT_001f2590 >> 1)) ||
     (DAT_001f2590 + (uint)(param_3 != 0) + param_4 * 2 < DAT_001f2594)) goto LAB_001f1844;
  if (uVar2 == 0 && param_3 == 0) {
    return 0;
  }
  if (param_2 == DAT_001f2598) {
    if (param_1 == 0) {
      return 0;
    }
LAB_001f181c:
    iVar14 = 1;
  }
  else {
    if (param_1 != 0) goto LAB_001f181c;
    iVar14 = 0;
  }
  if ((0xffe00000 < iVar14 + param_2 * 2) || (0xffe00000 < (uint)(param_3 != 0) + param_4 * 2)) {
LAB_001f1844:
    uVar5 = FUN_00248c40(param_1,param_2,param_3,param_4);
    return (ulonglong)uVar5;
  }
  iVar14 = 0;
  if ((int)param_2 < 0 && (int)uVar2 < (int)DAT_001f259c) {
    if ((int)uVar2 < DAT_001f25a0) {
      if ((int)DAT_001f2598 <= (int)uVar2) {
        iVar10 = DAT_001f25a4 + ((int)uVar2 >> 0x14);
        if (iVar10 < 0x15) {
          if ((param_3 == 0) &&
             (uVar12 = uVar2 >> (0x14U - iVar10 & 0xff), uVar12 << (0x14U - iVar10 & 0xff) == uVar2)
             ) goto LAB_001f18d4;
        }
        else {
          uVar12 = param_3 >> (0x34U - iVar10 & 0xff);
          if (uVar12 << (0x34U - iVar10 & 0xff) == param_3) {
LAB_001f18d4:
            iVar14 = 2 - (uVar12 & 1);
          }
        }
      }
    }
    else {
      iVar14 = 2;
    }
  }
  if ((uVar5 == 0 && param_1 == 0) && ((int)param_4 < 0)) {
    if ((param_2 != 0 && iVar14 != 2) && (iVar14 == 1)) {
      FUN_000041ba(2);
      uVar5 = FUN_00248dc0(0,DAT_001f2598,param_1,param_2);
      return (ulonglong)uVar5;
    }
    FUN_000041ba(2);
    uVar5 = FUN_00248dc0(0,DAT_001f2598,0,0);
    return (ulonglong)uVar5;
  }
  if (param_3 == 0) {
    if (uVar2 == DAT_001f259c) {
      if (param_2 == 0xbff00000 && param_1 == 0) {
        return 0;
      }
      if ((int)uVar5 < (int)DAT_001f2598) {
        if ((int)param_4 < 0) {
          return 0;
        }
      }
      else if (-1 < (int)param_4) {
        return 0;
      }
      return *(ulonglong *)(DAT_001f25a8 + 0x1f19bc);
    }
    if (uVar2 == DAT_001f2598) {
      if (-1 < (int)param_4) {
LAB_001f1a44:
        return CONCAT44(param_2,param_1);
      }
      if (uVar5 != 0) {
        if (uVar5 == DAT_001f259c) {
          if (param_1 == 0) {
            return 0;
          }
        }
        else if ((int)uVar5 < (int)DAT_001f259c) {
          uVar5 = FUN_00248dc0(0,DAT_001f2598,param_1,param_2);
          return (ulonglong)uVar5;
        }
        goto LAB_001f1a44;
      }
      if (param_1 == 0) {
        return 0;
      }
      goto LAB_001f2284;
    }
    if ((int)uVar5 < (int)DAT_001f259c) {
      if (param_4 == 0x40000000) {
        uVar5 = FUN_00249444(param_1,param_2);
        return (ulonglong)uVar5;
      }
      if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
        uVar22 = FUN_00249728();
        if (((int)(DAT_001f8b54 - ((uint)((int)uVar22 != 0) | (uint)(uVar22 >> 0x20) & 0x7fffffff))
             < 0) && (-1 < (int)(DAT_001f8b54 - ((uint)(param_1 != 0) | param_2 & 0x7fffffff)))) {
          thunk_FUN_000041ba(1);
        }
        return uVar22;
      }
    }
  }
  if (param_1 == 0) {
    if (uVar5 == 0) {
      if (iVar14 == 2 || param_2 == 0) {
        return 0;
      }
      if (iVar14 != 1) {
        return 0;
      }
      if (-1 < (int)param_2) {
        return 0;
      }
      return 0;
    }
    if (uVar5 == DAT_001f259c) {
      if ((0 < (int)param_2) && (-1 < (int)param_4)) {
        return 0;
      }
      if ((0 < (int)param_2) && ((int)param_4 < 0)) {
        return 0;
      }
      if (((int)param_2 < 0) && (-1 < (int)param_4)) {
        return 0;
      }
      if ((int)param_2 < 0 && (int)param_4 < 0) {
        if (iVar14 != 1) {
          return 0;
        }
        return 0;
      }
    }
  }
  if ((int)param_2 < 0 && iVar14 == 0) {
    FUN_000041ba(1);
    uVar5 = FUN_00248dc0(0,0,0,0);
    return (ulonglong)uVar5;
  }
  if ((int)uVar2 <= DAT_001f25ac) {
    iVar10 = 0;
    if (uVar5 < 0x100000) {
      uVar17 = FUN_0024a428(param_1,param_2 & 0x7fffffff,0x35);
      uVar5 = (uint)((ulonglong)uVar17 >> 0x20);
      param_1 = (int)uVar17;
      iVar10 = -0x35;
    }
    iVar10 = iVar10 + ((int)uVar5 >> 0x14);
    iStack_74 = iVar10 + -0x3ff;
    uVar5 = uVar5 & 0xfffff;
    uStack_70 = uVar5 | 0x3ff00000;
    if (DAT_001f25cc < (int)uVar5) {
      if ((int)uVar5 < DAT_001f25d0) {
        iVar13 = 1;
      }
      else {
        iVar13 = 0;
        iStack_74 = iVar10 + -0x3fe;
        uStack_70 = uStack_70 - 0x100000;
      }
    }
    else {
      iVar13 = 0;
    }
    puVar3 = (undefined4 *)(DAT_001f25d4 + 0x1f1df4 + iVar13 * 8);
    uVar17 = FUN_00249928(param_1,uStack_70,*puVar3,puVar3[1]);
    uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar18 = FUN_00248c40(param_1,uStack_70,*puVar3,puVar3[1]);
    uVar18 = FUN_00248dc0(0,DAT_001f2598,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_00249444((int)uVar17,uVar6,(int)uVar18,uVar7);
    uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar11 = (undefined4)uVar19;
    uVar4 = *(undefined4 *)(DAT_001f25d8 + 0x1f1e6c);
    iVar10 = ((int)uStack_70 >> 1 | 0x20000000U) + iVar13 * 0x40000 + 0x80000;
    uVar19 = FUN_00249928(uVar4,iVar10,*puVar3,puVar3[1]);
    uVar19 = FUN_00249710((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),param_1,uStack_70);
    uVar19 = FUN_00249444((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0,uVar8);
    uVar20 = FUN_00249444(0,uVar8,uVar4,iVar10);
    uVar17 = FUN_00249710((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar17,uVar6);
    uVar17 = FUN_00249928((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar17 = FUN_00249444((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,uVar7);
    uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar18 = FUN_00249444(uVar11,uVar8);
    uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_001c72b8(DAT_001f25dc + 0x1f1f2c,6,(int)uVar18,uVar6);
    uVar18 = FUN_00249444((int)uVar18,uVar6);
    uVar18 = FUN_00249444((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar19 = FUN_00248c40(0,uVar8,uVar11);
    uVar19 = FUN_00249444((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,uVar4);
    uVar18 = FUN_00248c40((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_00249444(0,uVar8);
    uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = FUN_00248c40((int)uVar19,uVar7,0,DAT_001f25e0);
    FUN_00248c40((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar18,uVar6);
    uVar20 = FUN_00249928(0,extraout_r1_00,0,DAT_001f25e0);
    uVar19 = FUN_00249928((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar19,uVar7);
    uVar18 = FUN_00249710((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar6);
    uVar19 = FUN_00249444(0,uVar8,0,extraout_r1_00);
    uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar18 = FUN_00249444((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar11,uVar8);
    uVar17 = FUN_00249444((int)uVar17,uVar4,0,extraout_r1_00);
    uVar17 = FUN_00248c40((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
    FUN_00248c40((int)uVar19,uVar6,(int)uVar17,uVar11);
    uVar18 = FUN_00249928(0,extraout_r1_01,(int)uVar19,uVar6);
    uVar17 = FUN_00249710((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar11);
    uVar18 = FUN_00249444(0,extraout_r1_01,0xe0000000,DAT_001f25e4);
    uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar17 = FUN_00249444((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_001f25e8,DAT_001f25e4);
    uVar19 = FUN_00249444(0,extraout_r1_01,DAT_001f25ec,DAT_001f25f0);
    uVar17 = FUN_00248c40((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
    puVar3 = (undefined4 *)(DAT_001f25f4 + 0x1f20fc + iVar13 * 8);
    uVar17 = FUN_00248c40((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),*puVar3,puVar3[1]);
    uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar19 = FUN_00249204(iStack_74);
    uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar20 = FUN_00248c40((int)uVar18,uVar11,(int)uVar17,uVar4);
    puVar3 = (undefined4 *)(DAT_001f25f8 + 0x1f213c + iVar13 * 8);
    uVar20 = FUN_00248c40((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),*puVar3,puVar3[1]);
    FUN_00248c40((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar19,uVar6);
    uVar19 = FUN_00249928(0,extraout_r1_02,(int)uVar19,uVar6);
    uVar19 = FUN_00249928((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),*puVar3,puVar3[1]);
    uVar18 = FUN_00249928((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar11);
    uVar17 = FUN_00249710((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar4);
    uVar11 = extraout_r1_02;
LAB_001f218c:
    uVar5 = DAT_001f2598;
    if ((int)param_2 < 0 && iVar14 == 1) {
      uVar5 = DAT_001f2598 | DAT_001f2598 << 0xb;
    }
    uVar17 = FUN_00249444(param_3,param_4,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    uVar18 = FUN_00249928(param_3,param_4,0);
    uVar18 = FUN_00249444((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,uVar11);
    uVar17 = FUN_00248c40((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar4 = (undefined4)uVar17;
    uVar17 = FUN_00249444(0,param_4,0,uVar11);
    uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar11 = (undefined4)uVar17;
    lVar21 = FUN_00248c40(uVar11,uVar7,uVar4,uVar6);
    uVar2 = (uint)((ulonglong)lVar21 >> 0x20);
    iVar14 = (int)lVar21;
    uVar16 = DAT_001f25fc <= uVar2;
    if ((int)DAT_001f25fc <= (int)uVar2) {
      if (uVar2 == DAT_001f25fc && iVar14 == 0) {
        uVar18 = FUN_00249928(iVar14,uVar2,uVar11,uVar7);
        uVar19 = FUN_00248c40(uVar4,uVar6,DAT_001f25c0,DAT_001f2600);
        FUN_00249684((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                     (int)((ulonglong)uVar18 >> 0x20));
        if ((bool)uVar16) goto LAB_001f2314;
      }
LAB_001f2284:
      FUN_000041ba(2);
      uVar5 = FUN_0024a428(0,0x70000000,DAT_001f25b0);
      return (ulonglong)uVar5;
    }
    uVar16 = DAT_001f2604 <= (uVar2 & 0x7fffffff);
    if (!(bool)uVar16) {
LAB_001f2314:
      uVar12 = 0;
      if ((int)~(DAT_001f25a4 >> 0xc | DAT_001f25a4 << 0x14) < (int)(uVar2 & 0x7fffffff)) {
        uVar2 = (0x100000U >> (DAT_001f25a4 + ((int)(uVar2 & 0x7fffffff) >> 0x14) + 1 & 0xff)) +
                uVar2;
        uVar9 = DAT_001f25a4 + ((uVar2 & 0x7fffffff) >> 0x14);
        uVar12 = (uVar2 & 0xfffff | 0x100000) >> (0x14 - uVar9 & 0xff);
        if (lVar21 < 0) {
          uVar12 = -uVar12;
        }
        uVar17 = FUN_00249928(uVar11,uVar7,*(undefined4 *)(DAT_001f2608 + 0x1f2354),
                              uVar2 & ~(DAT_001f2594 >> (uVar9 & 0xff)));
      }
      uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
      FUN_00248c40(uVar4,uVar6,(int)uVar17,uVar11);
      uVar18 = FUN_00249444(0,extraout_r1_03,0,DAT_001f260c);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar19 = FUN_00249444(0,extraout_r1_03,DAT_001f2610,DAT_001f2614);
      uVar17 = FUN_00249928(0,extraout_r1_03,(int)uVar17,uVar11);
      uVar17 = FUN_00249710((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar4,uVar6);
      uVar17 = FUN_00249444((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_001f2618,DAT_001f261c);
      uVar17 = FUN_00248c40((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,
                            (int)((ulonglong)uVar19 >> 0x20));
      uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar19 = FUN_00248c40((int)uVar17,uVar4,(int)uVar18,uVar7);
      uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
      uVar11 = (undefined4)uVar19;
      uVar18 = FUN_00249928(uVar11,uVar6,(int)uVar18,uVar7);
      uVar17 = FUN_00249710((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar4);
      uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar18 = FUN_00249444(uVar11,uVar6);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar19 = FUN_001c72b8(DAT_001f2620 + 0x1f2484,5,(int)uVar18,uVar7);
      uVar18 = FUN_00249444((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar7);
      uVar18 = FUN_00249710((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar11,uVar6);
      uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar19 = FUN_00249444(uVar11,uVar6,(int)uVar17,uVar4);
      uVar17 = FUN_00248c40((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,uVar4);
      uVar19 = FUN_00249928((int)uVar18,uVar7,0,0x40000000);
      uVar18 = FUN_00249444(uVar11,uVar6,(int)uVar18,uVar7);
      uVar18 = FUN_00248dc0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,
                            (int)((ulonglong)uVar19 >> 0x20));
      uVar17 = FUN_00249928((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
      uVar17 = FUN_00249928((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar11,uVar6);
      uVar17 = FUN_00249710((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,DAT_001f2598);
      iVar14 = (int)((ulonglong)uVar17 >> 0x20);
      uVar11 = (undefined4)uVar17;
      iVar10 = iVar14 + uVar12 * 0x100000;
      uVar17 = CONCAT44(iVar10,uVar11);
      if (iVar10 >> 0x14 < 1) {
        FUN_0024a428(uVar11,iVar14,uVar12);
        iVar10 = FUN_001c7074();
        if (iVar10 == 4) {
          FUN_001c73a8();
        }
        uVar17 = FUN_0024a428(uVar11,iVar14,uVar12);
      }
      uVar5 = FUN_00249444(0,uVar5,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      return (ulonglong)uVar5;
    }
    bVar1 = uVar2 + DAT_001f2604 * 0x1fffff == 0;
    uVar15 = bVar1 && iVar14 == 0;
    if (bVar1 && iVar14 == 0) {
      uVar18 = FUN_00249928(iVar14,uVar2,uVar11,uVar7);
      FUN_00249684((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar4,uVar6);
      if ((bool)uVar16 && !(bool)uVar15) goto LAB_001f2314;
    }
    FUN_000041ba(2);
    uVar5 = FUN_001c73a8();
    goto LAB_001f22d4;
  }
  if (DAT_001f25ac + 0x2100000 < (int)uVar2) {
    if (DAT_001f25ac + -0x1f00001 < (int)uVar5) {
      if ((int)uVar5 < (int)DAT_001f2598) goto LAB_001f1be8;
      goto joined_r0x001f1c0c;
    }
joined_r0x001f1bf4:
    if ((int)param_4 < 0) {
LAB_001f1c10:
      FUN_000041ba(2);
      uVar5 = FUN_0024a428(0,0x70000000,DAT_001f25b0);
      goto LAB_001f22d4;
    }
  }
  else {
LAB_001f1be8:
    if ((int)uVar5 < DAT_001f25ac + -0x1f00001) goto joined_r0x001f1bf4;
    if ((int)uVar5 <= (int)DAT_001f2598) {
      uVar17 = FUN_00249928(param_1,param_2,0);
      uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar11 = (undefined4)uVar17;
      FUN_0024a428(uVar11,uVar4,0xfffffffe);
      uVar17 = FUN_00249710();
      uVar17 = FUN_00249444((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar11,uVar4);
      uVar17 = FUN_00249710((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,DAT_001f25b8);
      uVar18 = FUN_00249444(uVar11,uVar4);
      uVar17 = FUN_00249444((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
      uVar18 = FUN_00249444(uVar11,uVar4,0x60000000,DAT_001f25bc);
      uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar17 = FUN_00249444((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_001f25c0,DAT_001f25bc);
      uVar19 = FUN_00249444(uVar11,uVar4,DAT_001f25c4,DAT_001f25c8);
      uVar17 = FUN_00249928((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
      uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
      FUN_00248c40((int)uVar18,uVar6,(int)uVar17,uVar11);
      uVar18 = FUN_00249928(0,extraout_r1,(int)uVar18,uVar6);
      uVar17 = FUN_00249710((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,uVar11);
      uVar11 = extraout_r1;
      goto LAB_001f218c;
    }
joined_r0x001f1c0c:
    if (0 < (int)param_4) goto LAB_001f1c10;
  }
  FUN_000041ba(2);
  uVar5 = FUN_001c73a8();
LAB_001f22d4:
  return (ulonglong)uVar5;
}

