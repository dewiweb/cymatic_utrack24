// rea decompile_all
// name: FUN_00127714
// address: 0x127714
// body: available
// range: 0x127714-0x127863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00127714(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = FUN_000b4c54();
  iVar1 = FUN_000bac08(iVar1 + 4);
  piVar2 = (int *)FUN_0006f700(iVar1 + 4,s_TelnetServer_00127868,0,DAT_00127864,DAT_00127864,
                               DAT_00127864,DAT_00127864,DAT_00127864);
  piVar2[0x30] = DAT_00127884;
  piVar2[0x31] = (int)s_ByteStream_00127878;
  piVar2[0x32] = 0x200;
  piVar2[0x33] = 0;
  FUN_001cf568(piVar2 + 0x33,s_ByteStream_00127878,1);
  piVar2[0x3b] = 0;
  piVar2[0x3c] = 0;
  piVar2[0x3d] = 0;
  piVar2[0x3e] = 0;
  *(undefined1 *)(piVar2 + 0x3f) = 0;
  *(undefined1 *)((int)piVar2 + 0xfd) = 0;
  iVar1 = FUN_001f01c4(0x200,1);
  piVar2[0x3b] = iVar1;
  piVar2[0x3c] = iVar1 + 0x200;
  piVar2[0x3d] = iVar1;
  piVar2[0x3e] = iVar1;
  piVar2[0x30] = DAT_00127888;
  *(undefined1 *)((int)piVar2 + 0xfe) = 0;
  piVar2[0x40] = 0;
  piVar4 = piVar2 + 0x41;
  *piVar4 = 0;
  FUN_001ce8fc(piVar4,s_ByteStream_00127878,0,0);
  thunk_EXT_FUN_00400100(piVar4);
  iVar1 = _DAT_0012788c;
  piVar4 = piVar2 + -2;
  iVar5 = _DAT_0012788c + 0x70;
  iVar3 = _DAT_0012788c + 0x9c;
  piVar2[0x48] = -1;
  piVar2[0x30] = iVar3;
  *piVar4 = iVar1;
  piVar2[0x49] = -1;
  piVar2[-1] = iVar1 + 0x50;
  *piVar2 = iVar5;
  *(undefined2 *)(piVar2 + 0x4a) = param_2;
  *(undefined1 *)((int)piVar2 + 0x1aa) = 0;
  *(undefined1 *)((int)piVar2 + 0x1ab) = 0;
  piVar2[0x6b] = 0;
  FUN_001ce8fc(piVar2 + 0x6b,s___TelnetShell_Event_0012788e + 2,0,0);
  thunk_EXT_FUN_00400100(piVar2 + 0x6b);
  FUN_000b4c34(piVar4);
  FUN_0006f678(piVar2);
  return piVar4;
}

