// rea decompile_all
// name: FUN_00001458
// address: 0x1458
// body: available
// range: 0x1458-0x14b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00001458(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_000014bc;
  uVar1 = DAT_000014b8;
  if (*DAT_000014b4 == '\0') {
    uVar4 = 0;
    *DAT_000014b4 = '\x01';
    do {
      iVar5 = 0;
      uVar3 = uVar4;
      do {
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar3 >> 1;
        }
        else {
          uVar3 = uVar1 ^ uVar3 >> 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
      *(uint *)(iVar2 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x100);
    return;
  }
  return;
}

