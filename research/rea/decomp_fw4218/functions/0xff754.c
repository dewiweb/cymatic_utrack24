// rea decompile_all
// name: FUN_000ff754
// address: 0xff754
// body: available
// range: 0xff754-0xff837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ff754(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_0004ffa4(*(undefined4 *)(param_1 + 0x114),DAT_000ff838,param_2);
  uVar2 = DAT_000ff83c;
  if (iVar3 != 0) {
    FUN_001f00bc();
    *(undefined4 *)(param_1 + 0x150) = param_2;
    FUN_000ffef8(param_1);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1ec) + 8);
    while (iVar3 != *(int *)(param_1 + 0x1ec)) {
      *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x14) = 0;
      iVar4 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        do {
          iVar4 = iVar3;
          iVar5 = *(int *)(iVar4 + 4);
          iVar3 = iVar5;
        } while (iVar4 == *(int *)(iVar5 + 0xc));
        iVar3 = iVar4;
        if (*(int *)(iVar4 + 0xc) != iVar5) {
          iVar3 = iVar5;
        }
      }
      else {
        do {
          piVar1 = (int *)(iVar4 + 8);
          iVar3 = iVar4;
          iVar4 = *piVar1;
        } while (*piVar1 != 0);
      }
    }
    FUN_001f06d4(uVar2);
    return 1;
  }
  FUN_00002898(DAT_000ff838 + -0x34);
  return 0;
}

