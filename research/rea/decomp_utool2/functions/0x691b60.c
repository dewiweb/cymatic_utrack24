// rea decompile_all
// name: FUN_00691b60
// address: 0x691b60
// body: available
// range: 0x691b60-0x692056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691b60(char param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  double *local_40;
  undefined4 local_3c;
  uint local_38;
  void *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  double *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00721a37;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((0 < *(int *)(in_ECX + 0x18)) && (0 < *(int *)(in_ECX + 0x1c))) {
    local_40 = (double *)0x0;
    local_3c = 0;
    local_38 = 0;
    iVar7 = 0;
    local_8 = 0;
    local_14 = in_ECX;
    if (0 < *(int *)(in_ECX + 0x94)) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x8c) + iVar7 * 4);
        FUN_00692570();
        if (*(code **)(*piVar1 + 200) == FUN_00692930) {
          if (piVar1[0x3a] != *(int *)(in_ECX + 0x88)) {
            piVar1[0x3a] = *(int *)(in_ECX + 0x88);
            FUN_006e6400(&stack0xffffff90);
            FUN_006ce9f0(1);
            (**(code **)(*piVar1 + 0x84))();
          }
        }
        else {
          (**(code **)(*piVar1 + 200))();
        }
        local_2c = FUN_006f6dd6(piVar1);
        local_20 = 1;
        local_18 = 1;
        local_1c = (double *)0x1;
        uVar3 = FUN_006920b0();
        cVar2 = (**(code **)(*piVar1 + 0xcc))(uVar3);
        if (cVar2 == '\0') {
          *(undefined1 *)(piVar1 + 0x3e) = 0;
          (**(code **)(*piVar1 + 0x28))();
        }
        else {
          *(undefined1 *)(piVar1 + 0x3e) = 1;
          FUN_006aea80();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(in_ECX + 0x94));
    }
    FUN_006ae910();
    iVar7 = 0;
    uVar4 = 0;
    local_18 = 0;
    if (0 < (int)local_38) {
      bVar8 = local_38 != 0;
      pdVar5 = local_40;
      do {
        if (bVar8) {
          dVar9 = *pdVar5;
        }
        else {
          dVar9 = 0.0;
        }
        uVar4 = uVar4 + 1;
        pdVar5 = pdVar5 + 4;
        iVar7 = iVar7 + (int)dVar9;
        bVar8 = uVar4 < local_38;
        local_18 = iVar7;
      } while ((int)uVar4 < (int)local_38);
    }
    if (*(char *)(in_ECX + 0x84) == '\0') {
      local_1c = *(double **)(in_ECX + 0x18);
    }
    else {
      local_1c = *(double **)(in_ECX + 0x1c);
    }
    local_2c = CONCAT31(local_2c._1_3_,(int)local_1c < local_18);
    if (*(char *)(in_ECX + 0x84) == '\0') {
      iVar7 = *(int *)(in_ECX + 0x1c);
    }
    else {
      iVar7 = *(int *)(in_ECX + 0x18);
    }
    local_20 = iVar7 / 2;
    FUN_006e9790();
    (**(code **)(**(int **)(in_ECX + 0x80) + 0x28))();
    iVar7 = *(int *)(in_ECX + 0x80);
    uVar4 = CONCAT11(*(byte *)(iVar7 + 0x69),*(byte *)(iVar7 + 0x69) >> 4) & 0xffffff01;
    if (SUB41(uVar4,0) == (*(char *)(in_ECX + 0x85) == '\0')) {
      iVar6 = *(int *)(iVar7 + 0xc);
      *(byte *)(iVar7 + 0x69) =
           -(*(char *)(in_ECX + 0x85) != '\0') & 0x10U | (byte)(uVar4 >> 8) & 0xef;
      if ((iVar6 == 0) ||
         (((*(byte *)(iVar6 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar6 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))))) {
        FUN_006cc240();
      }
    }
    if (*(char *)(in_ECX + 0x84) == '\0') {
      FUN_006e9790((-(*(int *)(*(int *)(in_ECX + 0x80) + 0x18) / 2) - (int)local_20 / 2) +
                   *(int *)(in_ECX + 0x18) + -4);
      iVar7 = local_14;
    }
    else {
      FUN_006e9790(*(int *)(local_14 + 0x18) / 2 - *(int *)(*(int *)(in_ECX + 0x80) + 0x18) / 2);
      iVar7 = local_14;
    }
    if ((int)local_1c < local_18) {
      if (*(char *)(iVar7 + 0x84) == '\0') {
        local_18 = *(int *)(*(int *)(iVar7 + 0x80) + 0x10) + -4;
      }
      else {
        local_18 = *(int *)(*(int *)(iVar7 + 0x80) + 0x14) + -4;
      }
    }
    else if (*(char *)(iVar7 + 0x84) == '\0') {
      local_18 = *(int *)(iVar7 + 0x18);
    }
    else {
      local_18 = *(int *)(iVar7 + 0x1c);
    }
    iVar6 = 0;
    local_14 = 0;
    local_20 = 0;
    local_2c = 0;
    if (0 < *(int *)(iVar7 + 0x94)) {
      local_1c = local_40;
      pdVar5 = local_40;
      do {
        piVar1 = *(int **)(*(int *)(iVar7 + 0x8c) + local_2c * 4);
        if ((char)piVar1[0x3e] != '\0') {
          if (local_20 < local_38) {
            dVar9 = *pdVar5;
          }
          else {
            dVar9 = 0.0;
          }
          local_1c = local_1c + 4;
          local_20 = local_20 + 1;
          local_30 = (int)dVar9;
          if (*(char *)(iVar7 + 0x84) == '\0') {
            local_44 = *(int *)(iVar7 + 0x1c);
            local_4c = 0;
            local_48 = local_30;
          }
          else {
            iVar6 = 0;
            local_4c = local_14;
            local_48 = *(int *)(iVar7 + 0x18);
            local_44 = local_30;
          }
          local_50 = iVar6;
          local_28 = local_48;
          local_24 = local_44;
          if (DAT_00c8a67c == 0) {
            local_34 = operator_new(0xd0);
            local_8._0_1_ = 1;
            DAT_00c8a67c = FUN_006cb960();
            local_8 = (uint)local_8._1_3_ << 8;
          }
          if (param_1 == '\0') {
            FUN_006e5fd0();
            FUN_006e9790(iVar6);
          }
          else {
            FUN_006e6060(piVar1,&local_50,200,0,0x4008000000000000);
          }
          iVar6 = local_14 + local_30;
          local_14 = iVar6;
          (**(code **)(*piVar1 + 0x28))();
          pdVar5 = local_1c;
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(iVar7 + 0x94));
    }
    FID_conflict__free(local_40);
  }
  ExceptionList = local_10;
  return;
}

