// rea decompile_all
// name: FUN_001c0fb0
// address: 0x1c0fb0
// body: available
// range: 0x1c0fb0-0x1c1027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c0fb0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  local_20 = FUN_001611d8(auStack_30);
  local_28 = FUN_0016dda4(8,param_2,DAT_001c102c,DAT_001c1028);
  uVar1 = param_1[1];
  if (param_2 <= (uint)param_1[1]) {
    uVar1 = param_2;
  }
  local_1c = uVar1 << 3;
  local_24 = local_28;
  for (iVar2 = *param_1; *param_1 + local_1c != iVar2; iVar2 = iVar2 + 8) {
    FUN_001611fe(local_24,iVar2);
    local_24 = local_24 + 8;
  }
  for (; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_001611fe(uVar1 * 8 + local_28,local_20);
  }
  FUN_00003c70(*param_1,DAT_001c1028);
  iVar2 = local_28;
  param_1[1] = param_2;
  *param_1 = local_28;
  FUN_0016179c(auStack_2c);
  return iVar2;
}

