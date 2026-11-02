// rea decompile_all
// name: FUN_004e6a10
// address: 0x4e6a10
// body: available
// range: 0x4e6a10-0x4e6d11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6a10(int *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_50 [3];
  undefined8 local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704868;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (double)param_1[2] * *(double *)(in_ECX + 0x18) + 6755399441055744.0;
  local_38 = in_ECX;
  if (*(int *)(in_ECX + 0x24) < (int)local_44 + 0xb) {
    FUN_00403320(*(undefined4 *)(in_ECX + 0x20),(int)local_44 + 0x23,1,1,0);
  }
  local_24 = 0;
  local_3c = *(int *)(in_ECX + 0xf8);
  if (*(int *)*param_1 < *(int *)(in_ECX + 0xf8)) {
    local_3c = *(int *)*param_1;
  }
  iVar4 = FUN_004bfe22(0x800,uVar3);
  local_44 = (double)CONCAT44(iVar4,(int)local_44);
  local_8 = 0;
  iVar9 = param_1[2];
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      local_50[0] = in_ECX + 0x20;
      local_50[1] = 0;
      iVar7 = (int)((double)(iVar9 - iVar7) * *(double *)(in_ECX + 0x18));
      iVar9 = 1;
      if (1 < iVar7) {
        iVar9 = iVar7;
      }
      local_50[2] = *(int *)(in_ECX + 0x24);
      if (iVar9 < *(int *)(in_ECX + 0x24)) {
        local_50[2] = iVar9;
      }
      local_28 = local_50[2];
      (**(code **)(**(int **)(in_ECX + 4) + 0xc))(local_50);
      local_1c = 0;
      iVar7 = 0;
      if (0 < local_3c) {
        do {
          local_20 = 0;
          local_2c = *(int *)(*(int *)(in_ECX + 0x2c) + local_1c * 4);
          iVar9 = param_1[1];
          iVar7 = *param_1;
          *(undefined1 *)(iVar7 + 0x94) = 0;
          local_30 = *(int *)(*(int *)(iVar7 + 0xc) + local_1c * 4) + (iVar9 + local_24) * 4;
          local_34 = local_28;
          local_18 = 0;
          if (local_28 != 0) {
            do {
              iVar9 = local_34;
              if (0x100 < local_34) {
                iVar9 = 0x100;
              }
              iVar7 = 0;
              if (3 < iVar9) {
                iVar10 = (iVar9 - 4U >> 2) + 1;
                iVar7 = iVar10 * 4;
                pdVar5 = (double *)(iVar4 + 0x10);
                pfVar6 = (float *)(local_2c + local_20 * 4);
                do {
                  pdVar5[-2] = (double)*pfVar6;
                  pdVar5[-1] = (double)pfVar6[1];
                  *pdVar5 = (double)pfVar6[2];
                  pdVar5[1] = (double)pfVar6[3];
                  iVar10 = iVar10 + -1;
                  pdVar5 = pdVar5 + 4;
                  pfVar6 = pfVar6 + 4;
                } while (iVar10 != 0);
              }
              if (iVar7 < iVar9) {
                pfVar6 = (float *)(local_2c + (iVar7 + local_20) * 4);
                do {
                  fVar2 = *pfVar6;
                  pfVar6 = pfVar6 + 1;
                  *(double *)(iVar4 + iVar7 * 8) = (double)fVar2;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar9);
              }
              local_14 = 0;
              if (local_1c < *(uint *)(local_38 + 0x104)) {
                piVar8 = *(int **)(*(int *)(local_38 + 0xfc) + local_1c * 4);
              }
              else {
                piVar8 = (int *)0x0;
              }
              iVar7 = (**(code **)(*piVar8 + 0x18))(iVar4,iVar9,&local_14);
              iVar10 = 0;
              if (3 < iVar7) {
                pfVar6 = (float *)(local_30 + local_18 * 4);
                do {
                  *pfVar6 = (float)*(double *)(local_14 + iVar10 * 8);
                  pfVar6[1] = (float)*(double *)(local_14 + 8 + iVar10 * 8);
                  pfVar6[2] = (float)*(double *)(local_14 + 0x10 + iVar10 * 8);
                  iVar4 = iVar10 * 8;
                  iVar10 = iVar10 + 4;
                  pfVar6[3] = (float)*(double *)(local_14 + 0x18 + iVar4);
                  pfVar6 = pfVar6 + 4;
                } while (iVar10 < iVar7 + -3);
                iVar4 = local_44._4_4_;
              }
              if (iVar10 < iVar7) {
                pfVar6 = (float *)(local_30 + (local_18 + iVar10) * 4);
                do {
                  iVar1 = iVar10 * 8;
                  iVar10 = iVar10 + 1;
                  *pfVar6 = (float)*(double *)(local_14 + iVar1);
                  pfVar6 = pfVar6 + 1;
                } while (iVar10 < iVar7);
              }
              local_20 = local_20 + iVar9;
              local_18 = local_18 + iVar7;
              local_34 = local_34 - iVar9;
            } while (local_34 != 0);
            local_34 = 0;
            in_ECX = local_38;
          }
          local_1c = local_1c + 1;
          iVar7 = local_18;
        } while ((int)local_1c < local_3c);
      }
      iVar7 = local_24 + iVar7;
      iVar9 = param_1[2];
      local_24 = iVar7;
    } while (iVar7 < iVar9);
  }
  FUN_004bfe14(iVar4,8);
  ExceptionList = local_10;
  return;
}

