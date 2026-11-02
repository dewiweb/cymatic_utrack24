// rea decompile_all
// name: FUN_000d6c04
// address: 0xd6c04
// body: available
// range: 0xd6c04-0xd6ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000d6c04(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = DAT_000d6cd0;
  piVar2 = (int *)FUN_0006fc90(param_1,DAT_000d6cd4,0,0x14,DAT_000d6cd0,DAT_000d6cd0,DAT_000d6cd0,
                               DAT_000d6cd0,DAT_000d6cd0,DAT_000d6cd0);
  iVar3 = DAT_000d6cd8 + 0x3c;
  *piVar2 = DAT_000d6cd8;
  piVar2[0x46] = 0;
  piVar2[0x45] = iVar3;
  piVar2[0x47] = 0;
  piVar2[0x48] = 0;
  piVar2[0x49] = 0;
  piVar2[0x4a] = 0;
  piVar2[0x4b] = 0;
  piVar2[0x4c] = 0;
  piVar2[0x4d] = 0;
  piVar2[0x4e] = 0;
  piVar2[0x4f] = 0;
  piVar2[0x50] = 0;
  piVar2[0x51] = 0;
  piVar2[0x52] = 0;
  piVar2[0x53] = 0;
  piVar2[0x54] = 0;
  *(undefined1 *)((int)piVar2 + 0x156) = 0;
  piVar2[0x56] = 0;
  piVar2[0x57] = 0;
  iVar3 = FUN_0006d7e8(piVar2 + 0x59,piVar2 + 0x45,DAT_000d6cdc,uVar1,uVar1,uVar1,uVar1,uVar1);
  FUN_0006e024(iVar3 + -0x164);
  return iVar3 + -0x164;
}

