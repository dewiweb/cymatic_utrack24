// rea decompile_all
// name: FUN_00642150
// address: 0x642150
// body: available
// range: 0x642150-0x6426f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00642150(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,float param_8,float param_9,uint param_10
                 ,float param_11)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  float fVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  int *in_ECX;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071fd6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar7 = (float)FUN_0044ec90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar4 = param_3;
  iVar19 = 1;
  fVar17 = param_8;
  if (((int)fVar7 < 0xd) && (cVar6 = FUN_0062e1c0(" -\t\r\n"), fVar17 = param_8, cVar6 == '\0')) {
    fVar17 = 1.4013e-45;
  }
  if ((int)fVar7 < (int)fVar17) {
    fVar17 = fVar7;
  }
  puVar14 = param_2;
  fVar23 = param_9;
  fVar7 = param_6;
  if (1 < (int)fVar17) {
    do {
      iVar19 = iVar19 + 1;
      fVar22 = param_7 / (float)iVar19;
      if (fVar22 < (float)puVar14[5]) {
        fVar7 = fVar22;
        if (fVar22 <= 8.0) {
          fVar7 = 8.0;
        }
        param_8 = 0.1;
        if ((0.1 <= fVar7) && (param_8 = 10000.0, fVar7 <= 10000.0)) {
          param_8 = fVar7;
        }
        if ((float)puVar14[5] != param_8) {
          piVar11 = puVar14 + 1;
          LOCK();
          iVar1 = *piVar11;
          *piVar11 = *piVar11;
          UNLOCK();
          puVar14 = param_2;
          if (1 < iVar1) {
            operator_new(0x28);
            puVar8 = (undefined4 *)FUN_00468cb0(param_2);
            puVar14 = param_2;
            if (param_2 != puVar8) {
              if (puVar8 != (undefined4 *)0x0) {
                LOCK();
                puVar8[1] = puVar8[1] + 1;
                UNLOCK();
              }
              puVar14 = puVar8;
              if (param_2 != (undefined4 *)0x0) {
                LOCK();
                piVar11 = param_2 + 1;
                iVar1 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar1 == 1) {
                  puVar14 = (undefined4 *)*param_2;
                  param_2 = puVar8;
                  (*(code *)*puVar14)(1);
                  puVar14 = param_2;
                }
              }
            }
          }
          param_2 = puVar14;
          param_2[5] = param_8;
          if (((((int *)param_2[2] != (int *)0x0) &&
               (pcVar5 = *(code **)(*(int *)param_2[2] + 4), pcVar5 != FUN_00464450)) &&
              (cVar6 = (*pcVar5)(&param_2), cVar6 == '\0')) &&
             (puVar14 = (undefined4 *)param_2[2], puVar14 != (undefined4 *)0x0)) {
            param_2[2] = 0;
            LOCK();
            piVar11 = puVar14 + 1;
            iVar1 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)*puVar14)(1);
            }
          }
        }
        FUN_0046e420(param_3,in_ECX[2]);
        FUN_00642ff0(&param_2,param_1,param_5,0x501502f9,0);
        iVar1 = *in_ECX;
        fVar23 = (*(float *)(iVar1 + -8 + in_ECX[2] * 0x1c) +
                 *(float *)(iVar1 + -0x10 + in_ECX[2] * 0x1c)) -
                 *(float *)(iVar1 + 0xc + param_3 * 0x1c);
        puVar14 = param_2;
        fVar7 = param_6;
      }
    } while ((((float)iVar19 <= (fVar23 + 80.0) / fVar7) && (8.0 <= fVar22)) &&
            (iVar19 < (int)fVar17));
    if (iVar19 < 1) {
      iVar19 = 1;
    }
  }
  param_9 = fVar23 / (float)iVar19;
  fVar23 = param_5 + param_7;
  fVar17 = param_5;
