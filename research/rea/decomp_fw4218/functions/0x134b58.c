// rea decompile_all
// name: FUN_00134b58
// address: 0x134b58
// body: available
// range: 0x134b58-0x134d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00134b58(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  FUN_0011eda0();
  iVar1 = FUN_000a0f3c();
  if (iVar1 == 10) {
    uVar2 = FUN_0011eda0();
    FUN_0011f44c(uVar2,(char)param_1[0x39] + 0x50);
    FUN_000028cc(auStack_60,&DAT_00134d7c,s_Folder_Mode_00134d70);
    uVar2 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
    uVar3 = FUN_00243490(param_1 + 0x25,0);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_1c);
    FUN_001351d8(param_1);
    FUN_000028cc(auStack_60,&DAT_00134d7c,s_Autoplay_on_boot_00134d80);
    uVar2 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
    uVar3 = FUN_00243490(param_1 + 0x25,1);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_1c);
    FUN_00134eb0(param_1);
    FUN_000028cc(auStack_60,&DAT_00134d7c,s_Output_Atten__00134d94);
    uVar2 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
    uVar3 = FUN_00243490(param_1 + 0x25,2);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_1c);
    FUN_00135168(param_1);
    FUN_000028cc(auStack_60,&DAT_00134d7c,s_Multitrack_Mode_Options_00134da4);
    uVar2 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
    uVar3 = FUN_00243490(param_1 + 0x25,3);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_1c);
    FUN_000028cc(auStack_60,&DAT_00134d7c,s_Stereo_Mode_Options_00134dbc);
    uVar2 = FUN_00232964(auStack_1c,auStack_60,auStack_20);
    uVar3 = FUN_00243490(param_1 + 0x25,4);
    FUN_00232a4c(uVar3,uVar2);
    FUN_002329f0(auStack_1c);
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,1);
  }
  return iVar1;
}

