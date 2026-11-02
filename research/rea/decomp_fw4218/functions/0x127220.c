// rea decompile_all
// name: FUN_00127220
// address: 0x127220
// body: available
// range: 0x127220-0x12733b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00127220(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  
  FUN_001aacd2(auStack_28,s___dCH__0012733c,*(undefined1 *)(param_1 + 0x11));
  FUN_000d7ae4(auStack_2c,0,0,0,0);
  FUN_000d7acc(auStack_2c,1);
  FUN_00064a34(auStack_40);
  piVar1 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar1 + 0x58))(piVar1,auStack_40);
  FUN_000649bc(auStack_40,0);
  iVar2 = FUN_001b2390(auStack_40);
  FUN_000649d4(auStack_40,iVar2 + 0xe);
  FUN_000649c4(auStack_40,0x2b);
  FUN_000649cc(auStack_40,0x53);
  piVar1 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar1 + 0x28))(piVar1,auStack_40,0,0,auStack_28,auStack_2c,0,0,1,0xffffffff);
  FUN_00064a58(auStack_40);
  FUN_000d7afc(auStack_2c);
  FUN_001aafac(auStack_28);
  return;
}

