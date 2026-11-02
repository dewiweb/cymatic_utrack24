// rea decompile_all
// name: FUN_000a5b48
// address: 0xa5b48
// body: available
// range: 0xa5b48-0xa5c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a5b48(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_58 [49];
  undefined1 uStack_27;
  
  if (param_3 != 1) {
    return 6;
  }
  uVar1 = FUN_001dba80(param_1);
  uVar2 = FUN_001dbac8();
  uVar3 = FUN_001dba38();
  uVar4 = FUN_001db8b0();
  FUN_000028f8(auStack_58,0x32,s__dev__s_000a5c24,*param_2);
  uStack_27 = 0;
  iVar5 = FUN_001f4728(auStack_58);
  iVar6 = FUN_001f47c8(auStack_58);
  iVar7 = FUN_001f466c(auStack_58);
  iVar8 = FUN_001f458c(auStack_58);
  if (iVar8 == 0 && ((iVar5 == 0 && iVar6 == 0) && iVar7 == 0)) {
    FUN_00002898(s_Shell_instigating_switch_to_this_000a5c5c);
    return 0;
  }
  FUN_001f4728(uVar1);
  FUN_001f47c8(uVar2);
  FUN_001f466c(uVar3);
  FUN_001f458c(uVar4);
  FUN_00002898(s_Could_NOT_set_device___s__as_she_000a5c2c,*param_2);
  return 6;
}

