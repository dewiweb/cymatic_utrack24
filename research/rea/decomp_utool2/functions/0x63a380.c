// rea decompile_all
// name: FUN_0063a380
// address: 0x63a380
// body: available
// range: 0x63a380-0x63a7cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063a380(void)

{
  int *****pppppiVar1;
  int iVar2;
  int ****ppppiVar3;
  int ***pppiVar4;
  int *piVar5;
  int iVar6;
  int ***pppiVar7;
  int ****ppppiVar8;
  int *****in_ECX;
  int *in_EDX;
  int ***pppiVar9;
  char **ppcVar10;
  char **ppcVar11;
  int ***local_44;
  void *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  char *local_30;
  int ****local_2c;
  char *local_28;
  int ****local_24;
  void *local_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f353;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (int ****)in_ECX;
  (**(code **)(*in_EDX + 0x48))(&local_30,local_14);
  local_8 = 0;
  if (*local_30 == '\0') {
    *in_ECX = (int ****)0x0;
    piVar5 = (int *)(local_30 + -8);
    in_ECX[1] = (int ****)0x0;
    in_ECX[2] = (int ****)0x0;
    in_ECX[3] = (int ****)0x0;
    if (piVar5 == &DAT_00bfe124) goto LAB_0063a72b;
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  else {
    ppcVar11 = &local_30;
    ppcVar10 = &local_28;
    FUN_0061f730(ppcVar10,ppcVar11);
    FUN_0061f850(ppcVar10,ppcVar11);
    local_8._0_1_ = 1;
    operator_new(0x34);
    local_44 = (int ***)FUN_00460e00(&local_28);
    if ((int ****)local_44 != (int ****)0x0) {
      LOCK();
      local_44[1] = (int **)((int)local_44[1] + 1);
      UNLOCK();
    }
    local_40 = (void *)0x0;
    local_3c = 0;
    local_38 = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar5 = (int *)(local_28 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    iVar6 = (**(code **)(*in_EDX + 0x40))();
    if (iVar6 < 0) {
      *in_ECX = (int ****)local_44;
      in_ECX[1] = (int ****)0x0;
      in_ECX[2] = (int ****)0x0;
      local_44 = (int ***)0x0;
      in_ECX[3] = (int ****)0x0;
      FUN_0063b3e0();
    }
    else {
      if (0 < iVar6) {
        do {
          (**(code **)(*in_EDX + 0x48))(&local_28);
          local_8._0_1_ = 4;
          if (*local_28 != '\0') {
            FUN_00628870();
            ppcVar11 = &local_28;
            piVar5 = &local_34;
            FUN_0061f730(piVar5,ppcVar11);
            FUN_0061f850(piVar5,ppcVar11);
            local_8._0_1_ = 6;
            FUN_00629480(&local_34,&local_24);
            piVar5 = (int *)(local_34 + -8);
            if (piVar5 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar5);
              }
            }
            (*(code *)(*local_24)[0x15])(local_1c);
          }
          piVar5 = (int *)(local_28 + -8);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_28 = (char *)(**(code **)(*in_EDX + 0x40))();
      if ((int)local_44[7] < (int)local_28) {
        FUN_00409cf0((uint)(local_28 + (int)local_28 / 2 + 8) & 0xfffffff8);
      }
      local_34 = 0;
      if (0 < (int)local_28) {
        do {
          FUN_0063a380();
          pppiVar4 = local_44;
          local_2c = local_24;
          if ((int *****)local_24 == (int *****)0x0) {
            local_44 = (int ***)0x0;
            *in_ECX = (int ****)pppiVar4;
            in_ECX[1] = (int ****)0x0;
            in_ECX[2] = (int ****)0x0;
            in_ECX[3] = (int ****)0x0;
            FID_conflict__free(local_20);
            if ((int *****)local_24 != (int *****)0x0) {
              LOCK();
              pppppiVar1 = (int *****)(local_24 + 1);
              ppppiVar3 = *pppppiVar1;
              *pppppiVar1 = (int ****)((int)*pppppiVar1 + -1);
              UNLOCK();
              if (ppppiVar3 == (int ****)0x1) {
                (*(code *)**local_24)(1);
              }
            }
            pppiVar4 = local_44;
            if ((0 < local_38) && ((int ****)local_44 != (int ****)0x0)) {
              local_2c = &local_44;
              pppiVar9 = (int ***)FUN_00447770(&local_2c);
              if (pppiVar9 < pppiVar4[0xb]) {
                FUN_00410320(pppiVar9);
              }
            }
            goto LAB_0063a6e9;
          }
          pppiVar9 = (int ***)local_44[8];
          iVar6 = (int)pppiVar9 + 1;
          if ((int)local_44[7] < iVar6) {
            if (iVar6 < 0) {
              iVar6 = (int)pppiVar9 + 2;
            }
            pppiVar9 = (int ***)((int)pppiVar9 + (iVar6 >> 1) + 9 & 0xfffffff8);
            if ((int ***)local_44[7] != pppiVar9) {
              if ((int)pppiVar9 < 1) {
                FID_conflict__free(local_44[6]);
                pppiVar4[6] = (int **)0x0;
              }
              else if ((int ***)local_44[6] == (int ***)0x0) {
                pppiVar7 = (int ***)FUN_004c554b();
                pppiVar4[6] = (int **)pppiVar7;
              }
              else {
                pppiVar7 = (int ***)FUN_004c553b(local_44[6],(int)pppiVar9 * 4);
                pppiVar4[6] = (int **)pppiVar7;
              }
              pppiVar4[7] = (int **)pppiVar9;
            }
          }
          ppppiVar3 = local_24;
          pppiVar9 = (int ***)pppiVar4[8];
          pppiVar4[8] = (int **)((int)pppiVar9 + 1);
          pppiVar4[6][(int)pppiVar9] = (int *)local_2c;
          if ((int *****)local_2c != (int *****)0x0) {
            LOCK();
            local_2c[1] = (int ***)((int)local_2c[1] + 1);
            UNLOCK();
          }
          local_24[0xc] = local_44;
          if ((0 < local_18) && ((int *****)local_24 != (int *****)0x0)) {
            local_2c = (int ****)&local_24;
            ppppiVar8 = (int ****)FUN_00447770(&local_2c);
            if (ppppiVar8 < ppppiVar3[0xb]) {
              FUN_00410320(ppppiVar8);
            }
          }
          FID_conflict__free(local_20);
          if ((int *****)local_24 != (int *****)0x0) {
            LOCK();
            pppppiVar1 = (int *****)(local_24 + 1);
            ppppiVar3 = *pppppiVar1;
            *pppppiVar1 = (int ****)((int)*pppppiVar1 + -1);
            UNLOCK();
            if (ppppiVar3 == (int ****)0x1) {
              (*(code *)**local_24)(1);
            }
          }
          local_34 = local_34 + 1;
        } while (local_34 < (int)local_28);
      }
      *in_ECX = (int ****)local_44;
      in_ECX[1] = (int ****)0x0;
      in_ECX[2] = (int ****)0x0;
      local_44 = (int ***)0x0;
      in_ECX[3] = (int ****)0x0;
LAB_0063a6e9:
      FID_conflict__free(local_40);
      if ((int ****)local_44 != (int ****)0x0) {
        LOCK();
        ppppiVar3 = (int ****)(local_44 + 1);
        pppiVar4 = *ppppiVar3;
        *ppppiVar3 = (int ***)((int)*ppppiVar3 + -1);
        UNLOCK();
        if (pppiVar4 == (int ***)0x1) {
          (*(code *)**local_44)(1);
        }
      }
    }
    piVar5 = (int *)(local_30 + -8);
    if (piVar5 == &DAT_00bfe124) goto LAB_0063a72b;
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  if (iVar6 == 0) {
    FID_conflict__free(piVar5);
  }
LAB_0063a72b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

