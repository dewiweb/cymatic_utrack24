// rea decompile_all
// name: FUN_0011a928
// address: 0x11a928
// body: available
// range: 0x11a928-0x11ab9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011a928(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 auStack_40 [8];
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    local_30 = 0;
    local_34 = 0;
    (**(code **)(**(int **)(param_1 + 0x20) + 0xd4))(auStack_40);
    piVar1 = (int *)FUN_00120730(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x7c),DAT_0011abb4,
                                 *(int *)(param_1 + 0x20),(local_38 & 0xffff) + 0x8000 & 0xfffeffff)
    ;
    *(int **)(param_1 + 0x24) = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0x2b;
    }
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 4);
  }
  *(uint *)(*(int *)(param_1 + 0x20) + 0x60) = *(uint *)(*(int *)(param_1 + 0x20) + 0x60) | 0x4000;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x158))();
  while (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 0x20))
                      (*(int *)(*piVar1 + -0x38) + (int)piVar1);
    if (iVar2 == param_2) {
      return 0x2c;
    }
    piVar4 = *(int **)(param_1 + 0x24);
    uVar3 = (**(code **)(*piVar1 + 0x54))(piVar1);
    piVar1 = (int *)(**(code **)(*piVar4 + 0x164))(piVar4,uVar3);
  }
  piVar1 = *(int **)(param_1 + 0x24);
  uStack_48 = (**(code **)(*piVar1 + 0x154))();
  uStack_50 = 0x8000000;
  uStack_4c = 0x40000000;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x150))(piVar1,0,param_3,&uStack_50);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 0x1c))
            (*(int *)(*piVar1 + -0x38) + (int)piVar1,param_2);
  (**(code **)(*piVar1 + 0x4c))(piVar1,param_1);
  iVar2 = FUN_0016d7a4(0x1c,DAT_0011abb8);
  if ((iVar2 != 0) && (iVar2 = FUN_0011cd24(iVar2,param_4), iVar2 != 0)) {
    (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 4))
              (*(int *)(*piVar1 + -0x38) + (int)piVar1,param_1 + 4);
    (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 0x14))
              (*(int *)(*piVar1 + -0x38) + (int)piVar1,iVar2);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x30))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x9c))(piVar1,param_4,param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*(int *)((int)piVar1 + *(int *)(*piVar1 + -0x38)) + 0x14))
                (*(int *)(*piVar1 + -0x38) + (int)piVar1,iVar2);
      *(int **)(iVar2 + 0xc) = piVar1;
    }
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + (short)param_4;
    return 0;
  }
  return 0x16;
}

