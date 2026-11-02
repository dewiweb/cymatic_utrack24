// rea decompile_all
// name: thunk_FUN_001e41bc
// address: 0x1ab9d4
// body: available
// range: 0x1ab9d4-0x1ab9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_001e41bc(uint param_1)

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
  char cVar9;
  bool bVar10;
  char cVar11;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 unaff_d15;
  undefined8 uVar12;
  
  uVar2 = (param_1 & 0x7fffffff) >> 0x17;
  uVar5 = uVar2 - 0x7f;
  if ((int)uVar5 < 0) {
    bVar10 = uVar5 == 0xffffffff;
    bVar8 = false;
    if (0xfffffffe < uVar5) {
      bVar8 = (bool)((byte)(param_1 >> 0x18) & 1);
      bVar10 = (param_1 & 0xffffff) == 0;
    }
    param_1 = param_1 & 0x80000000;
    if (bVar8 && !bVar10) {
      param_1 = param_1 | 0x3f800000;
    }
    return param_1;
  }
  if (0x17 - uVar5 != 0 && (int)uVar5 < 0x18) {
    uVar2 = 1 << (0x17 - uVar5 & 0xff);
    uVar5 = param_1 & uVar2 - 1;
    param_1 = param_1 & ~uVar5;
    if (uVar2 >> 1 <= uVar5 && (uVar5 != uVar2 >> 1 || (param_1 & uVar2) != 0)) {
      param_1 = param_1 + uVar2;
    }
    return param_1;
  }
  cVar11 = SBORROW4(uVar2,0xff);
  cVar9 = (int)(uVar2 - 0xff) < 0;
  if (uVar2 < 0xff) {
    return param_1;
  }
  uVar12 = FUN_001e410c();
  uVar2 = (uint)((ulonglong)uVar12 >> 0x20);
  if (cVar9 != cVar11) {
    coprocessor_function(0xb,0xb,2,in_cr13,in_cr6,in_cr0);
  }
  uVar5 = (uint)uVar12 ^ 0x80000000;
  if ((int)(uVar5 ^ uVar2) < 0) {
    uVar2 = uVar2 ^ 0x80000000;
    if (uVar5 < uVar2) {
      uVar4 = uVar5 - uVar2 ^ 0x80000000;
      uVar5 = uVar5 - uVar4;
      uVar2 = uVar2 + uVar4;
    }
    uVar4 = uVar5 >> 0x17;
    uVar6 = uVar4 - (uVar2 >> 0x17);
    if ((uVar2 & 0x7f800000) == 0 || (uVar4 & 0xff) == 0xff) {
      bVar8 = SUB41(uVar5 >> 0x1f,0);
      if ((uVar4 & 0xff) == 0xff) {
        FUN_001e410c();
        do {
          do {
          } while (bVar8);
          coprocessor_function(0xf,0xf,2,in_cr13,in_cr6,in_cr0);
        } while( true );
      }
      if ((uVar5 & 0x7f800000) == 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
    uVar1 = uVar5 << 8 | 0x80000000;
    uVar2 = uVar2 << 8 | 0x80000000;
    uVar7 = uVar1 - (uVar2 >> (uVar6 & 0xff));
    if ((int)uVar7 < 0) {
      bVar8 = (bool)((byte)(uVar7 >> 7) & 1);
      uVar5 = (uVar7 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar8;
      if (!bVar8) {
        return uVar5;
      }
      if ((uVar7 & 0x7f) != 0) {
        return uVar5;
      }
    }
    else {
      bVar10 = (uVar4 & 0xfe) == 0;
      bVar8 = false;
      if (!bVar10) {
        uVar1 = uVar7 * 2;
        bVar8 = (int)uVar1 < 0;
        bVar10 = uVar1 == 0;
      }
      if (!bVar8) {
        if (bVar10) {
          if (uVar7 >> 7 == 0) {
            return 0;
          }
        }
        else {
          uVar1 = uVar1 >> 2;
          if (uVar1 == 0) {
            return 0;
          }
          uVar6 = uVar4 - LZCOUNT(uVar1);
          uVar2 = 0x28U - LZCOUNT(uVar1) & 0x1f;
          if ((uVar4 ^ uVar6) >> 8 == 0) {
            return (uVar1 >> uVar2 | uVar1 << 0x20 - uVar2) + uVar6 * 0x800000;
          }
        }
        return uVar5 & 0x80000000;
      }
      bVar8 = (bool)((byte)(uVar1 >> 7) & 1);
      uVar5 = ((int)uVar1 >> 8) + uVar4 * 0x800000 + (uint)bVar8;
      if (!bVar8) {
        return uVar5;
      }
      if ((uVar7 & 0x3f) != 0) {
        return uVar5;
      }
    }
    if (uVar2 << (0x20 - uVar6 & 0xff) == 0) {
      uVar5 = uVar5 & 0xfffffffe;
    }
    else {
      uVar5 = uVar5 - 1;
    }
    return uVar5;
  }
  iVar3 = uVar5 - uVar2;
  if (uVar5 < uVar2) {
    uVar5 = uVar5 - iVar3;
    uVar2 = uVar2 + iVar3;
  }
  uVar4 = uVar5 >> 0x17;
  uVar6 = uVar4 - (uVar2 >> 0x17);
  if ((uVar2 & 0x7f800000) == 0 || (uVar4 & 0xff) == 0xff) {
    bVar8 = SUB41(uVar5 >> 0x1f,0);
    if ((uVar4 & 0xff) != 0xff) {
      if ((uVar5 & 0x7f800000) == 0) {
        uVar5 = uVar5 & 0x80000000;
      }
      return uVar5;
    }
    FUN_001e410c();
    if (!bVar8) {
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
      uVar2 = DAT_001e3d88;
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
        return extraout_r1 & 0xff000000 | DAT_001e3d88 >> 0x1d | (extraout_r1 & 0xffffff) << 3;
      }
      return DAT_001e3d88 << 0x1d;
    }
    return DAT_001e3d88;
  }
  uVar5 = uVar5 << 8 | 0x80000000;
  uVar1 = uVar2 << 8 | 0x80000000;
  uVar2 = uVar1 >> (uVar6 & 0xff);
  uVar7 = uVar5 + uVar2;
  if (CARRY4(uVar5,uVar2)) {
    uVar2 = uVar7 >> 1 | 0x80000000;
    bVar8 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar5 = uVar2 + uVar4 * 0x800000 + (uint)bVar8;
    if (bVar8) {
      uVar2 = uVar7 & 0xff;
    }
    uVar4 = uVar5 * 2;
    if (uVar2 != 0) {
      if (uVar4 < 0xff000000) {
        return uVar5;
      }
      goto LAB_001e3d34;
    }
  }
  else {
    bVar8 = (bool)((byte)(uVar7 >> 7) & 1);
    uVar5 = (uVar7 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar8;
    if (!bVar8) {
      return uVar5;
    }
    uVar4 = uVar5 * 2;
    if ((uVar7 & 0x7f) != 0) {
      bVar8 = 0xfeffffff < uVar4;
    }
    if (!bVar8) {
      return uVar5;
    }
  }
  if (uVar1 << (0x20 - uVar6 & 0xff) == 0) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  if (uVar4 < 0xff000000) {
    return uVar5;
  }
LAB_001e3d34:
  return (uVar5 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}

