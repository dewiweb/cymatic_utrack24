// rea decompile_all
// name: FUN_001c191c
// address: 0x1c191c
// body: available
// range: 0x1c191c-0x1c1979 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c191c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_001c1998;
  if (*(int *)(DAT_001c1998 + 0x10) == 0) {
    uVar2 = FUN_001c6ad0(0x20);
    uVar2 = FUN_00173a60(uVar2,&DAT_001c199c,10,2);
    iVar4 = 0;
    *(undefined4 *)(iVar1 + 8) = uVar2;
    for (uVar3 = 0x10; (uVar3 & 0x3ff) != 0; uVar3 = uVar3 << 1) {
      uVar2 = FUN_0020bbd4(*(undefined4 *)(iVar1 + 8),iVar4);
      FUN_002329fc(uVar2,*(undefined4 *)(*(int *)(iVar1 + 8) + 0x18));
      iVar4 = iVar4 + 1;
    }
    uVar2 = FUN_001c6ad0(0x20);
    iVar4 = FUN_00173a60(uVar2,&DAT_001c19a0,10,1);
    *(int *)(iVar1 + 0xc) = iVar4;
    *(undefined4 *)(iVar4 + 0x10) = 0x3f0;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
  }
  return;
}

