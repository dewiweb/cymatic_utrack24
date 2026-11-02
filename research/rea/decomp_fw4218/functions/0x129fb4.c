// rea decompile_all
// name: FUN_00129fb4
// address: 0x129fb4
// body: available
// range: 0x129fb4-0x12a059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00129fb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  if (param_1 != param_2) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1;
    local_20 = iVar3;
    if (iVar3 != iVar1) {
      for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
        FUN_00121640(local_20,iVar2);
        local_20 = local_20 + 0x1c;
      }
      FUN_0023d010(param_1 + 0xc,local_20,*(undefined4 *)(param_1 + 0x10));
      iVar2 = FUN_00003e14(iVar1 - iVar3,0x1c);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2 * -0x1c;
    }
    iVar1 = *(int *)(param_2 + 0x10);
    for (iVar2 = *(int *)(param_2 + 0xc); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
      FUN_0023d116(param_1 + 0xc,iVar2);
    }
    FUN_0023db58();
    FUN_00247ec8(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),param_1 + 0x18);
  }
  return param_1;
}

