// rea decompile_all
// name: FUN_00120250
// address: 0x120250
// body: available
// range: 0x120250-0x1203a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00120250(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 auStack_20 [2];
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x38))();
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = iVar2;
    if (iVar2 != 0) {
      iVar4 = iVar2 + 0x40;
    }
    FUN_0013c8c8(iVar2 + 0x10c,1,iVar4,0);
    *(undefined2 *)(param_1 + 0x12) = 0;
    FUN_0010e500(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0;
    return;
  }
  sVar1 = *(short *)(param_1 + 0x14);
  if (sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 0x12);
    if ((sVar1 != 0) && (*(short *)(param_1 + 0x12) = sVar1 + -1, sVar1 == 1)) {
      FUN_001203a8(param_1,0);
    }
  }
  else {
    *(short *)(param_1 + 0x14) = sVar1 + -1;
    if (sVar1 == 1) {
      FUN_001203a8(param_1,1);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_00146670(auStack_20,0x40);
    FUN_0014650c(auStack_20,1);
    FUN_0014650c(auStack_20,*(undefined2 *)(param_1 + 0x20));
    FUN_0014650c(auStack_20,*(undefined2 *)(param_1 + 0x22));
    FUN_0014650c(auStack_20,*(undefined2 *)(param_1 + 0x24));
    FUN_001464ac(auStack_20,param_1 + 0x18);
    piVar3 = *(int **)(*(int *)(param_1 + 8) + 0x24);
    (**(code **)(*piVar3 + 0x16c))(piVar3,DAT_001203a4,uStack_1c,auStack_20[0]);
    FUN_001466c0(auStack_20);
    return;
  }
  return;
}

