// rea decompile_all
// name: FUN_00137f54
// address: 0x137f54
// body: available
// range: 0x137f54-0x137ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00137f54(int *param_1,int *param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = _DAT_00137ff8;
  piVar2 = DAT_00137ff4;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_00137ff4;
    param_1[0x3a] = iVar3;
    param_2 = piVar2;
  }
  piVar2 = (int *)FUN_000fbb78(param_1,DAT_00138018,s_u__CTaskFilteredDeviceSearch_00137ff9 + 3);
  iVar3 = *param_2;
  *piVar2 = iVar3;
  iVar1 = DAT_00138020;
  *(int *)((int)piVar2 + *(int *)(iVar3 + -0xc)) = param_2[1];
  iVar3 = DAT_0013801c;
  piVar2[0x18] = iVar1;
  piVar2[0x19] = param_3 + 0x864;
  piVar2[0x1a] = iVar3;
  piVar2[0x1b] = 0;
  FUN_00134be8(param_3 + 0x864,piVar2 + 0x18);
  piVar2[0x18] = DAT_00138024;
  piVar2[0x1c] = 0;
  piVar2[0x1d] = param_3;
  iVar3 = FUN_000f584c(piVar2 + 0x1e);
  *(undefined1 *)(iVar3 + 0x6c) = param_4;
  *(undefined1 *)(iVar3 + 0x6d) = 0;
  return iVar3 + -0x78;
}

