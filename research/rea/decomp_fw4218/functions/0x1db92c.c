// rea decompile_all
// name: FUN_001db92c
// address: 0x1db92c
// body: available
// range: 0x1db92c-0x1db99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_001db92c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  FUN_001e58ac(param_5,0x260);
  *(int *)(param_5 + 0x114) = param_4;
  if (param_4 == 0) {
    *(undefined2 *)(param_5 + 0x12e) = *(undefined2 *)(DAT_001db9a0 + 4);
  }
  puVar1 = (undefined1 *)FUN_001db0f0(param_1,param_2,param_3);
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 + 4 <= param_3)) {
    uVar2 = FUN_00025cca(param_5 + 0x130);
    *(undefined4 *)(param_5 + 4) = uVar2;
    *(ushort *)(param_5 + 0x230) = CONCAT11(*puVar1,puVar1[1]);
    *(ushort *)(param_5 + 0x232) = CONCAT11(puVar1[2],puVar1[3]);
    return puVar1 + 4;
  }
  return (undefined1 *)0x0;
}

