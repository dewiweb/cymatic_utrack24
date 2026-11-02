// rea decompile_all
// name: FUN_000005d4
// address: 0x5d4
// body: available
// range: 0x5d4-0x8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000005d4(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0000047c(param_4);
  FUN_00000460(0x8000);
  puVar1 = DAT_000008d8;
  *DAT_000008d8 = 1;
  iVar2 = DAT_000008dc;
  uVar4 = 0;
  if (*(char *)(param_2 + 4) != '\0') {
    *puVar1 = 1;
    puVar1[-0x3f9] = 0x40;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(byte *)(param_2 + 4) != 0) {
    uVar4 = (*(byte *)(param_2 + 4) & 1) << 0xe |
            (*(byte *)((int)param_3 + 0x66) & 1) << 0x1e | 0x80000000 |
            (*(byte *)((int)param_3 + 0x67) & 7) << 0x1b | 0x4000000 |
            ((byte)param_3[0x1a] & 7) << 0x17 | (*(byte *)((int)param_3 + 0x69) & 3) << 0x15;
  }
  uVar4 = uVar4 | (*(byte *)(param_2 + 5) & 1) << 0xd | (*param_3 & 0xf) << 9;
  if (*(int *)(param_2 + 0x44) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (*(char *)(param_2 + 6) != '\0') {
    uVar4 = uVar4 | 0x40;
  }
  uVar3 = uVar4 | 0x20;
  if (*(int *)(param_2 + 0xac) != 0) {
    uVar3 = uVar4 | 0x24;
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    uVar3 = uVar3 | 2;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar3 = uVar3 | 1;
  }
  puVar1[-0x3fb] = uVar3;
  if (*(char *)(param_2 + 4) != '\0') {
    puVar1[-0x3fa] = ((ushort)param_3[0x19] & 0xf7fff) << 0xc;
  }
  puVar1[-0x3f9] =
       (*(uint *)(param_2 + 0x48) & 1) << 0x14 | 0x1000000 | (*(uint *)(param_2 + 0xb0) & 1) << 0x12
       | (*(uint *)(param_2 + 0x7c) & 1) << 0x11 | (*(uint *)(param_2 + 0x14) & 1) << 0x10 | 0x400;
  puVar1[-0x3fc] = 1;
  if (*(int *)(param_2 + 8) != 0) {
    puVar1[-0x3f4] = param_3[4] & 0x3f;
    puVar1[-0x3ef] = param_3[1] & 0x3f;
    puVar1[-0x3ea] = param_3[2] & 0x3f;
    puVar1[-0x3e5] = param_3[3] & 0x3f;
    puVar1[-0x3e0] = param_3[5] & 0x3f;
    puVar1[-0x3db] = param_3[6] & 0x3f;
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    puVar1[-0x3f0] = param_3[10] & 0x3f;
    puVar1[-0x3eb] = param_3[7] & 0x3f;
    puVar1[-0x3e6] = param_3[8] & 0x3f;
    puVar1[-0x3e1] = param_3[9] & 0x3f;
    puVar1[-0x3dc] = param_3[0xb] & 0x3f;
    puVar1[-0x3d7] = param_3[0xc] & 0x3f;
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    puVar1[-0x3f3] = param_3[0x10] & 0x3f;
    puVar1[-0x3ee] = param_3[0xd] & 0x3f;
    puVar1[-0x3e9] = param_3[0xe] & 0x3f;
    puVar1[-0x3e4] = param_3[0xf] & 0x3f;
    puVar1[-0x3df] = param_3[0x11] & 0x3f;
    puVar1[-0x3da] = param_3[0x12] & 0x3f;
  }
  if (*(int *)(param_2 + 0xa4) == 0) {
    return;
  }
  puVar1[-0x3f2] = param_3[0x16] & 0x3f;
  puVar1[-0x3ed] = param_3[0x13] & 0x3f;
  puVar1[-1000] = param_3[0x14] & 0x3f;
  puVar1[-0x3e3] = param_3[0x15] & 0x3f;
  puVar1[-0x3de] = param_3[0x17] & 0x3f;
  puVar1[-0x3d9] = param_3[0x18] & 0x3f;
  return;
}

