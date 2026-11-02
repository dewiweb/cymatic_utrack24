// rea decompile_all
// name: FUN_00190438
// address: 0x190438
// body: available
// range: 0x190438-0x1904eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00190438(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  *param_3 = 0x20;
  iVar1 = FUN_0014d6a8(param_2,0x20,2,(*(byte *)(param_1 + 0x6c) & 3) >> 1,
                       *(byte *)(param_1 + 0x6c) & 1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = *(undefined2 **)(iVar1 + 0x18);
  *puVar2 = *(undefined2 *)(param_1 + 0x6e);
  puVar2[1] = *(undefined2 *)(param_1 + 0x70);
  puVar2[2] = *(undefined2 *)(param_1 + 0x72);
  puVar2[3] = *(undefined2 *)(param_1 + 0x74);
  puVar2[4] = *(undefined2 *)(param_1 + 0x76);
  puVar2[5] = *(undefined2 *)(param_1 + 0x78);
  puVar2[6] = *(undefined2 *)(param_1 + 0x7a);
  puVar2[7] = *(undefined2 *)(param_1 + 0x7c);
  puVar2[8] = *(undefined2 *)(param_1 + 0x7e);
  puVar2[9] = *(undefined2 *)(param_1 + 0x80);
  puVar2[10] = *(undefined2 *)(param_1 + 0x82);
  puVar2[0xb] = *(undefined2 *)(param_1 + 0x84);
  FUN_000039e0(puVar2 + 0xc,param_1 + 0x86,8);
  return 1;
}

