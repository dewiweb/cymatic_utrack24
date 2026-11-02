// rea decompile_all
// name: FUN_0006d1b8
// address: 0x6d1b8
// body: available
// range: 0x6d1b8-0x6d2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006d1b8(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 10) == '\x01') {
    param_2[9] = param_2[9] | 0x8000;
    uVar2 = DAT_0006d2f4;
    uVar1 = param_2[4] & DAT_0006d2f4 |
            *(uint *)(*(int *)(param_1 + 0x28) + 0x10) >> (param_3 & 0xff) & ~DAT_0006d2f4;
    param_2[4] = uVar1;
    param_2[4] = uVar1 & ~uVar2 |
                 uVar2 + (uint)(*(ushort *)(*(int *)(param_1 + 0x28) + 0x18) >> (param_3 & 0xff)) *
                         0x400000;
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xd);
    param_2[10] = param_2[10] & 0xffff7fff | (uVar2 & 1) << 0xf;
    *param_2 = 0;
    if (uVar2 == 0) {
      uVar2 = param_2[1];
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x28) + 0x16) - 1 & 0x3f;
      param_2[1] = uVar2 & 0xffffffc0 | uVar1;
      uVar2 = (uint)(*(ushort *)(*(int *)(param_1 + 0x28) + 0x14) >> (param_3 & 0xff)) * 0x40 - 0x40
              & 0xffff | uVar2 & 0xffff0000 | uVar1;
    }
    else {
      uVar1 = param_2[1];
      uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x28) + 0x16) * 0x40 - 0x40 & 0xffff;
      param_2[1] = uVar2 | uVar1 & 0xffff003f;
      uVar2 = (*(ushort *)(*(int *)(param_1 + 0x28) + 0x14) >> (param_3 & 0xff)) - 1 & 0x3f |
              uVar2 | uVar1 & 0xffff0000;
    }
    param_2[1] = uVar2;
    return;
  }
  param_2[9] = param_2[9] & 0xffff7fff;
  return;
}

