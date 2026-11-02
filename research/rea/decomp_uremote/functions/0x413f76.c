// rea decompile_all
// name: FUN_00413f76
// address: 0x413f76
// body: available
// range: 0x413f76-0x414107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00413f76(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  psVar5 = (short *)param_2[1];
  piVar6 = (int *)*param_2;
  if (param_1 == (int *)0x0) {
    return 6;
  }
  if (*param_1 == 0) {
    return 6;
  }
  if (param_1[1] == 0) {
    return 6;
  }
  if (psVar5 == (short *)0x0) {
    return 0x14;
  }
  if ((psVar5[1] == 0) || (*psVar5 < 1)) {
    return 0;
  }
  if (*(int *)(psVar5 + 6) == 0) {
    return 0x14;
  }
  if (*(int *)(psVar5 + 2) == 0) {
    return 0x14;
  }
  if ((int)psVar5[1] != *(short *)(*(int *)(psVar5 + 6) + -2 + *psVar5 * 2) + 1) {
    return 0x14;
  }
  uVar1 = param_2[2];
  iVar4 = param_1[4];
  if ((uVar1 & 2) == 0) {
    if (piVar6 == (int *)0x0) {
      return 6;
    }
    if (piVar6[1] == 0) {
      return 0;
    }
    if (*piVar6 == 0) {
      return 0;
    }
    if (piVar6[3] == 0) {
      return 6;
    }
  }
  if ((uVar1 & 1) == 0) {
    return 0x13;
  }
  if ((uVar1 & 2) == 0) {
    *(undefined4 *)(iVar4 + 0x400) = 0;
    *(undefined4 *)(iVar4 + 0x404) = 0;
    *(int *)(iVar4 + 0x408) = piVar6[1];
    iVar2 = *piVar6;
  }
  else {
    if ((uVar1 & 4) != 0) {
      *(undefined4 *)(iVar4 + 0x400) = param_2[8];
      *(undefined4 *)(iVar4 + 0x404) = param_2[9];
      *(undefined4 *)(iVar4 + 0x408) = param_2[10];
      *(undefined4 *)(iVar4 + 0x40c) = param_2[0xb];
      goto LAB_00414085;
    }
    *(undefined4 *)(iVar4 + 0x400) = 0xffff8000;
    *(undefined4 *)(iVar4 + 0x404) = 0xffff8000;
    iVar2 = 0x7fff;
    *(undefined4 *)(iVar4 + 0x408) = 0x7fff;
  }
  *(int *)(iVar4 + 0x40c) = iVar2;
LAB_00414085:
  iVar2 = FUN_0041303a();
  puVar7 = (undefined4 *)(iVar2 + 0x3d4);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(undefined4 *)psVar5;
    psVar5 = psVar5 + 2;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 1;
  iVar4 = param_1[2];
  *(undefined4 *)(iVar2 + 0x4d0) = 0;
  *(int *)(iVar2 + 0x4e0) = iVar4;
  if ((*(byte *)(param_2 + 2) & 2) == 0) {
    piVar8 = (int *)(iVar2 + 1000);
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    *(code **)(iVar2 + 0x4d4) = FUN_004139d4;
    *(int *)(iVar2 + 0x4d8) = iVar2;
  }
  else {
    *(undefined4 *)(iVar2 + 0x4d4) = param_2[3];
    *(undefined4 *)(iVar2 + 0x4d8) = param_2[7];
  }
  uVar3 = FUN_00413cd5();
  return uVar3;
}

