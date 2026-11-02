// rea decompile_all
// name: FUN_001ff754
// address: 0x1ff754
// body: available
// range: 0x1ff754-0x1ff7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ff754(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  byte local_2d;
  int local_28;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar3 = 0;
  iVar2 = 0;
  *(undefined1 *)(param_2 + param_3 + -1) = 0;
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  while( true ) {
    if (param_3 + -5 <= iVar2) {
      return;
    }
    local_28 = iVar3 * 2;
    uVar1 = *(ushort *)(local_20 + local_28);
    if (uVar1 >> 7 != 0) {
      FUN_000028cc(&local_30,s___02x__001ff7b4,uVar1 & 0xff);
      *(undefined1 *)(param_2 + iVar2) = local_30;
      *(undefined1 *)(param_2 + iVar2 + 1) = local_2f;
      *(undefined1 *)(param_2 + iVar2 + 2) = local_2e;
      uVar1 = (ushort)local_2d;
      iVar2 = iVar2 + 3;
    }
    *(char *)(param_2 + iVar2) = (char)uVar1;
    if (*(short *)(local_20 + local_28) == 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 1;
  }
  return;
}

