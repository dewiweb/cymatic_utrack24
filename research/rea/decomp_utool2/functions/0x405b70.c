// rea decompile_all
// name: FUN_00405b70
// address: 0x405b70
// body: available
// range: 0x405b70-0x406689 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405b70(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  double *pdVar5;
  void *_Dst;
  double *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  int iStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  double dStack_c8;
  
  local_108 = in_ECX[1] * 0.01;
  dVar10 = in_ECX[2];
  dVar9 = -dVar10;
  if (local_108 < 0.25) {
    if (local_108 < 0.1) {
      if (dVar10 < 117.0) {
        if (dVar10 < 60.0) {
          dVar9 = dVar9 - 0.36;
        }
        else {
          dVar9 = dVar9 - 0.25;
        }
      }
      else {
        dVar9 = dVar9 - 0.21;
      }
    }
    else if (dVar10 < 117.0) {
      if (dVar10 < 60.0) {
        dVar9 = dVar9 - 1.13;
      }
      else {
        dVar9 = dVar9 - 0.73;
      }
    }
    else {
      dVar9 = dVar9 - 0.69;
    }
  }
  else if (dVar10 < 117.0) {
    if (dVar10 < 60.0) {
      dVar9 = dVar9 - 2.25;
    }
    else {
      dVar9 = dVar9 - 1.91;
    }
  }
  else {
    dVar9 = dVar9 - 1.6;
  }
  local_f0 = 0.5 - ((dVar9 + 49.0) * 264.0) / 176.25;
  local_f8 = local_108;
  fVar8 = (float10)FUN_006f9790(local_f0);
  local_f0 = (double)fVar8;
  iVar2 = (int)fVar8;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (0x108 < iVar2) {
    iVar2 = 0x108;
  }
  if (local_f8 < 0.25) {
    if (local_f8 < 0.1) {
      dVar10 = (double)(int)(char)(&DAT_00c06938)[iVar2] / 196.0;
    }
    else {
      dVar10 = (double)(int)(char)(&DAT_00c06c88)[iVar2] / 210.0;
    }
  }
  else {
    dVar10 = (double)(int)(char)(&DAT_00c06b78)[iVar2] / 101.0;
  }
  dVar9 = dVar9 - dVar10;
  dVar10 = dVar9 * 0.00785021930010397;
  FUN_006f7d20();
  local_f0 = dVar9 * dVar9;
  dVar11 = dVar9 * 0.103208573657699 + 0.633854318781239;
  FUN_006f7d20();
  dVar13 = local_f0 * 7.43932822146293e-08;
  dVar12 = dVar9 * 0.0779275237937911;
  FUN_006f7ee0();
  dVar10 = ((((dVar11 * dVar10 * 0.000102747434588003 + dVar13) - 0.00798132247867036) -
            dVar9 * 0.000903555213543865) - dVar12 * 0.0969365532127236) -
           dVar9 * 1.37304948662012e-05 * dVar10;
  local_e8 = dVar10;
  if (0.067665322581 < dVar10) {
    if (local_f8 < 0.25) {
      if (local_f8 < 0.1) {
        dVar11 = dVar10 * 1.1609073390614 - dVar10 * 6.33932586197475 * dVar10 * dVar10;
        FUN_006f7d20();
        dVar12 = dVar10 * 59.7538527741309;
        local_118 = ((dVar10 * 1.15990238966306 - dVar10 * dVar10 * 5.02124037125213) -
                    dVar11 * dVar9 * 0.158676856669827) / local_f8;
        FUN_006f7a30();
        dVar11 = local_f8 * 0.0895511178735932;
        dVar9 = dVar10;
        FUN_006f8470();
        local_120 = dVar12 * dVar11 +
                    dVar9 * local_f8 * 0.052693817907757 + local_f8 * 0.867344453126885;
        dVar9 = dVar10 * 0.0745653568081453 * local_f8;
        uVar3 = extraout_ECX_04;
        goto LAB_0040642e;
      }
      dVar11 = dVar10 * dVar10 + 1.0;
      __libm_sse2_sqrt_precise();
      dVar11 = dVar11 + dVar10;
      FUN_006f8470();
      local_108 = dVar10 * 42.072277322604 + 1.02875299001715;
      fVar8 = (float10)FUN_006f6f89();
      local_108 = (double)fVar8;
      local_120 = local_f8 * 0.992539376734551;
      local_118 = ((dVar11 * 158.222625721046 * local_108 + 1.50277377248945) -
                  dVar9 * 0.0108380943845632) / local_f8;
      dVar9 = dVar10;
      FUN_006f9520();
      local_108 = dVar9;
      FUN_006f6f89();
      fVar8 = (float10)FUN_006f6f89();
      dVar9 = (double)fVar8;
      local_108 = dVar9;
      __libm_sse2_sqrt_precise();
      dVar9 = dVar9 * 6.74159892452584 + 0.251747813037178;
      uVar3 = extraout_ECX_03;
    }
    else {
      dVar11 = dVar10 * dVar10 + 1.0;
      __libm_sse2_sqrt_precise();
      dVar11 = dVar11 + dVar10;
      FUN_006f8470();
      fVar8 = (float10)FUN_006f6f89();
      local_108 = (double)fVar8 * 57.9466246871383;
      fVar8 = (float10)FUN_006f6f89();
      local_108 = (double)fVar8;
      local_120 = local_f8 * 0.994024401639321;
      local_118 = ((dVar11 * 158.556968859477 * local_108 + 1.50258368698213) -
                  dVar9 * 0.0105440479814834) / local_f8;
      dVar9 = dVar10;
      FUN_006f9250();
      __libm_sse2_sqrt_precise();
      dVar9 = dVar9 * 6.8724924545387 + 0.236282717577215;
      uVar3 = extraout_ECX_02;
    }
    local_120 = local_120 - dVar9 / local_118;
  }
  else {
    if (0.25 <= local_f8) {
      dVar11 = dVar10 * 2.68959772209918;
      FUN_006f7a30();
      FUN_006f7a30();
      local_e8 = local_f8 * 5.5099277187035;
      dVar12 = local_f0 + 1.0;
      __libm_sse2_sqrt_precise();
      dVar12 = dVar12 + dVar9;
      FUN_006f8470();
      FUN_006f7d20();
      local_f0 = dVar12;
      fVar8 = (float10)FUN_006f6f89();
      local_f0 = (double)fVar8;
      local_118 = (dVar11 * 300.547590563091) / (local_e8 - local_f0 * local_f8) +
                  2.6778150875894 / local_f8;
      dVar9 = dVar10;
      __libm_sse2_sqrt_precise();
      local_e8 = -0.321432067051302 - dVar9 * 6.19131357321578;
      fVar8 = (float10)FUN_006f6f4a();
      local_108 = (double)fVar8;
      FUN_006f8700();
      dVar9 = 0.9521145021664;
      FUN_006f8700();
      local_108 = dVar9 + (local_118 - 1.14861472207245 / (local_118 - 14.1821147585957));
      fVar8 = (float10)FUN_006f6f4a();
      local_120 = (double)fVar8 * 1.00011788929851 + local_f8 * 0.987205355829873;
      uVar3 = extraout_ECX;
      goto LAB_00406438;
    }
    if (0.1 <= local_f8) {
      dVar11 = dVar10 * 243.633511747297;
      FUN_006f7d20();
      dVar12 = dVar10 * 127.715550622571;
      FUN_006f7d20();
      local_118 = (((dVar11 * 0.00419441117131136 + dVar10 * 142.064321294568 + 1.56688617018066) -
                   dVar9 * 0.022953443903576) - dVar12 * 0.026629568860284) / local_f8;
      dVar9 = dVar10;
      __libm_sse2_sqrt_precise();
      local_108 = (-0.361783054039583 - dVar9 * 5.80540593623676) / local_118;
      dVar9 = local_108 * local_108 + 1.0;
      __libm_sse2_sqrt_precise();
      dVar9 = dVar9 + local_108;
      FUN_006f8470();
      local_120 = dVar9 * 0.999441744774215 + local_f8 * 0.982299356642411;
      uVar3 = extraout_ECX_00;
      goto LAB_00406438;
    }
    local_108 = 0.988861169868941 - dVar10 * 17.2201556280744;
    FUN_006f6f82();
    local_108 = dVar10 * 1.08340138240431;
    fVar8 = (float10)FUN_006f6f4a();
    local_108 = (double)fVar8;
    dVar9 = local_108 + 5.73225668178813;
    FUN_006f7d20();
    local_118 = (dVar9 * dVar10 * 269.183679500541 + 2.45739657014937) / local_f8;
    local_120 = (local_f8 * local_f8 * 0.01942450693 * local_118 + local_f8 * 2.291956939) -
                dVar10 * 4.67538973161837 * local_f8;
    dVar9 = dVar10;
    FUN_006f8700();
    dVar9 = dVar9 * local_f8 * 1.668433124;
    uVar3 = extraout_ECX_01;
LAB_0040642e:
    local_120 = local_120 - dVar9;
  }
