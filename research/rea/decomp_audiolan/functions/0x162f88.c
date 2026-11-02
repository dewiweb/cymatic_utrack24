// rea decompile_all
// name: FUN_00162f88
// address: 0x162f88
// body: available
// range: 0x162f88-0x163077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162f88(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_20 [2];
  undefined1 auStack_18 [12];
  
  if (param_3 == 6) {
    iVar2 = FUN_000dde00();
    (**(code **)(*param_2 + 200))(auStack_18,param_2);
    (**(code **)(*param_2 + 0xe8))(auStack_20,param_2);
    uVar3 = FUN_0015e6f4(auStack_20);
    FUN_000d7890(iVar2 + 0x20,uVar3);
    FUN_0010e7f4(auStack_20);
    return;
  }
  if (param_3 != 8 && param_3 != 9) {
    return;
  }
  FUN_000dde00();
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    auStack_20[0] = 0;
    (**(code **)(*piVar1 + 0x1f8))(piVar1,DAT_00163078,0,1);
    return;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    auStack_20[0] = 0;
    (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x214)) + 0x1f8))
              ((int)piVar1 + *(int *)(*piVar1 + -0x214),DAT_00163078,0,1);
    return;
  }
  return;
}

