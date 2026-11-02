// rea decompile_all
// name: FUN_0004bb70
// address: 0x4bb70
// body: available
// range: 0x4bb70-0x4bdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0004bb70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  
  piVar3 = DAT_0004bdc0;
  piVar2 = param_1 + 1;
  *param_1 = *param_2;
  iVar1 = param_2[1];
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar6 = *(undefined4 *)(iVar1 + -4);
    iVar1 = FUN_001da28c(piVar2,uVar6,uVar6);
    *piVar2 = iVar1 + 0xc;
    FUN_00003628(iVar1 + 0xc,param_2[1],uVar6);
  }
  else {
    *piVar2 = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != piVar3) {
      *piVar2 = *piVar2 + 1;
    }
  }
  iVar1 = param_2[2];
  piVar2 = param_1 + 2;
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar6 = *(undefined4 *)(iVar1 + -4);
    iVar1 = FUN_001da28c(piVar2,uVar6,uVar6);
    *piVar2 = iVar1 + 0xc;
    FUN_00003628(iVar1 + 0xc,param_2[2],uVar6);
  }
  else {
    *piVar2 = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != piVar3) {
      *piVar2 = *piVar2 + 1;
    }
  }
  piVar2 = param_1 + 3;
  *piVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc);
  iVar1 = FUN_0010f82c(0x2c,0);
  piVar3[2] = iVar1;
  *piVar3 = *piVar2;
  piVar3[1] = 1;
  *piVar2 = (int)piVar3;
  iVar1 = piVar3[2];
  param_1[5] = iVar1;
  param_1[6] = iVar1 + 0x2c;
  param_1[7] = iVar1;
  param_1[5] = iVar1 + 0x2c;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[7] + 4) = param_1[7];
  piVar9 = (int *)param_2[7];
  iVar1 = *(int *)param_1[7];
  for (piVar3 = (int *)*piVar9; piVar3 != piVar9; piVar3 = (int *)*piVar3) {
    piVar7 = (int *)param_1[4];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)param_1[5];
      if (piVar7 == (int *)param_1[6]) {
        uVar8 = 1;
        if (*piVar2 != 0) {
          uVar4 = *(uint *)(*piVar2 + 4);
          uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar8 < uVar4 + 1) {
            uVar8 = uVar4 + 1;
          }
        }
        piVar7 = (int *)FUN_0010f82c(0xc,0);
        iVar5 = FUN_0010f82c(uVar8 * 0x2c,0);
        piVar7[2] = iVar5;
        *piVar7 = *piVar2;
        piVar7[1] = uVar8;
        *piVar2 = (int)piVar7;
        piVar7 = (int *)piVar7[2];
        param_1[5] = piVar7;
        param_1[6] = piVar7 + uVar8 * 0xb;
      }
      param_1[5] = piVar7 + 0xb;
    }
    else {
      param_1[4] = *piVar7;
    }
    if (piVar7 + 2 != (int *)0x0) {
      FUN_0004bb70(piVar7 + 2,piVar3 + 2);
    }
    *piVar7 = iVar1;
    piVar7[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar7;
    *(int **)(iVar1 + 4) = piVar7;
    param_1[8] = param_1[8] + 1;
  }
  return param_1;
}

