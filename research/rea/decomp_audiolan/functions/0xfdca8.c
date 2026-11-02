// rea decompile_all
// name: FUN_000fdca8
// address: 0xfdca8
// body: available
// range: 0xfdca8-0xfddcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fdca8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  FUN_000ea2e0(auStack_30);
  FUN_000ea2e0(auStack_24);
  iVar3 = *(int *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    FUN_000ea348(auStack_30,*(int *)(param_1 + 0x28) + 0xc);
  }
  FUN_000fd3dc(param_1,DAT_000fddd0,param_1 + 0x1c);
  FUN_000fd3dc(param_1,DAT_000fddd4,param_1 + 0x28);
  FUN_000fd3dc(param_1,DAT_000fddd8,param_1 + 0x34);
  if ((*(char *)(param_1 + 0x59) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x58) + -1, *(char *)(param_1 + 0x58) = cVar1, cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0x59) = 0;
    FUN_000ea274(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (((iVar3 == 0) || (*(int *)(param_1 + 0x24) != 0)) &&
     ((uVar2 == 0 || (*(uint *)(param_1 + 0x30) != 0)))) {
    if (uVar2 <= *(uint *)(param_1 + 0x30)) goto LAB_000fddb8;
    FUN_000ea348(auStack_24,*(int *)(param_1 + 0x28) + 0xc);
    iVar3 = FUN_000ea134(auStack_30,auStack_24);
    if (iVar3 == 0) goto LAB_000fddb8;
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(*(int **)(param_1 + 0x18),0,1);
LAB_000fddb8:
  FUN_000ea314(auStack_24);
  FUN_000ea314(auStack_30);
  return;
}

