// rea decompile_all
// name: FUN_001e3108
// address: 0x1e3108
// body: available
// range: 0x1e3108-0x1e3323 inclusive
// range: 0x1e3334-0x1e334f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_001e3108(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  byte extraout_var;
  uint uVar4;
  byte extraout_var_00;
  uint unaff_r4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint unaff_lr;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr12;
  
  bVar3 = (byte)(param_2 >> 3);
  bVar13 = (DAT_001e33d0 & ~(param_2 >> 4)) == 0;
  if (!bVar13) {
    bVar3 = (byte)(param_4 >> 3);
  }
  bVar12 = (bool)(bVar3 & 1);
  if (bVar13 || (DAT_001e33d0 & ~(param_4 >> 4)) == 0) {
    FUN_001e3904();
    if (!bVar12) {
      coprocessor_function(0xe,0xf,0,in_cr7,in_cr12,in_cr9);
    }
    bVar3 = extraout_var ^ extraout_var_00;
  }
  else {
    uVar8 = param_2 ^ param_4;
    uVar5 = DAT_001e33d0 & param_2 >> 4;
    bVar13 = uVar5 == 0;
    uVar7 = uVar8 >> 0x1f;
    if (!bVar13) {
      uVar8 = DAT_001e33d0 & param_4 >> 4;
      bVar13 = uVar8 == 0;
    }
    if (bVar13) {
      if ((param_2 & DAT_001e33d0 << 4) == 0) {
        if ((param_4 & DAT_001e33d0 << 4) == 0) {
          return (ulonglong)DAT_001e33d4 << 0x20;
        }
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
      bVar3 = (byte)(param_2 >> 0x18) ^ (byte)(param_4 >> 0x18);
    }
    else {
      iVar6 = (uVar5 | uVar7) - uVar8;
      uVar8 = param_4 << 0xb | 0x80000000;
      uVar5 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
      uVar4 = uVar8 | param_3 >> 0x15;
      uVar7 = iVar6 + 0x3fe0000;
      if (uVar5 == uVar4 && param_1 * 0x800 == param_3 * 0x800) {
        uVar5 = 0x100000;
        uVar4 = 0;
      }
      else {
        uVar9 = (uint)*(byte *)((uVar8 >> 0x18) + 0x1e32d0);
        uVar9 = uVar9 * (0x1000000 - uVar9 * (uVar8 >> 0x10)) >> 0xf;
        iVar10 = (int)((ulonglong)uVar4 * (ulonglong)uVar9);
        uVar9 = uVar9 * (0x10000 -
                        ((int)((ulonglong)uVar4 * (ulonglong)uVar9 >> 0x20) + (uint)(iVar10 != 0)))
                + (int)((ulonglong)(uint)-iVar10 * (ulonglong)uVar9 >> 0x20);
        lVar1 = (ulonglong)uVar4 * (ulonglong)uVar9 +
                ((ulonglong)(param_3 * 0x800) * (ulonglong)uVar9 >> 0x20);
        iVar10 = (int)lVar1;
        uVar2 = (ulonglong)(0x80000000 - ((int)((ulonglong)lVar1 >> 0x20) + (uint)(iVar10 != 0))) *
                (ulonglong)uVar9 + ((ulonglong)(uint)-iVar10 * (ulonglong)uVar9 >> 0x20);
        uVar9 = (uint)(uVar2 >> 0x20);
        uVar4 = (uint)((uVar2 & 0xffffffff) * (ulonglong)uVar5 >> 0x20);
        uVar11 = (uint)((ulonglong)uVar9 * (ulonglong)(param_1 * 0x800) >> 0x20);
        lVar1 = (ulonglong)uVar9 * (ulonglong)uVar5 +
                (ulonglong)CONCAT14(CARRY4(uVar4,uVar11),uVar4 + uVar11);
        iVar10 = (int)((ulonglong)lVar1 >> 0x20);
        unaff_lr = iVar10 + 0x70000000;
        if (!SCARRY4(iVar10,0x70000000)) {
          uVar7 = iVar6 + 0x3fd0000;
          lVar1 = CONCAT44(iVar10 * 2 + (uint)(byte)((byte)((ulonglong)lVar1 >> 0x18) >> 7),
                           (int)lVar1 << 1);
        }
        uVar5 = (uint)((ulonglong)(lVar1 + 0x80) >> 0x20);
        uVar4 = (uint)(lVar1 + 0x80) >> 8 | uVar5 * 0x1000000;
        uVar5 = uVar5 >> 8;
        if ((int)lVar1 * 0x1000000 + 0x91000000U < 0x10000001) {
          uVar9 = param_3 & 0x1fffff | (param_3 >> 0x15) << 0x15;
          iVar6 = uVar5 * uVar9 +
                  uVar4 * (uVar8 >> 0xb) + (int)((ulonglong)uVar9 * (ulonglong)uVar4 >> 0x20);
          if (-1 < (int)unaff_lr) {
            iVar6 = iVar6 + (param_1 & 0x1fffff) * -0x100000;
          }
          unaff_lr = iVar6 + (param_1 & 0x1fffff) * -0x100000 + (uVar8 >> 0xc) +
                     (uint)CARRY4((uint)((ulonglong)uVar9 * (ulonglong)uVar4),
                                  uVar9 >> 1 | (uVar8 >> 0xb) << 0x1f);
          if ((int)unaff_lr < 0) {
            bVar13 = 0xfffffffe < uVar4;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + bVar13;
          }
        }
      }
      uVar9 = uVar7 & 0xfffffffe;
      uVar8 = uVar7;
      if (uVar9 < 0x7f00001) {
        uVar8 = unaff_r4;
      }
      iVar6 = uVar5 + uVar7 * -0x80000000 + uVar9 * 0x10;
      if (uVar9 < 0x7f00001) {
        return CONCAT44(iVar6,uVar4);
      }
      if (-1 < (int)uVar8) {
        unaff_lr = iVar6 + 0x100000;
      }
      if (-1 < (int)uVar8 && -1 < (int)(unaff_lr ^ uVar8 << 0x1f)) {
        return CONCAT44(iVar6,uVar4);
      }
      if ((int)uVar8 < 0) {
        return (ulonglong)(iVar6 + 0x60000000U & 0x80000000) << 0x20;
      }
      bVar3 = (byte)((uint)(iVar6 + -0x60000000) >> 0x18);
    }
  }
  return (ulonglong)((uint)(bVar3 >> 7) << 0x1f | 0x7ff00000) << 0x20;
}

