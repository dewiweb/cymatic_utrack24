// rea decompile_all
// name: FUN_000fe00c
// address: 0xfe00c
// body: available
// range: 0xfe00c-0xfe0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fe00c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar1 = FUN_000ea134(param_2,param_1);
  if (iVar1 < 0) {
    FUN_000fd4c4(param_1,s_Previous_000fe0f4,param_1 + 0x1c,0x10,param_2,1);
    FUN_000fd4c4(param_1,s_Bottom_000fe100,param_1 + 0x34,4,param_2,0xffffffff);
  }
  else if ((0 < iVar1) &&
          (iVar3 = *(int *)(param_1 + 0x28),
          FUN_000fd4c4(param_1,&DAT_000fe108,param_1 + 0x28,0x10,param_2,0xffffffff),
          *(int *)(param_1 + 0x28) != iVar3)) {
    uVar2 = 1;
  }
  if ((*(char *)(param_1 + 0x59) != '\0') &&
     (iVar1 = FUN_000ea134(param_2,param_1 + 0x4c), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x58) = 5;
  }
  if (0 < iVar1) {
    FUN_000ea348(param_1 + 0x4c,param_2);
    *(undefined1 *)(param_1 + 0x59) = 1;
    *(undefined1 *)(param_1 + 0x58) = 5;
  }
  return uVar2;
}

