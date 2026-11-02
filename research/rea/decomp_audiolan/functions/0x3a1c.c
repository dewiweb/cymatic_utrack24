// rea decompile_all
// name: FUN_00003a1c
// address: 0x3a1c
// body: available
// range: 0x3a1c-0x3c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_00003a1c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar5 = param_2 & 0x80000000;
    if ((int)uVar5 < 0) {
      param_2 = -param_2;
    }
    uVar4 = uVar5 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    iVar3 = (int)uVar4 >> 0x1f;
    uVar2 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_00003be8;
    if (param_1 >> 8 < param_2) goto LAB_00003bb8;
    uVar2 = param_2 << 6;
    uVar5 = 0xfc000000;
    if (param_1 >> 8 < uVar2) goto LAB_00003bb8;
    uVar2 = param_2 << 0xc;
    uVar5 = 0xfff00000;
    if (param_1 >> 8 < uVar2) goto LAB_00003bb8;
    uVar2 = param_2 << 0x12;
    uVar5 = 0xffffc000;
    if (uVar2 <= param_1 >> 8) {
      uVar2 = param_2 << 0x18;
      uVar5 = 0xffffff00;
    }
    bVar7 = uVar2 == 0;
    if (!bVar7) {
      do {
        if (bVar7) {
          uVar2 = uVar2 >> 6;
        }
LAB_00003bb8:
        bVar7 = uVar2 <= param_1 >> 7;
        if (bVar7) {
          param_1 = param_1 + uVar2 * -0x80;
        }
        bVar8 = uVar2 <= param_1 >> 6;
        if (bVar8) {
          param_1 = param_1 + uVar2 * -0x40;
        }
        bVar9 = uVar2 <= param_1 >> 5;
        if (bVar9) {
          param_1 = param_1 + uVar2 * -0x20;
        }
        bVar10 = uVar2 <= param_1 >> 4;
        if (bVar10) {
          param_1 = param_1 + uVar2 * -0x10;
        }
        uVar5 = (((uVar5 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_00003be8:
        bVar7 = uVar2 <= param_1 >> 3;
        if (bVar7) {
          param_1 = param_1 + uVar2 * -8;
        }
        uVar6 = uVar5 * 2 + (uint)bVar7;
        bVar8 = uVar2 <= param_1 >> 2;
        if (bVar8) {
          param_1 = param_1 + uVar2 * -4;
        }
        uVar5 = uVar6 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar8));
      bVar7 = uVar2 <= param_1 >> 1;
      if (bVar7) {
        param_1 = param_1 + uVar2 * -2;
      }
      uVar6 = param_1 - uVar2;
      if (uVar2 > param_1) {
        uVar6 = param_1;
      }
      iVar1 = (uVar5 * 2 + (uint)bVar7) * 2 + (uint)(uVar2 <= param_1);
      if (iVar3 < 0) {
        iVar1 = -iVar1;
      }
      if ((bool)((byte)(uVar4 >> 0x1e) & 1)) {
        uVar6 = -uVar6;
      }
      return CONCAT44(uVar6,iVar1);
    }
    if (iVar3 < 0) {
      param_1 = -param_1;
    }
LAB_00003c34:
    return (ulonglong)param_1 << 0x20;
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (ulonglong)param_1 << 0x20;
    }
    return CONCAT44(param_1 - param_2,1);
  }
  iVar3 = 0;
  uVar5 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_00003aa8;
      if (param_1 >> 0x10 < param_2) goto LAB_00003a78;
      uVar5 = param_2 << 8;
      iVar3 = -0x1000000;
      if (uVar5 <= param_1 >> 0x10) {
        iVar3 = -0x10000;
        uVar5 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar5) goto LAB_00003aa8;
      bVar7 = false;
      if (uVar5 == 0) goto LAB_00003c34;
      do {
        if (bVar7) {
          uVar5 = uVar5 >> 8;
        }
LAB_00003a78:
        bVar7 = uVar5 <= param_1 >> 0xf;
        if (bVar7) {
          param_1 = param_1 + uVar5 * -0x8000;
        }
        bVar8 = uVar5 <= param_1 >> 0xe;
        if (bVar8) {
          param_1 = param_1 + uVar5 * -0x4000;
        }
        bVar9 = uVar5 <= param_1 >> 0xd;
        if (bVar9) {
          param_1 = param_1 + uVar5 * -0x2000;
        }
        bVar10 = uVar5 <= param_1 >> 0xc;
        if (bVar10) {
          param_1 = param_1 + uVar5 * -0x1000;
        }
        iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_00003aa8:
        bVar7 = uVar5 <= param_1 >> 0xb;
        if (bVar7) {
          param_1 = param_1 + uVar5 * -0x800;
        }
        bVar8 = uVar5 <= param_1 >> 10;
        if (bVar8) {
          param_1 = param_1 + uVar5 * -0x400;
        }
        bVar9 = uVar5 <= param_1 >> 9;
        if (bVar9) {
          param_1 = param_1 + uVar5 * -0x200;
        }
        uVar4 = ((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
        bVar8 = uVar5 <= param_1 >> 8;
        if (bVar8) {
          param_1 = param_1 + uVar5 * -0x100;
        }
        iVar3 = uVar4 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar8));
    }
    bVar7 = uVar5 <= param_1 >> 7;
    if (bVar7) {
      param_1 = param_1 + uVar5 * -0x80;
    }
    bVar8 = uVar5 <= param_1 >> 6;
    if (bVar8) {
      param_1 = param_1 + uVar5 * -0x40;
    }
    bVar9 = uVar5 <= param_1 >> 5;
    if (bVar9) {
      param_1 = param_1 + uVar5 * -0x20;
    }
    bVar10 = uVar5 <= param_1 >> 4;
    if (bVar10) {
      param_1 = param_1 + uVar5 * -0x10;
    }
    iVar3 = (((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
  }
  bVar7 = uVar5 <= param_1 >> 3;
  if (bVar7) {
    param_1 = param_1 + uVar5 * -8;
  }
  bVar8 = uVar5 <= param_1 >> 2;
  if (bVar8) {
    param_1 = param_1 + uVar5 * -4;
  }
  bVar9 = uVar5 <= param_1 >> 1;
  if (bVar9) {
    param_1 = param_1 + uVar5 * -2;
  }
  uVar4 = param_1 - uVar5;
  if (uVar5 > param_1) {
    uVar4 = param_1;
  }
  return CONCAT44(uVar4,(((iVar3 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 +
                        (uint)(uVar5 <= param_1));
}

