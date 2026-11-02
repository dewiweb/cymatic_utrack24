// rea decompile_all
// name: FUN_0012d87c
// address: 0x12d87c
// body: available
// range: 0x12d87c-0x12da4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012d87c(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  undefined1 auStack_28 [16];
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 == (int *)0x0) {
    return;
  }
  for (piVar2 = (int *)piVar4[0x3e]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x3e]) {
    piVar4 = piVar2;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    cVar1 = (char)piVar4[0x3d];
    if ((cVar1 != '\0') && (*(char *)(piVar4 + 0x3d) = cVar1 + -1, cVar1 == '\x01')) {
      *(undefined1 *)((int)piVar4 + 0xf5) = 0;
      (**(code **)(*piVar4 + 0xd0))();
    }
    if (param_2 != 0) {
      uVar5 = 0;
      while (uVar5 < *(ushort *)(piVar4 + 0x14)) {
        iVar3 = FUN_00132a40(piVar4 + 0x10,uVar5);
        if (iVar3 == 0) {
          uVar5 = uVar5 + 1;
        }
        else {
          FUN_00160270(auStack_28,piVar4 + 0x10,uVar5);
          iVar3 = FUN_0015ea90(auStack_28);
          if (iVar3 == 0) {
            FUN_0012c374(piVar4[9] + 0x584,piVar4,0,auStack_28);
            (**(code **)(*piVar4 + 0xac))(piVar4,0,auStack_28);
            FUN_00129060(piVar4[0x1b]);
          }
          FUN_00132df0(piVar4 + 0x10,uVar5);
        }
      }
      uVar5 = 0;
      while (uVar5 < *(ushort *)(piVar4 + 0x19)) {
        iVar3 = FUN_00132a40(piVar4 + 0x15,uVar5);
        if (iVar3 == 0) {
          uVar5 = uVar5 + 1;
        }
        else {
          FUN_00160270(auStack_28,piVar4 + 0x15,uVar5);
          iVar3 = FUN_0015ea90(auStack_28);
          if (iVar3 == 0) {
            FUN_0012c374(piVar4[9] + 0x584,piVar4,1,auStack_28);
            (**(code **)(*piVar4 + 0xac))(piVar4,1,auStack_28);
            FUN_00129060(piVar4[0x1b]);
          }
          FUN_00132df0(piVar4 + 0x15,uVar5);
        }
      }
    }
    piVar4 = (int *)FUN_001d7a54(param_1,piVar4);
  } while (piVar4 != (int *)0x0);
  return;
}

