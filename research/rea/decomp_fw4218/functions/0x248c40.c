// rea decompile_all
// name: FUN_00248c40
// address: 0x248c40
// body: available
// range: 0x248c40-0x248d3b inclusive
// range: 0x248d4c-0x248d8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_00248c40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    bVar11 = param_3 <= param_1;
    uVar6 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar11 <= param_2 - param_4) {
      bVar12 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      uVar9 = param_2 - (param_4 + !bVar11) ^ 0x80000000;
      param_4 = param_4 + uVar9 + (uint)bVar12;
      bVar11 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = param_2 - (uVar9 + bVar11);
    }
    uVar6 = param_2 >> 0x14;
    uVar9 = uVar6 - (param_4 >> 0x14);
    if ((DAT_00249b24 & param_4 << 1) == 0 || DAT_00249b24 == uVar6 << 0x15) {
      bVar11 = SUB41(param_2 >> 0x1f,0);
      if (DAT_00249b24 == uVar6 << 0x15) {
        FUN_002495bc();
        do {
          do {
          } while (bVar11);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((param_2 & DAT_00249b24 >> 1) == 0) {
        param_2 = 0;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar5 = -param_3;
    iVar8 = ((int)DAT_00249b24 >> 1) -
            ((param_4 & ~((int)DAT_00249b24 >> 1)) + (uint)(param_3 != 0));
    uVar10 = 0x20 - uVar9;
    uVar3 = param_2 & ~(uVar6 << 0x14);
    if (uVar9 < 0x21) {
      uVar1 = uVar5 >> (uVar9 & 0xff);
      uVar2 = param_1 + uVar1;
      uVar3 = uVar3 + (iVar8 >> (uVar9 & 0xff)) + (uint)CARRY4(param_1,uVar1);
      uVar9 = iVar8 << (uVar10 & 0xff);
      uVar1 = uVar2 + uVar9;
      bVar11 = CARRY4(uVar3,(uint)CARRY4(uVar2,uVar9));
      iVar8 = uVar3 + CARRY4(uVar2,uVar9);
    }
    else {
      uVar9 = uVar9 - 0x20;
      uVar5 = (uint)(param_3 * -2 != 0) | (iVar8 * 2 + (uint)CARRY4(uVar5,uVar5)) * 2;
      uVar10 = 0x1e - uVar9;
      if (0x1e < uVar9 || uVar10 == 0) {
        return CONCAT44(uVar3 + uVar6 * 0x100000,param_1);
      }
      uVar9 = iVar8 >> (uVar9 & 0xff);
      uVar1 = param_1 + uVar9;
      bVar11 = uVar3 != 0 || uVar3 < CARRY4(param_1,uVar9);
      iVar8 = uVar3 - !CARRY4(param_1,uVar9);
    }
    if (-1 < iVar8) {
      iVar7 = uVar5 << (uVar10 & 0xff);
      iVar8 = iVar8 + uVar6 * 0x100000;
      if (-1 < iVar7) {
        return CONCAT44(iVar8,uVar1);
      }
      uVar1 = uVar1 + 1;
      if (uVar1 == 0 || iVar7 == -0x80000000) {
        if (uVar1 == 0) {
          iVar8 = iVar8 + 1;
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 & 0xfffffffe;
        }
        return CONCAT44(iVar8,uVar1);
      }
      return CONCAT44(iVar8,uVar1);
    }
    uVar9 = uVar10 + 1 & 0xff;
    bVar11 = uVar9 == 0 && bVar11 || uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1);
    uVar10 = uVar1 * 2 + (uint)bVar11;
    iVar8 = iVar8 * 2 + (uint)(CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)bVar11));
    uVar3 = iVar8 + uVar6 * 0x200000;
    bVar11 = (bool)((byte)(uVar3 >> 0x14) & 1);
    if (bVar11 && uVar3 >> 0x15 != 0) {
      uVar3 = -((int)(uVar5 << uVar9) >> 0x1f);
      uVar1 = uVar10 + uVar3;
      bVar11 = uVar1 == 0;
      if (!CARRY4(uVar10,uVar3)) {
        bVar11 = uVar5 << uVar9 == -0x80000000;
      }
      iVar8 = iVar8 + uVar6 * 0x100000;
      if (bVar11) {
        if (uVar1 == 0) {
          iVar8 = iVar8 + 1;
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 & 0xfffffffe;
        }
        return CONCAT44(iVar8,uVar1);
      }
      return CONCAT44(iVar8,uVar1);
    }
    if (bVar11) {
      uVar9 = (iVar8 >> 1) + uVar6 * 0x100000;
      uVar6 = (uint)((byte)iVar8 & 1) << 0x1f | uVar10 >> 1;
      if (uVar9 * 2 == 0 && uVar6 == 0) {
        return (ulonglong)uVar6;
      }
      if (uVar9 * 2 < 0x200000) {
        return (ulonglong)(uVar9 & 0x80000000) << 0x20;
      }
      return CONCAT44(uVar9,uVar6);
    }
    iVar8 = iVar8 + 0x200000;
    if (iVar8 == 0) {
      uVar9 = uVar10 << LZCOUNT(uVar10);
      if (uVar9 == 0) {
        return (ulonglong)uVar10;
      }
      iVar8 = uVar9 << 0x15;
      iVar7 = ((uVar6 & 0xfffff7ff) - LZCOUNT(uVar10)) + -0x17;
      uVar9 = uVar9 >> 0xb;
    }
    else {
      uVar5 = LZCOUNT(iVar8) - 0xb;
      iVar7 = ((uVar6 & 0xfffff7ff) - uVar5) + -2;
      uVar9 = iVar8 << (uVar5 & 0xff) | uVar10 >> (0x20 - uVar5 & 0xff);
      iVar8 = uVar10 << (uVar5 & 0xff);
    }
    iVar4 = uVar9 + (param_2 & 0x80000000) + iVar7 * 0x100000;
    if (iVar7 < 0) {
      return (ulonglong)(iVar4 + 0x60000000U & 0x80000000) << 0x20;
    }
    return CONCAT44(iVar4,iVar8);
  }
  uVar6 = param_1 - param_3;
  iVar8 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar11 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + iVar8 + (uint)bVar11;
    bVar11 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = param_2 - (iVar8 + (uint)bVar11);
  }
  uVar6 = param_2 >> 0x14;
  uVar9 = uVar6 - (param_4 >> 0x14);
  if ((DAT_00248d90 & param_4 << 1) == 0 || DAT_00248d90 == uVar6 << 0x15) {
    bVar11 = SUB41(param_2 >> 0x1f,0);
    if (DAT_00248d90 == uVar6 << 0x15) {
      FUN_002495bc();
      if (!bVar11) {
        VectorFloatToSignedFixed(unaff_d15,0x10,7);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_2 & DAT_00248d90 >> 1) == 0) {
      param_1 = 0;
      param_2 = param_2 & 0x80000000;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar10 = 0x20 - uVar9;
  param_2 = param_2 & ~(uVar6 << 0x14);
  uVar5 = param_4 & ~DAT_00248d90 | 0x100000;
  if (uVar9 < 0x21) {
    uVar1 = param_3 >> (uVar9 & 0xff);
    bVar11 = CARRY4(param_1,uVar1);
    uVar1 = param_1 + uVar1;
    uVar3 = uVar5 << (uVar10 & 0xff);
    param_1 = uVar1 + uVar3;
    uVar9 = param_2 + (uVar5 >> (uVar9 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar1,uVar3);
    if (0xfffff < uVar9) goto LAB_00248d14;
    uVar9 = uVar9 + uVar6 * 0x100000;
LAB_00248cb4:
    param_3 = param_3 << (uVar10 & 0xff);
    if (-1 < (int)param_3) {
      return CONCAT44(uVar9,param_1);
    }
    uVar5 = param_1 + 1;
    uVar6 = uVar5;
    if (param_1 != 0xffffffff) {
      uVar6 = param_3 & 0x7fffffff;
    }
    if (uVar6 != 0) {
      return CONCAT44(uVar9,uVar5);
    }
LAB_00248ccc:
    if (uVar5 == 0) {
      uVar9 = uVar9 + 1;
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
    }
    if (uVar9 << 1 < 0xffe00000) {
      return CONCAT44(uVar9,uVar5);
    }
  }
  else {
    param_3 = uVar5 * 2 + (uint)(param_3 != 0);
    uVar9 = uVar9 - 0x20;
    bVar11 = uVar9 < 0x20;
    uVar10 = 0x1f - uVar9;
    if (bVar11) {
      uVar5 = uVar5 >> (uVar9 & 0xff);
      bVar11 = CARRY4(param_1,uVar5);
      param_1 = param_1 + uVar5;
    }
    else {
      uVar10 = 0;
    }
    uVar9 = param_2 + uVar6 * 0x100000 + (uint)bVar11;
    if (uVar6 == uVar9 >> 0x14) goto LAB_00248cb4;
    uVar9 = uVar9 + uVar6 * -0x100000;
LAB_00248d14:
    uVar5 = (uint)((byte)(uVar9 + 0x100000) & 1) << 0x1f | param_1 >> 1;
    uVar9 = (uVar9 + 0x100000 >> 1) + uVar6 * 0x100000;
    if ((bool)((byte)param_1 & 1)) {
      bVar11 = uVar5 != 0xffffffff;
      uVar5 = uVar5 + 1;
      uVar6 = uVar5;
      if (bVar11) {
        uVar6 = param_3 << (uVar10 & 0xff);
      }
      if (uVar6 == 0) goto LAB_00248ccc;
    }
    if (uVar9 * 2 < 0xffe00000) {
      return CONCAT44(uVar9,uVar5);
    }
  }
  return (ulonglong)(uVar9 + 0xa0000000 & 0x80000000 | 0x7ff00000) << 0x20;
}

