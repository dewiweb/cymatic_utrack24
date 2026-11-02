// rea decompile_all
// name: FUN_0011c824
// address: 0x11c824
// body: available
// range: 0x11c824-0x11c963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0011c824(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  uVar1 = FUN_0011eda0();
  FUN_001203e4(uVar1,s_USB_Interface_Mode_0011c964);
  FUN_0011c570(param_1,1);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000950fc(uVar1,1);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x24))(*(int **)(param_1 + 0x90),0x11,0,2000,0);
  FUN_00093300(uVar1,8);
  uVar1 = FUN_000dfcb0();
  FUN_000e08ec(uVar1,1);
  if (*_DAT_0011c978 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x24))(*(int **)(param_1 + 0x90),0x12,0,500,500);
  }
  FUN_002041e0(auStack_3c);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s____SystemDataService_0011c979 + 3,auStack_3c);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__MixerShellCommand__no_Sys_0011c990);
    uVar1 = FUN_000d0510(auStack_3c);
  }
  else {
    uVar1 = FUN_002041b0(auStack_30,auStack_3c);
    FUN_000f8ee0();
    uVar3 = FUN_000f6910();
    FUN_0006a310(uVar3,uVar1);
    FUN_000d0510(auStack_30);
    uVar1 = FUN_000d0510(auStack_3c);
  }
  return uVar1;
}

