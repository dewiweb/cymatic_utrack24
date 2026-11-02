// rea decompile_all
// name: FUN_00084b88
// address: 0x84b88
// body: available
// range: 0x84b88-0x84c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00084b88(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [128];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  uVar2 = uVar1;
  if (param_2 != 0) {
    FUN_000bb774(param_1,DAT_00084c9c + -0x10);
    uVar2 = FUN_00085cdc(param_1);
  }
  if (param_3 != 0) {
    FUN_00084df8(param_1);
    if (param_4 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    (**(code **)(*param_1 + 0xc))
              (param_1,*(undefined2 *)(_DAT_00084ca0 + 0x1a),*(undefined4 *)(_DAT_00084ca0 + 0x1c),
               *(undefined2 *)(_DAT_00084ca0 + 0x26),uVar2);
    iVar3 = FUN_00093a08(uVar1);
    uVar2 = FUN_0022d168(iVar3 + 0x2c);
    FUN_000028cc(auStack_a0,s__s_ls_00084cb0,s____Playlist___00084ca1 + 3,uVar2);
    uVar2 = FUN_0011eda0();
    FUN_0011f724(uVar2,auStack_a0);
    FUN_001a7f24(&local_ac);
    uVar2 = (**(code **)(*param_1 + 8))
                      (param_1,*(undefined4 *)(_DAT_00084ca0 + 0x40),
                       *(undefined4 *)(_DAT_00084ca0 + 0x44),*(undefined4 *)(_DAT_00084ca0 + 0x48),
                       local_ac,uStack_a8,uStack_a4,1,1);
  }
  return uVar2;
}

