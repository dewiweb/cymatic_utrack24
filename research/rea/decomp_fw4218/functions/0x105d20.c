// rea decompile_all
// name: FUN_00105d20
// address: 0x105d20
// body: available
// range: 0x105d20-0x105e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00105d20(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  *param_1 = DAT_00105e54;
  uVar1 = FUN_00230b58(auStack_14);
  iVar2 = FUN_00233524(param_1 + 1,auStack_10,uVar1);
  uVar1 = FUN_00230b58(auStack_1c);
  iVar2 = FUN_00233524(iVar2 + 0x1c,auStack_18,uVar1);
  local_20 = 1;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 2;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 3;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 4;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 5;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 6;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 7;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 8;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 9;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  local_20 = 10;
  FUN_00233574(iVar2 + -0x1c,&local_20);
  FUN_00233554(iVar2,iVar2 + -0x1c);
  return iVar2 + -0x20;
}

