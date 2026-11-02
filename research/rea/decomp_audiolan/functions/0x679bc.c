// rea decompile_all
// name: FUN_000679bc
// address: 0x679bc
// body: available
// range: 0x679bc-0x67b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000679bc(int param_1,int *param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iStack_38;
  int aiStack_34 [5];
  undefined1 auStack_20 [12];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(int **)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  *(int *)(param_1 + 0x14) = param_5;
  if (param_5 != 0) {
    piVar1 = (int *)(*(code *)**(undefined4 **)((int)param_2 + *(int *)(*param_2 + -0x38)))
                              (*(int *)(*param_2 + -0x38) + (int)param_2);
    iVar2 = (**(code **)(*piVar1 + 0x114))(piVar1,param_1);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x120))();
  iVar2 = DAT_00067ba0;
  while (DAT_00067ba0 = iVar2, piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x9c))(piVar1,param_1 + 4);
    piVar7 = *(int **)(param_1 + 8);
    uVar3 = (**(code **)(*piVar1 + 0x94))(piVar1);
    piVar1 = (int *)(**(code **)(*piVar7 + 300))(piVar7,uVar3);
    iVar2 = DAT_00067ba0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x14);
  uVar3 = 1;
  if (puVar4 != (undefined4 *)0x0) {
    iStack_38 = iVar2;
    iVar5 = (**(code **)*puVar4)
                      (puVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&iStack_38
                      );
    if (iVar5 != 0) {
      FUN_0010e728(auStack_20,iStack_38);
      aiStack_34[0] = 0;
      FUN_000fa8a0(auStack_20,0,aiStack_34);
      if (aiStack_34[0] != 0) {
        iVar5 = FUN_001a0808(aiStack_34[0],1);
        if (((iVar5 == 0) || (iVar6 = FUN_000fa8a0(auStack_20,iVar5,aiStack_34), iVar6 == 0)) ||
           (iVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1d0))
                              (*(int **)(param_1 + 8),iVar5,aiStack_34[0]), iVar6 != 0)) {
          uVar3 = 0;
        }
        FUN_0019f30c(iVar5);
      }
      FUN_0010e7f4(auStack_20);
    }
    if (iStack_38 != iVar2) {
      piVar1 = (int *)(iStack_38 + -0xc);
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != DAT_00067ba4 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        FUN_0010fa20(iStack_38 + -0xc,*(int *)(iStack_38 + -8) + 0xe,0);
      }
    }
  }
  return uVar3;
}

