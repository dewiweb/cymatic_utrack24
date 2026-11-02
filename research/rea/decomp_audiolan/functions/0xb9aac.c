// rea decompile_all
// name: FUN_000b9aac
// address: 0xb9aac
// body: available
// range: 0xb9aac-0xb9b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000b9aac(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_000b9b50;
  piVar1 = DAT_000b9b4c;
  if (*DAT_000b9b4c == 0) {
    FUN_001a0700();
    if (*piVar1 == 0) {
      iVar3 = FUN_001a0808(0x28c,1);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = FUN_000bf338();
      }
      *piVar1 = iVar4;
      uVar5 = FUN_0018ab18(0);
      FUN_0018dc6c(uVar5,DAT_000b9b54);
      uVar5 = FUN_0018ab18(0);
      FUN_0018dc40(uVar5,DAT_000b9b58);
    }
    if (*piVar1 == 0) {
      FUN_0003b20c(DAT_000b9b5c);
    }
    iVar4 = *piVar1;
    FUN_001a0d18(uVar2);
    return iVar4;
  }
  return *DAT_000b9b4c;
}

