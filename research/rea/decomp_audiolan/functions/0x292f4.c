// rea decompile_all
// name: FUN_000292f4
// address: 0x292f4
// body: available
// range: 0x292f4-0x29313 inclusive
// range: 0x29316-0x29319 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000292f4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char in_stack_00000000;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 in_stack_00000010;
  uint in_stack_00000050;
  uint in_stack_00000054;
  undefined4 in_stack_00000058;
  
  iVar1 = FUN_0004028c(&stack0x00000004);
  if (iVar1 == 0) {
    FUN_000297c4();
    return;
  }
  uVar2 = FUN_00035808();
  if (uVar2 == 0) {
    FUN_00029e84(DAT_000293ec,iVar1);
    FUN_000297ca();
    return;
  }
  iVar1 = FUN_00035922(in_stack_00000008,in_stack_00000010);
  if ((iVar1 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
    iVar1 = FUN_00035b10(uVar2 & 0xffff);
    if (iVar1 == 0) {
      FUN_0002931a(s_Error_getting_delay_mechanism_fo_000298cc,uVar2);
      return;
    }
    if (in_stack_00000000 == '\x01') {
      FUN_00029e84(s_Active_delay_mechanism_in_port___000298f8,uVar2);
    }
    if (in_stack_00000000 == '\x02') {
      FUN_0002931a(s_Active_delay_mechanism_in_port___00029924,uVar2);
      return;
    }
  }
  else {
    iVar1 = FUN_0004028c(&stack0x00000004);
    if (iVar1 != 0) {
      iVar3 = FUN_00035912(iVar1,&DAT_0002980c,3);
      if (iVar3 == 0) {
        iVar1 = FUN_00035d24(uVar2 & 0xffff,1);
        if (iVar1 == 1) {
          FUN_0002931a(s_Set_delay_mechanism_for_port__i_t_00029848,uVar2);
          return;
        }
        FUN_0002931a(s_Error_setting_delay_mechanism_fo_00029814,uVar2);
        return;
      }
      iVar1 = FUN_00035912(iVar1,&DAT_00029810,3);
      if (iVar1 == 0) {
        iVar1 = FUN_00035d24(uVar2 & 0xffff,2);
        if (iVar1 == 1) {
          FUN_0002931a(s_Set_delay_mechanism_for_port__i_t_000298a4,uVar2);
          return;
        }
        FUN_0002931a(s_Error_setting_delay_mechanism_fo_00029870,uVar2);
        return;
      }
      FUN_000297ca();
      return;
    }
    FUN_00029e84(s_Syntax_error_00029994);
  }
  iVar1 = FUN_00035922(in_stack_00000050,in_stack_00000058);
  if (iVar1 == 0) goto LAB_000297da;
  do {
    FUN_00028048();
LAB_000297da:
  } while (in_stack_00000050 < in_stack_00000054);
  return;
}

