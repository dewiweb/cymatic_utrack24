// rea decompile_all
// name: FUN_000f6404
// address: 0xf6404
// body: available
// range: 0xf6404-0xf6557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f6404(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  if (0x2d < param_3 - *param_2) {
    FUN_000f2acc(param_1);
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)*param_2;
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    uVar5 = (uint)*(ushort *)(iVar4 + 2);
    *param_2 = iVar4 + 4;
    uVar2 = *(ushort *)(iVar4 + 4);
    *param_2 = iVar4 + 6;
    uVar3 = *(ushort *)(iVar4 + 6);
    uVar1 = (uint)uVar2 * 0x10000;
    *param_2 = iVar4 + 8;
    uVar2 = *(ushort *)(iVar4 + 8);
    *param_2 = iVar4 + 10;
    *(uint *)(param_1 + 0x34) = (uint)uVar3 + (uint)uVar2 * 0x10000 + (uint)CARRY4(uVar5,uVar1);
    *(uint *)(param_1 + 0x30) = uVar5 + uVar1;
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)*param_2;
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(iVar4 + 2);
    iVar4 = *param_2;
    *param_2 = iVar4 + 2;
    *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(iVar4 + 2);
    *param_2 = *param_2 + 2;
    return 1;
  }
  return 0;
}

