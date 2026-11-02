// rea decompile_all
// name: FUN_0000e888
// address: 0xe888
// body: available
// range: 0xe888-0xe9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0000e888(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_0000e9cc;
  piVar2 = (int *)FUN_0000a678(param_1 + 1);
  iVar1 = DAT_0000e9d0;
  piVar2[0x15] = DAT_0000e9d0 + 0x204;
  *piVar2 = iVar1 + 0x1d4;
  piVar2[-1] = iVar1;
  iVar1 = _DAT_0000e9d4;
  *(undefined1 *)(piVar2 + 0x16) = 0;
  piVar2[0x17] = iVar1;
  piVar2[0x18] = 0;
  *(undefined2 *)(piVar2 + 0x19) = 0;
  *(undefined2 *)((int)piVar2 + 0x2e6) = 0;
  *(undefined2 *)(piVar2 + 0xba) = 0;
  *(undefined2 *)((int)piVar2 + 0x2ea) = 0;
  *(undefined2 *)(piVar2 + 0xbb) = 0;
  piVar2[0xbf] = 0;
  *(undefined2 *)(piVar2 + 0xc0) = 0;
  *(undefined1 *)((int)piVar2 + 0x302) = 2;
  *(undefined1 *)((int)piVar2 + 0x303) = 1;
  piVar2[0xc1] = 0;
  piVar2[0xc2] = 0;
  piVar2[0xc3] = 0;
  piVar2[0xc4] = 0;
  *(undefined1 *)(piVar2 + 0xc5) = 0;
  *(undefined1 *)((int)piVar2 + 0x315) = 0;
  *(undefined1 *)((int)piVar2 + 0x316) = 1;
  piVar2[0xc6] = 0;
  *(undefined1 *)(piVar2 + 199) = 0;
  piVar2[200] = 0;
  piVar2[0xc9] = 0;
  *(undefined1 *)(piVar2 + 0xca) = 0;
  *(undefined1 *)((int)piVar2 + 0x329) = 1;
  *(undefined1 *)((int)piVar2 + 0x32a) = 1;
  *(undefined1 *)((int)piVar2 + 0x32b) = 0xff;
  *(undefined1 *)(piVar2 + 0xcb) = 0;
  *(undefined1 *)((int)piVar2 + 0x32d) = 0;
  *(undefined1 *)((int)piVar2 + 0x32e) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x32f) = 0xe;
  piVar2[0xcc] = -1;
  piVar2[0xcd] = 0;
  *(undefined1 *)(piVar2 + 0xce) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x339) = 0xff;
  piVar2[0xcf] = 0;
  piVar2[0xd0] = 0;
  *(undefined1 *)(piVar2 + 0xd3) = 0;
  piVar2[0xd4] = 0;
  *(undefined1 *)(piVar2 + 0xd5) = 0;
  *(undefined1 *)((int)piVar2 + 0x355) = 1;
  *(undefined1 *)((int)piVar2 + 0x356) = 0;
  puVar3 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    FUN_001ce8fc(puVar3,s___OutputDataStrmRun_0000e9d6 + 2,0,0);
    thunk_EXT_FUN_00400100(puVar3);
  }
  piVar2[0xd1] = 0;
  piVar2[0xd6] = (int)puVar3;
  piVar2[0xd2] = 0;
  return piVar2 + -1;
}

