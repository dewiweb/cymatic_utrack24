// rea decompile_all
// name: FUN_000709e8
// address: 0x709e8
// body: available
// range: 0x709e8-0x70b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000709e8(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(short *)(param_1 + 0xc4) == 0) {
    return;
  }
  do {
    pbVar2 = (byte *)FUN_0015490c(param_2,uVar5);
    *(undefined1 *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc) = 0;
    if (pbVar2 != (byte *)0x0) {
      *(byte *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 1) = pbVar2[1];
      bVar1 = *pbVar2;
      uVar4 = (uint)bVar1 * 3;
      *(char *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 4) = (char)(uVar4 >> 2);
      *(byte *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 8) = (byte)uVar4 & 3;
      uVar3 = ((uint)bVar1 + (uint)*(ushort *)(param_1 + 0xc2)) * 3;
      *(char *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 5) = (char)(uVar3 >> 2);
      *(byte *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 9) = (byte)uVar3 & 3;
      uVar3 = uVar4 + (uint)*(ushort *)(param_1 + 0xc2) * 6;
      *(char *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 6) = (char)(uVar3 >> 2);
      *(byte *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 10) = (byte)uVar3 & 3;
      uVar4 = (uint)*(ushort *)(param_1 + 0xc2) * 9 + uVar4;
      *(char *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 7) = (char)(uVar4 >> 2);
      *(byte *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc + 0xb) = (byte)uVar4 & 3;
      *(undefined1 *)(*(int *)(param_1 + 0x118) + uVar5 * 0xc) = 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < *(ushort *)(param_1 + 0xc4));
  return;
}

