// rea decompile_all
// name: FUN_0024a290
// address: 0x24a290
// body: available
// range: 0x24a290-0x24a2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0024a290(uint param_1,uint param_2)

{
  uint uVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r12;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  
  param_1 = param_1 ^ 0x80000000;
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar4 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar4;
      param_2 = param_2 + uVar4;
    }
    uVar4 = param_1 >> 0x17;
    uVar5 = uVar4 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) == 0 || (uVar4 & 0xff) == 0xff) {
      bVar8 = SUB41(param_1 >> 0x1f,0);
      if ((uVar4 & 0xff) == 0xff) {
        FUN_0024a100();
        do {
          do {
          } while (bVar8);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return param_1;
    }
    uVar1 = param_1 << 8 | 0x80000000;
    uVar2 = param_2 << 8 | 0x80000000;
    uVar7 = uVar1 - (uVar2 >> (uVar5 & 0xff));
    if ((int)uVar7 < 0) {
      bVar8 = (bool)((byte)(uVar7 >> 7) & 1);
      uVar4 = (uVar7 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar8;
      if (!bVar8) {
        return uVar4;
      }
      if ((uVar7 & 0x7f) != 0) {
        return uVar4;
      }
    }
    else {
      bVar9 = (uVar4 & 0xfe) == 0;
      bVar8 = false;
      if (!bVar9) {
        uVar1 = uVar7 * 2;
        bVar8 = (int)uVar1 < 0;
        bVar9 = uVar1 == 0;
      }
      if (!bVar8) {
        if (bVar9) {
          if (uVar7 >> 7 == 0) {
            return 0;
          }
        }
        else {
          uVar1 = uVar1 >> 2;
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = uVar4 - LZCOUNT(uVar1);
          uVar5 = 0x28U - LZCOUNT(uVar1) & 0x1f;
          if ((uVar4 ^ uVar2) >> 8 == 0) {
            return (uVar1 >> uVar5 | uVar1 << 0x20 - uVar5) + uVar2 * 0x800000;
          }
        }
        return param_1 & 0x80000000;
      }
      bVar8 = (bool)((byte)(uVar1 >> 7) & 1);
      uVar4 = ((int)uVar1 >> 8) + uVar4 * 0x800000 + (uint)bVar8;
      if (!bVar8) {
        return uVar4;
      }
      if ((uVar7 & 0x3f) != 0) {
        return uVar4;
      }
    }
    if (uVar2 << (0x20 - uVar5 & 0xff) == 0) {
      uVar4 = uVar4 & 0xfffffffe;
    }
    else {
      uVar4 = uVar4 - 1;
    }
    return uVar4;
  }
  iVar3 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar3;
    param_2 = param_2 + iVar3;
  }
  uVar4 = param_1 >> 0x17;
  uVar5 = uVar4 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar4 & 0xff) == 0xff) {
    bVar8 = SUB41(param_1 >> 0x1f,0);
    if ((uVar4 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return param_1;
    }
    FUN_0024a100();
    if (!bVar8) {
      VectorFloatToSignedFixed(unaff_d15,0x10,7);
    }
    uVar4 = extraout_r12 & 0xf;
    if (uVar4 == 9) {
      if ((extraout_r12 & 0x100000) == 0) {
        return 0;
      }
      if ((extraout_r12 & 0x70000) == 0) {
        return 0x30000000;
      }
      return 8;
    }
    if (uVar4 == 10) {
      uVar4 = DAT_00249c58;
      if ((extraout_r12 & 0x40) != 0) {
        uVar4 = 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 == 8) {
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
  uVar2 = param_1 << 8 | 0x80000000;
  uVar7 = param_2 << 8 | 0x80000000;
  uVar1 = uVar7 >> (uVar5 & 0xff);
  uVar6 = uVar2 + uVar1;
  if (CARRY4(uVar2,uVar1)) {
    uVar1 = uVar6 >> 1 | 0x80000000;
    bVar8 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar1 = uVar1 >> 8;
    uVar4 = uVar1 + uVar4 * 0x800000 + (uint)bVar8;
    if (bVar8) {
      uVar1 = uVar6 & 0xff;
    }
    uVar2 = uVar4 * 2;
    if (uVar1 != 0) {
      if (uVar2 < 0xff000000) {
        return uVar4;
      }
      goto LAB_00249c04;
    }
  }
  else {
    bVar8 = (bool)((byte)(uVar6 >> 7) & 1);
    uVar4 = (uVar6 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar8;
    if (!bVar8) {
      return uVar4;
    }
    uVar2 = uVar4 * 2;
    if ((uVar6 & 0x7f) != 0) {
      bVar8 = 0xfeffffff < uVar2;
    }
    if (!bVar8) {
      return uVar4;
    }
  }
  if (uVar7 << (0x20 - uVar5 & 0xff) == 0) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  if (uVar2 < 0xff000000) {
    return uVar4;
  }
LAB_00249c04:
  return (uVar4 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}

