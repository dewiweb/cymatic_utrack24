// rea decompile_all
// name: FUN_0004e7d8
// address: 0x4e7d8
// body: available
// range: 0x4e7d8-0x4e9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004e7d8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = DAT_0004e9d8;
  if (*DAT_0004e9d4 == 0) {
    uVar3 = 1;
  }
  else {
    *DAT_0004e9d8 = 0x1000001;
    puVar2[1] = 0x10000;
    puVar2[0x80] = 0xff;
    iVar5 = 0x2000;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *DAT_0004e9dc = 0xff;
    do {
      puVar2 = DAT_0004e9d8;
      DAT_0004e9d8[0x81] = 0x70;
      puVar2[0x94] = 1;
      do {
      } while (*DAT_0004e9e0 == 0);
      iVar5 = FUN_0004d3d8(*DAT_0004e9e4);
      puVar2 = DAT_0004e9dc;
    } while (iVar5 == 0);
    *DAT_0004e9dc = 0xff;
    uVar3 = 0;
    uVar4 = param_1 * *DAT_0004e9e8;
    puVar2[-0x340] = 0;
    puVar2[-0x33c] = *DAT_0004e9ec & 0xff;
    puVar2[-0x33b] = (*DAT_0004e9ec & 0xffff) >> 8;
    puVar2[-0x33a] = uVar4 & 0xff;
    puVar2[-0x339] = (uVar4 & 0xffff) >> 8;
    puVar2[-0x338] = (uVar4 & 0xffffff) >> 0x10;
    puVar2[-0x340] = 0x30;
    puVar2[-0x32b] = *DAT_0004e9f0;
    for (iVar5 = 0; iVar5 < *DAT_0004e9f0; iVar5 = iVar5 + 1) {
      do {
      } while (*DAT_0004e9e0 == 0);
      cVar1 = *DAT_0004e9e4;
      if (((*DAT_0004e9ec == 0x800) && (iVar5 == 0)) && (cVar1 != -1)) {
        uVar3 = 1;
      }
      if (((*DAT_0004e9ec == 0x100) && (iVar5 == 5)) && (cVar1 != -1)) {
        uVar3 = 1;
      }
      if (((*DAT_0004e9ec == 0x200) && (iVar5 == 5)) && (cVar1 != -1)) {
        uVar3 = 1;
      }
    }
    *DAT_0004e9d8 = 0x10000;
  }
  return uVar3;
}

