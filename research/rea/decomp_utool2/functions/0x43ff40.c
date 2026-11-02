// rea decompile_all
// name: FUN_0043ff40
// address: 0x43ff40
// body: available
// range: 0x43ff40-0x440327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043ff40(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 local_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined8 local_3c;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006feba4;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(double *)(in_ECX + 8) <= 0.0) {
    return 0;
  }
  ExceptionList = &local_10;
  local_28 = in_ECX;
  CoInitialize((LPVOID)0x0);
  iVar6 = param_5;
  local_1c = param_5;
  local_18 = param_4;
  FUN_004364e0(param_3,param_4,param_5,&param_6,*(undefined4 *)(in_ECX + 0x18),
               *(undefined4 *)(in_ECX + 0x1c),uVar2);
  local_24 = *(int *)(in_ECX + 0x20) * 2;
  local_2c = param_6;
  do {
    if ((int)local_2c < 1) {
      ExceptionList = local_10;
      return 1;
    }
    if (((iVar6 < *(int *)(in_ECX + 100)) ||
        ((iVar6 <= *(int *)(in_ECX + 100) && (param_4 < *(uint *)(in_ECX + 0x60))))) ||
       ((*(int *)(in_ECX + 0x6c) <= iVar6 &&
        ((*(int *)(in_ECX + 0x6c) < iVar6 || (*(uint *)(in_ECX + 0x68) <= param_4)))))) {
      if ((param_4 == *(uint *)(in_ECX + 0x68)) && (iVar6 == *(int *)(in_ECX + 0x6c))) {
        param_6 = param_6 & 0xffffff;
      }
      else {
        piVar1 = *(int **)(in_ECX + 0x54);
        uVar11 = 0;
        uVar4 = 0;
        param_6 = CONCAT13(1,(undefined3)param_6);
        uVar10 = __allmul(param_4,iVar6,&DAT_00989680,0);
        uVar9 = FUN_006f55df(uVar4,uVar11);
        uVar10 = __alldiv(uVar10,uVar9);
        (**(code **)(*piVar1 + 0x14))(piVar1,uVar10);
        in_ECX = local_28;
        param_4 = local_18;
        iVar6 = local_1c;
      }
      local_8 = 0;
      local_20 = (int *)0x0;
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x1c))
                        (*(int **)(in_ECX + 0x54),1,&local_20,&local_4c,local_54,local_44,local_40,
                         &param_5);
      if (local_20 == (int *)0x0) {
        if (iVar3 != -0x3ff2f431) goto LAB_004402eb;
        *(uint *)(in_ECX + 0x60) = param_4;
        *(int *)(in_ECX + 100) = iVar6;
        if ((*(int *)(in_ECX + 0x6c) <= iVar6) &&
           ((*(int *)(in_ECX + 0x6c) < iVar6 || (*(uint *)(in_ECX + 0x68) < param_4)))) {
          *(uint *)(in_ECX + 0x68) = param_4;
          *(int *)(in_ECX + 0x6c) = iVar6;
        }
        *(uint *)(in_ECX + 0x68) = param_4 + 0x100;
        uVar2 = local_24 << 8;
        *(uint *)(in_ECX + 0x6c) = iVar6 + (uint)(0xfffffeff < param_4);
        if (*(uint *)(in_ECX + 0x5c) < uVar2) {
          if (uVar2 == 0) {
            FID_conflict__free(*(void **)(in_ECX + 0x58));
            *(undefined4 *)(in_ECX + 0x58) = 0;
            *(undefined4 *)(in_ECX + 0x5c) = 0;
          }
          else {
            if (*(int *)(in_ECX + 0x58) == 0) {
              FID_conflict__free((void *)0x0);
              uVar4 = FUN_004c554b(uVar2);
            }
            else {
              uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x58),uVar2);
            }
            *(undefined4 *)(in_ECX + 0x58) = uVar4;
            *(uint *)(in_ECX + 0x5c) = uVar2;
          }
        }
        _memset(*(void **)(in_ECX + 0x58),0,*(size_t *)(in_ECX + 0x5c));
      }
      else {
        local_30 = 0;
        local_14 = 0;
        (**(code **)(*local_20 + 0x1c))(local_20,&local_30,&local_14);
        uVar2 = local_14;
        if (local_14 == 0) {
LAB_004402eb:
          local_8 = 2;
          if (local_20 == (int *)0x0) {
            ExceptionList = local_10;
            return 0;
          }
          (**(code **)(*local_20 + 8))(local_20);
          ExceptionList = local_10;
          return 0;
        }
        if (param_6._3_1_ == '\0') {
          iVar6 = *(int *)(in_ECX + 0x6c);
          uVar5 = *(uint *)(in_ECX + 0x68);
          *(uint *)(in_ECX + 0x60) = uVar5;
          *(int *)(in_ECX + 100) = iVar6;
          if ((*(int *)(in_ECX + 0x6c) <= iVar6) && (*(int *)(in_ECX + 0x6c) < iVar6)) {
            *(int *)(in_ECX + 0x6c) = iVar6;
            goto LAB_004400f1;
          }
        }
        else {
          uVar10 = FUN_006f55df();
          uVar10 = __allmul(uVar10,local_4c,local_48);
          uVar10 = __aulldiv(uVar10,&DAT_00989680,0);
          iVar6 = (int)((ulonglong)uVar10 >> 0x20);
          uVar5 = (uint)uVar10;
          *(undefined8 *)(in_ECX + 0x60) = uVar10;
          if ((*(int *)(in_ECX + 0x6c) <= iVar6) &&
             ((*(int *)(in_ECX + 0x6c) < iVar6 || (*(uint *)(in_ECX + 0x68) < uVar5)))) {
            *(int *)(in_ECX + 0x6c) = iVar6;
LAB_004400f1:
            *(uint *)(in_ECX + 0x68) = uVar5;
          }
        }
        uVar5 = uVar2 / local_24;
        if (uVar2 / local_24 == 0) {
          local_3c = 0;
          local_3c._0_4_ = 0;
          uVar5 = (uint)local_3c;
        }
        *(uint *)(in_ECX + 0x68) = *(uint *)(in_ECX + 0x60) + uVar5;
        *(uint *)(in_ECX + 0x6c) =
             *(int *)(in_ECX + 100) + (uint)CARRY4(*(uint *)(in_ECX + 0x60),uVar5);
        if (*(uint *)(in_ECX + 0x5c) < uVar2) {
          if (uVar2 == 0) {
            FID_conflict__free(*(void **)(in_ECX + 0x58));
            *(undefined4 *)(in_ECX + 0x58) = 0;
            *(undefined4 *)(in_ECX + 0x5c) = 0;
            FUN_004c2c30(*(undefined4 *)(in_ECX + 0x58),local_30,local_14);
            goto LAB_00440216;
          }
          if (*(int *)(in_ECX + 0x58) == 0) {
            FID_conflict__free((void *)0x0);
            uVar4 = FUN_004c554b(uVar2);
          }
          else {
            uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x58),uVar2);
          }
          *(undefined4 *)(in_ECX + 0x58) = uVar4;
          *(uint *)(in_ECX + 0x5c) = uVar2;
          uVar2 = local_14;
        }
        FUN_004c2c30(*(undefined4 *)(in_ECX + 0x58),local_30,uVar2);
      }
