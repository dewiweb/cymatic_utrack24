// rea decompile_all
// name: FUN_0018996c
// address: 0x18996c
// body: available
// range: 0x18996c-0x189a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018996c(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iStack_28;
  int iStack_24;
  short sStack_20;
  
  piVar1 = (int *)FUN_0018db88(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    do {
      if (((-1 < piVar1[0x1a] << 7) &&
          ((**(code **)(*piVar1 + 0x5c))(&iStack_28,piVar1),
          iStack_24 == param_2[1] && iStack_28 == *param_2)) && (sStack_20 == (short)param_2[2])) {
        (**(code **)(*piVar1 + 0x134))(piVar1,param_3);
      }
      piVar1 = (int *)FUN_0018d8c8(param_1 + 0x80,piVar1);
    } while (piVar1 != (int *)0x0);
    return;
  }
  return;
}

