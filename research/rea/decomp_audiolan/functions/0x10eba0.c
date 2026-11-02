// rea decompile_all
// name: FUN_0010eba0
// address: 0x10eba0
// body: available
// range: 0x10eba0-0x10ec63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0010eba0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = DAT_0010ec64;
  iVar1 = FUN_0010e7e0(param_1 + 3);
  if ((*(char *)(iVar1 + 8) == '\x02') && (*(int *)(iVar1 + -8) != 0)) {
    FUN_0016d744();
  }
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  FUN_0010e500(iVar1);
  *(undefined1 *)(iVar1 + 8) = 0;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(iVar1 + 8) = 1;
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(param_2 + 8);
    FUN_0010e498(iVar1,param_2 + 0xc);
  }
  else if (*(char *)(param_2 + 0x14) == '\x02') {
    *(undefined1 *)(iVar1 + 8) = 2;
    iVar2 = FUN_0016d774(*(undefined4 *)(param_2 + 8),DAT_0010ec68);
    *(int *)(iVar1 + -8) = iVar2;
    if (iVar2 != 0) {
      FUN_00003628(iVar2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(param_2 + 8);
      FUN_0010e498(iVar1,param_2 + 0xc);
    }
  }
  return iVar1 + -0xc;
}

