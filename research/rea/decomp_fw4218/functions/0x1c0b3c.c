// rea decompile_all
// name: FUN_001c0b3c
// address: 0x1c0b3c
// body: available
// range: 0x1c0b3c-0x1c0b9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c0b3c(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    pbVar3 = (byte *)0x0;
    iVar2 = 0;
  }
  else {
    pbVar3 = (byte *)(iVar2 + 8);
    iVar2 = iVar2 + 8;
  }
  pbVar5 = (byte *)(iVar2 + *(int *)(param_1 + 8));
  iVar2 = 0;
  if (pbVar3 < pbVar5) {
    while (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      if ((char)bVar1 < '\0') {
        uVar4 = (uint)*(byte *)(DAT_001c0ba0 + (bVar1 ^ 0x80));
        if ((2 < uVar4) && ((*(byte *)(DAT_001c0ba4 + (bVar1 & 0x1f)) & pbVar3[1]) == 0)) {
          return iVar2;
        }
        if (uVar4 == 0) {
          return iVar2;
        }
      }
      else {
        uVar4 = 1;
      }
      pbVar3 = pbVar3 + uVar4;
      iVar2 = iVar2 + 1;
      if (pbVar5 <= pbVar3) {
        return iVar2;
      }
    }
  }
  return iVar2;
}

