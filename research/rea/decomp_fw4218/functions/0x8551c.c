// rea decompile_all
// name: FUN_0008551c
// address: 0x8551c
// body: available
// range: 0x8551c-0x8564f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008551c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  
  iVar1 = FUN_0022cefc(param_2,&DAT_00085650,0xffffffff);
  FUN_0022d1b0(auStack_11c,param_2,iVar1 + 1,0xffffffff);
  uVar2 = FUN_0022d168(auStack_11c);
  FUN_000028cc(auStack_98,&DAT_00085654,uVar2);
  iVar1 = FUN_0022d018(auStack_11c,u__play_00085658,0);
  if (iVar1 == -1) {
    iVar1 = FUN_0022d018(auStack_11c,u__wav_00085664,0);
    if (*_DAT_00085670 == '\0') {
      if (iVar1 != -1) {
        FUN_00232190(auStack_11c);
        return 1;
      }
      uVar2 = FUN_000028cc(auStack_118,s____is_not_Stereo__00085671 + 3);
    }
    else {
      if (iVar1 == -1) {
        FUN_00232190(auStack_11c);
        return 1;
      }
      uVar2 = FUN_000028cc(auStack_118,s_is_not_Multitrack__00085684);
    }
    uVar2 = FUN_0011eda0(uVar2);
    FUN_0011ff88(uVar2,auStack_98,auStack_118);
    uVar2 = FUN_0011eda0();
    FUN_000a1000(uVar2,0x1c);
    FUN_001d0130(2000);
    FUN_00232190(auStack_11c);
  }
  else {
    FUN_00232190(auStack_11c);
  }
  return 0;
}

