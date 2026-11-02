// rea decompile_all
// name: FUN_00414637
// address: 0x414637
// body: available
// range: 0x414637-0x4147c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00414637(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 < *param_4) {
    *param_4 = param_1;
  }
  else if (*param_5 < param_1) {
    *param_5 = param_1;
  }
  if (in_EAX < *param_4) {
    *param_4 = in_EAX;
  }
  else if (*param_5 < in_EAX) {
    *param_5 = in_EAX;
  }
  if (in_EAX < param_1) {
    if ((((param_2 <= param_1) && (in_EAX <= param_2)) && (param_3 <= param_1)) &&
       (in_EAX <= param_3)) {
      return;
    }
  }
  else if (((param_1 <= param_2) && (param_2 <= in_EAX)) &&
          ((param_1 <= param_3 && (param_3 <= in_EAX)))) {
    return;
  }
  bVar1 = 0;
  uVar8 = ((param_2 - param_3) * 3 - param_1) + in_EAX;
  uVar9 = param_1 + param_2 * -2 + param_3;
  uVar2 = param_2 - param_1;
  uVar7 = uVar8;
  if ((int)uVar8 < 0) {
    uVar7 = -uVar8;
  }
  uVar5 = uVar9;
  if ((int)uVar9 < 0) {
    uVar5 = -uVar9;
  }
  uVar6 = uVar2;
  if ((int)uVar2 < 0) {
    uVar6 = -uVar2;
  }
  uVar6 = uVar7 | uVar5 | uVar6;
  if (uVar6 != 0) {
    if (uVar6 < 0x800000) {
      if (uVar6 < 0x400000) {
        do {
          bVar1 = bVar1 + 1;
          uVar6 = uVar6 * 2;
        } while (uVar6 < 0x400000);
        uVar8 = uVar8 << (bVar1 & 0x1f);
        uVar9 = uVar9 << (bVar1 & 0x1f);
        uVar2 = uVar2 << (bVar1 & 0x1f);
      }
    }
    else {
      do {
        bVar1 = bVar1 + 1;
        uVar6 = uVar6 >> 1;
      } while (0x7fffff < uVar6);
      uVar8 = (int)uVar8 >> (bVar1 & 0x1f);
      uVar9 = (int)uVar9 >> (bVar1 & 0x1f);
      uVar2 = (int)uVar2 >> (bVar1 & 0x1f);
    }
    if (uVar8 == 0) {
      if (uVar9 == 0) {
        return;
      }
      FUN_0040d2d8(param_5);
    }
    else {
      iVar3 = thunk_FUN_00401000(uVar8,uVar2);
      iVar4 = thunk_FUN_00401000(uVar9,uVar9);
      if (iVar4 - iVar3 < 0) {
        return;
      }
      if (iVar4 == iVar3) {
        FUN_0040d2d8(param_5);
      }
      else {
        FUN_0040d4c7();
        FUN_0040d2d8(param_5);
        FUN_004145e1(param_1,param_3);
        FUN_0040d2d8(param_5);
      }
    }
    FUN_004145e1(param_1,param_3);
  }
  return;
}

