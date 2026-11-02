// rea decompile_all
// name: FUN_0001a37c
// address: 0x1a37c
// body: available
// range: 0x1a37c-0x1a48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a37c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_20;
  
  uVar1 = DAT_b000000e;
  DAT_b000000e = (undefined1)param_2;
  bVar5 = (*(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) & 1) != 0;
  local_20 = param_4;
  if (bVar5) {
    FUN_000c1a78(param_1,param_2);
  }
  DAT_b000000e = uVar1;
  if (bVar5) {
    return;
  }
  if (*(char *)(param_1 + 0x31a) != '\0') {
    *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 800);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x324);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x328);
    *(undefined1 *)(param_1 + 0x31a) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x32c);
  if (*(char *)(param_1 + 0x334) == '\0') {
    uVar2 = *(int *)(param_1 + 0x338) + 1;
    *(uint *)(param_1 + 0x338) = uVar2;
    if (0x4f < uVar2) {
      *(undefined4 *)(param_1 + 0x338) = 0;
    }
    if ((*(uint *)(param_1 + 0x338) & 1) != 0 && *(uint *)(param_1 + 0x338) != 0x4f) {
      uVar3 = *(uint *)(param_1 + 0x330);
    }
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4c8) + param_2 * 4 + 0x20);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar3 & 1;
    if (uVar2 == 1) {
      *puVar4 = 0;
    }
  }
  for (; uVar2 < uVar3; uVar2 = uVar2 + 2) {
    *puVar4 = 0;
    *puVar4 = 0;
  }
  FUN_001fe1e4(&local_20);
  *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) | 1;
  FUN_001fe1f8(local_20);
  return;
}

