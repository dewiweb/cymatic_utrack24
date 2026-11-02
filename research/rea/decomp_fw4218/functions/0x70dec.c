// rea decompile_all
// name: FUN_00070dec
// address: 0x70dec
// body: available
// range: 0x70dec-0x70e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00070dec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_00074180(param_1,7,param_2);
  uVar1 = DAT_00070e60;
  puVar2[8] = 0;
  *puVar2 = uVar1;
  puVar3 = (undefined4 *)FUN_001f01c4(0x18,1);
  uVar1 = _DAT_00070e64;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = s___framer_00070e66 + 2;
    puVar3[2] = s_framer_routing_and_internal_stat_00070e70;
    puVar3[3] = uVar1;
    puVar3[4] = 1;
    *puVar3 = DAT_00070e98;
    puVar3[5] = puVar2;
    FUN_001a7b9c(puVar3,&LAB_00070e9c);
  }
  puVar2[9] = puVar3;
  return puVar2;
}

