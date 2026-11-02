// rea decompile_all
// name: FUN_0006f6b4
// address: 0x6f6b4
// body: available
// range: 0x6f6b4-0x6f743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006f6b4(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_0006f748;
  piVar1 = DAT_0006f744;
  if (*DAT_0006f744 != 0) {
    return *DAT_0006f744;
  }
  FUN_001a0700();
  if (*piVar1 == 0) {
    puVar4 = (undefined4 *)FUN_001a0808(0xc,1);
    uVar3 = _DAT_0006f74c;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      *(undefined1 *)(puVar4 + 2) = 0;
      *puVar4 = uVar3;
    }
    *piVar1 = (int)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0003b20c(s___CopperLanRoot__getReference__F_0006f74e + 2);
    }
  }
  iVar5 = *piVar1;
  FUN_001a0d18(uVar2);
  return iVar5;
}

