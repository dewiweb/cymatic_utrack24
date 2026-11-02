// rea decompile_all
// name: FUN_00527b30
// address: 0x527b30
// body: available
// range: 0x527b30-0x528e2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00527b30(void)

{
  undefined4 *****pppppuVar1;
  int iVar2;
  int *****pppppiVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  uint uVar10;
  int in_ECX;
  undefined4 ******_Memory;
  int *******pppppppiVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  undefined8 uVar14;
  undefined4 *******pppppppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined4 uVar19;
  int local_7c;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  int *******local_6c;
  int local_68;
  void *local_64;
  undefined4 ******local_60;
  undefined4 *******local_5c;
  int ******local_58;
  char local_51;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int *local_44;
  int *******local_40;
  uint local_3c;
  int *******local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070bea9;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(undefined4 **)(in_ECX + 0x78);
  }
  local_50 = in_ECX;
  iVar5 = FUN_006f6dd6(uVar6,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor,
                       &ProjectExplorerItem_Song::RTTI_Type_Descriptor,0,local_14);
  local_4c = *(int *)(*(int *)(iVar5 + 0x78) + 0xc);
  uVar6 = FUN_00410ad0(local_38);
  local_8 = 0;
  FUN_006e4900(uVar6,0);
  local_8 = 0xffffffff;
  _Memory = local_38[0] + -2;
  if (_Memory != (undefined4 ******)&DAT_00bfe124) {
    LOCK();
    pppppuVar1 = *_Memory;
    *_Memory = (undefined4 *****)((int)*_Memory + -1);
    UNLOCK();
    if (pppppuVar1 == (undefined4 *****)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  local_48 = operator_new(0x80);
  local_8 = 1;
  FUN_0045c990("Target Disk Location");
  local_8 = CONCAT31(local_8._1_3_,2);
  local_3c = 1;
  local_38[0] = (int *******)FUN_00534e00(&local_68);
  local_8 = 0xffffffff;
  piVar7 = (int *)(local_68 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_48 = operator_new(0xac);
  local_8 = 4;
  uVar6 = FUN_0051b7d0(&local_60);
  local_8 = CONCAT31(local_8._1_3_,5);
  local_3c = 2;
  uVar6 = FUN_00537fb0(uVar6,&PTR_DAT_00c7ed68,&PTR_DAT_00c7ed68);
  pppppppiVar11 = local_38[0];
  local_8 = 6;
  FUN_00534da0(uVar6);
  local_8 = 0xffffffff;
  local_60 = local_60 + -2;
  if (local_60 != (undefined4 ******)&DAT_00bfe124) {
    LOCK();
    pppppuVar1 = *local_60;
    *local_60 = (undefined4 *****)((int)*local_60 + -1);
    UNLOCK();
    if (pppppuVar1 == (undefined4 *****)0x0) {
      FID_conflict__free(local_60);
    }
  }
  if (pppppppiVar11 != (int *******)0x0) {
    (*(code *)(*pppppppiVar11)[10])(1);
    FUN_006e5050(pppppppiVar11,0xffffffff);
  }
  local_64 = (void *)(in_ECX + 0x168);
  FUN_005356e0();
  local_68 = *(int *)(iVar5 + 0x44);
  FUN_005bdda0();
  local_6c = (int *******)&DAT_00bfe12c;
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  local_51 = '\0';
  if (*(int *)(local_4c + 0x30) == 1) {
    FUN_0045c990("Stereo");
    local_6c = local_38[0];
    local_51 = '\x01';
  }
  else if (*(int *)(local_4c + 0x30) == 2) {
    piVar7 = (int *)(local_7c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    puVar8 = (undefined4 *)FUN_006377c0(local_7c);
    local_6c = (int *******)*puVar8;
    *puVar8 = &DAT_00bfe12c;
    pppppppiVar11 = local_38[0] + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
  }
  FUN_00621830(" Song");
  local_48 = operator_new(0xac);
  local_8._0_1_ = 9;
  FUN_0045c990("Type: ");
  local_8 = CONCAT31(local_8._1_3_,10);
  local_3c = 4;
  piVar7 = (int *)FUN_00537fb0(&local_44,&local_6c,&PTR_DAT_00c7ed68);
  local_8 = 0xb;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x28))(1);
    FUN_006e5050(piVar7,0xffffffff);
  }
  local_8 = 8;
  piVar7 = local_44 + -2;
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (local_51 == '\0') {
    if (1 < *(int *)(local_4c + 0x24)) {
      local_38[0] = operator_new(0xac);
      local_8._0_1_ = 0x1e;
      FUN_0045c990("Synched Units: ");
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      local_3c = 0x800;
      if (*(int *)(local_4c + 0x24) < 0) {
        iVar5 = FUN_006104a0();
        *(undefined1 *)(iVar5 + -1) = 0x2d;
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = FUN_006104a0();
      }
      FUN_004557e0(&local_15 + -iVar5);
      local_8 = 0x20;
      local_3c = 0x1800;
      local_38[0] = (int *******)FUN_00537fb0(&local_44,&local_40,&PTR_DAT_00c7ed68);
      local_8 = 0x22;
      if (local_38[0] != (int *******)0x0) {
        (*(code *)(*local_38[0])[10])(1);
        FUN_006e5050(local_38[0],0xffffffff);
      }
      local_40 = local_40 + -2;
      if (local_40 != (int *******)&DAT_00bfe124) {
        LOCK();
        ppppppiVar12 = *local_40;
        *local_40 = (int ******)((int)*local_40 + -1);
        UNLOCK();
        if (ppppppiVar12 == (int ******)0x0) {
          FID_conflict__free(local_40);
        }
      }
      local_8 = 8;
      piVar7 = local_44 + -2;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
    local_40 = (int *******)&DAT_00bfe12c;
    local_8._0_1_ = 0x23;
    switch(local_68) {
    case 1:
      break;
    case 2:
    case 4:
      break;
    case 3:
      goto switchD_00528234_caseD_3;
    default:
      goto switchD_00528234_default;
    }
    if ((*(int *)(local_4c + 0x28) != 1) && (*(int *)(local_4c + 0x28) != 2)) {
switchD_00528234_default:
      FUN_0045c990("Invalid");
      local_40 = local_38[0];
    }
switchD_00528234_caseD_3:
    pppppppiVar11 = local_40;
    local_48 = operator_new(0xac);
    local_8._0_1_ = 0x24;
    FUN_0045c990("Sample rate: ");
    local_8 = CONCAT31(local_8._1_3_,0x25);
    local_3c = 0x2000;
    uVar6 = FUN_005be060();
    local_8 = 0x26;
    local_3c = 0x6000;
    piVar7 = (int *)FUN_00537fb0(&local_44,uVar6,&local_40);
    local_8 = 0x28;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    pppppppiVar13 = local_38[0] + -2;
    if (pppppppiVar13 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar13;
      *pppppppiVar13 = (int ******)((int)*pppppppiVar13 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar13);
      }
    }
    local_8 = 0x23;
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_48 = operator_new(0xac);
    local_8._0_1_ = 0x29;
    FUN_0045c990("Resolution: ");
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    local_3c = 0x8000;
    uVar6 = FUN_005bdf30();
    local_8 = 0x2b;
    local_3c = 0x18000;
    piVar7 = (int *)FUN_00537fb0(&local_44,uVar6,&PTR_DAT_00c7ed68);
    local_8 = 0x2d;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    pppppppiVar13 = local_38[0] + -2;
    if (pppppppiVar13 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar13;
      *pppppppiVar13 = (int ******)((int)*pppppppiVar13 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar13);
      }
    }
    local_8 = 0x23;
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    pppppppiVar11 = pppppppiVar11 + -2;
    local_8._0_1_ = 8;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    iVar5 = local_4c;
    FUN_0053f280(&local_58,local_68);
    local_8._0_1_ = 0x2e;
    local_38[0] = operator_new(0xac);
    local_8._0_1_ = 0x2f;
    FUN_0045c990("Track count: ");
    local_8 = CONCAT31(local_8._1_3_,0x30);
    local_3c = 0x20000;
    if (*(int *)(iVar5 + 0x5c) < 0) {
      iVar5 = FUN_006104a0();
      *(undefined1 *)(iVar5 + -1) = 0x2d;
      iVar5 = iVar5 + -1;
    }
    else {
      iVar5 = FUN_006104a0();
    }
    FUN_004557e0(&local_15 + -iVar5);
    local_8 = 0x31;
    local_3c = 0x60000;
    piVar7 = (int *)FUN_00537fb0(&local_44,&local_40,&local_58);
    local_8 = 0x33;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    pppppppiVar11 = local_40 + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    local_8 = 0x2e;
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_48 = operator_new(0x1fc);
    local_8._0_1_ = 0x34;
    local_38[0] = (int *******)FUN_00537a10(local_4c);
    local_8._0_1_ = 0x2e;
    if (local_38[0] != (int *******)0x0) {
      (*(code *)(*local_38[0])[10])(1);
      FUN_006e5050(local_38[0],0xffffffff);
    }
    local_8 = CONCAT31(local_8._1_3_,8);
  }
  else {
    local_48 = operator_new(0x180);
    local_8._0_1_ = 0xc;
    FUN_0045c990("BTN_CHG_SR");
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_3c = 8;
    FUN_0045c990("Change");
    local_8 = 0xe;
    local_3c = 0x18;
    FUN_0045c990("Sample Rate: ");
    local_8 = 0xf;
    local_3c = 0x38;
    uVar6 = FUN_005be060();
    local_8 = 0x10;
    local_3c = 0x78;
    piVar7 = (int *)FUN_005383e0(&local_44,uVar6,&local_58,&local_40,
                                 -(uint)(local_50 != 0) & local_50 + 0x70U);
    local_8 = 0x14;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    pppppppiVar11 = local_38[0] + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    ppppppiVar12 = local_58 + -2;
    if (ppppppiVar12 != (int ******)&DAT_00bfe124) {
      LOCK();
      pppppiVar3 = *ppppppiVar12;
      *ppppppiVar12 = (int *****)((int)*ppppppiVar12 + -1);
      UNLOCK();
      if (pppppiVar3 == (int *****)0x0) {
        FID_conflict__free(ppppppiVar12);
      }
    }
    local_8 = 8;
    pppppppiVar11 = local_40 + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    local_48 = operator_new(0x180);
    local_8._0_1_ = 0x15;
    FUN_0045c990("BTN_CHG_RES");
    local_8 = CONCAT31(local_8._1_3_,0x16);
    local_3c = 0x80;
    FUN_0045c990("Change");
    local_8 = 0x17;
    local_3c = 0x180;
    FUN_0045c990("Resolution:");
    local_8 = 0x18;
    local_3c = 0x380;
    uVar6 = FUN_005bdf30();
    local_8 = 0x19;
    local_3c = 0x780;
    piVar7 = (int *)FUN_005383e0(&local_40,uVar6,&local_44,&local_58,
                                 -(uint)(local_50 != 0) & local_50 + 0x70U);
    local_8 = 0x1d;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x28))(1);
      FUN_006e5050(piVar7,0xffffffff);
    }
    pppppppiVar11 = local_38[0] + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    pppppppiVar11 = local_40 + -2;
    if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
      LOCK();
      ppppppiVar12 = *pppppppiVar11;
      *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
      UNLOCK();
      if (ppppppiVar12 == (int ******)0x0) {
        FID_conflict__free(pppppppiVar11);
      }
    }
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_8 = 8;
  }
  ppppppiVar12 = local_58 + -2;
  if (ppppppiVar12 != (int ******)&DAT_00bfe124) {
    LOCK();
    pppppiVar3 = *ppppppiVar12;
    *ppppppiVar12 = (int *****)((int)*ppppppiVar12 + -1);
    UNLOCK();
    if (pppppiVar3 == (int *****)0x0) {
      FID_conflict__free(ppppppiVar12);
    }
  }
  local_48 = operator_new(0xac);
  local_8._0_1_ = 0x35;
  pcVar18 = "Length: ";
  FUN_0045c990("Length: ");
  local_8 = CONCAT31(local_8._1_3_,0x36);
  local_3c = 0x80000;
  uVar6 = FUN_00540660(local_38,pcVar18);
  local_8 = 0x37;
  local_3c = 0x180000;
  piVar7 = (int *)FUN_00537fb0(&local_40,uVar6,&PTR_DAT_00c7ed68);
  local_8 = 0x39;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x28))(1);
    FUN_006e5050(piVar7,0xffffffff);
  }
  pppppppiVar11 = local_38[0] + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  local_8 = 8;
  pppppppiVar11 = local_40 + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  local_48 = operator_new(0xac);
  local_8._0_1_ = 0x3a;
  FUN_0045c990("Size: ");
  local_8 = CONCAT31(local_8._1_3_,0x3b);
  local_3c = 0x200000;
  uVar14 = FUN_0053f820(0);
  uVar6 = FUN_00636d50(uVar14);
  local_8 = 0x3c;
  local_3c = 0x600000;
  piVar7 = (int *)FUN_00537fb0(&local_40,uVar6,&PTR_DAT_00c7ed68);
  local_8 = 0x3e;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x28))(1);
    FUN_006e5050(piVar7,0xffffffff);
  }
  pppppppiVar11 = local_38[0] + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  local_8 = 8;
  pppppppiVar11 = local_40 + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  local_48 = operator_new(0xac);
  local_8 = CONCAT31(local_8._1_3_,0x3f);
  FUN_0045c990("Modification Date: ");
  pppppppuVar15 = local_38;
  uVar19 = 0;
  uVar17 = 0;
  uVar16 = 1;
  uVar6 = 1;
  FUN_00413680(local_74);
  uVar6 = FUN_00636ad0(pppppppuVar15,uVar6,uVar16,uVar17,uVar19);
  local_8 = 0x41;
  local_3c = 0x3800000;
  piVar7 = (int *)FUN_00537fb0(&local_40,uVar6,&PTR_DAT_00c7ed68);
  local_8 = 0x43;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x28))(1);
    FUN_006e5050(piVar7,0xffffffff);
  }
  pppppppiVar11 = local_38[0] + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  pppppppiVar11 = local_40 + -2;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  if (local_51 != '\0') {
    if (0 < *(int *)(local_4c + 0x5c)) {
      if (*(int *)(local_4c + 0x5c) == 0) {
        local_58 = (int ******)0x0;
      }
      else {
        local_58 = (int ******)**(int **)(local_4c + 0x54);
      }
      FUN_005356e0();
      local_48 = operator_new(0x80);
      local_8._0_1_ = 0x51;
      FUN_0045c990("Original .wav file");
      local_8 = CONCAT31(local_8._1_3_,0x52);
      local_3c = 1;
      local_44 = (int *)FUN_00534e00(&local_5c);
      local_8 = 8;
      FUN_00637c10();
      local_3c = 0;
      FUN_0053f050(&local_48);
      local_8._0_1_ = 0x54;
      local_64 = operator_new(0xac);
      local_8._0_1_ = 0x55;
      cVar4 = FUN_0053f150();
      if (cVar4 == '\0') {
        FUN_0045c990("Missing file");
        local_5c = &local_60;
        local_8 = 0x57;
        uVar10 = 4;
      }
      else {
        local_38[0] = (int *******)PTR_DAT_00c7ed68;
        piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        local_5c = local_38;
        local_8 = CONCAT31(local_8._1_3_,0x56);
        uVar10 = 2;
      }
      local_3c = uVar10;
      FUN_0045c990("File: ");
      uVar6 = FUN_005406d0(local_70);
      local_8 = 0x59;
      local_3c = uVar10 | 0x18;
      uVar6 = FUN_00537fb0(&local_40,uVar6,local_5c);
      local_8 = 0x5d;
      FUN_00534da0(uVar6);
      FUN_0040ea50();
      FUN_00637c10();
      if ((uVar10 & 4) != 0) {
        uVar10 = uVar10 & 0xfffffff3;
        FUN_00637c10();
      }
      local_8 = 0x54;
      if ((uVar10 & 2) != 0) {
        uVar10 = uVar10 & 0xfffffffd;
        FUN_00637c10();
      }
      local_64 = operator_new(0xac);
      puVar8 = local_48;
      local_8._0_1_ = 0x5e;
      if (local_48 == (undefined4 *)0x0) {
        local_5c = (undefined4 *******)PTR_DAT_00c7ed68;
        piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        local_38[0] = (int *******)&local_5c;
        local_8 = 0x60;
        uVar10 = uVar10 | 0x40;
      }
      else {
        local_38[0] = (int *******)FUN_005be060();
        local_8 = CONCAT31(local_8._1_3_,0x5f);
        uVar10 = uVar10 | 0x20;
      }
      local_3c = uVar10;
      FUN_0045c990("Sample rate: ");
      local_8 = 0x61;
      local_3c = uVar10 | 0x80;
      uVar6 = FUN_00537fb0(&local_60,local_38[0],&PTR_DAT_00c7ed68);
      local_8 = 100;
      FUN_00534da0(uVar6);
      FUN_00637c10();
      if ((uVar10 & 0x40) != 0) {
        uVar10 = uVar10 & 0xffffffbf;
        FUN_00637c10();
      }
      local_8 = 0x54;
      if ((uVar10 & 0x20) != 0) {
        uVar10 = uVar10 & 0xffffffdf;
        FUN_00637c10();
      }
      local_64 = operator_new(0xac);
      local_8._0_1_ = 0x65;
      if (puVar8 == (undefined4 *)0x0) {
        local_5c = (undefined4 *******)PTR_DAT_00c7ed68;
        piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        local_38[0] = (int *******)&local_5c;
        local_8 = 0x67;
        uVar10 = uVar10 | 0x200;
      }
      else {
        local_38[0] = (int *******)FUN_005bdfb0();
        local_8 = CONCAT31(local_8._1_3_,0x66);
        uVar10 = uVar10 | 0x100;
      }
      local_3c = uVar10;
      FUN_0045c990("Resolution: ");
      local_8 = 0x68;
      local_3c = uVar10 | 0x400;
      uVar6 = FUN_00537fb0(&local_60,local_38[0],&PTR_DAT_00c7ed68);
      local_8 = 0x6b;
      FUN_00534da0(uVar6);
      FUN_00637c10();
      if ((uVar10 & 0x200) != 0) {
        uVar10 = uVar10 & 0xfffffdff;
        FUN_00637c10();
      }
      local_8 = 0x54;
      if ((uVar10 & 0x100) != 0) {
        FUN_00637c10();
      }
      piVar7 = local_44;
      if (local_44 != (int *)0x0) {
        (**(code **)(*local_44 + 0x28))(1);
        FUN_006e5050(piVar7,0xffffffff);
      }
      local_8._0_1_ = 8;
      if (puVar8 != (undefined4 *)0x0) {
        LOCK();
        piVar7 = puVar8 + 1;
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar8)(1);
        }
      }
    }
    goto LAB_005289e5;
  }
  iVar5 = FUN_00448730(*(undefined4 *)(local_4c + 100),&PTR_00c094f8);
  if (iVar5 == 0) goto LAB_005289e5;
  local_38[0] = operator_new(0xac);
  puVar8 = (undefined4 *)FUN_00410af0(&local_64);
  local_8 = CONCAT31(local_8._1_3_,0x45);
  local_3c = 0x4000000;
  if (*(char *)*puVar8 == '\0') {
LAB_005288d9:
    FUN_0045c990("Missing MIDI file");
    local_40 = &local_58;
    local_8 = 0x47;
    uVar10 = 0x14000000;
  }
  else {
    puVar8 = (undefined4 *)FUN_00458890();
    DVar9 = GetFileAttributesW((LPCWSTR)*puVar8);
    if ((DVar9 & 0x10) != 0) goto LAB_005288d9;
    local_5c = (undefined4 *******)PTR_DAT_00c7ed68;
    piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    local_40 = (int *******)&local_5c;
    local_8 = 0x46;
    uVar10 = 0xc000000;
  }
  local_3c = uVar10;
  FUN_0045c990("MIDI file: ");
  FUN_00410af0(local_70);
  local_8 = 0x49;
  local_3c = local_3c | 0x60000000;
  uVar6 = FUN_00636a10(&local_60);
  local_8 = 0x4a;
  local_3c = uVar10 | 0xe0000000;
  piVar7 = (int *)FUN_00537fb0(&local_44,uVar6,local_40);
  local_8 = 0x50;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x28))(1);
    FUN_006e5050(piVar7,0xffffffff);
  }
  FUN_00637c10();
  FUN_0040ea50();
  FUN_00637c10();
  if ((uVar10 & 0x10000000) != 0) {
    uVar10 = uVar10 & 0x8fffffff;
    FUN_00637c10();
  }
  if ((uVar10 & 0x8000000) != 0) {
    FUN_00637c10();
  }
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  FUN_0040ea50();
LAB_005289e5:
  local_48 = operator_new(0x21c);
  local_8._0_1_ = 0x6c;
  local_38[0] = (int *******)FUN_00538f20(local_68,local_4c,*(undefined4 *)(local_50 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,8);
  if (local_38[0] != (int *******)0x0) {
    (*(code *)(*local_38[0])[10])(1);
    FUN_006e5050(local_38[0],0xffffffff);
  }
  FUN_00539d80();
  uVar6 = FUN_0051c060();
  pppppppiVar11 = local_6c + -2;
  *(undefined4 *)(local_50 + 0x4f0) = uVar6;
  if (pppppppiVar11 != (int *******)&DAT_00bfe124) {
    LOCK();
    ppppppiVar12 = *pppppppiVar11;
    *pppppppiVar11 = (int ******)((int)*pppppppiVar11 + -1);
    UNLOCK();
    if (ppppppiVar12 == (int ******)0x0) {
      FID_conflict__free(pppppppiVar11);
    }
  }
  piVar7 = (int *)(local_7c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

