// rea decompile_all
// name: FUN_001cfa80
// address: 0x1cfa80
// body: available
// range: 0x1cfa80-0x1cfb13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001cfa80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1[0xf] == 1 || param_1[0xf] == 2) {
    uVar2 = thunk_EXT_FUN_0040001c();
    puVar1 = DAT_001cfb14;
    *param_1 = 0;
    if ((undefined4 *)param_1[0x25] == param_1) {
      *puVar1 = 0;
    }
    else {
      ((undefined4 *)param_1[0x25])[0x26] = param_1[0x26];
      *(undefined4 *)(param_1[0x26] + 0x94) = param_1[0x25];
      if ((undefined4 *)*puVar1 == param_1) {
        *puVar1 = param_1[0x25];
      }
    }
    *DAT_001cfb18 = *DAT_001cfb18 + -1;
    thunk_EXT_FUN_00400034(uVar2);
    FUN_001ce98c(param_1 + 0x27);
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}

