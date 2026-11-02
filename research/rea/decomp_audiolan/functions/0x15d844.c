// rea decompile_all
// name: FUN_0015d844
// address: 0x15d844
// body: available
// range: 0x15d844-0x15d8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015d844(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = FUN_000e9ccc(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x40);
  *(int *)(iVar1 + 0x10) =
       *(int *)(*(int *)(param_2 + 0x3c) + 0x10) + *(int *)(*(int *)(param_2 + 0x3c) + 0x14);
  *(undefined2 *)(iVar1 + -8) = 0;
  if (*(short *)(*(int *)(iVar1 + -4) + 0x4e) == 0) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 != 0) {
    iVar2 = FUN_000e9c94(iVar1,iVar3,*(undefined4 *)(iVar1 + 0x10));
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0xc) = (uint)*(ushort *)(iVar1 + 8) + iVar3;
      return;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return;
  }
  return;
}

