// rea decompile_all
// name: FUN_00071490
// address: 0x71490
// body: available
// range: 0x71490-0x715cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00071490(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_28;
  int *local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  uVar2 = FUN_001da358(&local_28,param_2,auStack_20);
  FUN_001e2a5c(param_1,uVar2,s__READ__000715cc);
  piVar1 = DAT_000715d4;
  piVar6 = DAT_000715d4 + 3;
  if (local_28 != piVar6) {
    piVar3 = local_28 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != DAT_000715d4 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      FUN_0010fa20(local_28 + -3,local_28[-2] + 0xe,0);
    }
  }
  uVar2 = FUN_001da358(&local_24,param_2,auStack_1c);
  FUN_001e2a5c(param_1 + 1,uVar2,s__WRITE__000715d8);
  if (local_24 != piVar6) {
    piVar6 = local_24 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != piVar1 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      FUN_0010fa20(local_24 + -3,local_24[-2] + 0xe,0);
    }
  }
  param_1[2] = 0;
  FUN_0017a1c4(param_1 + 2,*param_1,0,0);
  thunk_EXT_FUN_00400100(param_1 + 2);
  puVar5 = param_1 + 9;
  *puVar5 = 0;
  FUN_0017a1c4(puVar5,param_1[1],0,0);
  thunk_EXT_FUN_00400100(puVar5);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}

