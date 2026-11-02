// rea decompile_all
// name: FUN_0013fa88
// address: 0x13fa88
// body: available
// range: 0x13fa88-0x13fbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0013fa88(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 4)) {
    iVar2 = *(int *)(param_1 + 4) + 8;
    puVar1 = (undefined4 *)FUN_0016d774(iVar2 * 0x14 + 8,DAT_0013fbc4);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    *puVar1 = 0x14;
    puVar1[1] = iVar2;
    iVar2 = FUN_0016dd70(puVar1 + 2,DAT_0013fbc8,0x14,iVar2);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 0x14);
        puVar3 = (undefined4 *)(iVar2 + iVar4 * 0x14);
        *puVar3 = *puVar1;
        *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar1 + 1);
        FUN_0010e820(puVar3 + 2,puVar1 + 2);
        iVar4 = iVar4 + 1;
        *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar1 + 4);
        *(undefined1 *)((int)puVar3 + 0x12) = *(undefined1 *)((int)puVar1 + 0x12);
      } while (iVar4 < *(int *)(param_1 + 4));
    }
    FUN_00003c70(*(undefined4 *)(param_1 + 0xc),DAT_0013fbcc);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  FUN_0010e498(*(int *)(param_1 + 8) * 0x14 + 8 + *(int *)(param_1 + 0xc),param_2);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0x14 + 0x10) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 0x14 + 0x12) = param_4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

