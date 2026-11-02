// rea decompile_all
// name: FUN_00249710
// address: 0x249710
// body: available
// range: 0x249710-0x249727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_00249710(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  
  uVar3 = param_2 ^ 0x80000000;
  if (-1 < (int)(param_2 ^ param_4)) {
    param_4 = param_4 ^ 0x80000000;
    bVar12 = param_3 <= param_1;
    uVar8 = param_1 - param_3;
    if (uVar3 <= param_4 && (uint)bVar12 <= uVar3 - param_4) {
      bVar13 = CARRY4(param_3,uVar8);
      param_3 = param_3 + uVar8;
      uVar10 = uVar3 - (param_4 + !bVar12) ^ 0x80000000;
      param_4 = param_4 + uVar10 + (uint)bVar13;
      bVar12 = param_1 < uVar8;
      param_1 = param_1 - uVar8;
      uVar3 = uVar3 - (uVar10 + bVar12);
    }
    uVar8 = uVar3 >> 0x14;
    uVar10 = uVar8 - (param_4 >> 0x14);
    if ((DAT_00249b24 & param_4 << 1) == 0 || DAT_00249b24 == uVar8 << 0x15) {
      bVar12 = SUB41(uVar3 >> 0x1f,0);
      if (DAT_00249b24 == uVar8 << 0x15) {
        FUN_002495bc();
        do {
          do {
          } while (bVar12);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((uVar3 & DAT_00249b24 >> 1) == 0) {
        uVar3 = 0;
        param_1 = 0;
      }
      return CONCAT44(uVar3,param_1);
    }
    uVar6 = -param_3;
    iVar7 = ((int)DAT_00249b24 >> 1) -
            ((param_4 & ~((int)DAT_00249b24 >> 1)) + (uint)(param_3 != 0));
    uVar11 = 0x20 - uVar10;
    uVar4 = uVar3 & ~(uVar8 << 0x14);
    if (uVar10 < 0x21) {
      uVar2 = uVar6 >> (uVar10 & 0xff);
      uVar1 = param_1 + uVar2;
      uVar4 = uVar4 + (iVar7 >> (uVar10 & 0xff)) + (uint)CARRY4(param_1,uVar2);
      uVar10 = iVar7 << (uVar11 & 0xff);
      uVar2 = uVar1 + uVar10;
      bVar12 = CARRY4(uVar4,(uint)CARRY4(uVar1,uVar10));
      iVar7 = uVar4 + CARRY4(uVar1,uVar10);
    }
    else {
      uVar10 = uVar10 - 0x20;
      uVar6 = (uint)(param_3 * -2 != 0) | (iVar7 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
      uVar11 = 0x1e - uVar10;
      if (0x1e < uVar10 || uVar11 == 0) {
        return CONCAT44(uVar4 + uVar8 * 0x100000,param_1);
      }
      uVar10 = iVar7 >> (uVar10 & 0xff);
      uVar2 = param_1 + uVar10;
      bVar12 = uVar4 != 0 || uVar4 < CARRY4(param_1,uVar10);
      iVar7 = uVar4 - !CARRY4(param_1,uVar10);
    }
    if (-1 < iVar7) {
      iVar9 = uVar6 << (uVar11 & 0xff);
      iVar7 = iVar7 + uVar8 * 0x100000;
      if (-1 < iVar9) {
        return CONCAT44(iVar7,uVar2);
      }
      uVar2 = uVar2 + 1;
      if (uVar2 == 0 || iVar9 == -0x80000000) {
        if (uVar2 == 0) {
          iVar7 = iVar7 + 1;
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 0xfffffffe;
        }
        return CONCAT44(iVar7,uVar2);
      }
      return CONCAT44(iVar7,uVar2);
    }
    uVar10 = uVar11 + 1 & 0xff;
    bVar12 = uVar10 == 0 && bVar12 || uVar10 != 0 && (bool)((byte)(uVar6 >> 0x20 - uVar10) & 1);
    uVar11 = uVar2 * 2 + (uint)bVar12;
    iVar7 = iVar7 * 2 + (uint)(CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar12));
    uVar4 = iVar7 + uVar8 * 0x200000;
    bVar12 = (bool)((byte)(uVar4 >> 0x14) & 1);
    if (bVar12 && uVar4 >> 0x15 != 0) {
      uVar3 = -((int)(uVar6 << uVar10) >> 0x1f);
      uVar4 = uVar11 + uVar3;
      bVar12 = uVar4 == 0;
      if (!CARRY4(uVar11,uVar3)) {
        bVar12 = uVar6 << uVar10 == -0x80000000;
      }
      iVar7 = iVar7 + uVar8 * 0x100000;
      if (bVar12) {
        if (uVar4 == 0) {
          iVar7 = iVar7 + 1;
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 & 0xfffffffe;
        }
        return CONCAT44(iVar7,uVar4);
      }
      return CONCAT44(iVar7,uVar4);
    }
    if (bVar12) {
      uVar8 = (iVar7 >> 1) + uVar8 * 0x100000;
      uVar3 = (uint)((byte)iVar7 & 1) << 0x1f | uVar11 >> 1;
      if (uVar8 * 2 == 0 && uVar3 == 0) {
        return (ulonglong)uVar3;
      }
      if (uVar8 * 2 < 0x200000) {
        return (ulonglong)(uVar8 & 0x80000000) << 0x20;
      }
      return CONCAT44(uVar8,uVar3);
    }
    iVar7 = iVar7 + 0x200000;
    if (iVar7 == 0) {
      uVar10 = uVar11 << LZCOUNT(uVar11);
      if (uVar10 == 0) {
        return (ulonglong)uVar11;
      }
      iVar7 = uVar10 << 0x15;
      iVar9 = ((uVar8 & 0xfffff7ff) - LZCOUNT(uVar11)) + -0x17;
      uVar10 = uVar10 >> 0xb;
    }
    else {
      uVar6 = LZCOUNT(iVar7) - 0xb;
      iVar9 = ((uVar8 & 0xfffff7ff) - uVar6) + -2;
      uVar10 = iVar7 << (uVar6 & 0xff) | uVar11 >> (0x20 - uVar6 & 0xff);
      iVar7 = uVar11 << (uVar6 & 0xff);
    }
    iVar5 = uVar10 + (uVar3 & 0x80000000) + iVar9 * 0x100000;
    if (iVar9 < 0) {
      return (ulonglong)(iVar5 + 0x60000000U & 0x80000000) << 0x20;
    }
    return CONCAT44(iVar5,iVar7);
  }
  uVar8 = param_1 - param_3;
  iVar7 = uVar3 - (param_4 + (param_3 > param_1));
  if (uVar3 <= param_4 && (uint)(param_3 <= param_1) <= uVar3 - param_4) {
    bVar12 = CARRY4(param_3,uVar8);
    param_3 = param_3 + uVar8;
    param_4 = param_4 + iVar7 + (uint)bVar12;
    bVar12 = param_1 < uVar8;
    param_1 = param_1 - uVar8;
    uVar3 = uVar3 - (iVar7 + (uint)bVar12);
  }
  uVar8 = uVar3 >> 0x14;
  uVar10 = uVar8 - (param_4 >> 0x14);
  if ((DAT_00248d90 & param_4 << 1) == 0 || DAT_00248d90 == uVar8 << 0x15) {
    bVar12 = SUB41(uVar3 >> 0x1f,0);
    if (DAT_00248d90 == uVar8 << 0x15) {
      FUN_002495bc();
      if (!bVar12) {
        VectorFloatToSignedFixed(unaff_d15,0x10,7);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((uVar3 & DAT_00248d90 >> 1) == 0) {
      param_1 = 0;
      uVar3 = uVar3 & 0x80000000;
    }
    return CONCAT44(uVar3,param_1);
  }
  uVar11 = 0x20 - uVar10;
  uVar3 = uVar3 & ~(uVar8 << 0x14);
  uVar6 = param_4 & ~DAT_00248d90 | 0x100000;
  if (uVar10 < 0x21) {
    uVar2 = param_3 >> (uVar10 & 0xff);
    bVar12 = CARRY4(param_1,uVar2);
    uVar2 = param_1 + uVar2;
    uVar4 = uVar6 << (uVar11 & 0xff);
    param_1 = uVar2 + uVar4;
    uVar3 = uVar3 + (uVar6 >> (uVar10 & 0xff)) + (uint)bVar12 + (uint)CARRY4(uVar2,uVar4);
    if (0xfffff < uVar3) goto LAB_00248d14;
    uVar3 = uVar3 + uVar8 * 0x100000;
LAB_00248cb4:
    param_3 = param_3 << (uVar11 & 0xff);
    if (-1 < (int)param_3) {
      return CONCAT44(uVar3,param_1);
    }
    uVar10 = param_1 + 1;
    uVar8 = uVar10;
    if (param_1 != 0xffffffff) {
      uVar8 = param_3 & 0x7fffffff;
    }
    if (uVar8 != 0) {
      return CONCAT44(uVar3,uVar10);
    }
LAB_00248ccc:
    if (uVar10 == 0) {
      uVar3 = uVar3 + 1;
      uVar10 = 0;
    }
    else {
      uVar10 = uVar10 & 0xfffffffe;
    }
    if (uVar3 << 1 < 0xffe00000) {
      return CONCAT44(uVar3,uVar10);
    }
  }
  else {
    param_3 = uVar6 * 2 + (uint)(param_3 != 0);
    uVar10 = uVar10 - 0x20;
    bVar12 = uVar10 < 0x20;
    uVar11 = 0x1f - uVar10;
    if (bVar12) {
      uVar6 = uVar6 >> (uVar10 & 0xff);
      bVar12 = CARRY4(param_1,uVar6);
      param_1 = param_1 + uVar6;
    }
    else {
      uVar11 = 0;
    }
    uVar3 = uVar3 + uVar8 * 0x100000 + (uint)bVar12;
    if (uVar8 == uVar3 >> 0x14) goto LAB_00248cb4;
    uVar3 = uVar3 + uVar8 * -0x100000;
LAB_00248d14:
    uVar10 = (uint)((byte)(uVar3 + 0x100000) & 1) << 0x1f | param_1 >> 1;
    uVar3 = (uVar3 + 0x100000 >> 1) + uVar8 * 0x100000;
    if ((bool)((byte)param_1 & 1)) {
      bVar12 = uVar10 != 0xffffffff;
      uVar10 = uVar10 + 1;
      uVar8 = uVar10;
      if (bVar12) {
        uVar8 = param_3 << (uVar11 & 0xff);
      }
      if (uVar8 == 0) goto LAB_00248ccc;
    }
    if (uVar3 * 2 < 0xffe00000) {
      return CONCAT44(uVar3,uVar10);
    }
  }
  return (ulonglong)(uVar3 + 0xa0000000 & 0x80000000 | 0x7ff00000) << 0x20;
}

