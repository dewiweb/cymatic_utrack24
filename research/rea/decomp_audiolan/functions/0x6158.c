// rea decompile_all
// name: FUN_00006158
// address: 0x6158
// body: available
// range: 0x6158-0x6187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_00006158(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = 0;
  uVar1 = param_2;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_00003aa8;
        if (param_1 >> 0x10 < param_2) goto LAB_00003a78;
        uVar1 = param_2 << 8;
        iVar3 = -0x1000000;
        if (uVar1 <= param_1 >> 0x10) {
          iVar3 = -0x10000;
          uVar1 = param_2 << 0x10;
        }
        if (param_1 >> 0xc < uVar1) goto LAB_00003aa8;
        bVar4 = false;
        if (uVar1 == 0) {
          return (ulonglong)param_1 << 0x20;
        }
        do {
          if (bVar4) {
            uVar1 = uVar1 >> 8;
          }
LAB_00003a78:
          bVar4 = uVar1 <= param_1 >> 0xf;
          if (bVar4) {
            param_1 = param_1 + uVar1 * -0x8000;
          }
          bVar5 = uVar1 <= param_1 >> 0xe;
          if (bVar5) {
            param_1 = param_1 + uVar1 * -0x4000;
          }
          bVar6 = uVar1 <= param_1 >> 0xd;
          if (bVar6) {
            param_1 = param_1 + uVar1 * -0x2000;
          }
          bVar7 = uVar1 <= param_1 >> 0xc;
          if (bVar7) {
            param_1 = param_1 + uVar1 * -0x1000;
          }
          iVar3 = (((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 +
                  (uint)bVar7;
LAB_00003aa8:
          bVar4 = uVar1 <= param_1 >> 0xb;
          if (bVar4) {
            param_1 = param_1 + uVar1 * -0x800;
          }
          bVar5 = uVar1 <= param_1 >> 10;
          if (bVar5) {
            param_1 = param_1 + uVar1 * -0x400;
          }
          bVar6 = uVar1 <= param_1 >> 9;
          if (bVar6) {
            param_1 = param_1 + uVar1 * -0x200;
          }
          uVar2 = ((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
          bVar5 = uVar1 <= param_1 >> 8;
          if (bVar5) {
            param_1 = param_1 + uVar1 * -0x100;
          }
          iVar3 = uVar2 * 2 + (uint)bVar5;
          bVar4 = true;
        } while (CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5));
      }
      bVar4 = uVar1 <= param_1 >> 7;
      if (bVar4) {
        param_1 = param_1 + uVar1 * -0x80;
      }
      bVar5 = uVar1 <= param_1 >> 6;
      if (bVar5) {
        param_1 = param_1 + uVar1 * -0x40;
      }
      bVar6 = uVar1 <= param_1 >> 5;
      if (bVar6) {
        param_1 = param_1 + uVar1 * -0x20;
      }
      iVar3 = ((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
    }
    bVar4 = uVar1 <= param_1 >> 4;
    if (bVar4) {
      param_1 = param_1 + uVar1 * -0x10;
    }
    bVar5 = uVar1 <= param_1 >> 3;
    if (bVar5) {
      param_1 = param_1 + uVar1 * -8;
    }
    bVar6 = uVar1 <= param_1 >> 2;
    if (bVar6) {
      param_1 = param_1 + uVar1 * -4;
    }
    iVar3 = ((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
  }
  bVar4 = uVar1 <= param_1 >> 1;
  if (bVar4) {
    param_1 = param_1 + uVar1 * -2;
  }
  uVar2 = param_1 - uVar1;
  if (uVar1 > param_1) {
    uVar2 = param_1;
  }
  return CONCAT44(uVar2,(iVar3 * 2 + (uint)bVar4) * 2 + (uint)(uVar1 <= param_1));
}

