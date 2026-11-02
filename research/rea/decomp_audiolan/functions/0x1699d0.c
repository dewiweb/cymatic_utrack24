// rea decompile_all
// name: FUN_001699d0
// address: 0x1699d0
// body: available
// range: 0x1699d0-0x169a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169a8c to 0x135044 FUN_00135044 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001699d0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 auStack_20 [4];
  
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (param_3 == 0x84 || param_3 == 0x87) {
    return;
  }
  auStack_20[0] = param_6;
  FUN_00137098(param_1 + 0xa0,param_4,param_5,param_7);
  uVar2 = param_4 + 1U & 0xfffeffff;
  if (*(ushort *)(param_1 + 0x4a) <= uVar2) {
    FUN_00135150(*(undefined4 *)(param_1 + 0x44));
    FUN_00135044(*(undefined4 *)(param_1 + 0x44),
                 *(int *)(*(int *)(param_1 + -0x40) + -0x14) + param_1 + -0x40,1);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(auStack_20);
  uVar1 = FUN_001391bc(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x24),auStack_20,uVar2,param_1);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  return;
}

