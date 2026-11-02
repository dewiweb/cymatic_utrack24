// rea decompile_all
// name: FUN_0011e9b0
// address: 0x11e9b0
// body: available
// range: 0x11e9b0-0x11ec07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011e9b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  uVar1 = FUN_0011eda0();
  FUN_000a0ec8(uVar1,0xe,0);
  uVar1 = FUN_0011eda0();
  FUN_001205a0(uVar1,s_Utilities_Menu_0011ec08);
  iVar2 = FUN_0022ed3c(param_1 + 0x25);
  if (iVar2 != 5) {
    uVar1 = FUN_0023299c(auStack_28,auStack_2c);
    FUN_0024331c(param_1 + 0x25,5,uVar1);
    FUN_002329f0(auStack_28);
  }
  uVar1 = FUN_00232964(auStack_1c,s_Date_Time_0011ec18,auStack_20);
  uVar3 = FUN_00243490(param_1 + 0x25,0);
  FUN_00232a4c(uVar3,uVar1);
  FUN_002329f0(auStack_1c);
  uVar1 = FUN_00232964(auStack_1c,s_Delete_Single_Song_0011ec24,auStack_20);
  uVar3 = FUN_00243490(param_1 + 0x25,1);
  FUN_00232a4c(uVar3,uVar1);
  FUN_002329f0(auStack_1c);
  uVar1 = FUN_00232964(auStack_1c,s_Format_USB_0011ec38,auStack_20);
  uVar3 = FUN_00243490(param_1 + 0x25,2);
  FUN_00232a4c(uVar3,uVar1);
  FUN_002329f0(auStack_1c);
  uVar1 = FUN_00232964(auStack_1c,s_System_Details_0011ec44,auStack_20);
  uVar3 = FUN_00243490(param_1 + 0x25,3);
  FUN_00232a4c(uVar3,uVar1);
  FUN_002329f0(auStack_1c);
  uVar1 = FUN_00232964(auStack_1c,s_IP_Settings_0011ec54,auStack_20);
  uVar3 = FUN_00243490(param_1 + 0x25,4);
  FUN_00232a4c(uVar3,uVar1);
  FUN_002329f0(auStack_1c);
  uVar1 = FUN_00232964(auStack_24,&DAT_0011ec60,auStack_20);
  FUN_00243210(param_1 + 0x28,5,uVar1);
  FUN_002329f0(auStack_24);
  uVar1 = FUN_00232964(auStack_24,&DAT_0011ec60,auStack_20);
  FUN_00243210(param_1 + 0x2b,5,uVar1);
  FUN_002329f0(auStack_24);
  (**(code **)(*param_1 + 0x74))(param_1,1);
  return;
}

