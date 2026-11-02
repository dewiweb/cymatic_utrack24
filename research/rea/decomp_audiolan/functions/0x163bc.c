// rea decompile_all
// name: FUN_000163bc
// address: 0x163bc
// body: available
// range: 0x163bc-0x1643f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000163bc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_00016454;
  if (*DAT_00016454 != 0) {
    return;
  }
  iVar3 = FUN_001a0808(1);
  iVar5 = DAT_00016458;
  if (iVar3 != 0) {
    iVar4 = 0;
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar5 + iVar4 * 4) = 0;
      iVar6 = iVar6 + 2;
      *(undefined4 *)(iVar5 + (iVar4 + 1) * 4) = 0;
      iVar2 = DAT_0001645c;
      iVar4 = iVar4 + 2;
    } while (iVar6 < 0x14);
    iVar4 = 0;
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
      iVar5 = iVar5 + 2;
      *(undefined4 *)(iVar2 + (iVar4 + 1) * 4) = 0;
      iVar4 = iVar4 + 2;
    } while (iVar5 < 0x28);
  }
  *piVar1 = iVar3;
  return;
}

