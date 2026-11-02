// rea decompile_all
// name: FUN_00082020
// address: 0x82020
// body: available
// range: 0x82020-0x8210f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00082020(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [128];
  
  iVar1 = FUN_0022cefc(DAT_00082114,&DAT_00082110,0xffffffff);
  FUN_0022d1b0(auStack_a0,DAT_00082114,iVar1 + 1,0xffffffff);
  if (*(char *)(DAT_00082114 + 4) == '\x02') {
    uVar2 = FUN_00231330(auStack_a0);
    iVar1 = FUN_00231330(auStack_a0);
    FUN_002313ec(auStack_a0,iVar1 + -8,uVar2);
  }
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_00093bf4(uVar2,auStack_a0);
  uVar2 = FUN_0022d168(auStack_a0);
  FUN_001ff754(uVar2,auStack_9c,0x80);
  FUN_00083654(param_1);
  uVar2 = FUN_0011eda0();
  FUN_001200e0(uVar2,auStack_9c);
  if (param_2 == 0) {
    uVar2 = FUN_0011eda0();
    FUN_00120150(uVar2,&DAT_00082118);
  }
  else {
    FUN_00083a78(param_1);
  }
  FUN_00232190(auStack_a0);
  return;
}

