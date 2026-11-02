// rea decompile_all
// name: FUN_00029214
// address: 0x29214
// body: available
// range: 0x29214-0x292f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29284 to 0x297ca FUN_000297ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2929a to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292a0 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292b4 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292ba to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292ce to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292d4 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292da to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x292f0 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00029214(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short in_stack_00000000;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar1 = FUN_0004028c(&stack0x00000004);
  if (iVar1 != 0) {
    uVar2 = FUN_00035808();
    if (uVar2 == 0) {
      FUN_00029e84(DAT_000293ec,iVar1);
      FUN_000297ca();
      return;
    }
    iVar1 = FUN_00035922(in_stack_00000008,in_stack_00000010);
    if ((iVar1 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
      iVar1 = FUN_00035b94(uVar2 & 0xffff);
      if (iVar1 == 0) {
        FUN_0002931a(s_Error_getting_network_protocol_f_00029690,uVar2);
        return;
      }
      if (in_stack_00000000 == 1) {
        FUN_00029e84(s_Active_network_protocol_in_port___000296bc,uVar2);
      }
      if (in_stack_00000000 != 3) {
        FUN_000297ca();
        return;
      }
      FUN_0002931a(s_Active_network_protocol_in_port___000296e8,uVar2);
      return;
    }
    iVar1 = FUN_0004028c(&stack0x00000004);
    if (iVar1 != 0) {
      iVar3 = FUN_00035912(iVar1,&DAT_0002955c,4);
      if (iVar3 == 0) {
        iVar1 = FUN_0003600c(uVar2 & 0xffff,1);
        if (iVar1 == 1) {
          FUN_0002931a(s_Set_network_protocol_for_port__i_000295a4,uVar2);
          return;
        }
        FUN_0002931a(s_Error_setting_network_protocol_f_00029570,uVar2);
        return;
      }
      iVar3 = FUN_00035912(iVar1,&DAT_00029564,4);
      if (iVar3 == 0) {
        iVar1 = FUN_0003600c(uVar2 & 0xffff,2);
        if (iVar1 == 1) {
          FUN_0002931a(s_Set_network_protocol_for_port__i_00029604,uVar2);
          return;
        }
        FUN_0002931a(s_Error_setting_network_protocol_f_000295d0,uVar2);
        return;
      }
      iVar1 = FUN_00035912(iVar1,&DAT_0002956c,3);
      if (iVar1 != 0) {
        FUN_000297ca();
        return;
      }
      iVar1 = FUN_0003600c(uVar2 & 0xffff,3);
      if (iVar1 == 1) {
        FUN_0002931a(s_Set_network_protocol_for_port__i_00029664,uVar2);
        return;
      }
      FUN_0002931a(s_Error_setting_network_protocol_f_00029630,uVar2);
      return;
    }
  }
  FUN_000297c4();
  return;
}

