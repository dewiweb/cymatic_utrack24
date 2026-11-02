// rea decompile_all
// name: FUN_001bc2bc
// address: 0x1bc2bc
// body: available
// range: 0x1bc2bc-0x1bc317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001bc2bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uStack_18;
  
  pcVar3 = *(code **)(param_1 + 8);
  piVar4 = (int *)(*(int *)(param_1 + 4) + ((int)*(uint *)(param_1 + 0xc) >> 1));
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *piVar4);
  }
  uStack_18 = param_4;
  uVar2 = FUN_001da408(&uStack_18,param_1 + 0x10);
  uVar1 = (*pcVar3)(piVar4,uVar2);
  FUN_001da314(&uStack_18);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  thunk_EXT_FUN_0040010c(param_1 + 0x18);
  return;
}

