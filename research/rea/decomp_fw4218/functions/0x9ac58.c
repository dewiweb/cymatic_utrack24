// rea decompile_all
// name: FUN_0009ac58
// address: 0x9ac58
// body: available
// range: 0x9ac58-0x9ad2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009ac58(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  do {
    iVar4 = param_1 + uVar5 * 0x38;
    piVar1 = *(int **)(iVar4 + 0x26c);
    *(undefined4 *)(iVar4 + 0x254) = 0;
    *(undefined4 *)(iVar4 + 0x248) = 0;
    *(undefined4 *)(iVar4 + 0x268) = 0;
    *(undefined4 *)(iVar4 + 0x25c) = 0;
    *(undefined4 *)(iVar4 + 0x260) = 0;
    *(undefined4 *)(iVar4 + 0x23c) = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = 0;
      uVar2 = piVar1[4];
      if (piVar1[1] != 0) {
        do {
          uVar2 = uVar2 + 1;
          if ((uint)piVar1[3] <= uVar2) {
            uVar2 = uVar2 - *piVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)piVar1[1]);
      }
      piVar1[1] = 0;
      piVar1[4] = piVar1[2];
      piVar1[5] = piVar1[2];
      puVar6 = *(undefined4 **)(iVar4 + 0x26c);
      if (puVar6 != (undefined4 *)0x0) {
        if (puVar6[2] != 0) {
          FUN_001eecc8();
          puVar6[2] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        FUN_001eecc8(puVar6);
      }
      *(undefined4 *)(iVar4 + 0x26c) = 0;
    }
    uVar5 = uVar5 + 1 & 0xfffeffff;
  } while (uVar5 < 0x20);
  return;
}

