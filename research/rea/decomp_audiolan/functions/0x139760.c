// rea decompile_all
// name: FUN_00139760
// address: 0x139760
// body: available
// range: 0x139760-0x1397bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00139760(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_001397bc;
  iVar3 = *DAT_001397bc;
  param_1[0x25] = DAT_001397c0;
  *param_1 = iVar3;
  piVar2 = (int *)FUN_00120528(param_1,&DAT_00002080,DAT_001397c4);
  iVar3 = *piVar1;
  *piVar2 = iVar3;
  *(int *)((int)piVar2 + *(int *)(iVar3 + -0xc)) = piVar1[1];
  iVar3 = FUN_0010f638(piVar2 + 0x19);
  iVar3 = FUN_0010e7e0(iVar3 + 0x10);
  iVar3 = FUN_00146670(iVar3 + 0xc,0x40);
  return iVar3 + -0x80;
}