joined_r0x006423b4:
  if (fVar17 < fVar23) {
    fVar22 = (float)puVar14[5];
    param_8 = (float)*in_ECX;
    iVar19 = param_3 * 0x1c;
    pfVar9 = (float *)(iVar19 + 0xc + (int)param_8);
    fVar2 = *pfVar9;
    if (fVar22 + fVar17 < fVar23) {
      iVar1 = in_ECX[2];
      for (iVar15 = param_3; iVar18 = iVar15, iVar15 < iVar1; iVar15 = iVar15 + 1) {
        if (param_9 < (pfVar9[2] + *pfVar9) - fVar2) {
          if (iVar15 < iVar1) {
            pfVar9 = (float *)(iVar15 * 0x1c + (int)param_8 + 0xc);
            goto LAB_00642453;
          }
          break;
        }
        pfVar9 = pfVar9 + 7;
      }
      goto LAB_006424dc;
    }
    iVar15 = in_ECX[2];
    param_9 = fVar7;
    goto LAB_00642542;
  }
  goto LAB_0064268c;
  while( true ) {
    if ((*(char *)(pfVar9 + 3) != '\0') || (pfVar9[-2] == 6.30584e-44)) {
      iVar18 = iVar18 + 1;
      break;
    }
    iVar18 = iVar18 + 1;
    pfVar9 = pfVar9 + 7;
    if (iVar1 <= iVar18) break;
LAB_00642453:
    if (fVar7 <= ((pfVar9[2] + *pfVar9) - fVar2) * param_11) {
      iVar13 = 1;
      iVar16 = (iVar15 - param_3) + -1;
      iVar10 = 7;
      if (iVar16 < 7) {
        iVar10 = iVar16;
      }
      iVar18 = iVar15;
      if (1 < iVar10) {
        iVar10 = 7;
        if (iVar16 < 7) {
          iVar10 = iVar16;
        }
        piVar11 = (int *)(iVar15 * 0x1c + (int)param_8 + -0x18);
        iVar16 = iVar15;
        goto LAB_006424c0;
      }
      break;
    }
  }
  goto LAB_006424dc;
  while( true ) {
    iVar13 = iVar13 + 1;
    piVar11 = piVar11 + -7;
    iVar18 = iVar15;
    iVar16 = iVar16 + -1;
    if (iVar10 <= iVar13) break;
LAB_006424c0:
    iVar18 = iVar16;
    if (((char)piVar11[5] != '\0') || (*piVar11 == 0x2d)) break;
  }
LAB_006424dc:
  iVar15 = iVar18;
  if (0 < iVar18) {
    pcVar12 = (char *)((int)param_8 + (iVar18 * 7 + -1) * 4);
    do {
      if (*pcVar12 == '\0') break;
      iVar15 = iVar15 + -1;
      pcVar12 = pcVar12 + -0x1c;
    } while (0 < iVar15);
  }
  if (iVar18 < iVar1) {
    pcVar12 = (char *)((int)param_8 + (iVar18 * 7 + 6) * 4);
    do {
      if (*pcVar12 == '\0') break;
      iVar18 = iVar18 + 1;
      pcVar12 = pcVar12 + 0x1c;
    } while (iVar18 < iVar1);
  }
  iVar16 = iVar18 - iVar15;
  if (iVar18 - iVar15 < 0) {
    iVar16 = iVar1;
  }
  FUN_0046e420(iVar15,iVar16);
  puVar14 = param_2;
  fVar7 = param_6;
  if (iVar15 < param_3 + 1) {
    iVar15 = param_3 + 1;
  }
LAB_00642542:
  uVar3 = puVar14[5];
  iVar18 = iVar15 - param_3;
  iVar1 = *in_ECX;
  uVar20 = param_10 & 0x47;
  param_8 = 0.0;
  fVar2 = *(float *)(iVar19 + 0xc + iVar1);
  iVar19 = (param_3 + iVar18) * 0x1c;
  fVar21 = (*(float *)(iVar19 + -8 + iVar1) + *(float *)(iVar19 + -0x10 + iVar1)) - fVar2;
  if (fVar7 < fVar21) {
    if (param_11 < 1.0) {
      FUN_006429a0(param_3,iVar18);
      fVar21 = ((*(float *)(iVar19 + -8 + *in_ECX) + *(float *)(iVar19 + -0x10 + *in_ECX)) - fVar2)
               - 0.5;
      fVar7 = param_6;
    }
    if (fVar7 < fVar21) {
      param_8 = (float)FUN_00642dd0(&param_2,param_3,iVar15);
      iVar18 = iVar18 - (int)param_8;
      fVar7 = param_6;
    }
  }
  FUN_00642800(param_3,iVar18,fVar17,fVar7,uVar3,uVar20 | 0x20);
  param_3 = iVar15 - (int)param_8;
  puVar14 = param_2;
  fVar7 = param_6;
  fVar17 = fVar22 + fVar17;
  if (in_ECX[2] <= param_3) {
LAB_0064268c:
    FUN_00642800(iVar4,in_ECX[2] - iVar4,param_5,param_6,param_7,param_10 & 0xffffffbf);
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar11 = param_2 + 1;
      iVar4 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*param_2)(1);
      }
    }
    ExceptionList = local_10;
    return;
  }
  goto joined_r0x006423b4;
}

