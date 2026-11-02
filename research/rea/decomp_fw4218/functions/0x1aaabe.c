// rea decompile_all
// name: FUN_001aaabe
// address: 0x1aaabe
// body: available
// range: 0x1aaabe-0x1aab21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001aaabe(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_3 == 0) {
    FUN_001aab22();
  }
  else {
    iVar2 = FUN_001aae5c(param_1,param_3 + 1);
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(param_1 + 8) = param_3;
    puVar4 = *(undefined1 **)(param_1 + 4);
    if (puVar4 != (undefined1 *)0x0) {
      puVar4 = puVar4 + 8;
    }
    if (0 < param_3) {
      puVar3 = puVar4 + -1;
      puVar5 = param_2 + -1;
      if ((param_3 - 1U & 1) != 1) {
        *puVar4 = *param_2;
        puVar3 = puVar4;
        puVar5 = param_2;
      }
      for (iVar2 = param_3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar3[1] = *puVar1;
        puVar3 = puVar3 + 2;
        *puVar3 = *puVar5;
      }
      puVar4 = puVar4 + param_3;
    }
    *puVar4 = 0;
  }
  return 1;
}

