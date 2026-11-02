// rea decompile_all
// name: FUN_0010c8a8
// address: 0x10c8a8
// body: available
// range: 0x10c8a8-0x10ca63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0010c8a8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [72];
  
  *(undefined4 *)(param_1 + 0x770) = param_2;
  iVar1 = FUN_000faf98(param_1 + 0x18c,param_1,1,param_1 + 0x168);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_000faf98(param_1 + 0x2a0,param_1 + 0x3e0,0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_000faf98(param_1 + 0x1c,param_1 + 0x130,0,param_1 + 0x144);
  if (iVar1 == 0) {
    return false;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xfa;
  *(undefined4 *)(param_1 + 0x1ac) = 0x32;
  *(undefined4 *)(param_1 + 0x2c0) = 0x32;
  piVar2 = *(int **)(param_1 + 0x774);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1 + 0x720);
    (**(code **)(**(int **)(param_1 + 0x774) + 0x20))();
  }
  bVar4 = false;
  iVar1 = FUN_000fc720(param_1 + 0x4d8,param_1 + 0x168,param_1 + 0x3b4,param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = FUN_000fc838(param_1 + 0x4d8);
    bVar4 = iVar1 == 0;
  }
  FUN_000eea30(auStack_70);
  FUN_000eaed0(auStack_70,0,DAT_0010caa4);
  uVar3 = FUN_000ee95c(auStack_70);
  *(undefined4 *)(param_1 + 0x76c) = uVar3;
  FUN_000fe2a0(param_1 + 1000);
  FUN_000fb0dc(param_1 + 0x18c);
  FUN_000fb0dc(param_1 + 0x2a0);
  FUN_000fb0dc(param_1 + 0x1c);
  FUN_000ee880(auStack_70);
  FUN_000e9f98(auStack_5c);
  FUN_000e9f98(auStack_64);
  return bVar4;
}

