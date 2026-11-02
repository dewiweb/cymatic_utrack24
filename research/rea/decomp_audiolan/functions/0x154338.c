// rea decompile_all
// name: FUN_00154338
// address: 0x154338
// body: available
// range: 0x154338-0x1543c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00154338(int *param_1,uint param_2,int param_3)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    FUN_0016db0c(param_1[1] - iVar2);
    if (param_2 < extraout_r1) {
      piVar3 = (int *)(iVar2 + param_2 * 0x14);
      FUN_000028a4(s______OVERVIEW______001543c4);
      FUN_0015440c(param_1,param_2,param_3);
      for (uVar1 = piVar3[4];
          (uVar1 != 0 && (FUN_0016db0c(param_1[1] - *param_1), uVar1 < extraout_r1_00));
          uVar1 = *(uint *)(*param_1 + uVar1 * 0x14 + 8)) {
        FUN_0015440c(param_1,uVar1,param_3);
      }
      FUN_000028a4(s______DESCRIPTION______001543d8);
      iVar2 = (**(code **)(*(int *)*piVar3 + 0x10))((int *)*piVar3,param_3 != 1);
      if (iVar2 == 0) {
        FUN_000028a4(s_executes___s__command_001543f0,*(undefined4 *)(*piVar3 + 4));
      }
    }
  }
  FUN_000028a4(&DAT_00154408);
  return;
}

