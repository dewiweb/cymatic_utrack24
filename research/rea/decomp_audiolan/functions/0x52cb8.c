// rea decompile_all
// name: FUN_00052cb8
// address: 0x52cb8
// body: available
// range: 0x52cb8-0x52e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00052cb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined2 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                undefined4 param_9,undefined4 *param_10,undefined2 param_11,undefined2 param_12,
                undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined1 param_16,
                undefined4 param_17,undefined1 param_18,undefined1 param_19)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = DAT_00052e44;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 5;
  *(char *)((int)param_1 + 0x21) = (char)param_3;
  *(short *)((int)param_1 + 0x22) = (short)param_4;
  *(undefined2 *)(param_1 + 9) = param_5;
  *(short *)((int)param_1 + 0x26) = (short)param_6;
  *(undefined1 *)(param_1 + 10) = param_7;
  *(char *)((int)param_1 + 0x29) = (char)param_2;
  *(undefined1 *)((int)param_1 + 0x2a) = param_8;
  param_1[0xb] = param_9;
  param_1[0xc] = *param_10;
  *(undefined2 *)(param_1 + 0xe) = param_11;
  *(undefined2 *)((int)param_1 + 0x3a) = param_12;
  iVar1 = FUN_001da408(param_1 + 0xf,param_13,param_6,param_4,param_1,param_2,param_3,param_4);
  iVar1 = FUN_001da408(iVar1 + 4,param_14);
  uVar2 = DAT_00052e48;
  iVar5 = iVar1 + -0x40;
  *(undefined4 *)(iVar1 + 4) = DAT_00052e48;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = param_17;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x15) = param_16;
  *(char *)(iVar1 + 0x16) = (char)param_17;
  *(undefined1 *)(iVar1 + 0x17) = param_18;
  *(undefined1 *)(iVar1 + 0x18) = param_15;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1d) = param_19;
  *(undefined2 *)(iVar1 + 0x1e) = 0;
  *(undefined2 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + 0x28) = (*(byte *)(iVar1 + -0x18) & 0x7f) << 0x10 | 0x80000000;
  uVar2 = FUN_000023ec();
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  if ((*(uint *)(iVar1 + -0x10) & 0xf0) == 0xe0) {
    bVar6 = *(char *)(iVar1 + 0x1b) == '\0';
    uVar2 = 1;
    if (bVar6) {
      uVar2 = DAT_00052e4c;
    }
    uVar4 = 0;
    if (bVar6) {
      do {
        uVar3 = FUN_001a9890(3,uVar2,0);
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar5 + iVar1 + 0xc) = uVar3;
      } while (uVar4 < 3);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x1b) = 1;
  }
  FUN_00052444(iVar5,4,0);
  FUN_000de414();
  FUN_000de074(iVar5);
  return iVar5;
}

