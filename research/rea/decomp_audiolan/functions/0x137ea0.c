// rea decompile_all
// name: FUN_00137ea0
// address: 0x137ea0
// body: available
// range: 0x137ea0-0x137f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00137ea0(int *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = DAT_00137f38;
  iVar4 = *DAT_00137f38;
  param_1[0x3a] = DAT_00137f3c;
  *param_1 = iVar4;
  piVar3 = (int *)FUN_000fbb78(param_1,DAT_00137f44,DAT_00137f40);
  iVar4 = *piVar1;
  *piVar3 = iVar4;
  iVar2 = DAT_00137f4c;
  *(int *)((int)piVar3 + *(int *)(iVar4 + -0xc)) = piVar1[1];
  iVar4 = DAT_00137f48;
  piVar3[0x18] = iVar2;
  piVar3[0x19] = param_2 + 0x864;
  piVar3[0x1a] = iVar4;
  piVar3[0x1b] = 0;
  FUN_00134be8(param_2 + 0x864,piVar3 + 0x18);
  piVar3[0x18] = DAT_00137f50;
  piVar3[0x1c] = 0;
  piVar3[0x1d] = param_2;
  iVar4 = FUN_000f584c(piVar3 + 0x1e);
  *(undefined1 *)(iVar4 + 0x6c) = param_3;
  *(undefined1 *)(iVar4 + 0x6d) = 0;
  return iVar4 + -0x78;
}

