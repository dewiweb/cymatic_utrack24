// rea decompile_all
// name: FUN_00093390
// address: 0x93390
// body: available
// range: 0x93390-0x93497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00093390(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar3;
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined4 local_14;
  
  iStack_18 = param_1;
  local_14 = param_2;
  FUN_00249b28(param_2);
  FUN_002493b0();
  if (!(bool)in_CY) {
    uVar3 = FUN_00249b28(local_14);
    FUN_00249684((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_00093498);
    if (!(bool)in_CY) {
      uVar3 = FUN_00249b28(local_14);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      FUN_00002898(_DAT_0009349c,uVar2,(int)uVar3,uVar2);
      return 0;
    }
  }
  FUN_001a2920(auStack_20,param_1);
  FUN_00249e08(*(undefined4 *)(param_1 + 0x108),local_14);
  if (!(bool)in_ZR) {
    iVar1 = FUN_00200bf8(&local_14,s___sds___cne_AppSettings_MixerCon_0009349e + 2);
    if (iVar1 == 0) {
      FUN_00002898(_DAT_000934d0);
      FUN_00002898(s___ERROR__GeneralSettings__PARAME_000934d2 + 2);
      FUN_001a2938(auStack_20);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x108) = local_14;
    FUN_000f8ee0();
    uVar2 = FUN_000f6910();
    FUN_00069ac8(uVar2,*(undefined4 *)(param_1 + 0x108),1);
  }
  FUN_001a2938(auStack_20);
  uVar2 = FUN_000f4e84();
  FUN_000f5268(uVar2,0x30);
  return 1;
}

