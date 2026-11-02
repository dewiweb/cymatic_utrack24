// rea decompile_all
// name: FUN_0002f6e2
// address: 0x2f6e2
// body: available
// range: 0x2f6e2-0x2f733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002f6e2(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 uVar2;
  undefined1 uVar3;
  
  puVar4 = (undefined4 *)FUN_0003b63e(8);
  uVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = param_2;
    *puVar4 = 0;
    uVar1 = (undefined1)((uint)puVar4 >> 8);
    uVar2 = (undefined1)((uint)puVar4 >> 0x10);
    uVar3 = (undefined1)((uint)puVar4 >> 0x18);
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      *param_1 = (char)puVar4;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    else {
      **(undefined4 **)(param_1 + 4) = puVar4;
    }
    param_1[4] = (char)puVar4;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar5 = 1;
  }
  return uVar5;
}

