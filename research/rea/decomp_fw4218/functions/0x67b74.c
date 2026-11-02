// rea decompile_all
// name: FUN_00067b74
// address: 0x67b74
// body: available
// range: 0x67b74-0x67c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00067b74(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [8];
  int *local_10;
  
  if (param_2 == (int *)0x0) {
    FUN_00002898(s_ERROR__addHWPlug__hwPlug_could_n_00067cb4);
  }
  else {
    puVar1 = (undefined4 *)FUN_000b1210(auStack_18);
    *puVar1 = _DAT_00067ca0;
    uVar2 = FUN_000b4964();
    iVar3 = FUN_000b4840(uVar2,s___AudioHWService_00067ca2 + 2,auStack_18);
    if (iVar3 == 0) {
      FUN_00002898(s_ERROR__addHWPlug__no_AudioHWServ_00067ce4);
      FUN_000b1228(auStack_18);
      return 0;
    }
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2,0);
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    if ((iVar3 == 0) && (0 < iVar4)) {
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
      FUN_00002898(s_ERROR__addHWPlug__Plug_ID__d_has_00067d0c,uVar2);
      FUN_000b1228(auStack_18);
      return 0;
    }
    iVar3 = (**(code **)(*local_10 + 0x18))(local_10,param_2);
    if (iVar3 != 0) {
      FUN_000b1228(auStack_18);
      return 1;
    }
    uVar2 = (**(code **)(*param_2 + 8))(param_2);
    FUN_00002898(s_ERROR__addHWPlug__Could_not_not_a_00067d3c,uVar2);
    FUN_000b1228(auStack_18);
  }
  return 0;
}

