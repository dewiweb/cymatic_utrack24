// rea decompile_all
// name: FUN_0016eac0
// address: 0x16eac0
// body: available
// range: 0x16eac0-0x16f3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016eac0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_0014b654(param_1,0x40);
  iVar2 = param_2 + 0x4bc;
  uVar3 = FUN_001616d4(iVar2,0);
  if ((0x17 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x5c) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,1);
  if ((0x2d < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xb4) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,2);
  if ((0x3d < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xf4) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,3);
  if ((4 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x10) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,4);
  if ((0x3a < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xe8) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,5);
  if ((0x27 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x9c) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,6);
  if ((0x21 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x84) = uVar3;
  }
  uVar3 = FUN_001616d4(iVar2,7);
  if ((0x1e < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x78) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,0);
  if ((0x19 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 100) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,1);
  if ((9 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x24) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,2);
  if ((5 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x14) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,3);
  if ((0x1a < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x68) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,4);
  if ((0x2b < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xac) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,5);
  if ((0x37 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xdc) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,6);
  if ((7 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x1c) = uVar3;
  }
  uVar3 = FUN_0016456c(param_2 + 0x6c0,7);
  if ((0x2f < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xbc) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,0);
  if ((0x23 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x8c) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,1);
  if ((0x30 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xc0) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,2);
  if ((0x3e < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xf8) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,3);
  if ((0x22 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x88) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,4);
  if ((0x3c < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xf0) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,5);
  if ((0xc < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x30) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,6);
  if ((0x33 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xcc) = uVar3;
  }
  uVar3 = FUN_00169e1c(param_2 + 0x4a0,7);
  if ((0x16 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x58) = uVar3;
  }
  iVar2 = param_2 + 0x6e4;
  uVar3 = FUN_0016abe0(iVar2,0);
  if ((1 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 4) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,1);
  if ((0xe < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x38) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,2);
  if ((0x2a < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xa8) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,3);
  if ((piVar1[1] != 0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)*piVar1 = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,4);
  if ((0x2c < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xb0) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,5);
  if ((0x26 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x98) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,6);
  if ((0xd < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x34) = uVar3;
  }
  uVar3 = FUN_0016abe0(iVar2,7);
  if ((0x15 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x54) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,0);
  if ((0x32 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 200) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,1);
  if ((0x3b < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xec) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,2);
  if ((0x1c < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x70) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,3);
  if ((0x25 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x94) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,4);
  if ((0x29 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xa4) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,5);
  if ((0x36 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xd8) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,6);
  if ((0x20 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x80) = uVar3;
  }
  uVar3 = FUN_00160238(param_2 + 1000,7);
  if ((0x11 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x44) = uVar3;
  }
  iVar2 = param_2 + 0x4d8;
  uVar3 = FUN_0015e930(iVar2,0);
  if ((0x1f < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x7c) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,1);
  if ((8 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x20) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,2);
  if ((0x13 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x4c) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,3);
  if ((0x24 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x90) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,4);
  if ((0x39 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xe4) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,5);
  if ((6 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x18) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,6);
  if ((0x14 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x50) = uVar3;
  }
  uVar3 = FUN_0015e930(iVar2,7);
  if ((0x18 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x60) = uVar3;
  }
  iVar2 = param_2 + 0x6cc;
  uVar3 = FUN_00161e18(iVar2,0);
  if ((0xf < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x3c) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,1);
  if ((0x3f < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xfc) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,2);
  if ((0x1b < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x6c) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,3);
  if ((10 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x28) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,4);
  if ((0x35 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xd4) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,5);
  if ((3 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xc) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,6);
  if ((0x12 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x48) = uVar3;
  }
  uVar3 = FUN_00161e18(iVar2,7);
  if ((0x28 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xa0) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,0);
  if ((0x10 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x40) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,1);
  if ((0x31 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xc4) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,2);
  if ((0x34 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xd0) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,3);
  if ((0xb < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x2c) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,4);
  if ((0x38 < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xe0) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,5);
  if ((0x1d < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0x74) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,6);
  if ((0x2e < (uint)piVar1[1]) && (*piVar1 != 0)) {
    *(undefined4 *)(*piVar1 + 0xb8) = uVar3;
  }
  uVar3 = FUN_0016ea18(param_2,7);
  if ((uint)piVar1[1] < 3) {
    return;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 8) = uVar3;
  }
  return;
}

