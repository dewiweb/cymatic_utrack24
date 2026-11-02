// rea decompile_all
// name: FUN_001aa4dc
// address: 0x1aa4dc
// body: available
// range: 0x1aa4dc-0x1aa5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001aa4dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00030ace();
  FUN_000358a2(param_1 + 0x1c,0x30,10);
  uVar1 = DAT_001aa5ac;
  iVar2 = FUN_00030b90(DAT_001aa5ac);
  if (iVar2 != 0) {
    FUN_00029e6c(uVar1);
    FUN_00029eac(6,DAT_001aa5b0);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00034edc();
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00030aea(param_1,*(int *)(param_1 + 0xa4) + 0x218);
      FUN_0003589a(param_1 + 0x1c,*(int *)(param_1 + 0xa4) + 0x250,10);
    }
  }
  iVar2 = FUN_00030b90(uVar1);
  if (iVar2 != 0) {
    FUN_00029e6c(uVar1);
    FUN_00029eac(6,DAT_001aa5b4);
  }
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    FUN_00025560(param_1 + 0xa0);
    iVar2 = FUN_00030b90(uVar1);
    if (iVar2 != 0) {
      FUN_00029e6c(uVar1);
      FUN_00029eac(6,DAT_001aa5b8);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 == 0) {
      return;
    }
    if ((*(int *)(iVar2 + 0x21c) == 0) || (*(int *)(iVar2 + 0x224) == 0)) goto LAB_001aa586;
    FUN_00025224();
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    return;
  }
LAB_001aa586:
  FUN_0003526c(*(undefined4 *)(param_1 + 0xa4));
  return;
}

