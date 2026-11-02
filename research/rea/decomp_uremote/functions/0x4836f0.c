// rea decompile_all
// name: FUN_004836f0
// address: 0x4836f0
// body: available
// range: 0x4836f0-0x4838ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004836f0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int aiStack_118 [64];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  local_c = *(int *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x15c);
  *(undefined4 *)(iVar2 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    FUN_0048331c(*(undefined4 *)(iVar2 + 0x48));
  }
  iVar7 = *param_2;
  local_10 = 0;
  iVar6 = *(int *)(param_1 + 300);
  local_18 = iVar7;
  for (; iVar6 <= local_c; iVar6 = iVar6 + 1) {
    iVar4 = (int)*(short *)(iVar7 + (&DAT_005ff498)[iVar6] * 2);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar4 = iVar4 >> ((byte)uVar1 & 0x1f);
    aiStack_118[iVar6] = iVar4;
    if (iVar4 == 1) {
      local_10 = iVar6;
    }
  }
  local_8 = *(int *)(param_1 + 300);
  param_1 = 0;
  param_2 = (int *)0x0;
  iVar7 = *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x3c);
  if (local_8 <= local_c) {
    do {
      local_14 = aiStack_118[local_8];
      if (aiStack_118[local_8] == 0) {
        param_1 = param_1 + 1;
      }
      else {
        while ((0xf < param_1 && (local_8 <= local_10))) {
          FUN_004832b5();
          FUN_00483263();
          param_1 = param_1 + -0x10;
          FUN_0048328d(param_2);
          iVar7 = *(int *)(iVar2 + 0x40);
          param_2 = (int *)0x0;
        }
        if (local_14 < 2) {
          FUN_004832b5();
          FUN_00483263();
          FUN_004831a5(-1 < *(short *)(local_18 + (&DAT_005ff498)[local_8] * 2),1);
          FUN_0048328d(param_2);
          param_2 = (int *)0x0;
          iVar7 = *(int *)(iVar2 + 0x40);
          param_1 = 0;
        }
        else {
          *(byte *)(iVar7 + (int)param_2) = (byte)local_14 & 1;
          param_2 = (int *)((int)param_2 + 1);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 <= local_c);
    if ((0 < param_1) || (param_2 != (int *)0x0)) {
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
      *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + (int)param_2;
      if ((*(int *)(iVar2 + 0x38) == 0x7fff) || (0x3a9 < *(uint *)(iVar2 + 0x3c))) {
        FUN_004832b5();
      }
    }
  }
  **(undefined4 **)(iVar3 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
  uVar5 = *(uint *)(iVar3 + 0x18);
  *(undefined4 *)(uVar5 + 4) = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(iVar3 + 0xbc) != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      uVar5 = *(int *)(iVar2 + 0x48) + 1U & 7;
      *(int *)(iVar2 + 0x44) = *(int *)(iVar3 + 0xbc);
      *(uint *)(iVar2 + 0x48) = uVar5;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}

