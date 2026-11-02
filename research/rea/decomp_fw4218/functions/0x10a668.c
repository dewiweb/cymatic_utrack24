// rea decompile_all
// name: FUN_0010a668
// address: 0x10a668
// body: available
// range: 0x10a668-0x10a783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010a668(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xa7) = 1;
  *DAT_0010a784 = 0;
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  iVar2 = FUN_0006d818(uVar1);
  if (iVar2 == 1) {
    iVar3 = FUN_001b2750(uVar1);
    if (iVar3 == 3) {
      FUN_0006d908(uVar1,4);
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      iVar3 = FUN_000bc654(param_1 + 0x14,5);
      if (iVar3 == 0) {
        *DAT_0010a784 = 0x14;
        (**(code **)(**(int **)(param_1 + 0x98) + 0x24))(*(int **)(param_1 + 0x98),0x22,0,0xfa,0);
      }
      else {
        FUN_00084574(param_1 + 0x14,1);
        FUN_001a48f0(param_1,0x46,0);
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
    *DAT_0010a788 = 0;
    (**(code **)(**(int **)(param_1 + 0x98) + 0x24))(*(int **)(param_1 + 0x98),0x25,0,500,0);
  }
  if (iVar2 == 2) {
    FUN_001a48f0(param_1,0x40,0);
  }
  return;
}