LAB_00440216:
      local_8 = 3;
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))(local_20);
      }
      local_8 = 0xffffffff;
      param_4 = local_18;
    }
    iVar6 = param_4 - *(int *)(in_ECX + 0x60);
    local_34 = iVar6 * local_24 + *(int *)(in_ECX + 0x58);
    uVar5 = (*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 0x60)) - iVar6;
    uVar2 = local_2c;
    if ((int)uVar5 < (int)local_2c) {
      uVar2 = uVar5;
    }
    param_6 = 0;
    if (0 < param_2) {
      iVar6 = *(int *)(in_ECX + 0x20);
      do {
        uVar5 = param_6;
        if ((int)(iVar6 - 1U) < (int)param_6) {
          uVar5 = iVar6 - 1U;
        }
        psVar8 = (short *)(local_34 + uVar5 * 2);
        iVar3 = *(int *)(param_1 + param_6 * 4) + param_3 * 4;
        iVar7 = 0;
        local_3c = CONCAT44(iVar3,(uint)local_3c);
        if (0 < (int)uVar2) {
          do {
            *(int *)(iVar3 + iVar7 * 4) = (int)*psVar8 << 0x10;
            iVar7 = iVar7 + 1;
            iVar6 = *(int *)(local_28 + 0x20);
            psVar8 = psVar8 + iVar6;
          } while (iVar7 < (int)uVar2);
        }
        param_6 = param_6 + 1;
        in_ECX = local_28;
        param_4 = local_18;
      } while ((int)param_6 < param_2);
    }
    local_18 = param_4 + uVar2;
    iVar6 = local_1c + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_4,uVar2);
    local_2c = local_2c - uVar2;
    param_3 = param_3 + uVar2;
    local_1c = iVar6;
    param_4 = local_18;
  } while( true );
}

