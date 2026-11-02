// rea decompile_all
// name: FUN_000f717c
// address: 0xf717c
// body: available
// range: 0xf717c-0xf72d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f717c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  uStack_28 = param_2;
  uStack_24 = param_3;
  local_20 = param_4;
  local_20 = FUN_001bab00(param_1 + 0x424);
  iVar1 = FUN_00200f9c(&local_20,s_sds___cne_AppSettings_Global_Sam_000f72d8);
  if (iVar1 == 0) {
    FUN_00002898(DAT_000f7300);
    uVar2 = 0;
  }
  else {
    FUN_0012246c(param_1 + 0x424);
    uVar2 = FUN_001b5d88();
    iVar1 = FUN_000f6f58(param_1,uVar2);
    if (iVar1 == -1) {
      FUN_0012246c(param_1 + 0x424);
      uVar2 = FUN_001b5d88();
      FUN_00002898(_DAT_000f7304,uVar2);
    }
    else {
      FUN_0012246c(param_1 + 0x424);
      uVar2 = FUN_001b5d88();
      FUN_000f4e84();
      uVar3 = FUN_000f4fc0();
      FUN_0009321c(uVar3,uVar2);
    }
    iVar1 = FUN_001baadc(param_1 + 0x424);
    if ((iVar1 == 2) || (iVar1 == 1)) {
      FUN_00063bc0(&uStack_28);
      if (iVar1 == 2) {
        FUN_00063c24(&uStack_28,s___ETHERNET_000f7306 + 2);
      }
      else {
        FUN_00063c24(&uStack_28,&DAT_000f7314);
      }
      iVar1 = FUN_0020055c(&uStack_28,s_sds___cne_AppSettings_Global_Str_000f7318);
      if (iVar1 == 0) {
        FUN_00002898(DAT_000f7348);
        FUN_00063c0c(&uStack_28);
        uVar2 = 0;
        goto LAB_000f71b4;
      }
      FUN_00063c0c(&uStack_28);
    }
    else {
      FUN_00002898(DAT_000f734c,iVar1);
    }
    uVar2 = 1;
  }
LAB_000f71b4:
  return CONCAT44(uStack_28,uVar2);
}

