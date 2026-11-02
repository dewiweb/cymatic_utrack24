// rea decompile_all
// name: FUN_0068f420
// address: 0x68f420
// body: available
// range: 0x68f420-0x68f6e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068f420(int *param_1)

{
  int *_Memory;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  undefined **ppuVar8;
  int iVar9;
  uint local_30;
  int local_20;
  undefined *local_1c;
  undefined *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072182b;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = FUN_0045c1e0(*(undefined4 *)((int)param_1 + 0xc),"CLOSED",uVar4);
  if (iVar5 == 0) {
    uVar4 = *(uint *)(in_ECX + 0x34) & 3;
    if (uVar4 == 0) {
      if (*(int *)(in_ECX + 4) == 0) {
        ExceptionList = local_10;
        return;
      }
      if (*(char *)(*(int *)(in_ECX + 4) + 0xac) == '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    else if (uVar4 != 2) {
      ExceptionList = local_10;
      return;
    }
    FUN_006dffc0(1);
    ExceptionList = local_10;
    return;
  }
  iVar5 = FUN_0045c1e0(*(undefined4 *)((int)param_1 + 0xc),&DAT_00c05a54,uVar4);
  if (iVar5 != 0) {
    ExceptionList = local_10;
    return;
  }
  uVar4 = *(uint *)(in_ECX + 0x34) & 3;
  if (uVar4 == 0) {
    if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + 0xac) != '\0'))
    goto LAB_0068f513;
  }
  else if (uVar4 == 2) goto LAB_0068f513;
  FUN_006dffc0(2);
LAB_0068f513:
  local_30 = 0;
  local_8 = 0;
  FUN_00447fb0(in_ECX + 0xc);
  param_1 = *(int **)((int)param_1 + 4);
  if (param_1 != (int *)0x0) {
    uVar4 = 0;
    do {
      iVar5 = FUN_0061a410(&DAT_00c05a50);
      ppuVar8 = (undefined **)(iVar5 + 8);
      if (iVar5 == 0) {
        ppuVar8 = &PTR_DAT_00c7ed68;
      }
      puVar1 = *ppuVar8;
      _Memory = (int *)(puVar1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        *_Memory = *_Memory + 1;
        UNLOCK();
      }
      local_8._0_1_ = 1;
      local_14 = 0;
      if (0 < (int)uVar4) {
        do {
          uVar7 = local_14;
          piVar6 = (int *)(**(code **)(**(int **)(local_14 * 4) + 8))(&local_20);
          puVar2 = puVar1;
          puVar3 = (undefined *)*piVar6;
          if ((undefined *)*piVar6 == puVar1) {
            iVar9 = 0;
          }
          else {
            do {
              local_18 = puVar3;
              local_1c = puVar2;
              iVar5 = FUN_00443260();
              iVar9 = FUN_00443260();
              uVar7 = local_14;
              if ((iVar5 - iVar9 != 0) &&
                 (iVar9 = (iVar5 - iVar9 >> 0x1f & 0xfffffffeU) + 1, iVar9 != 0)) goto LAB_0068f5df;
              puVar2 = local_1c;
              puVar3 = local_18;
            } while (iVar5 != 0);
            iVar9 = 0;
          }
LAB_0068f5df:
          piVar6 = (int *)(local_20 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          uVar4 = local_30;
          if (iVar9 == 0) {
            FUN_0068f420(param_1);
            if (uVar7 < local_30) {
              local_30 = local_30 - 1;
              if (0 < (int)(local_30 - uVar7)) {
                FUN_004c1df0(uVar7 * 4,uVar7 * 4 + 4,(local_30 - uVar7) * 4);
              }
              iVar5 = 0;
              if (0 < (int)(local_30 * 2)) {
                iVar5 = local_30 * 2;
              }
              uVar4 = local_30;
              if (iVar5 < 0) {
                uVar7 = local_30;
                if ((int)local_30 < 0x10) {
                  uVar7 = 0x10;
                }
                if ((int)uVar7 < 0) {
                  FUN_00409cf0(uVar7);
                }
              }
            }
            break;
          }
          local_14 = uVar7 + 1;
        } while ((int)local_14 < (int)local_30);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar5 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  iVar5 = 0;
  if (0 < (int)local_30) {
    do {
      FUN_006dffc0(0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_30);
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

