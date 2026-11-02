// rea decompile_all
// name: FUN_001542ac
// address: 0x1542ac
// body: available
// range: 0x1542ac-0x154337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001542ac(int *param_1,uint param_2,int param_3,int param_4)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar1;
  uint uVar2;
  
  if (-1 < param_3) {
    iVar1 = *param_1;
    FUN_0016db0c(param_1[1] - iVar1);
    if (param_2 < extraout_r1) {
      iVar1 = (**(code **)(**(int **)(iVar1 + param_2 * 0x14) + 0x18))();
      if (((iVar1 == 0) || (param_4 == 2)) &&
         (FUN_0016db0c(param_1[1] - *param_1), param_2 < extraout_r1_00)) {
        FUN_0015440c(param_1,param_2,param_4);
        for (uVar2 = *(uint *)(*param_1 + param_2 * 0x14 + 0x10);
            (uVar2 != 0 && (FUN_0016db0c(param_1[1] - *param_1), uVar2 < extraout_r1_01));
            uVar2 = *(uint *)(uVar2 * 0x14 + *param_1 + 8)) {
          FUN_001542ac(param_1,uVar2,param_3 + -1,param_4);
        }
      }
    }
    return;
  }
  return;
}

