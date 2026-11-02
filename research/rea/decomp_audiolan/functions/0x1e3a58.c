// rea decompile_all
// name: FUN_001e3a58
// address: 0x1e3a58
// body: available
// range: 0x1e3a58-0x1e3c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_001e3a58(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    bVar11 = param_3 <= param_1;
    uVar7 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar11 <= param_2 - param_4) {
      bVar12 = CARRY4(param_3,uVar7);
      param_3 = param_3 + uVar7;
      uVar9 = param_2 - (param_4 + !bVar11) ^ 0x80000000;
      param_4 = param_4 + uVar9 + (uint)bVar12;
      bVar11 = param_1 < uVar7;
      param_1 = param_1 - uVar7;
      param_2 = param_2 - (uVar9 + bVar11);
    }
    uVar7 = param_2 >> 0x14;
    uVar9 = uVar7 - (param_4 >> 0x14);
    if ((DAT_001e3c54 & param_4 << 1) == 0 || DAT_001e3c54 == uVar7 << 0x15) {
      bVar11 = SUB41(param_2 >> 0x1f,0);
      if (DAT_001e3c54 == uVar7 << 0x15) {
        FUN_001e3904();
        do {
          do {
          } while (bVar11);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((param_2 & DAT_001e3c54 >> 1) == 0) {
        param_2 = 0;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar5 = -param_3;
    iVar6 = ((int)DAT_001e3c54 >> 1) -
            ((param_4 & ~((int)DAT_001e3c54 >> 1)) + (uint)(param_3 != 0));
    uVar10 = 0x20 - uVar9;
    uVar3 = param_2 & ~(uVar7 << 0x14);
    if (uVar9 < 0x21) {
      uVar2 = uVar5 >> (uVar9 & 0xff);
      uVar1 = param_1 + uVar2;
      uVar3 = uVar3 + (iVar6 >> (uVar9 & 0xff)) + (uint)CARRY4(param_1,uVar2);
      uVar9 = iVar6 << (uVar10 & 0xff);
      uVar2 = uVar1 + uVar9;
      bVar11 = CARRY4(uVar3,(uint)CARRY4(uVar1,uVar9));
      iVar6 = uVar3 + CARRY4(uVar1,uVar9);
    }
    else {
      uVar9 = uVar9 - 0x20;
      uVar5 = (uint)(param_3 * -2 != 0) | (iVar6 * 2 + (uint)CARRY4(uVar5,uVar5)) * 2;
      uVar10 = 0x1e - uVar9;
      if (0x1e < uVar9 || uVar10 == 0) {
        return CONCAT44(uVar3 + uVar7 * 0x100000,param_1);
      }
      uVar9 = iVar6 >> (uVar9 & 0xff);
      uVar2 = param_1 + uVar9;
      bVar11 = uVar3 != 0 || uVar3 < CARRY4(param_1,uVar9);
      iVar6 = uVar3 - !CARRY4(param_1,uVar9);
    }
    if (-1 < iVar6) {
      iVar8 = uVar5 << (uVar10 & 0xff);
      iVar6 = iVar6 + uVar7 * 0x100000;
      if (-1 < iVar8) {
        return CONCAT44(iVar6,uVar2);
      }
      uVar2 = uVar2 + 1;
      if (uVar2 == 0 || iVar8 == -0x80000000) {
        if (uVar2 == 0) {
          iVar6 = iVar6 + 1;
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 0xfffffffe;
        }
        return CONCAT44(iVar6,uVar2);
      }
      return CONCAT44(iVar6,uVar2);
    }
    uVar9 = uVar10 + 1 & 0xff;
    bVar11 = uVar9 == 0 && bVar11 || uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1);
    uVar10 = uVar2 * 2 + (uint)bVar11;
    iVar6 = iVar6 * 2 + (uint)(CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar11));
    uVar3 = iVar6 + uVar7 * 0x200000;
    bVar11 = (bool)((byte)(uVar3 >> 0x14) & 1);
    if (bVar11 && uVar3 >> 0x15 != 0) {
      uVar3 = -((int)(uVar5 << uVar9) >> 0x1f);
      uVar2 = uVar10 + uVar3;
      bVar11 = uVar2 == 0;
      if (!CARRY4(uVar10,uVar3)) {
        bVar11 = uVar5 << uVar9 == -0x80000000;
      }
      iVar6 = iVar6 + uVar7 * 0x100000;
      if (bVar11) {
        if (uVar2 == 0) {
          iVar6 = iVar6 + 1;
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 & 0xfffffffe;
        }
        return CONCAT44(iVar6,uVar2);
      }
      return CONCAT44(iVar6,uVar2);
    }
    if (bVar11) {
      uVar9 = (iVar6 >> 1) + uVar7 * 0x100000;
      uVar7 = (uint)((byte)iVar6 & 1) << 0x1f | uVar10 >> 1;
      if (uVar9 * 2 == 0 && uVar7 == 0) {
        return (ulonglong)uVar7;
      }
      if (uVar9 * 2 < 0x200000) {
        return (ulonglong)(uVar9 & 0x80000000) << 0x20;
      }
      return CONCAT44(uVar9,uVar7);
    }
    iVar6 = iVar6 + 0x200000;
    if (iVar6 == 0) {
      uVar9 = uVar10 << LZCOUNT(uVar10);
      if (uVar9 == 0) {
        return (ulonglong)uVar10;
      }
      iVar6 = uVar9 << 0x15;
      iVar8 = ((uVar7 & 0xfffff7ff) - LZCOUNT(uVar10)) + -0x17;
      uVar9 = uVar9 >> 0xb;
    }
    else {
      uVar5 = LZCOUNT(iVar6) - 0xb;
      iVar8 = ((uVar7 & 0xfffff7ff) - uVar5) + -2;
      uVar9 = iVar6 << (uVar5 & 0xff) | uVar10 >> (0x20 - uVar5 & 0xff);
      iVar6 = uVar10 << (uVar5 & 0xff);
    }
    iVar4 = uVar9 + (param_2 & 0x80000000) + iVar8 * 0x100000;
    if (iVar8 < 0) {
      return (ulonglong)(iVar4 + 0x60000000U & 0x80000000) << 0x20;
    }
    return CONCAT44(iVar4,iVar6);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar7 = param_1 - param_3;
  iVar6 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar11 = CARRY4(param_3,uVar7);
    param_3 = param_3 + uVar7;
    param_4 = param_4 + iVar6 + (uint)bVar11;
    bVar11 = param_1 < uVar7;
    param_1 = param_1 - uVar7;
    param_2 = param_2 - (iVar6 + (uint)bVar11);
  }
  uVar7 = param_2 >> 0x14;
  uVar9 = uVar7 - (param_4 >> 0x14);
  if ((DAT_001e30d8 & param_4 << 1) == 0 || DAT_001e30d8 == uVar7 << 0x15) {
    bVar11 = SUB41(param_2 >> 0x1f,0);
    if (DAT_001e30d8 == uVar7 << 0x15) {
      FUN_001e3904();
      if (!bVar11) {
        VectorFloatToSignedFixed(unaff_d15,0x10,7);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_2 & DAT_001e30d8 >> 1) == 0) {
      param_1 = 0;
      param_2 = param_2 & 0x80000000;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar10 = 0x20 - uVar9;
  param_2 = param_2 & ~(uVar7 << 0x14);
  uVar5 = param_4 & ~DAT_001e30d8 | 0x100000;
  if (uVar9 < 0x21) {
    uVar2 = param_3 >> (uVar9 & 0xff);
    bVar11 = CARRY4(param_1,uVar2);
    uVar2 = param_1 + uVar2;
    uVar3 = uVar5 << (uVar10 & 0xff);
    param_1 = uVar2 + uVar3;
    uVar9 = param_2 + (uVar5 >> (uVar9 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar2,uVar3);
    if (0xfffff < uVar9) goto LAB_001e305c;
    uVar9 = uVar9 + uVar7 * 0x100000;
LAB_001e2ffc:
    param_3 = param_3 << (uVar10 & 0xff);
    if (-1 < (int)param_3) {
      return CONCAT44(uVar9,param_1);
    }
    uVar5 = param_1 + 1;
    uVar7 = uVar5;
    if (param_1 != 0xffffffff) {
      uVar7 = param_3 & 0x7fffffff;
    }
    if (uVar7 != 0) {
      return CONCAT44(uVar9,uVar5);
    }
LAB_001e3014:
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
    uVar9 = param_2 + uVar7 * 0x100000 + (uint)bVar11;
    if (uVar7 == uVar9 >> 0x14) goto LAB_001e2ffc;
    uVar9 = uVar9 + uVar7 * -0x100000;
LAB_001e305c:
    uVar5 = (uint)((byte)(uVar9 + 0x100000) & 1) << 0x1f | param_1 >> 1;
    uVar9 = (uVar9 + 0x100000 >> 1) + uVar7 * 0x100000;
    if ((bool)((byte)param_1 & 1)) {
      bVar11 = uVar5 != 0xffffffff;
      uVar5 = uVar5 + 1;
      uVar7 = uVar5;
      if (bVar11) {
        uVar7 = param_3 << (uVar10 & 0xff);
      }
      if (uVar7 == 0) goto LAB_001e3014;
    }
    if (uVar9 * 2 < 0xffe00000) {
      return CONCAT44(uVar9,uVar5);
    }
  }
  return (ulonglong)(uVar9 + 0xa0000000 & 0x80000000 | 0x7ff00000) << 0x20;
}

