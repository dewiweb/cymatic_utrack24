// rea decompile_all
// name: FUN_0002978e
// address: 0x2978e
// body: available
// range: 0x2978e-0x297bd inclusive
// range: 0x297e6-0x29809 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x297e8 to 0x297be FUN_000297be (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x297fa to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x29808 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002978e(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000050;
  uint in_stack_00000054;
  undefined4 in_stack_00000058;
  
  iVar1 = FUN_0004028c(&stack0x00000004);
  if (iVar1 == 0) {
    FUN_00029e84(s_Syntax_error_00029994);
    iVar1 = FUN_00035922(in_stack_00000050,in_stack_00000058);
    if (iVar1 == 0) goto LAB_000297da;
    do {
      FUN_00028048();
LAB_000297da:
    } while (in_stack_00000050 < in_stack_00000054);
    return;
  }
  uVar2 = FUN_00035808();
  if (2 < uVar2) {
    FUN_00029e84(s_First_parameter_must_be_1_or_2_00029950);
  }
  iVar1 = FUN_0004028c(&stack0x00000004);
  if (iVar1 == 0) {
    FUN_000297be(s_Syntax_error_00029994);
    return;
  }
  uVar3 = FUN_00035808();
  if (0xff < uVar3) {
    FUN_00029e84(s_Priority_must_be_between_0_and_2_00029970);
    FUN_000297ca();
    return;
  }
  if (uVar2 != 1) {
    FUN_000360bc(uVar3 & 0xff);
    FUN_0002931a(s_Set_priority_2_to__i_000299a4,uVar3);
    return;
  }
  FUN_00036070(uVar3 & 0xff);
  FUN_0002931a(s_Set_priority_1_to__i_000299bc,uVar3);
  return;
}

