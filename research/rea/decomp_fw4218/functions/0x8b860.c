// rea decompile_all
// name: FUN_0008b860
// address: 0x8b860
// body: available
// range: 0x8b860-0x8b927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0008b860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined1 auStack_24 [4];
  
  uVar3 = 0;
  FUN_00172844(auStack_24,*(undefined4 *)(param_1 + 0x6c));
  if ((*(char *)(param_1 + 0x1c) == '\x02') && (*(char *)(param_1 + 0x1d) == '\0')) {
    FUN_001726d4(auStack_30,param_1 + 0x5c);
    local_2c = FUN_001b9eb8(param_1 + 0x20);
    piVar2 = *(int **)(param_1 + 0x68);
    iVar1 = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x1ec)) + 0x1a4))
                      ((int)piVar2 + *(int *)(*piVar2 + -0x1ec),auStack_30,DAT_0008b930,DAT_0008b92c
                       ,param_2,param_3,param_4,param_5,DAT_0008b928);
    if (iVar1 != 0) {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0xfffffff8;
  }
  FUN_0017286c(auStack_24);
  return uVar3;
}

