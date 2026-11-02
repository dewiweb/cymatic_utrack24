// rea decompile_all
// name: FUN_00160458
// address: 0x160458
// body: available
// range: 0x160458-0x16050f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00160458(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_001726d4(param_1,param_4);
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(iVar2 + 0x10) = param_5;
  iVar2 = FUN_001726d4(iVar2 + 0x14,param_3);
  iVar2 = FUN_00172710(iVar2 + 0xc);
  iVar2 = FUN_00171e90(iVar2 + 0x2c);
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined2 *)(iVar2 + 0xc) = 1;
  *(int *)(DAT_00160510 + 4) = *(int *)(DAT_00160510 + 4) + 1;
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  *(ushort *)(iVar2 + 0xc) = uVar1 | 1;
  iVar3 = FUN_0015ce1c(0xb);
  *(int *)(iVar2 + 8) = param_7 + iVar3 * 0x32;
  return iVar2 + -0x4c;
}

