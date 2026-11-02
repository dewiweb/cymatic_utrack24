// rea decompile_all
// name: FUN_0011bee8
// address: 0x11bee8
// body: available
// range: 0x11bee8-0x11c1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011bee8(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    uVar5 = 0;
    while( true ) {
      if (*(ushort *)(*(int *)(param_1 + 0x20) + 0x16c) <= uVar5) {
        return;
      }
      piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x20) + 0x168) + uVar5 * 4);
      if (piVar6 == (int *)0x0) break;
      uVar2 = (**(code **)(*param_4 + 0xd8))(param_4);
      uVar3 = (**(code **)(*param_4 + 0xa4))(param_4);
      piVar4 = *(int **)(param_1 + 0x20);
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0x18));
      }
      (**(code **)(*piVar6 + 4))(piVar6,piVar4,uVar3,uVar2);
      uVar5 = uVar5 + 1 & 0xfffeffff;
    }
    return;
  }
  piVar6 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  piVar6 = (int *)(**(code **)(*piVar6 + 0x30))();
  iVar1 = 0;
  if (piVar6 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x24))
                      ((int)piVar6 + *(int *)(*piVar6 + -0x38));
  }
  if (iVar1 != *(int *)(param_1 + 0x24)) {
    piVar6 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x30))();
    iVar1 = 0;
    if (piVar6 != (int *)0x0) {
      iVar1 = (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x24))
                        ((int)piVar6 + *(int *)(*piVar6 + -0x38));
    }
    if (iVar1 == *(int *)(param_1 + 0x28)) {
      piVar6 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
      uVar2 = (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x20))();
      uVar5 = 0;
      while( true ) {
        if (*(ushort *)(*(int *)(param_1 + 0x20) + 0x16c) <= uVar5) {
          return;
        }
        piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x20) + 0x168) + uVar5 * 4);
        if (piVar6 == (int *)0x0) break;
        (**(code **)(*param_4 + 0xd8))(param_4);
        uVar3 = (**(code **)(*param_4 + 0xa4))(param_4);
        piVar4 = *(int **)(param_1 + 0x20);
        if (piVar4 != (int *)0x0) {
          piVar4 = (int *)(*(int *)(*piVar4 + -0x18) + (int)piVar4);
        }
        (**(code **)(*piVar6 + 0x2c))(piVar6,piVar4,uVar2,uVar3);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      return;
    }
    return;
  }
  piVar6 = (int *)(**(code **)(*param_2 + 0x30))(param_2);
  uVar2 = (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x20))();
  iVar1 = (**(code **)(*param_4 + 0xa4))(param_4);
  uVar5 = 0;
  if (iVar1 != 0) {
    uVar5 = iVar1 - 1U & 0xffff;
  }
  uVar7 = 0;
  while( true ) {
    if (*(ushort *)(*(int *)(param_1 + 0x20) + 0x16c) <= uVar7) {
      return;
    }
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x20) + 0x168) + uVar7 * 4);
    if (piVar6 == (int *)0x0) break;
    (**(code **)(*param_4 + 0xd8))(param_4);
    piVar4 = *(int **)(param_1 + 0x20);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)(*(int *)(*piVar4 + -0x18) + (int)piVar4);
    }
    (**(code **)(*piVar6 + 0x18))(piVar6,piVar4,uVar2,uVar5);
    uVar7 = uVar7 + 1 & 0xfffeffff;
  }
  return;
}

