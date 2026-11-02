// rea decompile_all
// name: FUN_000db644
// address: 0xdb644
// body: available
// range: 0xdb644-0xdb6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000db644(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  iVar1 = DAT_000db6c4;
  if (2 < param_1) {
    return;
  }
  if (*(int *)(DAT_000db6c4 + param_1 * 4) != 0) {
    return;
  }
  if (param_1 == 0) {
    puVar2 = (undefined1 *)FUN_001dc438(DAT_000db6d0);
  }
  else {
    uVar4 = DAT_000db6c8;
    if ((param_1 != 1) && (uVar4 = DAT_000db6cc, param_1 != 2)) {
      uVar5 = 1;
      goto LAB_000db6a8;
    }
    puVar2 = (undefined1 *)FUN_001dc438(uVar4,param_2);
  }
  uVar5 = 1;
  if (puVar2 != (undefined1 *)0x0) {
    uVar5 = *puVar2;
  }
LAB_000db6a8:
  iVar3 = FUN_001f01c4(0x94,uVar5);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_000dbcec(iVar3,param_1);
  }
  *(undefined4 *)(iVar1 + param_1 * 4) = uVar4;
  return;
}

