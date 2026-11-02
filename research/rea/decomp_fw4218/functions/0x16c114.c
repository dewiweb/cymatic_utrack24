// rea decompile_all
// name: FUN_0016c114
// address: 0x16c114
// body: available
// range: 0x16c114-0x16c1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016c114(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar2 = FUN_001511f8(param_2);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x7b0) = *(int *)(param_1 + 0x7b0) + 1;
  }
  else {
    puVar3 = (undefined4 *)FUN_001c6b14(0x1c,DAT_0016c1f0);
    uVar1 = DAT_0016c1f4;
    if (puVar3 == (undefined4 *)0x0) {
      *(int *)(param_1 + 0x7b0) = *(int *)(param_1 + 0x7b0) + 1;
    }
    else {
      puVar3[1] = 0;
      *puVar3 = uVar1;
      puVar3[2] = 0;
      iVar4 = FUN_00172710(puVar3 + 3);
      iVar5 = iVar4 + -0xc;
      uVar6 = 1;
      FUN_00172728(iVar4,param_3);
      *(int *)(iVar4 + 0xc) = iVar2;
      FUN_00152224(iVar2);
      *(undefined4 *)(iVar4 + -8) = 0;
      *(undefined4 *)(iVar4 + -4) = 0;
      if (*(int *)(param_1 + 0x700) == 0) {
        *(int *)(param_1 + 0x6fc) = iVar5;
      }
      else {
        *(int *)(iVar4 + -8) = *(int *)(param_1 + 0x700);
        *(int *)(*(int *)(param_1 + 0x700) + 8) = iVar5;
      }
      *(int *)(param_1 + 0x700) = iVar5;
      *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x704) + 1;
      if (*(uint *)(param_1 + 0x7a8) < *(uint *)(param_1 + 0x704)) {
        *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x704);
      }
    }
    FUN_0015223c(iVar2);
  }
  return uVar6;
}

