// rea decompile_all
// name: FUN_00084a18
// address: 0x84a18
// body: available
// range: 0x84a18-0x84b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00084a18(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_00093a08(uVar1);
  iVar2 = FUN_0007ea24();
  *DAT_00084b74 = iVar2;
  FUN_00093a08(uVar1);
  iVar2 = FUN_0007ebdc();
  *DAT_00084b78 = iVar2;
  FUN_0023223c(DAT_00084b7c,*DAT_00084b74 + 0x10);
  FUN_0023223c(DAT_00084b80,*DAT_00084b78 + 0x10);
  FUN_00093bf4(uVar1,*DAT_00084b74 + 0xc);
  FUN_0009350c(uVar1,*DAT_00084b78 + 0xc);
  FUN_0009547c(uVar1,*(undefined1 *)(*DAT_00084b78 + 4));
  FUN_000954b8(uVar1,*(undefined4 *)(*DAT_00084b78 + 8));
  FUN_00093a08(uVar1);
  uVar3 = FUN_0007eb14();
  FUN_00095104(uVar1,uVar3);
  if (*(char *)(*DAT_00084b74 + 0x14) == '\x04') {
    *(undefined1 *)(DAT_00084b7c + 4) = 4;
    *DAT_00084b84 = 1;
  }
  else {
    *(undefined1 *)(DAT_00084b7c + 4) = 2;
    *DAT_00084b84 = 0;
  }
  if (*(char *)(*DAT_00084b78 + 0x14) == '\x04') {
    *(undefined1 *)(DAT_00084b80 + 4) = 4;
  }
  else {
    *(undefined1 *)(DAT_00084b80 + 4) = 2;
  }
  return;
}

