// rea decompile_all
// name: FUN_00249b8c
// address: 0x249b8c
// body: available
// range: 0x249b8c-0x249c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00249b8c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r12;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar2 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar2;
      param_2 = param_2 + uVar2;
    }
    uVar2 = param_1 >> 0x17;
    uVar6 = uVar2 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) == 0 || (uVar2 & 0xff) == 0xff) {
      bVar9 = SUB41(param_1 >> 0x1f,0);
      if ((uVar2 & 0xff) == 0xff) {
        FUN_0024a100();
        do {
          do {
          } while (bVar9);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return param_1;
    }
    uVar3 = param_1 << 8 | 0x80000000;
    uVar1 = param_2 << 8 | 0x80000000;
    uVar4 = uVar3 - (uVar1 >> (uVar6 & 0xff));
    if ((int)uVar4 < 0) {
      bVar9 = (bool)((byte)(uVar4 >> 7) & 1);
      uVar2 = (uVar4 >> 8) + (uVar2 - 1) * 0x800000 + (uint)bVar9;
      if (!bVar9) {
        return uVar2;
      }
      if ((uVar4 & 0x7f) != 0) {
        return uVar2;
      }
    }
    else {
      bVar8 = (uVar2 & 0xfe) == 0;
      bVar9 = false;
      if (!bVar8) {
        uVar3 = uVar4 * 2;
        bVar9 = (int)uVar3 < 0;
        bVar8 = uVar3 == 0;
      }
      if (!bVar9) {
        if (bVar8) {
          if (uVar4 >> 7 == 0) {
            return 0;
          }
        }
        else {
          uVar3 = uVar3 >> 2;
          if (uVar3 == 0) {
            return 0;
          }
          uVar1 = uVar2 - LZCOUNT(uVar3);
          uVar6 = 0x28U - LZCOUNT(uVar3) & 0x1f;
          if ((uVar2 ^ uVar1) >> 8 == 0) {
            return (uVar3 >> uVar6 | uVar3 << 0x20 - uVar6) + uVar1 * 0x800000;
          }
        }
        return param_1 & 0x80000000;
      }
      bVar9 = (bool)((byte)(uVar3 >> 7) & 1);
      uVar2 = ((int)uVar3 >> 8) + uVar2 * 0x800000 + (uint)bVar9;
      if (!bVar9) {
        return uVar2;
      }
      if ((uVar4 & 0x3f) != 0) {
        return uVar2;
      }
    }
    if (uVar1 << (0x20 - uVar6 & 0xff) == 0) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    else {
      uVar2 = uVar2 - 1;
    }
    return uVar2;
  }
  iVar5 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar5;
    param_2 = param_2 + iVar5;
  }
  uVar2 = param_1 >> 0x17;
  uVar6 = uVar2 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar2 & 0xff) == 0xff) {
    bVar9 = SUB41(param_1 >> 0x1f,0);
    if ((uVar2 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return param_1;
    }
    FUN_0024a100();
    if (!bVar9) {
      VectorFloatToSignedFixed(unaff_d15,0x10,7);
    }
    uVar2 = extraout_r12 & 0xf;
    if (uVar2 == 9) {
      if ((extraout_r12 & 0x100000) == 0) {
        return 0;
      }
      if ((extraout_r12 & 0x70000) == 0) {
        return 0x30000000;
      }
      return 8;
    }
    if (uVar2 == 10) {
      uVar2 = DAT_00249c58;
      if ((extraout_r12 & 0x40) != 0) {
        uVar2 = 0x80000000;
      }
      return uVar2;
    }
    if (uVar2 == 8) {
      if ((extraout_r12 & 0x40) != 0) {
        return 0;
      }
      if ((extraout_r12 & 0x10) == 0) {
        return extraout_r1 & 0xff000000 | DAT_00249c58 >> 0x1d | (extraout_r1 & 0xffffff) << 3;
      }
      return DAT_00249c58 << 0x1d;
    }
    return DAT_00249c58;
  }
  uVar1 = param_1 << 8 | 0x80000000;
  uVar4 = param_2 << 8 | 0x80000000;
  uVar3 = uVar4 >> (uVar6 & 0xff);
  uVar7 = uVar1 + uVar3;
  if (CARRY4(uVar1,uVar3)) {
    uVar3 = uVar7 >> 1 | 0x80000000;
    bVar9 = (bool)((byte)(uVar3 >> 7) & 1);
    uVar3 = uVar3 >> 8;
    uVar2 = uVar3 + uVar2 * 0x800000 + (uint)bVar9;
    if (bVar9) {
      uVar3 = uVar7 & 0xff;
    }
    uVar1 = uVar2 * 2;
    if (uVar3 != 0) {
      if (uVar1 < 0xff000000) {
        return uVar2;
      }
      goto LAB_00249c04;
    }
  }
  else {
    bVar9 = (bool)((byte)(uVar7 >> 7) & 1);
    uVar2 = (uVar7 >> 8) + (uVar2 - 1) * 0x800000 + (uint)bVar9;
    if (!bVar9) {
      return uVar2;
    }
    uVar1 = uVar2 * 2;
    if ((uVar7 & 0x7f) != 0) {
      bVar9 = 0xfeffffff < uVar1;
    }
    if (!bVar9) {
      return uVar2;
    }
  }
  if (uVar4 << (0x20 - uVar6 & 0xff) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  if (uVar1 < 0xff000000) {
    return uVar2;
  }
LAB_00249c04:
  return (uVar2 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}

