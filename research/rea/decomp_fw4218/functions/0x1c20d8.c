// rea decompile_all
// name: FUN_001c20d8
// address: 0x1c20d8
// body: available
// range: 0x1c20d8-0x1c21cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001c20d8(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  
  FUN_00002898(s_TRACE__________>_onMasterCurrent_001c21cc);
  FUN_00178f04();
  iVar1 = FUN_001776cc();
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00178f04();
    FUN_00176e14(uVar2,local_28,local_2c,local_30);
    uVar2 = FUN_00178f04();
    FUN_00176e40(uVar2,local_34,local_38,local_3c);
    if ((((param_2 != local_28[0]) || (param_3 != local_2c[0])) || (param_4 != local_30[0])) ||
       (((param_5 != local_34[0] || (param_6 != local_38[0])) ||
        (uVar3 = (uint)local_3c[0], param_7 != uVar3)))) {
      uVar2 = FUN_00178f04();
      FUN_001772d0(uVar2,param_2 & 0xff,param_3,param_4);
      uVar2 = FUN_00178f04();
      uVar3 = FUN_001772fc(uVar2,param_5,param_6,param_7);
    }
  }
  return uVar3;
}

