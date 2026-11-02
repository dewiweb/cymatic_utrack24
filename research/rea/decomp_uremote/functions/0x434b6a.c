// rea decompile_all
// name: FUN_00434b6a
// address: 0x434b6a
// body: available
// range: 0x434b6a-0x434ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434b6a(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte extraout_CL;
  byte bVar8;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  iVar7 = param_2[4];
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar3 = (byte *)param_2[2];
  piVar1 = param_2 + 0x3f;
  bVar5 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar3) {
    bVar8 = *(byte *)*param_2;
    if (bVar8 - 0x30 < 10) {
      iVar6 = (*(code *)param_2[9])(param_2);
      param_2[0x24] = iVar6;
      if (param_2[3] != 0) {
        return;
      }
LAB_00434c2c:
      if ((byte *)*param_2 < pbVar3) {
        iVar6 = (**(code **)*puVar2)(param_2 + 0x32,param_2[0x24],iVar7);
        if (((iVar6 != 0) ||
            (iVar6 = (**(code **)*puVar2)(param_2 + 0x25,param_2[0x24],iVar7), iVar6 != 0)) ||
           (iVar6 = (**(code **)*puVar2)(piVar1,4,iVar7), iVar6 != 0)) goto LAB_00434bea;
        local_8 = 0;
        do {
          do {
            (*(code *)param_2[7])(param_2);
            pbVar4 = (byte *)*param_2;
            if (((pbVar3 <= pbVar4) ||
                (((bVar8 = *pbVar4, bVar8 == 0x65 && (pbVar4 + 3 < pbVar3)) &&
                 ((pbVar4[1] == 0x6e &&
                  ((pbVar4[2] == 100 && (iVar7 = FUN_004344fc(), bVar8 = extraout_CL, iVar7 != 0))))
                 )))) || (bVar8 == 0x3e)) goto LAB_00434d9f;
            (*(code *)param_2[8])(param_2);
            if (param_2[3] != 0) {
              return;
            }
          } while (*pbVar4 != 0x2f);
          pbVar4 = pbVar4 + 1;
          if (pbVar3 <= pbVar4) goto LAB_00434be7;
          iVar7 = *param_2;
          iVar6 = (*(code *)param_2[0x30])(param_2 + 0x25,local_8,pbVar4,(iVar7 - (int)pbVar4) + 1);
          if (iVar6 != 0) goto LAB_00434bea;
          *(undefined1 *)((iVar7 - (int)pbVar4) + *(int *)(param_2[0x2b] + local_8 * 4)) = 0;
          if ((*pbVar4 == 0x2e) &&
             (iVar7 = _strcmp(".notdef",*(char **)(param_2[0x2b] + local_8 * 4)), iVar7 == 0)) {
            local_c = local_8;
            bVar5 = true;
          }
          (*(code *)param_2[7])(param_2);
          iVar7 = *param_2;
          (*(code *)param_2[9])(param_2);
          pbVar4 = (byte *)*param_2;
          if (pbVar3 <= pbVar4) goto LAB_00434be7;
          iVar6 = (*(code *)param_2[0x3d])(param_2 + 0x32,local_8,iVar7,pbVar4 + (1 - iVar7));
          if (iVar6 != 0) goto LAB_00434bea;
          iVar6 = local_8 * 4;
          local_8 = local_8 + 1;
          pbVar4[*(int *)(param_2[0x38] + iVar6) - iVar7] = 0;
        } while (local_8 < (uint)param_2[0x24]);
LAB_00434d9f:
        param_2[0x24] = local_8;
        if (bVar5) {
          iVar7 = _strcmp(".notdef",*(char **)param_2[0x2b]);
          if (iVar7 == 0) {
            return;
          }
          iVar6 = (*(code *)param_2[0x4a])
                            (piVar1,0,*(undefined4 *)param_2[0x2b],*(undefined4 *)param_2[0x2c]);
          if (((((iVar6 == 0) &&
                (iVar6 = (*(code *)param_2[0x4a])
                                   (piVar1,1,*(undefined4 *)param_2[0x38],
                                    *(undefined4 *)param_2[0x39]), iVar6 == 0)) &&
               (iVar6 = (*(code *)param_2[0x4a])
                                  (piVar1,2,*(undefined4 *)(param_2[0x2b] + local_c * 4),
                                   *(undefined4 *)(param_2[0x2c] + local_c * 4)), iVar6 == 0)) &&
              ((iVar6 = (*(code *)param_2[0x4a])
                                  (piVar1,3,*(undefined4 *)(param_2[0x38] + local_c * 4),
                                   *(undefined4 *)(param_2[0x39] + local_c * 4)), iVar6 == 0 &&
               (iVar6 = (*(code *)param_2[0x30])
                                  (param_2 + 0x25,local_c,*(undefined4 *)param_2[0x45],
                                   *(undefined4 *)param_2[0x46]), iVar6 == 0)))) &&
             ((iVar6 = (*(code *)param_2[0x3d])
                                 (param_2 + 0x32,local_c,*(undefined4 *)(param_2[0x45] + 4),
                                  *(undefined4 *)(param_2[0x46] + 4)), iVar6 == 0 &&
              ((iVar6 = (*(code *)param_2[0x30])
                                  (param_2 + 0x25,0,*(undefined4 *)(param_2[0x45] + 8),
                                   *(undefined4 *)(param_2[0x46] + 8)), iVar6 == 0 &&
               (iVar6 = (*(code *)param_2[0x3d])
                                  (param_2 + 0x32,0,*(undefined4 *)(param_2[0x45] + 0xc),
                                   *(undefined4 *)(param_2[0x46] + 0xc)), iVar6 == 0)))))) {
            return;
          }
          goto LAB_00434bea;
        }
      }
    }
    else if (bVar8 == 0x3c) {
      local_8 = 0;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar4 = (byte *)*param_2;
      if (pbVar4 < pbVar3) {
        do {
          if (*(char *)*param_2 == '/') {
            local_8 = local_8 + 1;
          }
          else if (*(char *)*param_2 == '>') {
            param_2[0x24] = local_8;
            *param_2 = (int)pbVar4;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
        } while ((byte *)*param_2 < pbVar3);
        goto LAB_00434c2c;
      }
    }
  }
LAB_00434be7:
  iVar6 = 3;
LAB_00434bea:
  param_2[3] = iVar6;
  return;
}

