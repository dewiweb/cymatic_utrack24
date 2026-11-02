// rea decompile_all
// name: FUN_00190c78
// address: 0x190c78
// body: available
// range: 0x190c78-0x190d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00190c78(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    do {
      if (*(int **)(iVar3 + 0x4c) == (int *)0x0) {
        *(byte *)(iVar3 + 0x62) = *(byte *)(iVar3 + 0x62) | 3;
      }
      else {
        iVar4 = 0;
        iVar2 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x48))();
        if (0 < iVar2) {
          do {
            bVar1 = *(byte *)(*(int *)(iVar3 + 100) + iVar4);
            *(byte *)(*(int *)(iVar3 + 100) + iVar4) = bVar1 | 1;
            *(byte *)(*(int *)(iVar3 + 100) + iVar4) = bVar1 | 3;
            iVar4 = iVar4 + 1;
            iVar2 = (**(code **)(**(int **)(iVar3 + 0x4c) + 0x48))();
          } while (iVar4 < iVar2);
        }
      }
      FUN_0019bc40(*(undefined4 *)(iVar3 + 0x48));
      iVar3 = *(int *)(iVar3 + 0x68);
    } while (iVar3 != 0);
    return;
  }
  return;
}

