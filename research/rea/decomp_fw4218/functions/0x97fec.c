// rea decompile_all
// name: FUN_00097fec
// address: 0x97fec
// body: available
// range: 0x97fec-0x980ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00097fec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [8];
  int *local_18;
  
  if (*(int *)(param_1 + 0x2ec) != 0) {
    puVar1 = (undefined4 *)FUN_000b1210(auStack_20);
    *puVar1 = _DAT_000980ac;
    uVar2 = FUN_000b4964();
    iVar3 = FUN_000b4840(uVar2,s___WarpFramerService_000980ae + 2,auStack_20);
    if (iVar3 != 0) {
      uVar2 = FUN_0000ab20(param_1 + 4);
      (**(code **)(*local_18 + 0x18))(local_18,uVar2);
    }
    piVar4 = *(int **)(param_1 + 0x2ec);
    if (piVar4 != (int *)0x0) {
      iVar3 = (int)((ulonglong)((longlong)DAT_000980c4 * (longlong)(piVar4[2] - *piVar4)) >> 0x20);
      FUN_00173a54(*piVar4,(iVar3 >> 1) - (iVar3 >> 0x1f),0);
      FUN_001eecc8(piVar4);
    }
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    FUN_000b1228(auStack_20);
  }
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  return 1;
}

