// rea decompile_all
// name: FUN_0061ac50
// address: 0x61ac50
// body: available
// range: 0x61ac50-0x61af0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0061ac50(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined **ppuVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined *local_1c;
  undefined *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ce07;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    bVar8 = *(int *)(in_ECX + 0x1c) != 0;
    local_14 = -8;
    do {
      if (bVar8) {
        ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x14) + 8 + local_14);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      local_18 = *ppuVar5;
      local_1c = (undefined *)*param_2;
      if (local_18 == local_1c) {
LAB_0061acf4:
        if (uVar7 - 1 < *(uint *)(in_ECX + 0x1c)) {
          ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x14) + 4 + local_14);
        }
        else {
          ppuVar5 = &PTR_DAT_00c7ed68;
        }
        local_1c = *ppuVar5;
        local_18 = &DAT_00c01894;
        do {
          iVar2 = FUN_00443260(uVar1);
          iVar3 = FUN_00443260();
          if ((iVar2 - iVar3 != 0) && ((iVar2 - iVar3 >> 0x1f & 0xfffffffeU) != 0xffffffff))
          goto LAB_0061ad74;
        } while (iVar2 != 0);
        if (uVar7 - 2 < *(uint *)(in_ECX + 0x1c)) {
          ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x14) + local_14);
        }
        else {
          ppuVar5 = &PTR_DAT_00c7ed68;
        }
        iVar2 = FUN_0045c1e0(*ppuVar5,"<!entity");
        if (iVar2 == 0) {
          FUN_00620c20(&param_2,&DAT_00c018a0);
          local_8 = 0;
          iVar2 = FUN_0045c1e0(param_2,"system");
          if (iVar2 == 0) {
            uVar4 = FUN_00620c20(&local_1c,&DAT_00c018ac);
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_0061d0c0(param_1,uVar4);
            piVar6 = (int *)(local_1c + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            piVar6 = param_2 + -2;
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            ExceptionList = local_10;
            return param_1;
          }
          FUN_006378b0(&local_1c);
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_00620f00(param_1);
          piVar6 = (int *)(local_1c + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          piVar6 = param_2 + -2;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          ExceptionList = local_10;
          return param_1;
        }
      }
      else {
        do {
          iVar2 = FUN_00443260(uVar1);
          iVar3 = FUN_00443260();
          if ((iVar2 - iVar3 != 0) &&
             (iVar3 = (iVar2 - iVar3 >> 0x1f & 0xfffffffeU) + 1, iVar3 != 0)) goto LAB_0061ace9;
        } while (iVar2 != 0);
        iVar3 = 0;
LAB_0061ace9:
        if (iVar3 == 0) goto LAB_0061acf4;
      }
LAB_0061ad74:
      uVar7 = uVar7 + 1;
      local_14 = local_14 + 4;
      bVar8 = uVar7 < *(uint *)(in_ECX + 0x1c);
    } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x1c));
  }
  iVar2 = *param_2;
  *param_1 = iVar2;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return param_1;
}

