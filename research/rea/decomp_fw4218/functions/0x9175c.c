// rea decompile_all
// name: FUN_0009175c
// address: 0x9175c
// body: available
// range: 0x9175c-0x917f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009175c(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_000917f4;
  if (*(int *)(DAT_000917f4 + 4) == 0) {
    puVar2 = (undefined4 *)FUN_001f01c4(0x40,1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = _DAT_000917f8;
      puVar2[1] = 0x19;
      puVar2[7] = 0x1000;
      puVar2[2] = 0x19;
      puVar2[8] = 0x1000;
      puVar2[3] = 0x19;
      puVar2[9] = 0x1000;
      puVar2[4] = 0x19;
      puVar2[10] = 0x1000;
      puVar2[5] = 0x19;
      puVar2[0xb] = 0x1000;
      puVar2[6] = 0x19;
      puVar2[0xc] = 0x1000;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
    }
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0003fe6c(s___CopperLanModule__FATAL___can_t_000917fa + 2);
    }
  }
  return *(undefined4 *)(iVar1 + 4);
}

