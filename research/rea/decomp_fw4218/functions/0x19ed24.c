// rea decompile_all
// name: FUN_0019ed24
// address: 0x19ed24
// body: available
// range: 0x19ed24-0x19edbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019ed24(int param_1,undefined2 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)FUN_0019eb64(param_1,0x14,1);
  if (puVar5 == (undefined2 *)0x0) {
    return;
  }
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar5 + 2);
  param_2[4] = puVar5[4];
  param_2[6] = puVar5[5];
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  uVar3 = puVar5[8];
  uVar4 = puVar5[9];
  *(uint *)(param_2 + 8) = (uint)uVar1 + (uint)uVar2 * 0x10000;
  *(uint *)(param_2 + 10) =
       (uint)uVar3 + (uint)uVar4 * 0x10000 + (uint)CARRY4((uint)uVar1,(uint)uVar2 * 0x10000);
  *(short *)(param_1 + 0xe) = ((short)puVar5 + 0x14) - *(short *)(param_1 + 4);
  return;
}

