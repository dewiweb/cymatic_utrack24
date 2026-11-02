// rea decompile_all
// name: FUN_004280ae
// address: 0x4280ae
// body: available
// range: 0x4280ae-0x428276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004280ae(int *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  local_c = *param_1;
  iVar3 = param_1[2];
  local_10 = param_1[1];
  local_8 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_8 = *(undefined4 *)(local_10 + 0x14);
  }
  if (*(int *)(iVar3 + 0x48) == 0x636f6d70) {
    local_20 = param_1[9];
    local_1c = param_1[10];
    local_18 = param_1[0xb];
    local_14 = param_1[0xc];
  }
  else {
    FUN_004106d2();
  }
  iVar8 = local_c;
  *(int *)(iVar3 + 0x38) = param_1[0xf];
  *(int *)(iVar3 + 0x20) = local_20;
  *(int *)(iVar3 + 0x24) = local_14;
  *(int *)(iVar3 + 0x28) = param_1[0x13] - param_1[0x11];
  if (((*(int *)(local_c + 0x1e0) == 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) &&
     (pbVar7 = (byte *)FUN_004269ff(*(undefined2 *)(local_10 + 0xc),param_2), pbVar7 != (byte *)0x0)
     ) {
    *(uint *)(iVar3 + 0x28) = (uint)*pbVar7 << 6;
  }
  *(uint *)(iVar3 + 0x18) = local_18 - local_20;
  *(int *)(iVar3 + 0x1c) = local_14 - local_1c;
  if ((*(char *)(iVar8 + 0x128) == '\0') || (*(short *)(iVar8 + 0x14e) == 0)) {
    sVar6 = FUN_0040d2d8();
    if (*(short *)(iVar8 + 0x170) == -1) {
      sVar1 = *(short *)(iVar8 + 0xde);
      sVar2 = *(short *)(iVar8 + 0xdc);
    }
    else {
      sVar1 = *(short *)(iVar8 + 0x1b8);
      sVar2 = *(short *)(iVar8 + 0x1b6);
    }
    uVar9 = (int)sVar2 - (int)sVar1;
    param_1 = (int *)((int)(uVar9 - (int)sVar6) / 2);
  }
  else {
    iVar8 = param_1[0x2f];
    sVar6 = FUN_0040d2d8();
    piVar4 = param_1 + 0x31;
    param_1 = (int *)(int)sVar6;
    if (*piVar4 < iVar8) {
      uVar9 = FUN_0040d2d8();
      uVar9 = uVar9 & 0xffff;
    }
    else {
      uVar9 = 0;
    }
  }
  piVar4 = *(int **)(*(int *)(local_c + 0x80) + 0x34);
  if ((piVar4 != (int *)0x0) && (*(int *)(*piVar4 + 8) != 0)) {
    local_20 = 0;
    local_1c = (int)param_1;
    local_18 = uVar9;
    iVar8 = (**(code **)(*piVar4 + 8))(piVar4[1],param_2,1,&local_20);
    if (iVar8 != 0) {
      return iVar8;
    }
    param_1 = (int *)local_1c;
    uVar9 = local_18;
  }
  *(uint *)(iVar3 + 0x3c) = uVar9;
  if ((*(byte *)(piVar5 + 4) & 1) == 0) {
    param_1 = (int *)thunk_FUN_00401000(param_1,local_8);
    uVar9 = thunk_FUN_00401000(uVar9,local_8);
  }
  *(int **)(iVar3 + 0x30) = param_1;
  *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x28) / 2;
  *(uint *)(iVar3 + 0x34) = uVar9;
  return 0;
}

