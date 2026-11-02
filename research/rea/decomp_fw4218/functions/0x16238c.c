// rea decompile_all
// name: FUN_0016238c
// address: 0x16238c
// body: available
// range: 0x16238c-0x16246b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0016238c(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_0016731c();
  iVar3 = _DAT_0016246c + 0x30;
  *piVar2 = _DAT_0016246c;
  piVar2[0x2d] = iVar3;
  iVar3 = FUN_0015d64c(piVar2 + 0x2e);
  *(undefined4 *)(iVar3 + 0x118) = 0;
  *(undefined4 *)(iVar3 + 0x114) = 0;
  *(undefined4 *)(iVar3 + 0x11c) = 0;
  uVar1 = _DAT_00162484;
  *(char **)(iVar3 + 0x148) = s_E__CLPToCHAIMsgFIFOMtx_0016246d + 3;
  *(undefined4 *)(iVar3 + 0x120) = uVar1;
  *(undefined4 *)(iVar3 + 0x124) = 0;
  *(undefined4 *)(iVar3 + 0x128) = 0;
  *(undefined4 *)(iVar3 + 300) = 0;
  *(undefined4 *)(iVar3 + 0x130) = 0;
  *(undefined4 *)(iVar3 + 0x134) = 0;
  *(undefined4 *)(iVar3 + 0x138) = 0;
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  *(undefined4 *)(iVar3 + 0x140) = 0;
  *(undefined4 *)(iVar3 + 0x144) = 0;
  FUN_001f0168(iVar3 + 0x124);
  uVar1 = _DAT_0016249c;
  *(char **)(iVar3 + 0x16c) = s_D__CLPToCHAIMsgFIFOEvt_00162485 + 3;
  *(undefined4 *)(iVar3 + 0x14c) = uVar1;
  *(undefined4 *)(iVar3 + 0x150) = 0;
  *(undefined4 *)(iVar3 + 0x154) = 0;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  *(undefined4 *)(iVar3 + 0x15c) = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0;
  *(undefined4 *)(iVar3 + 0x164) = 0;
  *(undefined4 *)(iVar3 + 0x168) = 0;
  FUN_001ce8fc(iVar3 + 0x150,s_D__CLPToCHAIMsgFIFOEvt_00162485 + 3,0,1);
  *(undefined1 *)(iVar3 + -8) = 3;
  FUN_00171828(iVar3 + -0x28,s_D__CLP_message_link_0016249d + 3);
  *(undefined4 *)(iVar3 + 0x17c) = 0;
  *(undefined4 *)(iVar3 + 0x180) = 0;
  *(undefined4 *)(iVar3 + 0x184) = 0;
  *(undefined1 *)(iVar3 + 0x188) = 0;
  *(undefined4 *)(iVar3 + 0x170) = 0;
  *(undefined4 *)(iVar3 + 0x174) = 0;
  *(undefined1 *)(iVar3 + 0x189) = 1;
  return iVar3 + -0xb8;
}

