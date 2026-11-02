// rea decompile_all
// name: FUN_001547b4
// address: 0x1547b4
// body: available
// range: 0x1547b4-0x154873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001547b4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_2 < (uint)(param_1[1] - *param_1 >> 1)) {
    return 0;
  }
  iVar2 = FUN_0016d774(param_2 * 2 + 2,DAT_00154874);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 < (uint)(param_1[1] - *param_1 >> 1)) {
    return iVar2;
  }
  uVar3 = 0;
  if (param_2 != 0xffffffff) {
    do {
      iVar1 = uVar3 * 2;
      if ((uVar3 < (uint)(param_1[1] - *param_1 >> 1)) &&
         (puVar4 = (undefined1 *)(*param_1 + uVar3 * 2), puVar4 != (undefined1 *)0x0)) {
        *(undefined1 *)(iVar2 + iVar1 + 1) = puVar4[1];
        *(undefined1 *)(iVar2 + iVar1) = *puVar4;
      }
      else {
        *(undefined1 *)(iVar2 + iVar1) = 0xff;
        *(undefined1 *)(iVar2 + iVar1 + 1) = 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2 + 1);
    return iVar2;
  }
  return iVar2;
}

