// rea decompile_all
// name: FUN_000c4db0
// address: 0xc4db0
// body: available
// range: 0xc4db0-0xc4e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c4db0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_000c4e90;
  iVar1 = DAT_000c4e8c;
  if (*(int *)(DAT_000c4e8c + 4) == 0) {
    FUN_001a0700();
    if (*(int *)(iVar1 + 4) == 0) {
      iVar3 = FUN_001a0808(DAT_000c4e94,1);
      puVar4 = (undefined4 *)0x0;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_0006fc90(iVar3,DAT_000c4e9c,0,0x14);
        uVar5 = DAT_000c4ea0;
        *(undefined1 *)(puVar4 + 0x45) = 0;
        *(undefined1 *)((int)puVar4 + 0x915) = 0;
        *puVar4 = uVar5;
        FUN_0006e024();
      }
      *(undefined4 **)(iVar1 + 4) = puVar4;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      FUN_0003b20c(DAT_000c4ea4);
    }
    uVar5 = *(undefined4 *)(iVar1 + 4);
    FUN_001a0d18(uVar2);
    return uVar5;
  }
  return *(undefined4 *)(DAT_000c4e8c + 4);
}

