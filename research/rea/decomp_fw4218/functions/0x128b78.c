// rea decompile_all
// name: FUN_00128b78
// address: 0x128b78
// body: available
// range: 0x128b78-0x128c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00128b78(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = FUN_001cfb1c();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    do {
      iVar2 = thunk_EXT_FUN_004001ec(param_1 + 0x38,*(undefined4 *)(param_1 + 0x34));
      uVar1 = uVar4;
      if (iVar2 != 0) {
        return uVar4;
      }
      for (; uVar1 < param_4; uVar1 = uVar1 + 1) {
        puVar3 = *(undefined1 **)(param_1 + 0x14) + 1;
        if (*(undefined1 **)(param_1 + 0xc) <= puVar3) {
          puVar3 = *(undefined1 **)(param_1 + 8);
        }
        if (puVar3 == *(undefined1 **)(param_1 + 0x10)) {
          thunk_EXT_FUN_00400100(param_1 + 0x38);
          break;
        }
        **(undefined1 **)(param_1 + 0x14) = *(undefined1 *)(param_3 + uVar1);
        *(undefined1 **)(param_1 + 0x14) = puVar3;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      }
      if (uVar4 < uVar1) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xf50) = 0x400;
      }
      uVar4 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_4;
}

