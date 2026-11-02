// rea decompile_all
// name: FUN_00489d90
// address: 0x489d90
// body: available
// range: 0x489d90-0x48a0f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00489d90(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int aiStack_144 [64];
  uint local_44;
  uint local_40;
  short *local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar4 = param_1;
  local_14 = param_1[0x5c];
  iVar2 = param_1[0x66];
  local_40 = 1 << ((byte)param_1[0x5e] & 0x1f);
  local_44 = -1 << ((byte)param_1[0x5e] & 0x1f);
  if (((param_1[0x3f] != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (cVar5 = FUN_00489856(), cVar5 == '\0')) {
    return 0;
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    local_34 = *(undefined4 *)param_1[6];
    local_30 = ((undefined4 *)param_1[6])[1];
    local_20 = 0;
    iVar8 = *(int *)(iVar2 + 0x10);
    local_18 = *param_2;
    local_1c = *(int *)(iVar2 + 0x3c);
    local_10 = *(int *)(iVar2 + 0x14);
    local_8 = param_1[0x5b];
    local_24 = param_1;
    param_1 = (int *)*(int *)(iVar2 + 0xc);
    if (local_10 == 0) {
      for (; local_8 <= local_14; local_8 = local_8 + 1) {
        if (iVar8 < 8) {
          cVar5 = FUN_004863c3(param_1,iVar8,0);
          if (cVar5 == '\0') goto LAB_0048a0e8;
          param_1 = (int *)local_2c;
          iVar8 = local_28;
          if (7 < local_28) goto LAB_00489e68;
          uVar6 = 1;
LAB_00489e95:
          local_c = FUN_004864bd(local_1c,uVar6);
          if ((int)local_c < 0) goto LAB_0048a0e8;
          param_1 = (int *)local_2c;
          iVar8 = local_28;
        }
        else {
LAB_00489e68:
          uVar7 = (int)param_1 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
          iVar3 = *(int *)(local_1c + 0x90 + uVar7 * 4);
          if (iVar3 == 0) {
            uVar6 = 9;
            goto LAB_00489e95;
          }
          local_c = (uint)*(byte *)(uVar7 + 0x490 + local_1c);
          iVar8 = iVar8 - iVar3;
        }
        local_38 = (int)local_c >> 4;
        local_c = local_c & 0xf;
        if (local_c == 0) {
          uVar7 = 0;
          if (local_38 != 0xf) {
            local_1c = 1 << ((byte)local_38 & 0x1f);
            local_10 = local_1c;
            if (local_38 == 0) goto LAB_0048a02b;
            if (iVar8 < local_38) {
              cVar5 = FUN_004863c3(param_1,iVar8,local_38);
              if (cVar5 == '\0') goto LAB_0048a0e8;
              param_1 = (int *)local_2c;
              iVar8 = local_28;
            }
            iVar8 = iVar8 - local_38;
            local_10 = local_10 + ((int)param_1 >> ((byte)iVar8 & 0x1f) & local_1c - 1U);
            goto LAB_0048a02b;
          }
        }
        else {
          if (local_c != 1) {
            *(undefined4 *)(*piVar4 + 0x14) = 0x76;
            (**(code **)(*piVar4 + 4))(piVar4,0xffffffff);
          }
          if (iVar8 < 1) {
            cVar5 = FUN_004863c3(param_1,iVar8,1);
            if (cVar5 == '\0') goto LAB_0048a0e8;
            param_1 = (int *)local_2c;
            iVar8 = local_28;
          }
          iVar8 = iVar8 + -1;
          uVar7 = local_40;
          if (((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) == 0) {
            uVar7 = local_44;
          }
        }
        do {
          local_c = uVar7;
          local_3c = (short *)(local_18 + (&DAT_005ff498)[local_8] * 2);
          if (*local_3c == 0) {
            local_38 = local_38 + -1;
            if (local_38 < 0) break;
          }
          else {
            if (iVar8 < 1) {
              cVar5 = FUN_004863c3(param_1,iVar8,1);
              if (cVar5 == '\0') goto LAB_0048a0e8;
              param_1 = (int *)local_2c;
              iVar8 = local_28;
            }
            iVar8 = iVar8 + -1;
            if ((((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) != 0) &&
               ((local_40 & (int)*local_3c) == 0)) {
              uVar7 = local_40;
              if (*local_3c < 0) {
                uVar7 = local_44;
              }
              *local_3c = *local_3c + (short)uVar7;
            }
          }
          local_8 = local_8 + 1;
          uVar7 = local_c;
        } while (local_8 <= local_14);
        if (local_c != 0) {
          iVar3 = (&DAT_005ff498)[local_8];
          *(short *)(local_18 + iVar3 * 2) = (short)local_c;
          piVar1 = aiStack_144 + local_20;
          local_20 = local_20 + 1;
          *piVar1 = iVar3;
        }
      }
    }
    else {
LAB_0048a02b:
      if (local_10 != 0) {
        for (; local_8 <= local_14; local_8 = local_8 + 1) {
          local_3c = (short *)(local_18 + (&DAT_005ff498)[local_8] * 2);
          if (*local_3c != 0) {
            if (iVar8 < 1) {
              cVar5 = FUN_004863c3(param_1,iVar8,1);
              if (cVar5 == '\0') {
LAB_0048a0e8:
                for (; 0 < local_20; local_20 = local_20 + -1) {
                  *(undefined2 *)(local_18 + aiStack_144[local_20 + -1] * 2) = 0;
                }
                return 0;
              }
              param_1 = (int *)local_2c;
              iVar8 = local_28;
            }
            iVar8 = iVar8 + -1;
            if ((((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) != 0) &&
               ((local_40 & (int)*local_3c) == 0)) {
              uVar7 = local_40;
              if (*local_3c < 0) {
                uVar7 = local_44;
              }
              *local_3c = *local_3c + (short)uVar7;
            }
          }
        }
        local_10 = local_10 + -1;
      }
    }
    *(undefined4 *)piVar4[6] = local_34;
    *(undefined4 *)(piVar4[6] + 4) = local_30;
    *(int **)(iVar2 + 0xc) = param_1;
    *(int *)(iVar2 + 0x10) = iVar8;
    *(int *)(iVar2 + 0x14) = local_10;
  }
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return 1;
}

