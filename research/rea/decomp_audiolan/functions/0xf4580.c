// rea decompile_all
// name: FUN_000f4580
// address: 0xf4580
// body: available
// range: 0xf4580-0xf4657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000f4580(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_000f3320();
  uVar1 = FUN_0016d774(0x14,DAT_000f4658);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  iVar2 = FUN_0016d774(0x28,DAT_000f4658);
  *(int *)(param_1 + 0xdc) = iVar2;
  if (*(undefined2 **)(param_1 + 0xd8) != (undefined2 *)0x0) {
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0xd4) = 10;
      *(undefined2 *)(param_1 + 0xd2) = 10;
      **(undefined2 **)(param_1 + 0xd8) = param_4;
      iVar3 = FUN_0016d7a4(8,DAT_000f4658);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = FUN_0010e728(iVar3,param_5);
      }
      **(int **)(param_1 + 0xdc) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x24) = DAT_000f465c;
      *(undefined2 *)(param_1 + 0xc0) = param_2;
      *(undefined2 *)(param_1 + 0xc2) = param_3;
      *(undefined2 *)(param_1 + 0xce) = 1;
      *(undefined2 *)(param_1 + 0xcc) = 1;
      *(undefined1 *)(param_1 + 0x110) = 1;
      return 1;
    }
    FUN_0016d758();
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_0016d758();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  return 0;
}

