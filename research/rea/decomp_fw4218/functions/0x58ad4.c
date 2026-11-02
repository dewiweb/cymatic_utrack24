// rea decompile_all
// name: FUN_00058ad4
// address: 0x58ad4
// body: available
// range: 0x58ad4-0x58cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00058ad4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  
  local_20 = 0;
  FUN_001db900(s_SVWH_cfg_DisplaySettings_00058cc4._0_4_,&local_20);
  (**(code **)(*param_1 + 0x60))(param_1);
  iVar1 = FUN_001d24ec(s_SVWH_cfg_DisplaySettings_00058cc4 + 4);
  if (iVar1 == -1) {
    FUN_00002898(DAT_00058ce0);
    uVar3 = 7;
    uVar4 = 0xe;
  }
  else {
    uVar3 = FUN_001d222c(iVar1,s_V5_Ratio_00058ce4);
    if (((int)uVar3 < 0) || (7 < (int)uVar3)) {
      uVar3 = 7;
    }
    FUN_001d222c(iVar1,s_LCD_Bias_00058cf0);
    uVar4 = FUN_001d222c(iVar1,s_Volume_00058cfc);
    if (((int)uVar4 < 0) || (99 < (int)uVar4)) {
      uVar4 = 0xe;
    }
  }
  FUN_001d1ef4(iVar1);
  FUN_000b4d8c(param_1 + 1,0);
  FUN_000b4dd8(param_1 + 1,0);
  FUN_000b4fac(param_1 + 1,8);
  FUN_000b4fac(param_1 + 1,5);
  FUN_000b4f60(param_1 + 1,0);
  if (local_20 < 2) {
    FUN_000b4fac(param_1 + 1,9);
  }
  else {
    FUN_000b4fac(param_1 + 1,7);
  }
  FUN_000b4d38(param_1 + 1,local_20);
  FUN_000b4cec(param_1 + 1,uVar3 & 0xff);
  FUN_000b4c6c(param_1 + 1,1,0);
  FUN_001d0130(0x32);
  FUN_000b4c6c(param_1 + 1,1,1,0);
  FUN_001d0130(0x32);
  FUN_000b4c6c(param_1 + 1,1,1);
  FUN_001d0130(0x32);
  FUN_000b5130(param_1 + 1,uVar4 & 0xff);
  FUN_000b50f4(param_1 + 1,0xab);
  FUN_000b4fac(param_1 + 1,0);
  uVar2 = FUN_000b4964();
  iVar1 = FUN_000b4840(uVar2,s_ResourceManagerService_00058d04,param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00002898(DAT_00058d1c);
  }
  return iVar1;
}

