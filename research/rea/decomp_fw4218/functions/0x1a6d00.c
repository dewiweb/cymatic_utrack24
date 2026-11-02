// rea decompile_all
// name: FUN_001a6d00
// address: 0x1a6d00
// body: available
// range: 0x1a6d00-0x1a6e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a6d00(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *param_1 = DAT_001a6e68;
  param_1[1] = 0;
  param_1[2] = DAT_001a6e6c;
  iVar2 = FUN_001c70d8(param_1 + 3,DAT_001a6e70,0x60,2);
  *(int *)(iVar2 + 0xc0) = iVar2;
  *(int *)(iVar2 + 0xc4) = iVar2 + 0x60;
  iVar5 = iVar2 + -0xc;
  *(undefined1 *)(iVar2 + 200) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = param_3;
  *(int *)(iVar2 + 0xd0) = param_2;
  *(undefined1 *)(iVar2 + 0xd4) = param_4;
  *(undefined4 *)(iVar2 + 0xd8) = param_3;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  uVar4 = DAT_001a6e74;
  *(int *)(iVar2 + 0x1a8) = iVar2 + 0xe8;
  iVar1 = DAT_001a6e78;
  *(undefined4 *)(iVar2 + 0xe0) = uVar4;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  *(int *)(iVar1 + 0xc + param_2 * 4) = iVar5;
  if (*(int *)(iVar1 + 8) == 0) {
    iVar3 = FUN_001f01c4(0x114,1);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00070ef0(iVar3,DAT_001a6e80,1,10,DAT_001a6e7c,DAT_001a6e7c,DAT_001a6e7c,
                           DAT_001a6e7c,DAT_001a6e7c,DAT_001a6e7c);
    }
    *(undefined4 *)(iVar1 + 8) = uVar4;
  }
  FUN_00003c58(iVar2 + 0xe8,0xc0);
  *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) = *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) | 0x1000000;
  *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) = *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) & 0xfdffffff;
  FUN_00013834(iVar5);
  *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) = *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) | 0x2000000;
  FUN_00013834(iVar5);
  *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) = *(uint *)(*(int *)(iVar2 + 0xe0) + 0x10) & 0xfeffffff;
  FUN_0007640c(0x19);
  FUN_000762f4(0x19,DAT_001a6e84,0);
  FUN_000763a8(0x19);
  return iVar5;
}