LAB_00406438:
  local_108 = 125.0;
  local_e0 = (local_118 * 0.25) / *in_ECX;
  local_f0 = 0.0;
  local_d0 = 0;
  dStack_c8 = (1.0 - local_120) * 3.141592653589793 * *in_ECX;
  dStack_100 = dVar10;
  FUN_004037d0(uVar3,&local_108,uVar3);
  *(int *)(in_ECX + 8) = iStack_d8;
  iVar2 = iStack_d8 + -1;
  if (iVar2 >> 0x10 == 0) {
    if (iVar2 >> 8 == 0) {
      iVar2 = (int)*(char *)((int)&PTR_00c06db4 + iStack_d8 + 3);
    }
    else {
      iVar2 = (char)(&DAT_00c06db8)[iVar2 >> 8] + 8;
    }
  }
  else if (iVar2 >> 0x18 == 0) {
    iVar2 = (char)(&DAT_00c06db8)[iVar2 >> 0x10] + 0x10;
  }
  else {
    iVar2 = (char)(&DAT_00c06db8)[iVar2 >> 0x18 & 0xff] + 0x18;
  }
  *(int *)((int)in_ECX + 0x44) = iVar2;
  iVar6 = 1 << ((byte)iVar2 & 0x1f);
  FID_conflict__free(*(void **)(in_ECX + 9));
  iVar2 = iVar6 * 0x10;
  uVar3 = FUN_004c554b();
  *(undefined4 *)(in_ECX + 9) = uVar3;
  FUN_00408470(uVar3,iVar2);
  *(int *)((int)in_ECX + 0x34) = iStack_d4;
  *(undefined1 *)(in_ECX + 6) = 1;
  in_ECX[7] = 0.0;
  piVar4 = (int *)FUN_00405af0();
  if (*(char *)(in_ECX + 6) == '\0') {
    FUN_00403590();
    iVar2 = iVar6 * 2 - *(int *)(in_ECX + 8);
    _Dst = (void *)(*(int *)(in_ECX + 9) + *(int *)(in_ECX + 8) * 8);
  }
  else {
    iVar2 = *(int *)(in_ECX + 8);
    if (iVar2 < 1) {
      dVar10 = 0.0;
    }
    else {
      pdVar5 = *(double **)(in_ECX + 9);
      do {
        dVar10 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        dVar10 = dVar10 + local_f0;
        iVar2 = iVar2 + -1;
        local_f0 = dVar10;
      } while (iVar2 != 0);
    }
    dVar9 = *(double *)(piVar4 + 2);
    dVar11 = in_ECX[4];
    if (-1 < iStack_d4) {
      iVar2 = 0;
      do {
        *(double *)(*(int *)(in_ECX + 9) + iVar2 * 8) =
             *(double *)(*(int *)(in_ECX + 9) + (iVar2 + iStack_d4) * 8) *
             ((dVar9 * dVar11) / dVar10);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iStack_d4);
    }
    iVar2 = 1;
    if (0 < iStack_d4) {
      iVar7 = iVar6 * 0x10 + -8;
      do {
        iVar7 = iVar7 + -8;
        iVar1 = iVar2 * 8;
        iVar2 = iVar2 + 1;
        *(undefined8 *)(*(int *)(in_ECX + 9) + 8 + iVar7) =
             *(undefined8 *)(*(int *)(in_ECX + 9) + iVar1);
      } while (iVar2 <= iStack_d4);
    }
    iVar2 = iVar6 * 2 - *(int *)(in_ECX + 8);
    _Dst = (void *)(*(int *)(in_ECX + 9) + iStack_d4 * 8 + 8);
  }
  _memset(_Dst,0,iVar2 * 8);
  FUN_004042c0(*(undefined4 *)(in_ECX + 9),piVar4[5]);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
  piVar4[4] = *(int *)(&DAT_00c8a7e8 + *piVar4 * 4);
  *(int **)(&DAT_00c8a7e8 + *piVar4 * 4) = piVar4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
  return;
}

