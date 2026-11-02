// rea decompile_all
// name: FUN_000e2eb0
// address: 0xe2eb0
// body: available
// range: 0xe2eb0-0xe2f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e2eb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_000028a4(s_Deframer_Routing__000e2f2c);
  FUN_000028a4(s_Number_of_routes___d_000e2f40,*(undefined4 *)(param_1 + 0x48));
  FUN_000028a4(s_DestIdx_SrcIdx_SMUX_Label_000e2f58);
  FUN_000028a4(s__________________________________000e2f78);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  do {
    iVar1 = FUN_000760c8(*(undefined4 *)(param_1 + 0x4c));
    iVar2 = iVar1 + uVar3 * 0xc;
    FUN_000028a4(&DAT_000e2fa0,uVar3,*(undefined4 *)(iVar1 + uVar3 * 0xc),*(undefined4 *)(iVar2 + 8)
                 ,*(undefined4 *)(iVar2 + 4));
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x48));
  return;
}

