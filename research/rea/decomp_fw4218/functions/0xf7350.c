// rea decompile_all
// name: FUN_000f7350
// address: 0xf7350
// body: available
// range: 0xf7350-0xf75af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f7350(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_000f4e84();
  FUN_000f4fc0();
  uVar1 = FUN_001b557c();
  uVar1 = FUN_000f7d88(param_1,uVar1);
  uVar2 = FUN_0012246c(param_1 + 0x424);
  FUN_000989c0(uVar2,uVar1);
  FUN_0012246c(param_1 + 0x424);
  iVar3 = FUN_001b5d88();
  if (iVar3 == 4) {
    FUN_00002898(_DAT_000f75b0);
    FUN_00122448(param_1 + 0x424,0);
    uVar1 = FUN_0012246c(param_1 + 0x424);
    FUN_000989c0(uVar1,0);
  }
  local_18 = 0xff;
  iVar3 = FUN_001fff90(&local_18,s___sds___cne_AppSettings_Global_S_000f75b2 + 2);
  if (iVar3 == 0) {
    FUN_00002898(DAT_000f75dc);
  }
  if ((((local_18 == 1) || (local_18 == 2)) || (local_18 == 3)) || (local_18 == 4)) {
    FUN_00122450(param_1 + 0x424,local_18);
    uVar1 = FUN_0012246c(param_1 + 0x424);
    FUN_000989c8(uVar1,local_18);
  }
  else {
    FUN_00122450(param_1 + 0x424,2);
    uVar1 = FUN_0012246c(param_1 + 0x424);
    FUN_000989c8(uVar1,2);
    uVar1 = FUN_001bab00(param_1 + 0x424);
    FUN_00002898(_DAT_000f75e0,local_18,uVar1);
  }
  iVar3 = FUN_001bab00(param_1 + 0x424);
  if ((iVar3 == 3) || (iVar3 == 4)) {
    FUN_00122478(param_1 + 0x424,3);
  }
  else {
    FUN_00122478(param_1 + 0x424,0);
  }
  FUN_00063bc0(&uStack_20);
  iVar3 = FUN_001ff9c4(&uStack_20,s___sds___cne_AppSettings_Global_S_000f75e2 + 2);
  if (iVar3 == 0) {
    FUN_00002898(_DAT_000f7614);
  }
  FUN_00122438(param_1 + 0x424,1);
  uVar1 = FUN_0012246c(param_1 + 0x424);
  FUN_00098288(uVar1,1);
  iVar3 = FUN_001b22a4(&uStack_20,s___ETHERNET_000f7616 + 2);
  if (iVar3 != 0) {
    FUN_00122438(param_1 + 0x424,2);
    uVar1 = FUN_0012246c(param_1 + 0x424);
    FUN_00098288(uVar1,2);
  }
  FUN_00063c0c(&uStack_20);
  return CONCAT44(uStack_20,1);
}

