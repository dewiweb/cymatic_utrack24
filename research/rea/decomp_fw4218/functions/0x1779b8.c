// rea decompile_all
// name: FUN_001779b8
// address: 0x1779b8
// body: available
// range: 0x1779b8-0x177ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001779b8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [52];
  
  if (*param_2 != -1) {
    FUN_0001320c(*param_2);
  }
  FUN_000028f8(auStack_44,0x32,s__dev__s_00177ab4,param_3);
  iVar1 = FUN_00013224(auStack_44,0);
  *param_2 = iVar1;
  if (*param_2 < 0) {
    FUN_00002898(DAT_00177abc);
    uVar2 = 0;
  }
  else {
    local_58 = 0x14;
    local_54 = DAT_00177ac0;
    local_50 = 8;
    local_4c = 0;
    local_48 = 1;
    iVar1 = FUN_000134dc(*param_2,3,&local_58);
    if (iVar1 == 0) {
      local_60 = 8;
      local_5c = 0;
      iVar1 = FUN_000134dc(*param_2,0xf,&local_60);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        FUN_00002898(DAT_00177ac8);
        uVar2 = 0;
      }
    }
    else {
      FUN_00002898(DAT_00177ac4);
      uVar2 = 0;
    }
  }
  return uVar2;
}

