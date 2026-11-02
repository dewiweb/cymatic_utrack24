// rea decompile_all
// name: FUN_0005aee4
// address: 0x5aee4
// body: available
// range: 0x5aee4-0x5af9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0005aee4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_0005af9c;
  uVar5 = *DAT_0005af9c;
  *DAT_0005af9c = 4;
  iVar2 = FUN_0005ab34(param_1,0,0x11);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0005adc0(param_1,1,0x10);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_00096760(*(undefined4 *)(param_1 + 4));
      FUN_001d0130(5);
      uVar4 = FUN_0005b128(param_1,0,0,s_RXD0_TXD0_0005afa0);
      FUN_0009678c(*(undefined4 *)(param_1 + 4));
      FUN_001d0130(5);
      uVar3 = FUN_0005b128(param_1,0,1,s_RXD0_TXD0_0005afa0);
      uVar3 = uVar4 & 1 & uVar3;
      *puVar1 = uVar5;
    }
  }
  return uVar3;
}

