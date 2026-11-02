// rea decompile_all
// name: FUN_001848d8
// address: 0x1848d8
// body: available
// range: 0x1848d8-0x184a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001848d8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if ((char)param_1[0xd] != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    piVar5 = (int *)param_1[2];
    if (piVar5 != (int *)0x0) {
      for (piVar3 = (int *)piVar5[0x57]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x57]) {
        piVar5 = piVar3;
      }
      while (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x38))(piVar5);
        iVar2 = FUN_0018dc90(piVar5 + 0x20);
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            uVar4 = 9;
          }
          else {
            uVar4 = 10;
          }
          FUN_00188330(piVar5,uVar4);
        }
        FUN_0018dc90(piVar5 + 0x22);
        piVar3 = (int *)FUN_0022c0cc(param_1 + 1,piVar5);
        (**(code **)(*piVar5 + 0x3c))(piVar5);
        piVar5 = piVar3;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    if (*(char *)(*param_1 + 0x214) == '\0') {
      return;
    }
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      for (iVar1 = *(int *)(iVar2 + 0x15c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x15c)) {
        iVar2 = iVar1;
      }
      for (; iVar2 != 0; iVar2 = FUN_0022c0cc(param_1 + 1,iVar2)) {
        if (*(char *)(iVar2 + 0x4d) == '\x01') {
          return;
        }
      }
    }
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      FUN_001878e4(iVar2);
      iVar2 = *(int *)(iVar2 + 0x114);
      FUN_001d0130(3);
    }
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    return;
  }
  return;
}

