// rea decompile_all
// name: FUN_00189bb0
// address: 0x189bb0
// body: available
// range: 0x189bb0-0x189c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x189c2c to 0x14c62c FUN_0014c62c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00189bb0(int param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                 undefined1 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined2 uVar1;
  
  if ((param_6 & 0x80000000) == 0) {
    uVar1 = *(undefined2 *)(**(int **)(param_1 + 0x7c) + 500);
  }
  else {
    uVar1 = *DAT_00189c30;
  }
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  *(undefined2 *)(param_1 + 0x42) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined2 *)(param_1 + 0x48) = param_4;
  *(undefined1 *)(param_1 + 0x4c) = param_5;
  *(uint *)(param_1 + 0x60) = param_6;
  *(uint *)(param_1 + 100) = param_6;
  *(undefined4 *)(param_1 + 0x78) = param_7;
  FUN_00171828(param_1 + 0x50,param_8);
  FUN_0014c62c(param_1,10,**(int **)(param_1 + 0x7c) + 0x548);
  return;
}

