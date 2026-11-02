// rea decompile_all
// name: FUN_00162e48
// address: 0x162e48
// body: available
// range: 0x162e48-0x162e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x162e9c to 0x1236b4 FUN_001236b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162e48(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  bVar4 = iVar1 == 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  if (!bVar4 || iVar1 != 0) {
    iVar1 = FUN_0017bfc0();
    uVar3 = iVar1 - *(int *)(param_1 + 0x44);
    bVar5 = iVar1 != *(int *)(param_1 + 0x44);
    bVar4 = uVar3 == 1;
    uVar2 = iVar1 - *(int *)(param_1 + 0x48);
    if (uVar3 < 2) {
      bVar5 = 9 < uVar2;
      bVar4 = uVar2 == 10;
    }
    if (bVar5 && !bVar4) {
      FUN_001236b4(param_1 + -0x10,0);
      return;
    }
    return;
  }
  return;
}

