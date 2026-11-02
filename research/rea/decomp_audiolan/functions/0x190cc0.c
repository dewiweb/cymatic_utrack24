// rea decompile_all
// name: FUN_00190cc0
// address: 0x190cc0
// body: available
// range: 0x190cc0-0x190cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00190cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar4 = FUN_0019d994(param_1,&local_10);
  iVar1 = DAT_00190cfc;
  if (iVar4 != 0) {
    *(undefined4 *)(DAT_00190cfc + 8) = 0xd2;
    return (undefined4 *)0x0;
  }
  *(undefined4 *)(DAT_00190cfc + 4) = local_10;
  puVar2 = DAT_00190d04;
  *DAT_00190d04 = DAT_00190d00;
  puVar2[1] = 0;
  puVar3 = DAT_00190d08;
  *DAT_00190d08 = param_1;
  puVar3[1] = iVar1;
  puVar3[2] = 2;
  puVar3[3] = 4;
  puVar3[4] = puVar2;
  return puVar3;
}

