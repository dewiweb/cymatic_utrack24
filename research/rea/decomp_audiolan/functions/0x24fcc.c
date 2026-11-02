// rea decompile_all
// name: FUN_00024fcc
// address: 0x24fcc
// body: available
// range: 0x24fcc-0x25031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00024fcc(undefined4 param_1,undefined2 *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_3 + 0x2f);
  uVar2 = 0;
  do {
    *(undefined1 *)((int)param_2 + uVar2 + 2) = *(undefined1 *)(param_3 + uVar2 + 0x35);
    *(undefined1 *)((int)param_2 + uVar2 + 0x10) = *(undefined1 *)(param_3 + uVar2 + 0x14);
    uVar3 = uVar2 + 1 & 0xffff;
    *(undefined1 *)((int)param_2 + uVar2 + 0x1a) = *(undefined1 *)(param_4 + uVar2);
    uVar2 = uVar3;
  } while (uVar3 < 8);
  *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_3 + 0x1c);
  *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)(param_3 + 0x1d);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_4 + 8);
  *(undefined1 *)((int)param_2 + 0x23) = *(undefined1 *)(param_4 + 9);
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + 0x30);
  *(undefined1 *)((int)param_2 + 0xd) = *(undefined1 *)(param_3 + 0x31);
  uVar1 = FUN_000358f6(*(undefined2 *)(param_3 + 0x32));
  param_2[7] = uVar1;
  *(undefined1 *)((int)param_2 + 0xb) = *(undefined1 *)(param_3 + 0x34);
  *param_2 = CONCAT11(*(undefined1 *)(param_3 + 0x3d),*(undefined1 *)(param_3 + 0x3e));
  return;
}

