// rea decompile_all
// name: FUN_00512c10
// address: 0x512c10
// body: available
// range: 0x512c10-0x5130a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00512c10(int param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *in_ECX;
  int *piVar10;
  double in_XMM0_Qa;
  double dVar11;
  double local_38;
  int local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00708e2a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[1] = &DAT_00bfe12c;
  piVar10 = in_ECX + 2;
  *in_ECX = MixerPreset::vftable;
  *piVar10 = (int)&DAT_00bfe12c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  piVar1 = (int *)(param_1 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  iVar5 = *piVar10;
  *piVar10 = param_1;
  UNLOCK();
  piVar10 = (int *)(iVar5 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  FUN_006351a0();
  local_8 = CONCAT31(local_8._1_3_,7);
  iVar5 = FUN_00634f90();
  if (iVar5 != 0) {
    iVar6 = FUN_00448730(*(undefined4 *)(iVar5 + 0xc));
    if (iVar6 == 0) {
      local_38 = in_XMM0_Qa;
      for (puVar3 = *(undefined4 **)(iVar5 + 4); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        do {
          iVar6 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar6 - iVar7 != 0) && ((iVar6 - iVar7 >> 0x1f & 0xfffffffeU) != 0xffffffff)) {
            iVar6 = FUN_00448730(puVar3[3]);
            if (iVar6 != 0) {
              iVar6 = FUN_00448730(puVar3[3]);
              if (iVar6 == 0) {
                for (puVar8 = (undefined4 *)puVar3[1]; puVar8 != (undefined4 *)0x0;
                    puVar8 = (undefined4 *)*puVar8) {
                  do {
                    iVar6 = FUN_00443260();
                    iVar7 = FUN_00443260();
                    if ((iVar6 - iVar7 != 0) &&
                       ((iVar6 - iVar7 >> 0x1f & 0xfffffffeU) != 0xffffffff)) goto LAB_00513031;
                  } while (iVar6 != 0);
                  iVar6 = FUN_0061a410();
                  if (iVar6 == 0) {
                    local_38 = 0.0;
                  }
                  else {
                    FUN_0045c380();
                  }
                  dVar11 = 0.0;
                  iVar6 = FUN_0061a410();
                  if (iVar6 != 0) {
                    FUN_0045c380();
                  }
                  iVar6 = FUN_0061a410();
                  if (iVar6 == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = FID_conflict__atoi(*(char **)(iVar6 + 8));
                  }
                  iVar7 = FUN_0061a410();
                  if (iVar7 == 0) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = FID_conflict__atoi(*(char **)(iVar7 + 8));
                  }
                  if ((int)in_ECX[4] < in_ECX[5] + 1) {
                    FUN_00409cf0();
                  }
                  iVar9 = in_ECX[5];
                  in_ECX[5] = iVar9 + 1;
                  pfVar2 = (float *)(in_ECX[3] + iVar9 * 4);
                  if (pfVar2 != (float *)0x0) {
                    *pfVar2 = (float)local_38;
                  }
                  if ((int)in_ECX[7] < in_ECX[8] + 1) {
                    FUN_00409cf0();
                  }
                  local_38 = (double)(ulonglong)(uint)(float)dVar11;
                  iVar9 = in_ECX[8];
                  in_ECX[8] = iVar9 + 1;
                  pfVar2 = (float *)(in_ECX[6] + iVar9 * 4);
                  if (pfVar2 != (float *)0x0) {
                    *pfVar2 = (float)dVar11;
                  }
                  if ((int)in_ECX[0xd] < in_ECX[0xe] + 1) {
                    FUN_00412690();
                  }
                  iVar9 = in_ECX[0xe];
                  in_ECX[0xe] = iVar9 + 1;
                  iVar9 = in_ECX[0xc] + iVar9;
                  if (iVar9 != 0) {
                    *(bool *)iVar9 = iVar6 != 0;
                  }
                  if ((int)in_ECX[10] < in_ECX[0xb] + 1) {
                    FUN_00412690();
                  }
                  iVar6 = in_ECX[0xb];
                  in_ECX[0xb] = iVar6 + 1;
                  iVar6 = in_ECX[9] + iVar6;
                  if (iVar6 != 0) {
                    *(bool *)iVar6 = iVar7 != 0;
                  }
LAB_00513031:
                }
              }
              goto LAB_00513041;
            }
            puVar8 = (undefined4 *)FUN_00634a80();
            iVar6 = FID_conflict__atoi((char *)*puVar8);
            *(bool *)(in_ECX + 0xf) = iVar6 != 0;
            iVar6 = local_28;
            goto LAB_00512dce;
          }
        } while (iVar6 != 0);
        puVar8 = (undefined4 *)FUN_00634a80();
        uVar4 = in_ECX[1];
        in_ECX[1] = *puVar8;
        *puVar8 = uVar4;
        iVar6 = local_2c;
LAB_00512dce:
        piVar10 = (int *)(iVar6 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar10);
          }
        }
LAB_00513041:
      }
    }
    FUN_00634ec0();
    FUN_004bfe14(iVar5);
  }
  FUN_00635110();
  piVar10 = (int *)(param_1 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

