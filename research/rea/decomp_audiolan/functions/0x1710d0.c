// rea decompile_all
// name: FUN_001710d0
// address: 0x1710d0
// body: available
// range: 0x1710d0-0x171187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x171178 to 0x151c4 FUN_000151c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001710d0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_000151c4(&DAT_00171188);
  FUN_000151c4(param_1);
  FUN_000151c4(s_exception_in_thread_<_0017118c);
  iVar3 = FUN_0017b3e4();
  if (iVar3 == 0) {
    FUN_000151c4(s_CurrentPtr__NULL_0017120c);
  }
  else {
    FUN_00015210(&DAT_001711a4,*(undefined4 *)(iVar3 + 0x34),0x14);
  }
  uVar1 = s_H0__>_at_address_0x_08x_CPU_mode_001711a8._0_4_;
  FUN_00015210(s_H0__>_at_address_0x_08x_CPU_mode_001711a8 + 4,
               *(undefined4 *)s_H0__>_at_address_0x_08x_CPU_mode_001711a8._0_4_,
               *(undefined4 *)
                (s_H0__>_at_address_0x_08x_CPU_mode_001711a8._0_4_ + 0xc +
                (*(uint *)(s_H0__>_at_address_0x_08x_CPU_mode_001711a8._0_4_ + 8) & 0xf) * 4),
               *(uint *)(s_H0__>_at_address_0x_08x_CPU_mode_001711a8._0_4_ + 8) & 0x1f);
  FUN_000151c4(DAT_001711e4);
  iVar2 = DAT_001711e8;
  iVar4 = 0;
  do {
    FUN_00015210(_DAT_001711ec,iVar4,*(undefined4 *)(iVar2 + iVar4 * 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  FUN_00185944(*(undefined4 *)uVar1,*(undefined4 *)(uVar1 + 4),iVar3);
  FUN_000151c4(s_F___CRASH__Execution_stopped__001711ed + 3);
  return;
}

