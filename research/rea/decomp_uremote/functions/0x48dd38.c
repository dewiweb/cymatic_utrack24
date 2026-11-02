// rea decompile_all
// name: FUN_0048dd38
// address: 0x48dd38
// body: available
// range: 0x48dd38-0x48dec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dd38(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_428 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = *(int *)(in_EAX + 0x70);
  local_28 = param_2 * 2 + 0x1c >> 1;
  local_24 = param_3 * 2 + 0x18 >> 1;
  local_10 = 0x7fffffff;
  if (0 < *(int *)(in_EAX + 0x70)) {
    piVar1 = *(int **)(in_EAX + 0x74);
    local_20 = *piVar1;
    local_18 = piVar1[1];
    local_1c = piVar1[2];
    do {
      iVar5 = local_10;
      uVar3 = (uint)*(byte *)(local_20 + local_8);
      iVar4 = param_1 + 0x18;
      if ((int)uVar3 < param_1) {
        iVar6 = (uVar3 - param_1) * 2;
        iVar6 = iVar6 * iVar6;
LAB_0048ddae:
        iVar7 = iVar4;
      }
      else {
        iVar7 = param_1;
        if (iVar4 < (int)uVar3) {
          iVar6 = (uVar3 - iVar4) * 2;
          iVar6 = iVar6 * iVar6;
        }
        else {
          iVar6 = 0;
          if ((int)uVar3 <= param_1 * 2 + 0x18 >> 1) goto LAB_0048ddae;
        }
      }
      iVar4 = (uVar3 - iVar7) * 2;
      uVar3 = (uint)*(byte *)(local_18 + local_8);
      if ((int)uVar3 < param_2) {
        iVar7 = (uVar3 - param_2) * 3;
        iVar6 = iVar6 + iVar7 * iVar7;
        iVar7 = uVar3 - (param_2 + 0x1c);
      }
      else {
        local_14 = param_2 + 0x1c;
        if (local_14 < (int)uVar3) {
          iVar7 = (uVar3 - local_14) * 3;
          iVar6 = iVar6 + iVar7 * iVar7;
        }
        else if ((int)uVar3 <= local_28) {
          iVar7 = uVar3 - local_14;
          goto LAB_0048de1c;
        }
        iVar7 = uVar3 - param_2;
      }
LAB_0048de1c:
      uVar3 = (uint)*(byte *)(local_1c + local_8);
      if ((int)uVar3 < param_3) {
        iVar6 = iVar6 + (uVar3 - param_3) * (uVar3 - param_3);
LAB_0048de45:
        iVar2 = param_3 + 0x18;
      }
      else {
        local_14 = param_3 + 0x18;
        iVar2 = param_3;
        if (local_14 < (int)uVar3) {
          iVar6 = iVar6 + (uVar3 - local_14) * (uVar3 - local_14);
        }
        else if ((int)uVar3 <= local_24) goto LAB_0048de45;
      }
      iVar4 = iVar4 * iVar4 + iVar7 * 3 * iVar7 * 3 + (uVar3 - iVar2) * (uVar3 - iVar2);
      aiStack_428[local_8] = iVar6;
      if (iVar4 < iVar5) {
        local_10 = iVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_c);
  }
  iVar5 = 0;
  iVar4 = 0;
  if (0 < local_c) {
    do {
      if (aiStack_428[iVar5] <= local_10) {
        *(char *)(iVar4 + param_4) = (char)iVar5;
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_c);
  }
  return;
}

