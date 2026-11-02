// rea decompile_all
// name: FUN_00083a78
// address: 0x83a78
// body: available
// range: 0x83a78-0x83b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00083a78(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_0022d19c(DAT_00083b98);
  if (iVar2 == 0) {
    uVar3 = FUN_00230e4c(auStack_11c);
    FUN_00232050(auStack_120,uVar3);
    FUN_0009350c(uVar1,auStack_120);
    FUN_000028cc(auStack_98,s_Next____________00083bac);
    uVar1 = FUN_00232190(auStack_120);
  }
  else {
    iVar2 = FUN_0022cefc(DAT_00083b98,&DAT_00083b9c,0xffffffff);
    FUN_0022d1b0(auStack_11c,DAT_00083b98,iVar2 + 1,0xffffffff);
    if (*(char *)(DAT_00083b98 + 4) == '\x02') {
      uVar3 = FUN_00231330(auStack_11c);
      iVar2 = FUN_00231330(auStack_11c);
      FUN_002313ec(auStack_11c,iVar2 + -8,uVar3);
    }
    FUN_0009350c(uVar1,auStack_11c);
    uVar1 = FUN_0022d168(auStack_11c);
    FUN_001ff754(uVar1,auStack_118,0x80);
    FUN_000028cc(auStack_98,s_Next____s_00083ba0,auStack_118);
    uVar1 = FUN_00232190(auStack_11c);
  }
  uVar1 = FUN_0011eda0(uVar1);
  FUN_00120150(uVar1,auStack_98);
  return;
}

