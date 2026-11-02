// rea decompile_all
// name: FUN_000f176c
// address: 0xf176c
// body: available
// range: 0xf176c-0xf1a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f176c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [64];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  FUN_0011eda0();
  iVar1 = FUN_000a0f3c();
  if (iVar1 == 0x17) {
    FUN_000f4e84();
    uVar2 = FUN_000f4fc0();
    iVar1 = FUN_001b57c8(uVar2);
    FUN_000028cc(auStack_68,&DAT_000f1a50,s_Input_01_08_000f1a44);
    uVar2 = FUN_00232964(auStack_24,auStack_68,auStack_28);
    uVar3 = FUN_00243490(param_1 + 0x25,0);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_24);
    FUN_000028cc(auStack_68,&DAT_000f1a50,s_Input_09_16_000f1a54);
    uVar2 = FUN_00232964(auStack_24,auStack_68,auStack_28);
    uVar3 = FUN_00243490(param_1 + 0x25,1);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_24);
    FUN_000028cc(auStack_68,&DAT_000f1a50,s_Input_17_24_000f1a60);
    uVar2 = FUN_00232964(auStack_24,auStack_68,auStack_28);
    uVar3 = FUN_00243490(param_1 + 0x25,2);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_24);
    if (iVar1 == 1) {
      uVar2 = FUN_00243490(param_1 + 0x2b,0);
      FUN_00232a4c(uVar2,DAT_000f1a6c + param_1[0x36] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,1);
      FUN_00232a4c(uVar2,DAT_000f1a6c + param_1[0x37] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,2);
      FUN_00232a4c(uVar2,DAT_000f1a6c + param_1[0x38] * 4);
    }
    else if (iVar1 == 2) {
      uVar2 = FUN_00243490(param_1 + 0x2b,0);
      FUN_00232a4c(uVar2,DAT_000f1a70 + param_1[0x36] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,1);
      FUN_00232a4c(uVar2,DAT_000f1a70 + param_1[0x37] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,2);
      FUN_00232a4c(uVar2,DAT_000f1a70 + param_1[0x38] * 4);
    }
    else if (iVar1 == 3) {
      uVar2 = FUN_00243490(param_1 + 0x2b,0);
      FUN_00232a4c(uVar2,DAT_000f1a74 + param_1[0x36] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,1);
      FUN_00232a4c(uVar2,DAT_000f1a74 + param_1[0x37] * 4);
      uVar2 = FUN_00243490(param_1 + 0x2b,2);
      FUN_00232a4c(uVar2,DAT_000f1a74 + param_1[0x38] * 4);
    }
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,1);
  }
  return iVar1;
}

