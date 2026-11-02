// rea decompile_all
// name: FUN_000cc42c
// address: 0xcc42c
// body: available
// range: 0xcc42c-0xcc57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000cc42c(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_0008d268();
  iVar2 = FUN_00095b68(iVar2 + 4);
  piVar3 = (int *)FUN_0006e06c(iVar2 + 4,s_TelnetServer_000cc580,0,DAT_000cc57c,DAT_000cc57c,
                               DAT_000cc57c,DAT_000cc57c,DAT_000cc57c);
  piVar3[0x30] = DAT_000cc59c;
  piVar3[0x31] = (int)s_ByteStream_000cc590;
  piVar3[0x32] = 0x200;
  piVar3[0x33] = 0;
  FUN_0017ae30(piVar3 + 0x33,s_ByteStream_000cc590,1);
  piVar3[0x3b] = 0;
  piVar3[0x3c] = 0;
  piVar3[0x3d] = 0;
  piVar3[0x3e] = 0;
  *(undefined1 *)(piVar3 + 0x3f) = 0;
  *(undefined1 *)((int)piVar3 + 0xfd) = 0;
  iVar2 = FUN_001a0808(0x200,1);
  piVar3[0x3b] = iVar2;
  piVar3[0x3c] = iVar2 + 0x200;
  piVar3[0x3d] = iVar2;
  piVar3[0x3e] = iVar2;
  piVar3[0x30] = _DAT_000cc5a0;
  *(undefined1 *)((int)piVar3 + 0xfe) = 0;
  piVar3[0x40] = 0;
  piVar4 = piVar3 + 0x41;
  *piVar4 = 0;
  FUN_0017a1c4(piVar4,s_ByteStream_000cc590,0,0);
  thunk_EXT_FUN_00400100(piVar4);
  uVar1 = s____F__TelnetShell_Event_000cc5a2._2_4_;
  piVar4 = piVar3 + -2;
  iVar5 = s____F__TelnetShell_Event_000cc5a2._2_4_ + 0x70;
  iVar2 = s____F__TelnetShell_Event_000cc5a2._2_4_ + 0x9c;
  piVar3[0x48] = -1;
  piVar3[0x30] = iVar2;
  *piVar4 = uVar1;
  piVar3[0x49] = -1;
  piVar3[-1] = uVar1 + 0x50;
  *piVar3 = iVar5;
  *(undefined2 *)(piVar3 + 0x4a) = param_2;
  *(undefined1 *)((int)piVar3 + 0x1aa) = 0;
  *(undefined1 *)((int)piVar3 + 0x1ab) = 0;
  piVar3[0x6b] = 0;
  FUN_0017a1c4(piVar3 + 0x6b,s____F__TelnetShell_Event_000cc5a2 + 6,0,0);
  thunk_EXT_FUN_00400100(piVar3 + 0x6b);
  FUN_0008d248(piVar4);
  FUN_0006e024(piVar3);
  return piVar4;
}

