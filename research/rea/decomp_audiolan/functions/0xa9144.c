// rea decompile_all
// name: FUN_000a9144
// address: 0xa9144
// body: available
// range: 0xa9144-0xa92ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a9144(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = DAT_000a92ac;
  DAT_000a92ac[1] = 1;
  FUN_00075590(0x14);
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_0019f30c();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (cVar1 == '\b') {
    uVar3 = FUN_001a0808(*(undefined4 *)(param_1 + 0x90),1);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  else if (cVar1 == '\x10') {
    uVar3 = FUN_001a0808(*(int *)(param_1 + 0x90) << 1,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  else if (cVar1 == ' ') {
    uVar3 = FUN_001a0808(*(int *)(param_1 + 0x90) << 2,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  puVar2[2] = 0;
  puVar2[4] = 0;
  if (*(char *)(param_1 + 0x98) == '\x10') {
    iVar4 = 1;
  }
  else if (*(char *)(param_1 + 0x98) == ' ') {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
    *(undefined1 *)(param_1 + 0x98) = 8;
  }
  uVar5 = iVar4 << 4;
  if (*(char *)(param_1 + 0x9d) != '\0') {
    uVar5 = uVar5 | 0x100;
  }
  if (*(char *)(param_1 + 0x9b) == '\0') {
    uVar5 = uVar5 | 0xf000;
  }
  if (*(char *)(param_1 + 0x9a) != '\0') {
    uVar5 = uVar5 | 0xe0000;
  }
  if (*(char *)(param_1 + 0x99) != '\0') {
    uVar5 = uVar5 | 0x100000;
  }
  if (*(char *)(param_1 + 0x9b) != '\0') {
    uVar5 = uVar5 | 0x200000;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    uVar5 = uVar5 | 0x400000;
  }
  *puVar2 = uVar5;
  puVar2[1] = ~uVar5;
  puVar2[3] = *(uint *)(param_1 + 0x94);
  FUN_00075478(0x14,DAT_000a92b0,param_1);
  FUN_0007552c(0x14);
  *puVar2 = 1;
  return 1;
}

