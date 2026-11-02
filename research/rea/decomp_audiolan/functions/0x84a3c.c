// rea decompile_all
// name: FUN_00084a3c
// address: 0x84a3c
// body: available
// range: 0x84a3c-0x84a4b inclusive
// range: 0xddc7c-0xddd5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00084a3c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_20;
  undefined1 auStack_1c [4];
  
  puVar3 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  piVar4 = (int *)*puVar3;
  (**(code **)(*piVar4 + 0x28))();
  iVar5 = puVar3[5];
  iVar1 = iVar5;
  iVar2 = *(int *)(iVar5 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar1 != iVar5) && (*(uint *)(iVar1 + 0x10) <= param_2)) {
    iVar5 = iVar1;
  }
  if (iVar5 != puVar3[5]) {
    if (*(int **)(iVar5 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0x14) + 8))();
    }
    local_20 = iVar5;
    FUN_001c5024(auStack_1c,puVar3 + 1,&local_20);
    (**(code **)(*piVar4 + 0x2c))(piVar4);
    return 1;
  }
  (**(code **)(*piVar4 + 0x2c))(piVar4);
  return 0;
}

