// rea decompile_all
// name: FUN_0013f338
// address: 0x13f338
// body: available
// range: 0x13f338-0x13f40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0013f338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_2c [8];
  
  puVar1 = (undefined4 *)FUN_0007d58c(param_1);
  *puVar1 = DAT_0013f410;
  iVar2 = FUN_00064a34(puVar1 + 1);
  uVar3 = FUN_00201f28(auStack_2c,0);
  iVar2 = FUN_001aaefc(iVar2 + 0x1c,uVar3);
  iVar4 = iVar2 + -0x20;
  FUN_00201f54(auStack_2c);
  iVar2 = FUN_000d7ae4(iVar2 + 0x10,0,0,0,0);
  iVar2 = FUN_000fad30(iVar2 + 4);
  FUN_0013f1b8(iVar2 + -0x34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,iVar4);
  return iVar2 + -0x34;
}

