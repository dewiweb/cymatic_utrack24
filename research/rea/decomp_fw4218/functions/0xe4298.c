// rea decompile_all
// name: FUN_000e4298
// address: 0xe4298
// body: available
// range: 0xe4298-0xe4407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e4298(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar3 = FUN_000f4fb4();
  FUN_000e7488(param_1,param_2);
  iVar4 = FUN_0006d818(uVar3);
  uVar5 = FUN_000bc47c(param_1 + 0x14);
  FUN_000bc068(param_1 + 0x14,uVar5 ^ 1);
  if (iVar4 != 0) {
    iVar4 = FUN_001b2780(uVar3);
    iVar6 = FUN_001b5b2c(uVar2);
    if ((iVar6 != 0) && (iVar4 != 0)) {
      uVar7 = FUN_0011eda0();
      FUN_0011f310(uVar7,s_Ready_to_REC_000e4408,0,1);
    }
    iVar6 = FUN_001b5ac4(uVar2);
    if (((iVar6 == 1) && (iVar6 = FUN_001b278c(uVar3), iVar6 == 1)) && (iVar4 != 0)) {
      uVar2 = FUN_0011eda0();
      FUN_0011f310(uVar2,s_Song_Loaded_000e4418,0,1);
    }
  }
  uVar2 = FUN_000bd680(param_1 + 0x14);
  uVar3 = FUN_0011eda0();
  FUN_0011fa48(uVar3,uVar2,1,0);
  uVar2 = FUN_000bda98(param_1 + 0x14);
  uVar3 = FUN_000bfda0(param_1 + 0x14);
  uVar7 = FUN_000bfe18(param_1 + 0x14);
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(param_1 + 0x14,uVar7,uVar3,uVar2,0);
  uVar1 = FUN_0022dff0(DAT_000e4424);
  uVar2 = FUN_0011eda0();
  FUN_0011fcc0(uVar2,uVar1);
  return;
}

