// rea decompile_all
// name: FUN_000b51c4
// address: 0xb51c4
// body: available
// range: 0xb51c4-0xb527b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_000b51c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_1 = _DAT_000b527c;
  param_1[1] = 0;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_00203e2c(&uStack_20);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s___AudioHWService_000b527e + 2,&uStack_20);
  if (iVar2 == 0) {
    FUN_00002898(s_LCDDisplayDriver__Audio_HW_Servi_000b5290);
    FUN_000d04f8(&uStack_20);
  }
  else {
    piVar3 = (int *)FUN_0022bc60(&uStack_20);
    uVar1 = FUN_001dbf34();
    uVar1 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,6);
    param_1[1] = uVar1;
    if (param_1[1] == 0) {
      FUN_00002898(s_LCDDisplayDriver__Could_NOT_find_000b52c0);
      FUN_000d04f8(&uStack_20);
    }
    else {
      FUN_000d04f8(&uStack_20);
    }
  }
  return CONCAT44(uStack_20,param_1);
}

