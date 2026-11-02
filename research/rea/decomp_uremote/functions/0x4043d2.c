// rea decompile_all
// name: FUN_004043d2
// address: 0x4043d2
// body: available
// range: 0x4043d2-0x404547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004043d2(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(in_EDX + 0x68) & 4;
  iVar6 = 0x40;
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)(param_2 + 0xc) & 1) == 0)) {
      iVar6 = (uint)(param_4 == 1) * 2 + 0x3b;
    }
    else {
      iVar6 = (-(uint)(param_4 != 1) & 0xfffffffa) + 0x37;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_2 + 4);
  uVar2 = FUN_00404299(param_4);
  uVar4 = ((iVar5 + iVar3) / 2 - (int)uVar2 / 2) + param_3;
  param_3 = 0;
  iVar5 = uVar4 - (uVar4 & 0xffffffc0);
  iVar3 = (uVar4 + uVar2) - (uVar4 + uVar2 & 0xffffffc0);
  iVar7 = 0x40 - iVar5;
  if ((iVar5 != 0) && (iVar3 != 0)) {
    if (iVar6 < (int)uVar2) {
      if ((0x3f < iVar6) ||
         ((((iVar5 < iVar6 && (iVar7 < iVar6)) && (iVar3 < iVar6)) && (0x40 - iVar3 < iVar6)))) {
        uVar8 = uVar2 & 0x3f;
        if (uVar8 < 0x20) {
          if ((iVar7 <= (int)uVar8) || (iVar3 <= (int)uVar8)) goto LAB_004044f6;
        }
        else {
          uVar8 = 0x40 - iVar6;
        }
        iVar5 = iVar6 - iVar3;
        param_3 = iVar7 - uVar8;
        if (iVar6 - iVar7 <= param_3) {
          param_3 = -(iVar6 - iVar7);
        }
        if ((int)(iVar3 - uVar8) <= iVar5) {
          iVar5 = -(iVar3 - uVar8);
        }
        iVar6 = param_3;
        if (param_3 < 0) {
          iVar6 = -param_3;
        }
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = -iVar5;
        }
        if (iVar3 < iVar6) {
          param_3 = iVar5;
        }
      }
    }
    else if ((iVar3 < (int)uVar2) && (param_3 = iVar7, iVar3 < iVar7)) {
      param_3 = -iVar3;
    }
  }
LAB_004044f6:
  if ((uVar1 == 0) && ((iVar6 = 0xe, 0xe < param_3 || (iVar6 = -0xe, param_3 < -0xe)))) {
    param_3 = iVar6;
  }
  iVar6 = uVar4 + param_3;
  if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
    *(int *)(param_1 + 8) = iVar6;
    iVar6 = iVar6 + uVar2;
  }
  else {
    *(uint *)(param_1 + 8) = uVar2 + iVar6;
  }
  *(int *)(param_2 + 8) = iVar6;
  return param_3;
}

