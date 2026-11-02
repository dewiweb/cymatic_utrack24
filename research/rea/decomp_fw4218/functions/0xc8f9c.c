// rea decompile_all
// name: FUN_000c8f9c
// address: 0xc8f9c
// body: available
// range: 0xc8f9c-0xc90c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c8f9c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  
  FUN_0023f83c(param_1 + 0x238);
  FUN_0023fbc0(param_1 + 0x244);
  if (param_3 == 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_2 + 0x18); uVar2 = uVar2 + 1) {
      uVar1 = FUN_000d6424(auStack_2c,uVar2,0x40,0,uVar2,2,0);
      FUN_0023fc70(param_1 + 0x244,uVar1);
    }
  }
  else {
    for (uVar2 = 0; uVar2 < *(uint *)(param_2 + 0x18); uVar2 = uVar2 + 1) {
      if (*(char *)(param_3 + uVar2 * 4) == -1) {
        FUN_00002898(DAT_000c90c8,uVar2,*(undefined4 *)(param_2 + 0x18));
        return 0;
      }
      uVar1 = FUN_000d6424(auStack_2c,*(undefined1 *)(param_3 + uVar2 * 4),0x40,0,
                           *(undefined1 *)(param_3 + uVar2 * 4 + 1),
                           *(undefined1 *)(param_3 + uVar2 * 4 + 2),0);
      FUN_0023fc70(param_1 + 0x244,uVar1);
    }
  }
  uVar1 = FUN_000d63d8(auStack_1c,*(undefined4 *)(param_2 + 0x18));
  FUN_0023f8ec(param_1 + 0x238,uVar1);
  *(int *)(param_2 + 0x2c) = param_1 + 0x238;
  return 1;
}

