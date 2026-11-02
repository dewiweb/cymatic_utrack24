// rea decompile_all
// name: FUN_00201f94
// address: 0x201f94
// body: available
// range: 0x201f94-0x202001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00201f94(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_001f00bc(DAT_00202004);
  if (*param_2 == *param_1) {
    FUN_001f06d4(DAT_00202004);
  }
  else {
    piVar3 = (int *)0x0;
    FUN_001f00bc(DAT_00202004);
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        FUN_001eecc8(param_1[1]);
        piVar3 = (int *)*param_1;
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    FUN_001f06d4(DAT_00202004);
    if (*param_2 != 0) {
      *param_1 = *param_2;
      piVar1 = (int *)param_2[1];
      param_1[1] = (int)piVar1;
      *piVar1 = *piVar1 + 1;
    }
    FUN_001f06d4(DAT_00202004);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return param_1;
}

