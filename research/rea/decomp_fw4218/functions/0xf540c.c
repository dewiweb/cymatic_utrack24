// rea decompile_all
// name: FUN_000f540c
// address: 0xf540c
// body: available
// range: 0xf540c-0xf5507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f540c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  puVar1 = (undefined4 *)FUN_000c149c(param_1);
  *puVar1 = _DAT_000f5508;
  iVar2 = FUN_00091838(puVar1 + 0x1f,s___uTrackConfiguration_000f550a + 2);
  iVar2 = FUN_00091838(iVar2 + 0x24,s_Listener_uTrackConfiguration_000f5520);
  iVar2 = FUN_000b8408(iVar2 + 0x24);
  iVar2 = FUN_000b6d08(iVar2 + 0x3c);
  iVar2 = FUN_00095910(iVar2 + 0x40);
  iVar2 = FUN_0006de84(iVar2 + 0x228);
  uVar3 = FUN_00230e4c(&uStack_14);
  iVar2 = FUN_00232050(iVar2 + 0x4c,uVar3);
  uVar3 = FUN_0022f460(&uStack_18);
  iVar2 = FUN_0023af48(iVar2 + 4,uVar3);
  uVar3 = FUN_002305b4(&uStack_20);
  iVar2 = FUN_00234390(iVar2 + 0x10,&uStack_1c,uVar3);
  iVar4 = FUN_001c6b14(0x170,DAT_000f5540);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0012d6f4(iVar4);
  }
  *(undefined4 *)(iVar2 + -4) = uVar3;
  return iVar2 + -0x3c8;
}

