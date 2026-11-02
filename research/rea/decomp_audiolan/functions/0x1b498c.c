// rea decompile_all
// name: FUN_001b498c
// address: 0x1b498c
// body: available
// range: 0x1b498c-0x1b4a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b498c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x70);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = *puVar4;
  puVar5 = (undefined4 *)(param_1 + 0x6c);
  do {
    puVar3 = puVar5;
    puVar5 = (undefined4 *)*puVar3;
    if (puVar5 == (undefined4 *)0x0) break;
    iVar1 = puVar5[3];
    iVar2 = puVar4[3];
  } while ((int)(((uint)*(byte *)(iVar1 + 7) | (*(uint *)(iVar1 + 4) & 0xff0000) >> 8 |
                  (uint)*(byte *)(iVar1 + 5) << 0x10 | (uint)*(uint3 *)(iVar1 + 4) << 0x18) -
                ((uint)*(byte *)(iVar2 + 7) | (*(uint *)(iVar2 + 4) & 0xff0000) >> 8 |
                 (uint)*(byte *)(iVar2 + 5) << 0x10 | (uint)*(uint3 *)(iVar2 + 4) << 0x18)) < 0);
  *puVar4 = puVar5;
  *puVar3 = puVar4;
  *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

