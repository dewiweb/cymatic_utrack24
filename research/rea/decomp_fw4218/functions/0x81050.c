// rea decompile_all
// name: FUN_00081050
// address: 0x81050
// body: available
// range: 0x81050-0x81113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00081050(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_3c [4];
  int local_38;
  undefined4 *local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_00178f04();
  FUN_00176e40(uVar1,local_28,local_2c,local_30);
  local_38 = FUN_001c6a94(0x100,_DAT_00081114);
  uVar1 = 0;
  if (local_38 != 0) {
    local_34 = &uStack_8;
    FUN_000028cc(local_38,s_______02d__02d__02d___>_00081115 + 3,local_28[0],local_2c[0],local_30[0]
                );
    iVar2 = FUN_00003738(local_38);
    FUN_00002858(local_38 + iVar2,0x100 - iVar2,param_2,local_34);
    local_34 = (undefined4 *)0x0;
    local_3c[0] = 2;
    uVar1 = (**(code **)(*param_1 + 0x24))(param_1,local_3c,0);
  }
  return uVar1;
}

