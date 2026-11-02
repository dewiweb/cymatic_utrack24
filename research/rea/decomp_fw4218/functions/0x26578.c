// rea decompile_all
// name: FUN_00026578
// address: 0x26578
// body: available
// range: 0x26578-0x26def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00026578(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_00026df0;
  if (((*(uint *)(DAT_00026df0 + 0x58) & 1) == 0) &&
     (iVar2 = FUN_001c7162(DAT_00026df0 + 0x58), iVar3 = DAT_00026df8, puVar1 = DAT_00026df4,
     iVar2 != 0)) {
    iVar2 = DAT_00026df8 + 0x1c8;
    iVar5 = DAT_00026df8 + -0x5c;
    DAT_00026df4[1] = DAT_00026df8;
    puVar1[2] = iVar2;
    puVar1[3] = iVar5;
    puVar1[4] = 1;
    *puVar1 = DAT_00026dfc;
    FUN_001ad784(puVar1 + 0x5f,1,2,1,iVar3 + -0x78);
    FUN_001a7b9c(puVar1,0);
    FUN_001c70ac(puVar1,DAT_00026e04,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x54) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e08), puVar1 = DAT_00026e0c, iVar3 != 0)) {
    iVar3 = DAT_00026e10 + 0x264;
    iVar2 = DAT_00026e10 + 0x248;
    DAT_00026e0c[1] = DAT_00026e10;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026e14;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e18,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x50) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e1c), puVar1 = DAT_00026e20, iVar3 != 0)) {
    iVar3 = DAT_00026e24 + 0x260;
    iVar2 = DAT_00026e24 + -0x14;
    DAT_00026e20[1] = DAT_00026e24;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026e28;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e2c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x4c) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e30), puVar1 = DAT_00026e34, iVar3 != 0)) {
    iVar3 = DAT_00026e38 + 0x270;
    iVar2 = DAT_00026e38 + 0x25c;
    DAT_00026e34[1] = DAT_00026e38;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026e3c;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e40,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x48) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e44), puVar1 = DAT_00026e48, iVar3 != 0)) {
    iVar3 = DAT_00026e4c + -0xc;
    iVar2 = DAT_00026e4c + -0x1c;
    DAT_00026e48[1] = DAT_00026e4c;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026e50;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e54,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x44) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e58), puVar1 = DAT_00026e5c, iVar3 != 0)) {
    iVar3 = DAT_00026e60 + -0xc;
    iVar2 = DAT_00026e60 + -0x38;
    DAT_00026e5c[1] = DAT_00026e60;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026e64;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e68,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x40) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e6c), puVar1 = DAT_00026e70, iVar3 != 0)) {
    iVar3 = DAT_00026e74 + -0x14;
    iVar2 = DAT_00026e74 + -0x1c;
    DAT_00026e70[1] = DAT_00026e74;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026e78;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e7c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x3c) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e80), puVar1 = DAT_00026e84, iVar3 != 0)) {
    iVar3 = DAT_00026e88 + -0x10;
    iVar2 = DAT_00026e88 + -0x18;
    DAT_00026e84[1] = DAT_00026e88;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026e8c;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026e90,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x38) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026e94), puVar1 = DAT_00026e98, iVar3 != 0)) {
    iVar3 = DAT_00026e9c + -0x14;
    iVar2 = DAT_00026e9c + -0x28;
    DAT_00026e98[1] = DAT_00026e9c;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026ea0;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026ea4,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x34) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026ea8), puVar1 = DAT_00026eac, iVar3 != 0)) {
    iVar3 = DAT_00026eb0 + -0x14;
    iVar2 = DAT_00026eb0 + -0x34;
    DAT_00026eac[1] = DAT_00026eb0;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 2;
    *puVar1 = DAT_00026eb4;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026eb8,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x30) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026ebc), puVar1 = DAT_00026ec0, iVar3 != 0)) {
    iVar3 = DAT_00026ec4 + -0x18;
    iVar2 = DAT_00026ec4 + -0x28;
    DAT_00026ec0[1] = DAT_00026ec4;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026ec8;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026ecc,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x2c) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026ed0), puVar1 = DAT_00026ed4, iVar3 != 0)) {
    iVar3 = DAT_00026ed8 + -0xc;
    iVar2 = DAT_00026ed8 + -0x20;
    DAT_00026ed4[1] = DAT_00026ed8;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026edc;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026ee0,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x28) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026ee4), puVar1 = DAT_00026ee8, iVar3 != 0)) {
    iVar3 = DAT_00026eec + -0x24;
    iVar2 = DAT_00026eec + -0x2c;
    DAT_00026ee8[1] = DAT_00026eec;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026ef0;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026df8);
    }
    FUN_001c70ac(puVar1,DAT_00026ef4,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x24) & 1) == 0) &&
     (iVar2 = FUN_001c7162(DAT_00026ef8), iVar3 = DAT_00026f00, puVar1 = DAT_00026efc, iVar2 != 0))
  {
    iVar2 = DAT_00026f00 + 0xa8;
    iVar5 = DAT_00026f00 + 0xa4;
    DAT_00026efc[1] = DAT_00026f00;
    puVar1[2] = iVar2;
    puVar1[3] = iVar5;
    puVar1[4] = 1;
    *puVar1 = DAT_00026f04;
    FUN_001ad784(puVar1 + 0x33,1,2,1,iVar3 + 0x88);
    FUN_001a7b9c(puVar1,0);
    FUN_001c70ac(puVar1,DAT_00026f08,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x20) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026f0c), puVar1 = DAT_00026f10, iVar3 != 0)) {
    iVar3 = DAT_00026f14 + -0xc;
    iVar2 = DAT_00026f14 + -0x20;
    DAT_00026f10[1] = DAT_00026f14;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026f18;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026f00);
    }
    FUN_001c70ac(puVar1,DAT_00026f1c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x1c) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026f20), puVar1 = DAT_00026f24, iVar3 != 0)) {
    iVar3 = DAT_00026e10 + -0xc;
    iVar2 = DAT_00026e10 + -0x1c;
    DAT_00026f24[1] = DAT_00026e10;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 1;
    *puVar1 = DAT_00026f28;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026f00);
    }
    FUN_001c70ac(puVar1,DAT_00026f2c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x18) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026f30), puVar1 = DAT_00026f34, iVar3 != 0)) {
    iVar3 = DAT_00026e24 + -0xc;
    iVar2 = DAT_00026e24 + -0x14;
    DAT_00026f34[1] = DAT_00026e24;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026f38;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026f00);
    }
    FUN_001c70ac(puVar1,DAT_00026f3c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x14) & 1) == 0) &&
     (iVar3 = FUN_001c7162(DAT_00026f40), puVar1 = DAT_00026f44, iVar3 != 0)) {
    iVar3 = DAT_00026e38 + -0xc;
    iVar2 = DAT_00026e38 + -0x14;
    DAT_00026f44[1] = DAT_00026e38;
    puVar1[2] = iVar3;
    puVar1[3] = iVar2;
    puVar1[4] = 0;
    *puVar1 = DAT_00026f48;
    iVar3 = FUN_000cbaf0();
    if (iVar3 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026f00);
    }
    FUN_001c70ac(puVar1,DAT_00026f4c,DAT_00026e00);
  }
  if (((*(uint *)(iVar4 + 0x10) & 1) == 0) &&
     (iVar4 = FUN_001c7162(DAT_00026f50), puVar1 = DAT_00026f54, iVar4 != 0)) {
    iVar4 = DAT_00026f58 + -0x10;
    iVar3 = DAT_00026f58 + -0x18;
    DAT_00026f54[1] = DAT_00026f58;
    puVar1[2] = iVar4;
    puVar1[3] = iVar3;
    puVar1[4] = 0;
    *puVar1 = DAT_00026f5c;
    iVar4 = FUN_000cbaf0();
    if (iVar4 != 0) {
      FUN_001a7b9c(puVar1,DAT_00026f00);
    }
    FUN_001c70ac(puVar1,DAT_00026f60,DAT_00026e00);
  }
  return 0;
}

