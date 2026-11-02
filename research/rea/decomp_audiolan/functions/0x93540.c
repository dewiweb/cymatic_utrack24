// rea decompile_all
// name: FUN_00093540
// address: 0x93540
// body: available
// range: 0x93540-0x93707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00093540(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_0006fc90(param_1,s_RavennaWebsiteFS_0009370c,0,0x14,DAT_00093708,DAT_00093708,
                               DAT_00093708,DAT_00093708,DAT_00093708,DAT_00093708);
  iVar2 = DAT_00093720;
  iVar4 = DAT_00093720 + 0xa4;
  iVar3 = DAT_00093720 + 0xc0;
  *piVar1 = DAT_00093720;
  piVar1[0x46] = iVar3;
  piVar1[0x45] = iVar4;
  piVar1[0x47] = iVar2 + 0xdc;
  piVar1[0x48] = iVar2 + 0xf4;
  iVar2 = FUN_000c4db0();
  piVar1[0x49] = iVar2;
  piVar1[0x4a] = param_2;
  piVar1[0x4b] = param_3;
  iVar2 = _DAT_00093724;
  *(undefined1 *)(piVar1 + 0x4c) = 1;
  *(undefined1 *)((int)piVar1 + 0x131) = 0;
  piVar1[0x4d] = iVar2;
  piVar1[0x4e] = iVar2;
  piVar1[0x4f] = iVar2;
  piVar1[0x50] = 0;
  FUN_0017ae30(piVar1 + 0x50,s_I_ResultStrings_00093726 + 2,1);
  piVar1[0x58] = iVar2;
  piVar1[0x5a] = 0;
  piVar1[0x59] = iVar2;
  piVar1[0x5b] = 0;
  piVar1[0x5c] = 0;
  piVar1[0x5d] = 0;
  iVar2 = FUN_00071490(piVar1 + 0x5e,s_DeviceList_00093738);
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  iVar2 = FUN_00071490(iVar2 + 0x54,s_StreamList_00093744);
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  iVar3 = iVar2 + -0x1cc;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  FUN_0017ae30((undefined4 *)(iVar2 + 0x54),s_StatusList_00093750,1);
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  FUN_0017ae30(iVar2 + 0x80,s_GeneralParamsList_0009375c,1);
  *(undefined1 *)(iVar2 + 0xa0) = 1;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  FUN_0017ae30(iVar2 + 0xb0,s_SourcesList_00093770,1);
  *(undefined1 *)(iVar2 + 0xd0) = 1;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  *(undefined4 *)(iVar2 + 0xe0) = 0;
  FUN_0017ae30(iVar2 + 0xe0,s_OutputsList_0009377c,1);
  *(undefined1 *)(iVar2 + 0x100) = 1;
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  *(undefined4 *)(iVar2 + 0x110) = 0;
  FUN_0017ae30(iVar2 + 0x110,s_ResultList_00093788,1);
  *(undefined1 *)(iVar2 + 0x130) = 1;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  *(undefined4 *)(iVar2 + 0x13c) = 0;
  FUN_0008df44(iVar3);
  FUN_000926fc(iVar3);
  FUN_00090ae8(iVar3);
  FUN_0006e024(iVar3);
  return iVar3;
}

