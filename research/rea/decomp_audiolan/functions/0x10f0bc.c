// rea decompile_all
// name: FUN_0010f0bc
// address: 0x10f0bc
// body: available
// range: 0x10f0bc-0x10f13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010f0bc(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_0010f638(param_1 + 4);
  iVar3 = FUN_0010f638(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  uVar2 = DAT_0010f13c;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined2 *)(iVar3 + -0x10) = 1;
  uVar1 = (undefined2)uVar2;
  *(undefined2 *)(iVar3 + -0xc) = uVar1;
  *(undefined2 *)(iVar3 + -10) = uVar1;
  *(undefined4 *)(iVar3 + -8) = 0xffffffff;
  *(undefined2 *)(iVar3 + -4) = uVar1;
  *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x34) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x44) = 0xffffffff;
  *(undefined2 *)(iVar3 + 0x48) = 0;
  *(undefined2 *)(iVar3 + 0x4a) = uVar1;
  return;
}

