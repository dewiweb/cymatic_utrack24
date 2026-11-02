// rea decompile_all
// name: FUN_000bda1c
// address: 0xbda1c
// body: available
// range: 0xbda1c-0xbdaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bda1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00048f94(*(undefined4 *)(param_1 + 0x114),DAT_000bdb00,param_2);
  uVar1 = DAT_000bdb04;
  if (iVar2 != 0) {
    FUN_001a0700(DAT_000bdb04);
    *(undefined4 *)(param_1 + 0x150) = param_2;
    FUN_000be614(param_1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1ec) + 8);
    while (iVar2 != *(int *)(param_1 + 0x1ec)) {
      *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x14) = 0;
      iVar3 = *(int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 0xc) == 0) {
        for (iVar3 = *(int *)(iVar2 + 4); iVar2 == *(int *)(iVar3 + 0xc);
            iVar3 = *(int *)(iVar3 + 4)) {
          iVar2 = iVar3;
        }
        if (*(int *)(iVar2 + 0xc) != iVar3) {
          iVar2 = iVar3;
        }
      }
      else {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 8);
        } while (*(int *)(iVar2 + 8) != 0);
      }
    }
    FUN_001a0d18(uVar1);
    return 1;
  }
  FUN_000028a4(DAT_000bdb00 + -0x34);
  return 0;
}

