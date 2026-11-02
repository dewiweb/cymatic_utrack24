// rea decompile_all
// name: FUN_0041c965
// address: 0x41c965
// body: available
// range: 0x41c965-0x41cb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c965(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  piVar3 = param_1;
  local_14 = param_3 * 0xcc + 4 + param_2;
  uVar1 = *(undefined4 *)(local_14 + 0xc4);
  local_8 = *(int *)(local_14 + 200);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  local_10 = uVar1;
  iVar4 = thunk_FUN_00401000(*param_1,uVar1);
  uVar10 = iVar4 + local_8;
  iVar4 = thunk_FUN_00401000(param_1[1],uVar1);
  if ((param_3 == 0) && (*(char *)(param_4 + 0x78) == '\0')) {
LAB_0041c9dd:
    param_1[2] = uVar10;
    param_1[3] = iVar4;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0x79) == '\0') goto LAB_0041c9dd;
      if (*(char *)(param_4 + 0x7b) == '\0') goto LAB_0041c9f5;
LAB_0041cacb:
      local_8 = 1;
    }
    else {
      if ((param_3 == 0) && (*(char *)(param_4 + 0x7a) != '\0')) goto LAB_0041cacb;
LAB_0041c9f5:
      local_8 = 0;
    }
    param_1[3] = iVar4;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (param_3 == 1) {
      FUN_0041c353(param_1[1] + *param_1,*param_1,&local_20);
    }
    if (local_20 == 1) {
      local_18 = local_1c - iVar4;
    }
    else if (local_20 != 2) {
      if (local_20 == 3) {
        param_1[3] = local_1c - local_18;
      }
      else {
        piVar2 = (int *)param_1[5];
        local_c = piVar2;
        if (piVar2 != (int *)0x0) {
          if ((*(byte *)(piVar2 + 4) & 8) == 0) {
            FUN_0041c965(piVar2,param_2,param_3,param_4);
          }
          iVar8 = piVar2[3];
          iVar9 = local_c[2];
          iVar5 = thunk_FUN_00401000(((param_1[1] >> 1) + *param_1) - ((piVar2[1] >> 1) + *piVar2),
                                     local_10);
          uVar10 = iVar5 + (((iVar8 >> 1) + iVar9) - (iVar4 >> 1));
        }
        param_1[2] = uVar10;
        param_1[3] = iVar4;
        param_1 = (int *)iVar4;
        if (*(char *)(param_4 + 0x7c) != '\0') {
          param_1 = (int *)0x40;
          if (iVar4 < 0x41) {
            if (iVar4 < 0x20) {
              if (iVar4 < 1) {
                uVar10 = uVar10 + 0x20 & 0xffffffc0;
                param_1 = (int *)iVar4;
              }
              else {
                uVar7 = iVar4 + 0x20 + uVar10 & 0xffffffc0;
                uVar6 = uVar10 + 0x20 & 0xffffffc0;
                iVar9 = uVar6 - uVar10;
                iVar8 = (uVar7 - iVar4) - uVar10;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                uVar10 = uVar7;
                param_1 = (int *)iVar4;
                if (iVar9 <= iVar8) {
                  uVar10 = uVar6;
                }
              }
            }
            else {
              uVar10 = (iVar4 >> 1) + uVar10 & 0xffffffc0;
            }
          }
          else {
            param_1 = (int *)FUN_0041c8e4();
          }
        }
        local_18 = FUN_0041c937();
        local_18 = local_18 + uVar10;
        piVar3[3] = (int)param_1;
      }
    }
    piVar3[2] = local_18;
    if (local_8 != 0) {
      if (piVar3[3] < 0x40) {
        uVar10 = 0x40;
      }
      else {
        uVar10 = piVar3[3] + 0x20U & 0xffffffc0;
      }
      if (local_20 == 1) {
        piVar3[2] = local_1c - uVar10;
      }
      else if (local_20 != 2) {
        if (local_20 == 3) goto LAB_0041cb97;
        iVar4 = (int)uVar10 >> 1;
        piVar3[3] = uVar10;
        if ((uVar10 & 0x40) == 0) {
          uVar6 = iVar4 + 0x20 + local_18 & 0xffffffc0;
        }
        else {
          uVar6 = (local_18 + iVar4 & 0xffffffc0U) + 0x20;
        }
        piVar3[2] = uVar6 - iVar4;
      }
      piVar3[3] = uVar10;
    }
  }
LAB_0041cb97:
  piVar3[4] = piVar3[4] | 8;
  return;
}

