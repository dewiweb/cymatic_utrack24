// rea decompile_all
// name: FUN_001507e8
// address: 0x1507e8
// body: available
// range: 0x1507e8-0x15087f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001507e8(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x4c) = 0x10c0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  piVar1 = (int *)FUN_001c6b14(0x28,DAT_00150880);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[3] = 0;
    iVar2 = DAT_00150888;
    piVar1[4] = DAT_00150884;
    *piVar1 = iVar2;
    piVar1[1] = iVar2 + 0x1c;
    piVar1[6] = param_3;
    piVar1[7] = param_4;
    piVar1[8] = param_5;
    iVar2 = FUN_0014d3e4(param_1,piVar1);
    if (iVar2 == 0) {
      return piVar1;
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return (int *)0x0;
}

