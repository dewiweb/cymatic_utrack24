// rea decompile_all
// name: FUN_000ce3e0
// address: 0xce3e0
// body: available
// range: 0xce3e0-0xce52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ce3e0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [16];
  
  FUN_0005cca8(auStack_44);
  FUN_000028cc(auStack_58,s_Markers__02d_000ce52c,*(undefined4 *)(param_1 + 0x5c));
  uVar1 = FUN_00201f28(auStack_2c,0);
  uVar1 = FUN_001aaf10(auStack_24,auStack_58,uVar1);
  FUN_00225c84(auStack_44,uVar1);
  FUN_001aafac(auStack_24);
  FUN_00201f54(auStack_2c);
  uVar1 = FUN_00225ca8(auStack_44);
  FUN_001aaf30(auStack_68,uVar1);
  FUN_000d7ae4(auStack_6c,0,0,0,0);
  FUN_000d7acc(auStack_6c,0);
  FUN_001b7c50(auStack_80,param_1);
  FUN_000649bc(auStack_80,0x18);
  FUN_000649d4(auStack_80,0x23);
  FUN_000649c4(auStack_80,0x96);
  piVar2 = (int *)FUN_0022bc90(param_1 + 4);
  (**(code **)(*piVar2 + 0x28))(piVar2,auStack_80,0,0,auStack_68,auStack_6c,0,0,0,0xffffffff);
  FUN_00064a58(auStack_80);
  FUN_000d7afc(auStack_6c);
  FUN_001aafac(auStack_68);
  FUN_0005ccd0(auStack_44);
  return;
}

