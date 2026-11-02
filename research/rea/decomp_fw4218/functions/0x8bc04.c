// rea decompile_all
// name: FUN_0008bc04
// address: 0x8bc04
// body: available
// range: 0x8bc04-0x8bcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0008bc04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined1 auStack_28 [4];
  
  uVar5 = 0;
  FUN_00172844(auStack_28,*(undefined4 *)(param_1 + 0x6c));
  if ((*(char *)(param_1 + 0x1c) == '\x01') || (*(char *)(param_1 + 0x1d) == '\0')) {
    FUN_001726d4(auStack_34,param_1 + 0x5c);
    for (uVar4 = 0; uVar2 = FUN_0022e4a0(param_1 + 0x50), uVar4 < uVar2; uVar4 = uVar4 + 1) {
      FUN_0023cff0(param_1 + 0x50,uVar4);
      local_30 = FUN_001b9eb8();
      piVar3 = *(int **)(param_1 + 0x68);
      iVar1 = (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x1ec)) + 0x1a4))
                        ((int)piVar3 + *(int *)(*piVar3 + -0x1ec),auStack_34,DAT_0008bd00,
                         DAT_0008bcfc,param_2,param_3,param_4,param_5,DAT_0008bcf8);
      if (iVar1 != 0) {
        uVar5 = 0xffffffff;
        break;
      }
    }
  }
  else {
    uVar5 = 0xfffffff9;
  }
  FUN_0017286c(auStack_28);
  return uVar5;
}

