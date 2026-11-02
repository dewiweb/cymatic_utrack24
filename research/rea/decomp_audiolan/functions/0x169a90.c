// rea decompile_all
// name: FUN_00169a90
// address: 0x169a90
// body: available
// range: 0x169a90-0x169b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169b78 to 0x1350e4 FUN_001350e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00169a90(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0xec) = 0;
  piVar3 = (int *)(param_1 + -0x40);
  if (param_3 == 0x84 || param_3 == 0x87) {
    return;
  }
  uStack_20 = param_7;
  uStack_1c = param_8;
  iVar1 = FUN_00139bb0(param_1 + 0xc0,param_4,param_5,param_6);
  if (iVar1 != 0) {
    FUN_001350e4(*(undefined4 *)(param_1 + 0x44),*(int *)(*piVar3 + -0x14) + (int)piVar3);
  }
  uVar4 = param_4 + 1U & 0xfffeffff;
  if (*(ushort *)(param_1 + 0x4e) <= uVar4) {
    FUN_00135044(*(undefined4 *)(param_1 + 0x44),*(int *)(*piVar3 + -0x14) + (int)piVar3,3);
    FUN_001350e4(*(undefined4 *)(param_1 + 0x44),*(int *)(*piVar3 + -0x14) + (int)piVar3);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(&uStack_20);
  uVar2 = FUN_00139578(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x24),&uStack_20,uVar4,param_1);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  return;
}

