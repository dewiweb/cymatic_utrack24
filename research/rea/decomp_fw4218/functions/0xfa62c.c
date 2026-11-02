// rea decompile_all
// name: FUN_000fa62c
// address: 0xfa62c
// body: available
// range: 0xfa62c-0xfa6b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fa62c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  FUN_0006848c(param_2);
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xac) != 0) {
    piVar1 = (int *)FUN_000789c4();
    iVar3 = 10;
    while( true ) {
      iVar2 = *piVar1;
      bVar5 = iVar2 == 0;
      if (bVar5) {
        iVar2 = piVar1[1];
      }
      bVar6 = bVar5 && iVar2 == 0;
      if (!bVar5 || iVar2 != 0) {
        iVar3 = iVar3 + -1;
        bVar6 = iVar3 == 0;
      }
      if (bVar6) break;
      FUN_000173f4(0x96);
    }
    uVar4 = 0;
    piVar1[2] = 0;
    do {
      iVar3 = param_1 + uVar4 * 4;
      if (*(int *)(iVar3 + 0xc) != 0) {
        FUN_00012bfc();
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
  }
  return 1;
}

