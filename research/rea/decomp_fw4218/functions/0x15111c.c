// rea decompile_all
// name: FUN_0015111c
// address: 0x15111c
// body: available
// range: 0x15111c-0x1511f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015111c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1[3] != 0) {
    FUN_001c6a64();
  }
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  if (param_1[5] != 0) {
    FUN_001c6a64();
  }
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)*param_1;
    }
    else {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[3];
      (**(code **)(iVar2 + 4))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  piVar1 = (int *)param_1[0xf];
  if ((piVar1 != (int *)0x0) && (iVar2 = FUN_00029894(piVar1 + 3), iVar2 == 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return 0;
}

