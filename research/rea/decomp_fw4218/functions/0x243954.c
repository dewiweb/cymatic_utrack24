// rea decompile_all
// name: FUN_00243954
// address: 0x243954
// body: available
// range: 0x243954-0x2439a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00243954(undefined4 *param_1,undefined4 param_2,uint *param_3,uint param_4,uint *param_5,
            uint param_6,uint *param_7,uint param_8)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  while ((param_3 != param_5 || (param_4 != param_6))) {
    uVar5 = param_8 + 1;
    puVar3 = param_7;
    if (uVar5 == 0x20) {
      uVar5 = 0;
      puVar3 = param_7 + 1;
    }
    uVar4 = 1 << (param_8 & 0xff);
    uVar2 = param_4 + 1;
    puVar1 = param_3;
    if (uVar2 == 0x20) {
      uVar2 = 0;
      puVar1 = param_3 + 1;
    }
    if ((*param_3 & 1 << (param_4 & 0xff)) == 0) {
      uVar4 = *param_7 & ~uVar4;
    }
    else {
      uVar4 = *param_7 | uVar4;
    }
    *param_7 = uVar4;
    param_3 = puVar1;
    param_4 = uVar2;
    param_7 = puVar3;
    param_8 = uVar5;
  }
  *param_1 = param_7;
  param_1[1] = param_8;
  return param_1 + 2;
}

