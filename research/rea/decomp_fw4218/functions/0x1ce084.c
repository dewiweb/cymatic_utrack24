// rea decompile_all
// name: FUN_001ce084
// address: 0x1ce084
// body: available
// range: 0x1ce084-0x1ce13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ce12c to 0x13244 FUN_00013244 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ce084(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00013244(&DAT_001ce13c);
  FUN_00013244(param_1);
  FUN_00013244(s_exception_in_thread_<_001ce140);
  iVar3 = FUN_001cfb1c();
  if (iVar3 == 0) {
    FUN_00013244(s_CurrentPtr__NULL_001ce1c0);
  }
  else {
    FUN_00013290(&DAT_001ce158,*(undefined4 *)(iVar3 + 0x34),0x14);
  }
  uVar1 = s_tF__>_at_address_0x_08x_CPU_mode_001ce15c._0_4_;
  FUN_00013290(s_tF__>_at_address_0x_08x_CPU_mode_001ce15c + 4,
               *(undefined4 *)s_tF__>_at_address_0x_08x_CPU_mode_001ce15c._0_4_,
               *(undefined4 *)
                (s_tF__>_at_address_0x_08x_CPU_mode_001ce15c._0_4_ + 0xc +
                (*(uint *)(s_tF__>_at_address_0x_08x_CPU_mode_001ce15c._0_4_ + 8) & 0xf) * 4),
               *(uint *)(s_tF__>_at_address_0x_08x_CPU_mode_001ce15c._0_4_ + 8) & 0x1f);
  FUN_00013244(DAT_001ce198);
  iVar2 = DAT_001ce19c;
  iVar4 = 0;
  do {
    FUN_00013290(_DAT_001ce1a0,iVar4,*(undefined4 *)(iVar2 + iVar4 * 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  FUN_001d7430(*(undefined4 *)uVar1,*(undefined4 *)(uVar1 + 4),iVar3);
  FUN_00013244(s____CRASH__Execution_stopped__001ce1a2 + 2);
  return;
}

