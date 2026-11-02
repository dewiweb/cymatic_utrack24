// rea decompile_all
// name: FUN_000f8678
// address: 0xf8678
// body: available
// range: 0xf8678-0xf87e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000f8678(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  bVar1 = false;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_00178f04();
  iVar2 = FUN_001bf37c();
  if (iVar2 != 0) goto switchD_000f86ac_default;
  uVar3 = FUN_001bab00(param_1 + 0x424);
  switch(uVar3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_000f8710;
  case 4:
LAB_000f8710:
    if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
      bVar1 = true;
    }
  default:
    goto switchD_000f86ac_default;
  }
  if ((param_2 == 3) || (param_2 == 4)) {
    bVar1 = true;
  }
switchD_000f86ac_default:
  FUN_00122450(param_1 + 0x424,param_2);
  uVar3 = FUN_0012246c(param_1 + 0x424);
  FUN_000989c8(uVar3,param_2);
  iVar2 = FUN_000f717c(param_1);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000f87e8);
  }
  if (bVar1) {
    uVar3 = FUN_0005b730(&uStack_28,3,6);
    uVar4 = FUN_0006c100();
    FUN_0006b914(uVar4,uVar3);
    FUN_0005b73c(&uStack_28);
  }
  return bVar1;
}

