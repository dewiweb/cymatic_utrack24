// rea decompile_all
// name: FUN_0017a3e4
// address: 0x17a3e4
// body: available
// range: 0x17a3e4-0x17a47b inclusive
// range: 0x18dbe4-0x18dc2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18dc20 to 0xaa72c FUN_000aa72c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18dc2c to 0xaa72c FUN_000aa72c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017a3e4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00003850(DAT_0017a47c,0x400,0x32);
  FUN_00003850(DAT_0017a480,0x400,0x32);
  FUN_00003850(DAT_0017a484,0x180,0x32);
  FUN_00003850(DAT_0017a488,0x20,0x32);
  FUN_00003850(DAT_0017a48c,0x180,0x32);
  FUN_00003850(DAT_0017a490,0x80,0x32);
  piVar1 = DAT_0017a494;
  if (*DAT_0017a494 != DAT_0017a498) {
    FUN_00011b00();
    FUN_0017a384();
  }
  *piVar1 = DAT_0017a49c;
  FUN_0018db3c();
  FUN_0019cac4();
  uVar2 = FUN_0018afdc();
  iVar3 = FUN_00003960(s_uart0_0018dc30,uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_0018afdc();
    iVar3 = FUN_00003960(s_uart1_0018dc38,uVar2);
    if (iVar3 != 0) {
      return;
    }
    FUN_000aa72c(1);
    return;
  }
  FUN_000aa72c(0);
  return;
}

