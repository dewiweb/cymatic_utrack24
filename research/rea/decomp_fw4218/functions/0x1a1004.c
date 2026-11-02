// rea decompile_all
// name: FUN_001a1004
// address: 0x1a1004
// body: available
// range: 0x1a1004-0x1a1127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_001a1004(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_001d06b8();
  param_1[0x75] = iVar1;
  if (param_1[0x76] != 0) {
    if ((uint)(iVar1 - param_1[0x76]) < 500) {
      FUN_001d0130(500);
    }
    param_1[0x76] = 0;
  }
  iVar1 = FUN_001a1558(param_1 + 0x128);
  piVar2 = param_1 + 0x163;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x58) = 0;
    FUN_0014ccec(param_1 + 0x6c);
    param_1[0x59] = 0;
    *(undefined1 *)(param_1 + 0x71) = 1;
    iVar1 = (**(code **)(*param_1 + 0x1c4))(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_001a2810(param_1 + 0x128), iVar1 == 0)) {
      (**(code **)(*param_1 + 0x1c0))(param_1);
      return (bool)4;
    }
    *(undefined1 *)(param_1 + 0x71) = 2;
    iVar1 = FUN_00184310(piVar2);
  }
  else {
    if ((char)param_1[0x71] == '\x03') {
      FUN_001853dc(piVar2);
      return false;
    }
    if ((char)param_1[0x71] != '\x01') {
      return (bool)0x28;
    }
    *(undefined1 *)(param_1 + 0x71) = 2;
    iVar1 = FUN_00184310(piVar2);
  }
  if (iVar1 == 0) {
    FUN_0019f77c(param_1,1);
  }
  return iVar1 == 0;
}

