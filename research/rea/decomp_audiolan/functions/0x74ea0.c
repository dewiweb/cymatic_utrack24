// rea decompile_all
// name: FUN_00074ea0
// address: 0x74ea0
// body: available
// range: 0x74ea0-0x7507b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00074ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = *(uint *)(param_1 + 8) & 0x3fff | 0x1400000 |
             (*(byte *)(*(int *)(param_1 + 0x28) + 8) & 1) << 0x14 |
             (*(byte *)(*(int *)(param_1 + 0x28) + 8) & 1) << 0x13;
  uVar2 = (*(uint *)(*(int *)(param_1 + 0x28) + 4) & 0x3f) << 0x15;
  uVar3 = uVar2 | 0x38000000;
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x10) == '\0') {
    uVar3 = uVar2 | 0x38000100;
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x11) != '\0') {
    uVar3 = uVar3 | 0x400;
  }
  if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) == 0x3f) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc) = *(undefined4 *)(param_1 + 4);
  }
  local_28 = 0;
  local_38 = 0;
  local_34 = 0;
  local_14 = uVar3 | 0x80 | *(uint *)(*(int *)(param_1 + 0x28) + 0xc) & 0x7f |
             (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc) << 0x1e;
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x10) + 0xc) == '\x01') {
      local_14 = local_14 | 0x1000;
    }
    FUN_00073d1c(*(undefined4 *)(param_1 + 4));
  }
  else {
    local_14 = local_14 | 0x1000;
    FUN_00073d48(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
  }
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  iVar1 = FUN_000739d0(*(undefined4 *)(param_1 + 4),&local_38);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 4);
  uStack_c = uVar2 | uVar2 << 0x10;
  FUN_00073b24(uVar2,&uStack_c);
  FUN_00073ee8(*(undefined4 *)(param_1 + 4));
  return 1;
}

