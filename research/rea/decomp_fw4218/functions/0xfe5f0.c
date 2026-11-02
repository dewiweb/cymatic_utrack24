// rea decompile_all
// name: FUN_000fe5f0
// address: 0xfe5f0
// body: available
// range: 0xfe5f0-0xfe693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fe5f0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iStack_10;
  
  if (*(byte *)(param_1 + 0x256) == param_2) {
    return;
  }
  iStack_10 = param_4;
  if ((param_2 == 0x10 || param_2 == 0x18) || (iVar1 = DAT_000fe694, param_2 == 0x20)) {
    iVar1 = FUN_0004ffa4(*(undefined4 *)(param_1 + 0x114),DAT_000fe698,param_2);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x256) = (char)param_2;
      goto LAB_000fe624;
    }
    iVar1 = DAT_000fe698 + -0x1dc;
  }
  FUN_00002898(iVar1);
LAB_000fe624:
  iStack_10 = *(int *)(*(int *)(param_1 + 0x274) + 8);
  if (iStack_10 != *(int *)(param_1 + 0x274)) {
    do {
      (**(code **)(**(int **)(iStack_10 + 0x10) + 0x20))
                (*(int **)(iStack_10 + 0x10),*(undefined1 *)(param_1 + 0x256));
      FUN_00209818(&iStack_10);
    } while (iStack_10 != *(int *)(param_1 + 0x274));
    return;
  }
  return;
}

