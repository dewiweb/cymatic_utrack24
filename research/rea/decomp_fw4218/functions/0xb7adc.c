// rea decompile_all
// name: FUN_000b7adc
// address: 0xb7adc
// body: available
// range: 0xb7adc-0xb7cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000b7adc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  uVar1 = FUN_00225ca8(param_1 + 0x14);
  FUN_001aaf30(auStack_38,uVar1);
  FUN_000d7ae4(auStack_3c,0,0,0,0);
  FUN_000d7acc(auStack_3c,0);
  FUN_00064a34(auStack_50);
  FUN_00064a34(auStack_64);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x58))(piVar2,auStack_50);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x58))(piVar2,auStack_64);
  uVar1 = FUN_00201f28(auStack_28,0);
  FUN_001aaf10(auStack_74,s_Elapsed_000b7cbc,uVar1);
  FUN_00201f54(auStack_28);
  FUN_000649bc(auStack_64,0xf);
  FUN_000649d4(auStack_64,0x1a);
  FUN_000649c4(auStack_64,0xb0);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x28))(piVar2,auStack_64,0,0,auStack_74,auStack_3c,0,0,0,0xffffffff);
  FUN_000649bc(auStack_50,0x1a);
  FUN_000649d4(auStack_50,0x25);
  FUN_000649c4(auStack_50,0xb0);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x28))(piVar2,auStack_50,0,0,auStack_38,auStack_3c,0,0,0,0xffffffff);
  FUN_001aafac(auStack_74);
  FUN_00064a58(auStack_64);
  FUN_00064a58(auStack_50);
  FUN_000d7afc(auStack_3c);
  FUN_001aafac(auStack_38);
  return;
}

