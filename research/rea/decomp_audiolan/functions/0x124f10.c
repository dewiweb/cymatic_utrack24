// rea decompile_all
// name: FUN_00124f10
// address: 0x124f10
// body: available
// range: 0x124f10-0x1250d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00124f10(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char acStack_1c [4];
  
  piVar2 = *(int **)(param_1 + 0x38);
  if ((piVar2 != (int *)0x0) &&
     ((**(code **)(*piVar2 + 4))(piVar2,param_2), *(char *)(param_1 + 0x40) != '\0')) {
    return;
  }
  if (param_4 == 1) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    piVar2 = (int *)(**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x24))
                              (*(int *)(*param_2 + -0x38) + (int)param_2);
    bVar1 = (**(code **)(*piVar2 + 0x6c))();
    if (bVar1 - 1 < 0x10) {
      acStack_1c[1] = 0x7b;
      acStack_1c[2] = 0;
      uVar5 = 0;
      acStack_1c[0] = bVar1 + 0xaf;
      while ((uVar5 < *(ushort *)(param_1 + 0x34) &&
             (puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar5 * 4),
             puVar3 != (undefined4 *)0x0))) {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x14));
        }
        (**(code **)*puVar3)(puVar3,piVar2,3,acStack_1c);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      acStack_1c[1] = 0x79;
      acStack_1c[2] = 0;
      uVar5 = 0;
      acStack_1c[0] = bVar1 + 0xaf;
      while ((uVar5 < *(ushort *)(param_1 + 0x34) &&
             (puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar5 * 4),
             puVar3 != (undefined4 *)0x0))) {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x14));
        }
        (**(code **)*puVar3)(puVar3,piVar2,3,acStack_1c);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
    }
  }
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  do {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x168))
                              (*(int **)(param_1 + 0x18),uVar5);
    iVar4 = (**(code **)(*piVar2 + 0x9c))();
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x47) = 1;
      return;
    }
    uVar5 = uVar5 + 1 & 0xfffeffff;
  } while (uVar5 < 0x11);
  return;
}

