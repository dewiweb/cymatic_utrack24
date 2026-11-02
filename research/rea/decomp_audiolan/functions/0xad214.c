// rea decompile_all
// name: FUN_000ad214
// address: 0xad214
// body: available
// range: 0xad214-0xad2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ad214(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = DAT_000ad2e8;
  if (*DAT_000ad2e8 == 0) {
    puVar3 = (undefined4 *)FUN_0016d7a4(0x20,DAT_000ad2ec);
    uVar2 = DAT_000ad2f0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[2] = 0;
      puVar3[5] = 0;
      *puVar3 = uVar2;
      puVar3[1] = param_1;
      puVar4 = (undefined4 *)FUN_0016d774(param_1,DAT_000ad2ec);
      puVar3[2] = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        FUN_000028a4(DAT_000ad2f4);
      }
      else {
        iVar7 = puVar3[1];
        puVar5 = puVar4;
        if (((uint)puVar4 & 3) != 0) {
          puVar5 = (undefined4 *)((int)puVar4 + 3U & 0xfffffffc);
          iVar7 = iVar7 - ((int)puVar5 - (int)puVar4);
        }
        uVar6 = (int)puVar5 + iVar7 + -8 & 0xfffffffc;
        puVar3[5] = uVar6;
        puVar3[3] = puVar5;
        puVar3[4] = 0;
        *(undefined4 *)(uVar6 + 4) = 0;
        *(undefined4 *)puVar3[5] = 0;
        puVar5[1] = uVar6 - (int)puVar5;
        *puVar5 = puVar3[5];
        puVar3[7] = uVar6 - (int)puVar5;
        puVar3[6] = puVar5[1];
      }
    }
    *piVar1 = (int)puVar3;
    return;
  }
  return;
}

