// rea decompile_all
// name: FUN_000a2f2c
// address: 0xa2f2c
// body: available
// range: 0xa2f2c-0xa3003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000a2f2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  char *pcVar5;
  ushort *puVar6;
  
  iVar1 = FUN_0001275c(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24,
                       param_3 + *(int *)(param_1 + 0x14));
  if (iVar1 == 0) {
    return;
  }
  puVar6 = (ushort *)
           (*(int *)(param_1 + 0x660) +
           (uint)*(ushort *)(param_1 + 0x5f0) * *(int *)(param_1 + 0x668) * 2);
  while( true ) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x5f0);
    puVar3 = puVar6;
    pcVar5 = (char *)(param_1 + 0x5f8);
    uVar2 = uVar4;
    if (uVar4 < 2) {
      uVar4 = 1;
      uVar2 = uVar4;
    }
    do {
      if (-1 < *pcVar5) {
        *(uint *)(iVar1 + *pcVar5 * 4) = (uint)*puVar3 << 0x10;
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar4 != 0);
    puVar6 = puVar6 + uVar2;
    uVar2 = *(int *)(param_1 + 0x668) + 1;
    *(uint *)(param_1 + 0x668) = uVar2;
    if (*(uint *)(param_1 + 0x664) <= uVar2) {
      iVar1 = FUN_000a2858(param_1);
      if (iVar1 == 0) {
        return;
      }
      puVar6 = *(ushort **)(param_1 + 0x660);
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) break;
    iVar1 = FUN_00012898(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
  }
  return;
}

