// rea decompile_all
// name: FUN_000ca860
// address: 0xca860
// body: available
// range: 0xca860-0xca907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000ca860(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [12];
  
  if (*(char *)(param_1 + 0x65) == '\0') {
    piVar1 = (int *)FUN_001f01c4(0x28,1);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1[1] = param_1;
    piVar1[2] = 0;
    *(undefined1 *)(piVar1 + 3) = 0;
    *(undefined1 *)((int)piVar1 + 0xd) = 1;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    iVar4 = DAT_000ca908;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *piVar1 = iVar4;
    iVar4 = FUN_00122968(piVar1);
    if (iVar4 != 0) {
      return piVar1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x65) != '\x01') {
      return (int *)0x0;
    }
    piVar1 = (int *)FUN_001f01c4(0x1c,1);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1[1] = param_1;
    piVar1[2] = 0;
    *(undefined1 *)(piVar1 + 3) = 0;
    *(undefined1 *)((int)piVar1 + 0xd) = 1;
    piVar1[4] = 0;
    iVar4 = DAT_000ca90c;
    piVar1[5] = 0;
    piVar1[6] = 0;
    *piVar1 = iVar4;
    puVar2 = (undefined4 *)FUN_000b1210(auStack_20);
    *puVar2 = DAT_000ca910;
    uVar3 = FUN_000b4964();
    iVar4 = FUN_000b4840(uVar3,DAT_000ca914,auStack_20);
    if (iVar4 != 0) {
      FUN_000b1228(auStack_20);
      return piVar1;
    }
    FUN_000b1228(auStack_20);
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return (int *)0x0;
}

