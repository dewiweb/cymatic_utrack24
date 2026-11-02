// rea decompile_all
// name: FUN_0006eda4
// address: 0x6eda4
// body: available
// range: 0x6eda4-0x6f093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006eda4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint uVar5;
  int *piVar6;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  
  iVar1 = FUN_000dde00();
  iVar2 = FUN_00084950();
  piVar6 = *(int **)(iVar2 + 0x38);
  (**(code **)(*piVar6 + 0x28))(piVar6);
  piVar3 = *(int **)(param_1 + 0xe4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xdc))(piVar6,*(int *)(*piVar3 + -0x1ec) + (int)piVar3);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar4 = FUN_00084950();
    piVar3 = *(int **)(param_1 + 0xe0);
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar3 + -0x1ec) + (int)piVar3;
    }
    FUN_00084a3c(uVar4,iVar2);
    piVar3 = *(int **)(param_1 + 0xe0);
    iVar2 = extraout_r1;
    if (piVar3 != (int *)0x0) {
      iVar2 = *(int *)(*piVar3 + -0x1ec) + (int)piVar3;
    }
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    (**(code **)(*piVar6 + 0xdc))(piVar6,iVar2);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(iVar1 + 0x28) == '\0') {
    iVar2 = FUN_0006f6b4();
    piVar3 = *(int **)(iVar2 + 4);
    FUN_001da408(&local_34,iVar1 + 0x24);
    uVar4 = (**(code **)(*piVar3 + 0x78))(piVar3,4,0,4,local_34);
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    FUN_001da44c(&local_34);
    piVar3 = *(int **)(param_1 + 0xe0);
    (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x1ec)) + 0xb8))
              (*(int *)(*piVar3 + -0x1ec) + (int)piVar3,param_1 + 0xc0);
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x1fc))(*(int **)(param_1 + 0xe0),param_1 + 0xc4);
    uVar4 = FUN_00084950();
    piVar3 = *(int **)(param_1 + 0xe0);
    if (piVar3 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar3 + -0x1ec) + (int)piVar3;
    }
    FUN_00084a20(uVar4,iVar1,0,3,param_1 + 0xcc);
  }
  else {
    uVar4 = FUN_000b9aac();
    FUN_00159b14(&local_2c,uVar4);
    uVar4 = *(undefined4 *)(local_2c + -4);
    local_30 = FUN_000034d0(&DAT_0006f094);
    local_34 = 0;
    FUN_001da110(&local_2c,uVar4,0,&DAT_0006f094,local_30);
    FUN_001da408(local_28,iVar1 + 0x24);
    uVar5 = *(uint *)(local_2c + -4);
    iVar1 = *(int *)(local_28[0] + -4);
    if ((*(uint *)(local_2c + -8) < uVar5 + iVar1) || (1 < *(int *)(local_2c + -0xc) + 1U)) {
      if (-iVar1 - 0xfU < uVar5) {
        FUN_0010f7cc(8,&LAB_0006f098,&LAB_0006f098,uVar5,-iVar1 - 0xfU);
      }
      local_34 = 0;
      local_30 = iVar1;
      FUN_001da110(&local_2c,*(undefined4 *)(local_2c + -4),0,local_28[0],
                   *(undefined4 *)(local_28[0] + -4));
    }
    else {
      FUN_00003628(local_2c + uVar5,local_28[0],iVar1 + 1);
      *(uint *)(local_2c + -4) = uVar5 + iVar1;
    }
    FUN_001da44c(local_28);
    iVar1 = FUN_0006f6b4();
    piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 4) + 0x84))(*(int **)(iVar1 + 4),5,local_2c);
    *(int **)(param_1 + 0xe4) = piVar3;
    (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x1ec)) + 0xb8))
              ((int)piVar3 + *(int *)(*piVar3 + -0x1ec),param_1 + 0xc0);
    piVar3 = *(int **)(param_1 + 0xe4);
    (**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x214)) + 0x1fc))
              ((int)piVar3 + *(int *)(*piVar3 + -0x214),param_1 + 0xc4);
    FUN_001da44c(&local_2c);
  }
                    /* WARNING: Could not recover jumptable at 0x0006f090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x2c))(piVar6);
  return;
}

