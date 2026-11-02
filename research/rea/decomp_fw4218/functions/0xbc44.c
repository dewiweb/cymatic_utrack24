// rea decompile_all
// name: FUN_0000bc44
// address: 0xbc44
// body: available
// range: 0xbc44-0xbd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0000bc44(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = DAT_0000bd64;
  piVar2 = (int *)FUN_0000a678(param_1 + 1);
  iVar1 = _DAT_0000bd68;
  iVar4 = _DAT_0000bd68 + 0x1d4;
  piVar2[0x15] = _DAT_0000bd68 + 0x204;
  piVar2[-1] = iVar1;
  *piVar2 = iVar4;
  *(undefined1 *)(piVar2 + 0x16) = 0;
  piVar2[0x17] = -1;
  *(undefined1 *)(piVar2 + 0x18) = 1;
  piVar2[0x19] = 0;
  piVar2[0x1b] = 0xff;
  piVar2[0x1a] = 0;
  *(undefined1 *)(piVar2 + 0x1c) = 0;
  *(undefined1 *)((int)piVar2 + 0x71) = 0;
  *(undefined2 *)(piVar2 + 0xa0) = 0;
  *(undefined1 *)((int)piVar2 + 0x282) = 0xff;
  *(undefined1 *)(piVar2 + 0xa6) = 1;
  *(undefined1 *)((int)piVar2 + 0x299) = 0;
  piVar2[0xa7] = 0;
  piVar2[0xa8] = 0;
  piVar2[0xa9] = 0;
  piVar2[0xaa] = 0;
  piVar2[0xab] = 0;
  piVar2[0xac] = 0;
  piVar2[0xad] = 0;
  piVar2[0xae] = -1;
  piVar2[0xaf] = 0;
  piVar2[0xb1] = -1;
  piVar2[0xb0] = 0;
  piVar2[0xb2] = 0;
  piVar2[0xb3] = 0;
  piVar2[0xb4] = 0;
  piVar2[0xb5] = 0;
  *(undefined1 *)(piVar2 + 0xb6) = 1;
  *(undefined1 *)((int)piVar2 + 0x2d9) = 0;
  *(undefined1 *)((int)piVar2 + 0x2da) = 1;
  puVar3 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    FUN_001ce8fc(puVar3,s___InputDataStrmRun_0000bd6a + 2,0,0);
    thunk_EXT_FUN_00400100(puVar3);
  }
  piVar2[0xb7] = (int)puVar3;
  *(undefined2 *)(piVar2 + 0xb8) = 0;
  piVar2[0xb9] = 0;
  piVar2[0xba] = 0;
  *(undefined1 *)(piVar2 + 0xbb) = 0;
  *(undefined1 *)((int)piVar2 + 0x2ed) = 1;
  piVar2[0xa1] = 0;
  piVar2[0xa2] = 0;
  piVar2[0xa3] = 0;
  piVar2[0xa4] = 0;
  piVar2[0xa5] = 0;
  return piVar2 + -1;
}

