// rea decompile_all
// name: FUN_00178354
// address: 0x178354
// body: available
// range: 0x178354-0x1783f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00178354(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_001a4490(0);
  iVar4 = *(int *)(param_1 + 0x98);
joined_r0x00178366:
  do {
    iVar1 = iVar4;
    if (iVar1 == 0) {
      return;
    }
    iVar4 = *(int *)(iVar1 + 0x150);
  } while ((*(int *)(iVar1 + 4) != 0) || (iVar3 = *(int *)(iVar1 + 0x148), iVar3 == 0));
  if ((uint)(iVar2 - *(int *)(iVar3 + 0x30)) < 0x4c) goto LAB_001783b4;
  if (*(int *)(iVar1 + 0x154) == 0) {
    *(int *)(param_1 + 0x98) = iVar4;
    goto joined_r0x001783e4;
  }
  *(int *)(*(int *)(iVar1 + 0x154) + 0x150) = iVar4;
  iVar3 = *(int *)(iVar1 + 0x150);
  goto joined_r0x001783d4;
LAB_001783b4:
  if (((*(int *)(iVar3 + 0x24) != 0) &&
      (iVar3 = *(int *)(*(int *)(iVar3 + 0x24) + 0xc), 199 < iVar3)) && (iVar3 < 300)) {
    if (*(int *)(iVar1 + 0x154) == 0) {
      *(int *)(param_1 + 0x98) = iVar4;
joined_r0x001783e4:
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x154) = 0;
      }
    }
    else {
      *(int *)(*(int *)(iVar1 + 0x154) + 0x150) = iVar4;
      iVar3 = *(int *)(iVar1 + 0x150);
joined_r0x001783d4:
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x154) = *(undefined4 *)(iVar1 + 0x154);
      }
      *(undefined4 *)(iVar1 + 0x150) = 0;
      *(undefined4 *)(iVar1 + 0x154) = 0;
    }
    FUN_00177268(param_1);
  }
  goto joined_r0x00178366;
}

