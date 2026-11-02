// rea decompile_all
// name: FUN_0020bc84
// address: 0x20bc84
// body: available
// range: 0x20bc84-0x20bd23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0020bc84(int param_1,int param_2)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  *(int *)(param_1 + 0xd8) = param_2;
  for (iVar1 = 0; iVar1 != 0x36; iVar1 = iVar1 + 1) {
    FUN_00006604(iVar1 * 0x15,0x37);
    *(int *)(param_1 + extraout_r1 * 4) = iVar2;
    iVar2 = param_2 - iVar2;
    param_2 = *(int *)(param_1 + extraout_r1 * 4);
  }
  for (iVar1 = 0; iVar1 != 4; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 != 0x37; iVar2 = iVar2 + 1) {
      FUN_00006604(iVar1 + 0x1f,0x37);
      *(int *)(param_1 + iVar1 * 4) =
           *(int *)(param_1 + iVar1 * 4) - *(int *)(param_1 + extraout_r1_00 * 4);
    }
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x23;
  return;
}

