// rea decompile_all
// name: FUN_00065400
// address: 0x65400
// body: available
// range: 0x65400-0x6553b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00065400(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  
  uVar1 = FUN_00225ca8(param_1 + 5);
  FUN_001aaf30(auStack_20,uVar1);
  FUN_000d7ae4(auStack_24,0,0,0,0);
  FUN_000d7acc(auStack_24,2);
  FUN_000d7ac4(auStack_24,(char)param_1[0x23] == '\x01');
  (**(code **)(*param_1 + 0x1c))(auStack_38,param_1);
  iVar2 = FUN_001b2390(auStack_38);
  FUN_000649bc(auStack_38,iVar2 + 5);
  iVar2 = FUN_001b2390(auStack_38);
  FUN_000649d4(auStack_38,iVar2 + 0x16);
  FUN_000649c4(auStack_38,10);
  FUN_000649cc(auStack_38,0x2d);
  piVar3 = (int *)FUN_0022bc90(param_1 + 1);
  (**(code **)(*piVar3 + 0x28))(piVar3,auStack_38,0,0,auStack_20,auStack_24,0,0,3,0xffffffff);
  FUN_00064a58(auStack_38);
  FUN_000d7afc(auStack_24);
  FUN_001aafac(auStack_20);
  return;
}

