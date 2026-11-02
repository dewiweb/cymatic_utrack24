// rea decompile_all
// name: FUN_0016de38
// address: 0x16de38
// body: available
// range: 0x16de38-0x16dea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016de38(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *puStack_24;
  undefined4 *local_20;
  int iStack_1c;
  undefined4 local_18;
  
  uVar3 = 0;
  local_30 = 1;
  local_28 = 0;
  local_2c = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_2c = *param_1;
  }
  *param_2 = 0;
  puStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_0016d852(param_3);
  iVar2 = FUN_00160e98(uVar1,DAT_0016dea4);
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 8);
  }
  local_38 = 0;
  local_34[0] = 0;
  iVar2 = FUN_00049a00(local_2c,local_20,param_3,local_18,uVar1,&local_28,1,&local_38,local_34,
                       &local_30);
  if ((iVar2 != 0) && (local_30 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

