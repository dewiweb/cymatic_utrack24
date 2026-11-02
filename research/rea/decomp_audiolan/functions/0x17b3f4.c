// rea decompile_all
// name: FUN_0017b3f4
// address: 0x17b3f4
// body: available
// range: 0x17b3f4-0x17b493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017b3f4(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar6 = DAT_0017b498;
  puVar2 = DAT_0017b494;
  uVar7 = 1;
  *DAT_0017b494 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0x20;
  *pcVar6 = '\0';
  do {
    pcVar6 = pcVar6 + 1;
    cVar4 = '\0';
    for (uVar1 = uVar7; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
      cVar4 = cVar4 + '\x01';
    }
    uVar7 = uVar7 + 1;
    *pcVar6 = cVar4;
    iVar3 = DAT_0017b49c;
  } while (uVar7 < 0x100);
  iVar5 = 0;
  uVar7 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
    uVar7 = uVar7 + 2;
    *(undefined4 *)(iVar3 + (iVar5 + 1) * 4) = 0;
    iVar5 = iVar5 + 2;
  } while (uVar7 < 0x20);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[7] = 0;
  return;
}

