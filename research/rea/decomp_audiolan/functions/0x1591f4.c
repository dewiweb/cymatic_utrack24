// rea decompile_all
// name: FUN_001591f4
// address: 0x1591f4
// body: available
// range: 0x1591f4-0x1592eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001591f4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_14;
  char local_10 [4];
  
  iVar1 = FUN_0015c05c(param_2,local_10);
  if (iVar1 == 0) {
    FUN_000028a4(DAT_001592f0);
    return 0;
  }
  uVar4 = DAT_001592ec;
  if ((local_10[0] == '\x10') &&
     (iVar1 = FUN_0015bf38(param_2,&local_14), uVar4 = DAT_001592f4, iVar1 != 0)) {
    uVar2 = FUN_0004669c(local_14,0);
    uVar3 = FUN_0004669c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x44),0);
    uVar4 = DAT_001592f8;
    if ((uVar2 <= uVar3) &&
       (uVar3 = FUN_0004669c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x40),0), uVar4 = DAT_001592fc,
       uVar3 <= uVar2)) {
      return 1;
    }
    FUN_000028a4(uVar4,uVar2,local_14,uVar3);
  }
  else {
    FUN_000028a4(uVar4);
  }
  return 0;
}

