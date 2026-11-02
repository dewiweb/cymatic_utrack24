// rea decompile_all
// name: FUN_00088bc0
// address: 0x88bc0
// body: available
// range: 0x88bc0-0x88bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00088bc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  puVar1 = (undefined4 *)FUN_000d38f0(param_1 + 8);
  puVar1[-2] = DAT_00088cdc;
  *puVar1 = DAT_00088ce0;
  iVar2 = FUN_000e8820(puVar1 + 5);
  piVar6 = (int *)(iVar2 + 0x854);
  *piVar6 = 0;
  *(undefined4 *)(iVar2 + 0x858) = 0;
  *(undefined4 *)(iVar2 + 0x85c) = 0;
  *(undefined4 *)(iVar2 + 0x860) = 0;
  *(undefined4 *)(iVar2 + 0x864) = 0;
  *(undefined4 *)(iVar2 + 0x868) = 0;
  piVar3 = (int *)FUN_00173860(0xc,0);
  iVar4 = FUN_00173860(0xc,0);
  piVar3[2] = iVar4;
  iVar4 = *piVar6;
  piVar3[1] = 1;
  *piVar3 = iVar4;
  *piVar6 = (int)piVar3;
  iVar4 = piVar3[2];
  *(int *)(iVar2 + 0x85c) = iVar4;
  *(int *)(iVar2 + 0x860) = iVar4 + 0xc;
  iVar4 = *(int *)(iVar2 + 0x85c);
  *(int *)(iVar2 + 0x85c) = iVar4 + 0xc;
  *(int *)(iVar2 + 0x864) = iVar4;
  *(int *)iVar4 = iVar4;
  iVar4 = DAT_00088ce4;
  *(int *)(*(int *)(iVar2 + 0x864) + 4) = *(int *)(iVar2 + 0x864);
  puVar1 = (undefined4 *)(iVar2 + -0x1c + iVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  iVar2 = DAT_00088ce8;
  puVar1 = (undefined4 *)((int)puVar1 + (DAT_00088ce8 - iVar4));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  iVar4 = FUN_00233946((int)puVar1 + (0x8a0 - iVar2),auStack_38,auStack_34);
  iVar4 = FUN_00233946(iVar4 + -0x8a0 + DAT_00088cec,auStack_30,auStack_2c);
  iVar4 = FUN_00130620(iVar4 + DAT_00088cf0 + DAT_00088cf4);
  iVar5 = FUN_00060318(iVar4 + DAT_00088cf8 + DAT_00088cfc);
  iVar2 = DAT_00088d08;
  iVar4 = DAT_00088d04;
  puVar1 = (undefined4 *)(iVar5 + DAT_00088d00 + DAT_00088d04);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)((int)puVar1 + (0xa48 - iVar4)) = 0;
  *(undefined1 *)((int)puVar1 + (0xa4a - iVar4)) = 0;
  iVar4 = FUN_002339a2((int)puVar1 + (iVar2 - iVar4),auStack_28,auStack_24);
  iVar4 = FUN_002339a2(iVar4 + DAT_00088d0c + DAT_00088d10,auStack_20,auStack_1c);
  iVar4 = iVar4 + DAT_00088d14;
  *(undefined1 *)(iVar4 + 0xa84) = 0;
  *(undefined1 *)(iVar4 + 0xa85) = 0;
  iVar4 = FUN_0007983e(iVar4 + DAT_00088d18);
  return iVar4 + DAT_00088d1c;
}

