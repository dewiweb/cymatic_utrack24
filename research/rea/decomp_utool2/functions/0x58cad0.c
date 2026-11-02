// rea decompile_all
// name: FUN_0058cad0
// address: 0x58cad0
// body: available
// range: 0x58cad0-0x58d086 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0058cad0(void)

{
  undefined1 **ppuVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 ****ppppuVar6;
  undefined1 ***pppuVar7;
  void *pvVar8;
  int in_ECX;
  int *piVar9;
  undefined1 ****extraout_ECX;
  undefined1 ****ppppuVar10;
  bool bVar11;
  char ****local_88;
  void *local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_64;
  int local_5c;
  undefined1 *local_58;
  int local_54;
  undefined1 ****local_50;
  undefined8 local_4c;
  undefined4 *local_44;
  undefined1 ***local_40;
  undefined1 local_39;
  undefined1 ****local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713e69;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xc) != '\0') goto LAB_0058d06b;
  iVar4 = *(int *)(in_ECX + 0xdc);
  local_64 = CONCAT44(*(undefined4 *)(in_ECX + 0xd8),(undefined4)local_64);
  local_5c = in_ECX;
  local_54 = iVar4;
  if ((*(int *)(iVar4 + 0x30) == 1) && (1 < *(int *)(in_ECX + 0xe4))) {
    if (*(int *)(in_ECX + 0xe4) < 0) {
      iVar4 = FUN_006104a0();
      *(undefined1 *)(iVar4 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    local_88 = (undefined1 ****)0x58cb62;
    FUN_004557e0();
    local_8 = 8;
    local_88 = (undefined1 ****)0x58cb7d;
    puVar5 = (undefined4 *)FUN_00637690();
    uVar2 = *(undefined4 *)(in_ECX + 0x1c);
    *(undefined4 *)(in_ECX + 0x1c) = *puVar5;
    *puVar5 = uVar2;
    piVar9 = (int *)(local_5c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        local_88 = (undefined1 ****)0x58cba9;
        FID_conflict__free(piVar9);
      }
    }
    local_8 = 0xffffffff;
    pppuVar7 = local_40 + -2;
    if (pppuVar7 != (undefined1 ***)&DAT_00bfe124) {
      LOCK();
      ppuVar1 = *pppuVar7;
      *pppuVar7 = (undefined1 **)((int)*pppuVar7 + -1);
      UNLOCK();
LAB_0058d018:
      local_8 = 0xffffffff;
      if (ppuVar1 == (undefined1 **)0x0) {
        local_88 = (undefined1 ****)0x58d020;
        FID_conflict__free(pppuVar7);
      }
    }
  }
  else {
    local_39 = '\0';
    local_38[0] = (undefined1 ****)0x0;
    local_40 = (undefined1 ***)0x0;
    local_58 = &DAT_00bfe12c;
    local_8 = 0;
    local_88 = &local_40;
    FUN_0055d1a0(*(undefined4 *)(in_ECX + 0xe4),&local_39,local_38);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_40 != (undefined1 ***)0x0) {
      local_88 = (undefined1 ****)0x210;
      FUN_0058e710(local_40);
      if (local_50 != (undefined1 ****)0x0) {
        LOCK();
        ppppuVar6 = local_50 + 1;
        pppuVar7 = *ppppuVar6;
        *ppppuVar6 = (undefined1 ***)((int)*ppppuVar6 + -1);
        UNLOCK();
        if (pppuVar7 == (undefined1 ***)0x1) {
          local_88 = (undefined1 ****)0x58cc4a;
          (*(code *)**local_50)();
        }
      }
      piVar9 = (int *)(local_58 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          local_88 = (undefined1 ****)0x58cc6f;
          FID_conflict__free(piVar9);
        }
      }
      goto LAB_0058d06b;
    }
    if (*(char *)(in_ECX + 0xe0) == '\0') {
      ppppuVar6 = local_50;
      if (local_39 == '\0') {
        if (*(int *)(iVar4 + 0x30) == 1) {
          if (local_50 != (undefined1 ****)0x0) {
            LOCK();
            local_50[1] = (undefined1 ***)((int)local_50[1] + 1);
            UNLOCK();
          }
          local_88 = extraout_ECX;
          FUN_0058c9e0();
        }
        else {
          local_88 = local_50;
          if (local_50 != (undefined1 ****)0x0) {
            LOCK();
            local_50[1] = (undefined1 ***)((int)local_50[1] + 1);
            UNLOCK();
          }
          FUN_0058c200(*(undefined4 *)(in_ECX + 0x10));
        }
      }
      else if (*(int *)(iVar4 + 0x30) == 1) {
        if (local_50 != (undefined1 ****)0x0) {
          LOCK();
          local_50[1] = (undefined1 ***)((int)local_50[1] + 1);
          UNLOCK();
        }
        local_88 = *(char *****)(in_ECX + 0x10);
        FUN_0058c190();
      }
      else {
        local_88 = local_50;
        if (local_50 != (undefined1 ****)0x0) {
          LOCK();
          local_50[1] = (undefined1 ***)((int)local_50[1] + 1);
          UNLOCK();
        }
        FUN_0058b8c0(*(undefined4 *)(in_ECX + 0x10));
      }
    }
    else {
      local_70 = (void *)0x0;
      local_6c = 0;
      local_68 = 0;
      local_8._0_1_ = 2;
      local_88 = (undefined1 ****)0x58cd3d;
      FUN_0045c990();
      local_88 = (char ****)local_38;
      local_8._0_1_ = 3;
      FUN_0058e5c0();
      local_8 = CONCAT31(local_8._1_3_,4);
      local_88 = (undefined1 ****)0x0;
      FUN_00635ea0(&local_70,2);
      ppppuVar6 = local_38[0] + -2;
      if (ppppuVar6 != (undefined1 ****)&DAT_00bfe124) {
        LOCK();
        pppuVar7 = *ppppuVar6;
        *ppppuVar6 = (undefined1 ***)((int)*ppppuVar6 + -1);
        UNLOCK();
        if (pppuVar7 == (undefined1 ***)0x0) {
          local_88 = (undefined1 ****)0x58cd88;
          FID_conflict__free(ppppuVar6);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      pppuVar7 = local_40 + -2;
      if (pppuVar7 != (undefined1 ***)&DAT_00bfe124) {
        LOCK();
        ppuVar1 = *pppuVar7;
        *pppuVar7 = (undefined1 **)((int)*pppuVar7 + -1);
        UNLOCK();
        if (ppuVar1 == (undefined1 **)0x0) {
          local_88 = (undefined1 ****)0x58cdaf;
          FID_conflict__free(pppuVar7);
        }
      }
      if (local_68 != 0) {
        local_40 = (undefined1 ***)&local_39;
        local_88 = (char ****)(local_68 * 4 >> 2);
        FUN_0041b2f0();
        local_4c = 0;
        local_4c._4_4_ = (undefined1 ***)0x0;
        local_4c._0_4_ = (undefined1 ****)0x0;
        ppppuVar6 = (undefined1 ****)local_4c;
        pppuVar7 = local_4c._4_4_;
        if (0 < local_68) {
          local_40 = (undefined1 ***)0x0;
          ppppuVar10 = (undefined1 ****)0x0;
          local_38[0] = (undefined1 ****)0x0;
          do {
            local_88 = local_38[0];
            FUN_0055d8a0();
            local_88 = ppppuVar10;
            FUN_0040f6b0(&stack0xffffff7c);
            local_88 = (undefined1 ****)0x58ce1e;
            FUN_00548e50();
            bVar11 = CARRY4((uint)local_38[0],local_44[4]);
            local_38[0] = (undefined1 ****)((int)local_38[0] + local_44[4]);
            local_40 = (undefined1 ***)((int)local_40 + (uint)bVar11 + local_44[5]);
            LOCK();
            piVar9 = local_44 + 1;
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              local_88 = (undefined1 ****)0x58ce4b;
              (**(code **)*local_44)();
            }
            ppppuVar10 = (undefined1 ****)((int)ppppuVar10 + 1);
            ppppuVar6 = local_38[0];
            pppuVar7 = local_40;
            in_ECX = local_5c;
          } while ((int)ppppuVar10 < local_68);
        }
        local_50[0xc] = (undefined1 ***)ppppuVar6;
        local_50[0xd] = pppuVar7;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0040f7f0();
      local_88 = (undefined1 ****)0x58ce74;
      FID_conflict__free(local_70);
      ppppuVar6 = local_50;
    }
    cVar3 = FUN_00591890();
    if (((cVar3 != '\0') && (*(char *)(in_ECX + 0xc) == '\0')) && (*(int *)(in_ECX + 100) == 0)) {
      local_88 = *(char *****)(local_54 + 100);
      iVar4 = FUN_00448730();
      if ((iVar4 != 0) && (cVar3 = FUN_005bdd30(), cVar3 != '\0')) {
        local_88 = (undefined1 ****)0x58cedf;
        FUN_00410af0();
        local_8._0_1_ = 5;
        cVar3 = FUN_00636aa0();
        if (cVar3 != '\0') {
          local_88 = (char ****)&stack0xffffff7c;
          local_64 = *(undefined8 *)(local_54 + 0x68);
          FUN_00636a10();
          local_88 = (undefined1 ****)0x58cf16;
          FUN_0055d7f0();
          local_88 = (undefined1 ****)0x58cf22;
          puVar5 = (undefined4 *)FUN_00636a10();
          local_88 = (char ****)((int)&local_64 + 4);
          local_8._0_1_ = 6;
          FUN_0058e5c0();
          local_8._0_1_ = 7;
          local_88 = (char ****)*puVar5;
          FUN_00635a10(&stack0xffffff7c);
          FUN_00636150(local_38);
          FUN_00591a70();
          local_88 = (undefined1 ****)0x58cf71;
          FUN_0058e610();
          FUN_0040ea50();
          FUN_00637c10();
          in_ECX = local_5c;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0040ea50();
      }
      if (*(int *)(local_54 + 0x30) != 1) {
        iVar4 = FUN_0055bbe0();
        local_64 = CONCAT44(iVar4,(undefined4)local_64);
        if (iVar4 == 0) {
          local_88 = (undefined1 ****)0x212;
          FUN_0058e710(0xc);
        }
        else {
          FUN_0058e7e0(&local_88,&local_88);
          FUN_00591c90();
          local_88 = (undefined1 ****)0x58cfcd;
          FUN_0058e610();
        }
      }
    }
    if (ppppuVar6 != (undefined1 ****)0x0) {
      LOCK();
      ppppuVar10 = ppppuVar6 + 1;
      pppuVar7 = *ppppuVar10;
      *ppppuVar10 = (undefined1 ***)((int)*ppppuVar10 + -1);
      UNLOCK();
      if (pppuVar7 == (undefined1 ***)0x1) {
        local_88 = (undefined1 ****)0x58cffc;
        (*(code *)**ppppuVar6)();
      }
    }
    local_8 = 0xffffffff;
    pppuVar7 = (undefined1 ***)(local_58 + -8);
    if (pppuVar7 != (undefined1 ***)&DAT_00bfe124) {
      LOCK();
      ppuVar1 = *pppuVar7;
      *pppuVar7 = (undefined1 **)((int)*pppuVar7 + -1);
      UNLOCK();
      goto LAB_0058d018;
    }
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    local_88 = (undefined1 ****)0x58d031;
    pvVar8 = operator_new(0x40);
    local_4c = CONCAT44(pvVar8,(undefined1 ****)local_4c);
    local_8 = 9;
    local_88 = (char ****)FUN_00591780();
    local_8 = 0xffffffff;
    FUN_0062f560();
    FUN_00591890();
  }
LAB_0058d06b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

