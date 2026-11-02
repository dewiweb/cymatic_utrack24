// rea decompile_all
// name: FUN_00063e90
// address: 0x63e90
// body: available
// range: 0x63e90-0x640b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00063e90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_10 = *(uint *)(param_1 + 8) & 0x3fff | 0x1400000 |
             (*(byte *)(*(int *)(param_1 + 0x28) + 2) & 1) << 0x13 |
             (*(byte *)(*(int *)(param_1 + 0x28) + 3) & 1) << 0x14;
  uVar1 = (*(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0x3f) << 0x15;
  uVar2 = uVar1 | 0x20000000;
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x12) != '\0') {
    uVar2 = uVar1 | 0x20040000;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 8) != '\0') {
    uVar2 = uVar2 | 0x200;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x10) == '\0') {
    uVar2 = uVar2 | 0x100;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x11) != '\0') {
    uVar2 = uVar2 | 0x400;
  }
  local_14 = uVar2 | 0x80;
  if (*(char *)(*(int *)(param_1 + 0x28) + 10) != '\0') {
    local_14 = uVar2 | 0xa0;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 9) == '\x01') {
    local_14 = local_14 | 0x80000;
  }
  local_38 = *(int *)(*(int *)(param_1 + 0x28) + 4);
  local_18 = local_38 + -4 + **(int **)(param_1 + 0x10);
  local_14 = local_14 | (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc) << 0x1e;
  local_34 = local_38;
  local_24 = local_38;
  local_20 = local_38;
  local_1c = local_38;
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) == 0) {
    FUN_00074b58(*(undefined4 *)(param_1 + 4));
  }
  else {
    local_14 = local_14 | 0x1000;
    FUN_00074b84(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
  }
  local_30 = *(undefined4 *)(param_1 + 0x18);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_c = *(uint *)(param_1 + 4) | *(uint *)(param_1 + 4) << 0x10;
  FUN_00074960(*(undefined4 *)(param_1 + 4),&local_c);
  iVar3 = FUN_0007480c(*(undefined4 *)(param_1 + 4),&local_38);
  return iVar3 != 0;
}

