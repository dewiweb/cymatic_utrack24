// rea decompile_all
// name: FUN_00420cd0
// address: 0x420cd0
// body: available
// range: 0x420cd0-0x422796 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420cd0(undefined4 *param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  int iVar9;
  undefined4 *puVar10;
  int in_ECX;
  int *piVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  undefined1 **local_158;
  undefined1 **local_154;
  int local_138;
  int local_134;
  undefined1 *local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined1 **local_b4;
  undefined **local_b0;
  int local_ac;
  int local_a8;
  undefined *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined *local_98;
  undefined1 *local_94;
  undefined1 **local_90;
  int local_8c;
  undefined *local_88;
  undefined *local_84;
  int local_80;
  undefined1 *local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined **local_6c;
  int local_68;
  undefined *local_64;
  undefined *local_60;
  undefined1 *local_5c;
  uint local_58;
  int local_54;
  undefined1 *local_50;
  undefined *local_4c;
  undefined1 *local_48;
  int local_44;
  undefined1 **local_40;
  uint local_38;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fd39f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_58 = 0;
  local_8 = 0;
  local_154 = (undefined1 **)0x420d25;
  local_44 = in_ECX;
  FUN_0045c990();
  ppuVar16 = local_b4;
  local_8._0_1_ = 1;
  local_90 = local_b4 + -2;
  if (local_90 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *local_90 = *local_90 + 1;
    UNLOCK();
  }
  local_154 = (undefined1 **)0x420d53;
  FUN_006377c0();
  local_8._0_1_ = 2;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 2;
  if (param_1[3] == 0) {
    ppuVar16 = (undefined1 **)0x0;
    local_8._0_1_ = uVar4;
    if (0 < (int)param_1[6]) {
      do {
        local_158 = (undefined1 **)&stack0xfffffeb0;
        puStack_15c = (undefined1 *)0x42270b;
        local_154 = ppuVar16;
        FUN_00410f30();
        local_154 = (undefined1 **)0x422712;
        FUN_00420cd0();
        ppuVar16 = (undefined1 **)((int)ppuVar16 + 1);
      } while ((int)ppuVar16 < (int)param_1[6]);
    }
    goto LAB_0042271b;
  }
  uVar6 = FUN_005b48e0();
  switch(uVar6) {
  case 1:
    local_54 = 0x30;
    break;
  case 2:
    local_54 = 0x3c;
    break;
  case 3:
    local_54 = 0x18;
    break;
  case 4:
    local_54 = 0x24;
    break;
  default:
    local_54 = 0x48;
  }
  local_54 = in_ECX + local_54;
  if (local_54 == 0) goto LAB_0042271b;
  if (*(int *)(local_54 + 8) != 0) {
    local_154 = (undefined1 **)0x420dbf;
    FUN_0045c990();
    local_154 = (undefined1 **)0x420dcd;
    FUN_00637d80();
    piVar11 = (int *)(local_60 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x420ded;
        FID_conflict__free(piVar11);
      }
    }
  }
  local_154 = (undefined1 **)0x420dfc;
  puVar7 = (undefined4 *)FUN_00410ea0();
  local_8 = CONCAT31(local_8._1_3_,3);
  if (*(char *)*puVar7 == '\0') {
LAB_00420e3c:
    local_154 = (undefined1 **)0x420e4d;
    FUN_0045c990();
    ppuVar12 = &local_60;
    local_58 = 2;
  }
  else {
    puVar7 = (undefined4 *)FUN_00458890();
    local_154 = (undefined1 **)0x420e19;
    DVar8 = GetFileAttributesW((LPCWSTR)*puVar7);
    if ((DVar8 & 0x10) != 0) goto LAB_00420e3c;
    local_64 = PTR_DAT_00c7ed68;
    piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    ppuVar12 = &local_64;
    local_58 = 1;
  }
  puVar18 = *ppuVar12;
  *ppuVar12 = &DAT_00bfe12c;
  local_8 = 6;
  local_154 = (undefined1 **)0x420e7c;
  local_74 = puVar18;
  local_38 = local_58;
  local_4c = (undefined *)FUN_00410ea0();
  local_5c = &stack0xfffffeb0;
  local_8 = CONCAT31(local_8._1_3_,7);
  local_158 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  puStack_15c = (undefined1 *)0x420ea6;
  FUN_006377c0();
  local_158 = (undefined1 **)0x420eb1;
  FUN_00637730();
  local_154 = (undefined1 **)0x420ebc;
  FUN_00637730();
  local_154 = (undefined1 **)0x420ec5;
  FUN_00637d80();
  piVar11 = (int *)(local_70 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x420ee5;
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(local_78 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x420f08;
      FID_conflict__free(piVar11);
    }
  }
  piVar11 = (int *)(puVar18 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x420f28;
      FID_conflict__free(piVar11);
    }
  }
  if ((local_38 & 2) != 0) {
    local_58 = local_38 & 0xfffffffd;
    piVar11 = (int *)(local_60 + -8);
    local_38 = local_58;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x420f5c;
        FID_conflict__free(piVar11);
      }
    }
  }
  local_8 = 3;
  if ((local_38 & 1) != 0) {
    local_58 = local_38 & 0xfffffffe;
    piVar11 = (int *)(local_64 + -8);
    local_38 = local_58;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x420f97;
        FID_conflict__free(piVar11);
      }
    }
  }
  piVar11 = (int *)(local_80 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x420fba;
      FID_conflict__free(piVar11);
    }
  }
  local_68 = param_1[3];
  local_154 = (undefined1 **)0x420fd1;
  FUN_00410ad0();
  local_8 = CONCAT31(local_8._1_3_,8);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x420ff6;
  FUN_006377c0();
  local_154 = (undefined1 **)0x421000;
  FUN_00637730();
  local_154 = (undefined1 **)0x421009;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421029;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421050;
      FID_conflict__free(piVar11);
    }
  }
  local_154 = (undefined1 **)0x42105f;
  FUN_005403c0();
  local_8 = CONCAT31(local_8._1_3_,9);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x421084;
  FUN_006377c0();
  local_154 = (undefined1 **)0x42108e;
  FUN_00637730();
  local_154 = (undefined1 **)0x421097;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4210b7;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4210de;
      FID_conflict__free(piVar11);
    }
  }
  local_154 = (undefined1 **)0x4210f3;
  FUN_00637cf0();
  local_8 = CONCAT31(local_8._1_3_,10);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x421118;
  FUN_006377c0();
  local_154 = (undefined1 **)0x421122;
  FUN_00637730();
  local_154 = (undefined1 **)0x42112b;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x42114b;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421172;
      FID_conflict__free(piVar11);
    }
  }
  local_154 = &local_5c;
  local_158 = (undefined1 **)0x421182;
  FUN_00540660();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x4211a7;
  FUN_006377c0();
  local_154 = (undefined1 **)0x4211b1;
  FUN_00637730();
  local_154 = (undefined1 **)0x4211bc;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4211dc;
      FID_conflict__free(piVar11);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421203;
      FID_conflict__free(piVar11);
    }
  }
  if (*(int *)(local_68 + 0x24) < 0) {
    iVar9 = FUN_006104a0();
    *(undefined1 *)(iVar9 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  local_154 = (undefined1 **)0x421238;
  FUN_004557e0();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x42125a;
  FUN_006377c0();
  local_154 = (undefined1 **)0x421265;
  FUN_00637730();
  local_154 = (undefined1 **)0x42126d;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x42128d;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_60 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4212b4;
      FID_conflict__free(piVar11);
    }
  }
  FUN_005be060();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x4212ea;
  FUN_006377c0();
  local_154 = (undefined1 **)0x4212f4;
  FUN_00637730();
  local_154 = (undefined1 **)0x4212fd;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x42131d;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421344;
      FID_conflict__free(piVar11);
    }
  }
  FUN_005bdf30();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_154 = ppuVar16;
  ppuVar1 = ppuVar16 + -2;
  if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
  }
  local_158 = (undefined1 **)0x42137a;
  FUN_006377c0();
  local_154 = (undefined1 **)0x421384;
  FUN_00637730();
  local_154 = (undefined1 **)0x42138f;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4213af;
      FID_conflict__free(piVar11);
    }
  }
  local_8._0_1_ = 2;
  piVar11 = (int *)(local_5c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x4213d6;
      FID_conflict__free(piVar11);
    }
  }
  local_154 = *(undefined1 ***)(local_68 + 100);
  local_158 = (undefined1 **)0x4213f2;
  iVar9 = FUN_00448730();
  if (iVar9 == 0) {
    ppuVar1 = ppuVar16 + -2;
    if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
      LOCK();
      *ppuVar1 = *ppuVar1 + 1;
      UNLOCK();
    }
    local_154 = (undefined1 **)0x421619;
    FUN_006377c0();
    local_154 = (undefined1 **)0x421621;
    FUN_00637d80();
    FUN_00637c10();
  }
  else {
    local_154 = (undefined1 **)0x421409;
    puVar7 = (undefined4 *)FUN_00410af0();
    local_8 = CONCAT31(local_8._1_3_,0xf);
    if (*(char *)*puVar7 == '\0') {
LAB_0042144a:
      local_154 = (undefined1 **)0x42145b;
      FUN_0045c990();
      local_58 = local_38 | 8;
    }
    else {
      puVar7 = (undefined4 *)FUN_00458890();
      local_154 = (undefined1 **)0x421426;
      DVar8 = GetFileAttributesW((LPCWSTR)*puVar7);
      if ((DVar8 & 0x10) != 0) goto LAB_0042144a;
      local_64 = PTR_DAT_00c7ed68;
      piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        UNLOCK();
      }
      local_58 = local_38 | 4;
    }
    local_154 = (undefined1 **)0x421479;
    local_38 = local_58;
    local_4c = (undefined *)FUN_00410af0();
    local_5c = &stack0xfffffeb0;
    local_8 = 0x12;
    local_158 = ppuVar16;
    ppuVar1 = ppuVar16 + -2;
    if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
      LOCK();
      *ppuVar1 = *ppuVar1 + 1;
      UNLOCK();
    }
    puStack_15c = (undefined1 *)0x4214a6;
    FUN_006377c0();
    local_158 = (undefined1 **)0x4214b1;
    FUN_00637730();
    local_154 = (undefined1 **)0x4214bb;
    FUN_00637730();
    local_154 = (undefined1 **)0x4214c4;
    FUN_00637d80();
    piVar11 = (int *)(local_74 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x4214e4;
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_70 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x421507;
        FID_conflict__free(piVar11);
      }
    }
    if ((local_38 & 8) != 0) {
      local_38 = local_38 & 0xfffffff7;
      FUN_00637c10();
    }
    local_8 = 0xf;
    if ((local_38 & 4) != 0) {
      local_38 = local_38 & 0xfffffffb;
      FUN_00637c10();
    }
    local_8._0_1_ = 2;
    piVar11 = (int *)(local_78 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x42155f;
        FID_conflict__free(piVar11);
      }
    }
    local_154 = (undefined1 **)0x421574;
    FUN_00637cf0();
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_154 = ppuVar16;
    ppuVar1 = ppuVar16 + -2;
    if (ppuVar1 != (undefined1 **)&DAT_00bfe124) {
      LOCK();
      *ppuVar1 = *ppuVar1 + 1;
      UNLOCK();
    }
    local_158 = (undefined1 **)0x421599;
    FUN_006377c0();
    local_154 = (undefined1 **)0x4215a3;
    FUN_00637730();
    local_154 = (undefined1 **)0x4215ae;
    FUN_00637d80();
    piVar11 = (int *)(local_4c + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x4215ce;
        FID_conflict__free(piVar11);
      }
    }
    local_8._0_1_ = 2;
    piVar11 = (int *)(local_5c + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_154 = (undefined1 **)0x4215f5;
        FID_conflict__free(piVar11);
      }
    }
  }
  ppuVar16 = ppuVar16 + -2;
  if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    *ppuVar16 = *ppuVar16 + 1;
    UNLOCK();
  }
  local_154 = (undefined1 **)0x421648;
  FUN_006377c0();
  local_154 = (undefined1 **)0x421650;
  FUN_00637d80();
  piVar11 = (int *)(local_4c + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_154 = (undefined1 **)0x421670;
      FID_conflict__free(piVar11);
    }
  }
  local_60 = (undefined *)0x0;
  if (0 < *(int *)(local_68 + 0x5c)) {
    puVar14 = (undefined *)0x0;
    iVar9 = local_68;
    puVar15 = local_78;
    puVar18 = local_84;
    puVar17 = local_84;
    if (*(int *)(local_68 + 0x5c) < 1) goto LAB_004226db;
    do {
      puVar14 = local_60;
      puVar18 = puVar17;
      if ((local_60 < *(undefined **)(iVar9 + 0x5c)) &&
         (local_64 = *(undefined **)(*(int *)(iVar9 + 0x54) + (int)local_60 * 4),
         local_64 != (undefined *)0x0)) {
        cVar5 = FUN_0053e410();
        puVar18 = PTR_DAT_00c7ed68;
        if (cVar5 == '\0') {
          local_84 = PTR_DAT_00c7ed68;
          piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          local_6c = &local_84;
          local_8 = 0x15;
          local_58 = local_38 | 0x20;
        }
        else {
          local_154 = (undefined1 **)0x4216cd;
          FUN_0045c990();
          local_6c = &local_98;
          local_8 = CONCAT31(local_8._1_3_,0x14);
          local_58 = local_38 | 0x10;
          puVar18 = puVar17;
        }
        local_38 = local_58;
        cVar5 = FUN_0053f150();
        if (cVar5 == '\0') {
          local_154 = (undefined1 **)0x421760;
          FUN_0045c990();
          local_b0 = &local_a4;
          local_58 = local_38 | 0x80;
        }
        else {
          local_88 = PTR_DAT_00c7ed68;
          piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          local_b0 = &local_88;
          local_58 = local_38 | 0x40;
        }
        puVar14 = local_88;
        local_48 = &stack0xfffffeb0;
        local_154 = &local_130;
        local_158 = (undefined1 **)0x421796;
        local_38 = local_58;
        local_7c = (undefined1 *)FUN_00411300();
        local_50 = (undefined1 *)&local_154;
        local_8 = 0x18;
        local_a0 = (undefined1 *)&local_158;
        if ((int)local_60 < 0) {
          puStack_15c = (undefined1 *)0x4217c5;
          iVar9 = FUN_006104a0();
          *(undefined1 *)(iVar9 + -1) = 0x2d;
          iVar9 = iVar9 + -1;
        }
        else {
          puStack_15c = (undefined1 *)0x4217ba;
          local_a0 = (undefined1 *)&local_158;
          local_50 = (undefined1 *)&local_154;
          iVar9 = FUN_006104a0();
        }
        puStack_15c = &local_15 + -iVar9;
        uStack_160 = 0x4217dd;
        FUN_004557e0();
        local_8._0_1_ = 0x19;
        local_fc = FUN_0062eb70(&local_12c);
        local_94 = (undefined1 *)&uStack_160;
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        if (local_90 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *local_90 = *local_90 + 1;
          UNLOCK();
        }
        local_9c = (undefined1 *)&puStack_15c;
        FUN_006377c0(local_b4);
        FUN_00637730();
        uStack_160 = 0x421858;
        FUN_006377c0();
        puStack_15c = (undefined1 *)0x421863;
        FUN_00637730();
        local_158 = (undefined1 **)0x421871;
        FUN_00637730();
        local_154 = (undefined1 **)0x42187f;
        FUN_00637730();
        local_154 = (undefined1 **)0x421888;
        FUN_00637d80();
        piVar11 = (int *)(local_128 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4218ac;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_12c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4218d3;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_a8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4218fa;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_130 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421921;
            FID_conflict__free(piVar11);
          }
        }
        if ((char)local_38 < '\0') {
          local_58 = local_38 & 0xffffff7f;
          piVar11 = (int *)(local_a4 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x42195b;
              FID_conflict__free(piVar11);
            }
          }
        }
        if ((local_38 & 0x40) != 0) {
          local_58 = local_38 & 0xffffffbf;
          piVar11 = (int *)(puVar14 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x42198e;
              FID_conflict__free(piVar11);
            }
          }
        }
        if ((local_38 & 0x20) != 0) {
          local_58 = local_38 & 0xffffffdf;
          piVar11 = (int *)(puVar18 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x4219c4;
              FID_conflict__free(piVar11);
            }
          }
        }
        local_8 = 2;
        if ((local_38 & 0x10) != 0) {
          local_58 = local_38 & 0xffffffef;
          piVar11 = (int *)(local_98 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x421a02;
              FID_conflict__free(piVar11);
            }
          }
        }
        if (*(int *)(local_64 + 8) < 0) {
          iVar9 = FUN_006104a0();
          *(undefined1 *)(iVar9 + -1) = 0x2d;
        }
        else {
          FUN_006104a0();
        }
        local_154 = (undefined1 **)0x421a3a;
        FUN_004557e0();
        local_8 = CONCAT31(local_8._1_3_,0x1b);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x421a66;
        local_48 = &stack0xfffffeb0;
        FUN_006377c0();
        local_154 = (undefined1 **)0x421a77;
        FUN_00637730();
        local_154 = (undefined1 **)0x421a80;
        FUN_00637d80();
        piVar11 = (int *)(local_134 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421aa3;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 2;
        piVar11 = (int *)(local_8c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421acd;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x421ae5;
        local_50 = (undefined1 *)FUN_006353d0();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x421b15;
        FUN_006377c0();
        local_154 = (undefined1 **)0x421b23;
        FUN_00637730();
        local_154 = (undefined1 **)0x421b2c;
        FUN_00637d80();
        piVar11 = (int *)(local_bc + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421b4f;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 2;
        piVar11 = (int *)(local_c0 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421b79;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x421b91;
        local_50 = (undefined1 *)FUN_006353d0();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x1d);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x421bc1;
        FUN_006377c0();
        local_154 = (undefined1 **)0x421bcf;
        FUN_00637730();
        local_154 = (undefined1 **)0x421bd8;
        FUN_00637d80();
        piVar11 = (int *)(local_c4 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421bfb;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 2;
        piVar11 = (int *)(local_c8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421c25;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x421c4a;
        FUN_0045c990();
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x421c76;
        local_48 = &stack0xfffffeb0;
        FUN_006377c0();
        local_154 = (undefined1 **)0x421c84;
        FUN_00637730();
        local_154 = (undefined1 **)0x421c8d;
        FUN_00637d80();
        piVar11 = (int *)(local_cc + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421cb0;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_80 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421cd3;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x421ce5;
        puVar7 = (undefined4 *)FUN_005406d0();
        local_8 = CONCAT31(local_8._1_3_,0x1f);
        if (*(char *)*puVar7 == '\0') {
LAB_00421d2f:
          local_154 = (undefined1 **)0x421d40;
          FUN_0045c990();
          local_6c = &local_70;
          local_58 = local_38 | 0x200;
        }
        else {
          puVar7 = (undefined4 *)FUN_00458890();
          local_154 = (undefined1 **)0x421d05;
          DVar8 = GetFileAttributesW((LPCWSTR)*puVar7);
          puVar14 = PTR_DAT_00c7ed68;
          if ((DVar8 & 0x10) != 0) goto LAB_00421d2f;
          local_78 = PTR_DAT_00c7ed68;
          piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          local_6c = &local_78;
          local_58 = local_38 | 0x100;
          puVar15 = puVar14;
        }
        local_154 = (undefined1 **)0x421d66;
        local_38 = local_58;
        local_50 = (undefined1 *)FUN_005406d0();
        local_7c = &stack0xfffffeb0;
        local_48 = (undefined1 *)&local_154;
        local_8 = 0x22;
        local_158 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        puStack_15c = (undefined1 *)0x421d9d;
        FUN_006377c0();
        local_158 = (undefined1 **)0x421da8;
        FUN_00637730();
        local_154 = (undefined1 **)0x421db6;
        FUN_00637730();
        local_154 = (undefined1 **)0x421dbf;
        FUN_00637d80();
        piVar11 = (int *)(local_d0 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421de2;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_d4 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421e08;
            FID_conflict__free(piVar11);
          }
        }
        if ((local_38 & 0x200) != 0) {
          local_58 = local_38 & 0xfffffdff;
          piVar11 = (int *)(local_70 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x421e42;
              FID_conflict__free(piVar11);
            }
          }
        }
        local_8 = 0x1f;
        if ((local_38 & 0x100) != 0) {
          local_58 = local_38 & 0xfffffeff;
          piVar11 = (int *)(puVar15 + -8);
          local_38 = local_58;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x421e80;
              FID_conflict__free(piVar11);
            }
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        piVar11 = (int *)(local_d8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421eaa;
            FID_conflict__free(piVar11);
          }
        }
        if (*(int *)(local_64 + 0x24) < 0) {
          iVar9 = FUN_006104a0();
          *(undefined1 *)(iVar9 + -1) = 0x2d;
        }
        else {
          FUN_006104a0();
        }
        local_154 = (undefined1 **)0x421edf;
        FUN_004557e0();
        local_8 = CONCAT31(local_8._1_3_,0x23);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x421f0b;
        local_48 = &stack0xfffffeb0;
        FUN_006377c0();
        local_154 = (undefined1 **)0x421f19;
        FUN_00637730();
        local_154 = (undefined1 **)0x421f22;
        FUN_00637d80();
        piVar11 = (int *)(local_dc + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421f45;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 2;
        piVar11 = (int *)(local_74 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x421f6c;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x421f7e;
        FUN_0053f050();
        puVar7 = local_e0;
        local_154 = (undefined1 **)0x421f92;
        puVar10 = (undefined4 *)FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,0x25);
        if (*(char *)*puVar10 == '\0') {
LAB_00421fdb:
          local_154 = (undefined1 **)0x421fec;
          FUN_0045c990();
          local_6c = &local_5c;
          local_58 = local_38 | 0x800;
        }
        else {
          puVar10 = (undefined4 *)FUN_00458890();
          local_154 = (undefined1 **)0x421fb2;
          DVar8 = GetFileAttributesW((LPCWSTR)*puVar10);
          if ((DVar8 & 0x10) != 0) goto LAB_00421fdb;
          local_4c = PTR_DAT_00c7ed68;
          piVar11 = (int *)(PTR_DAT_00c7ed68 + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            UNLOCK();
          }
          local_6c = &local_4c;
          local_58 = local_38 | 0x400;
        }
        local_154 = (undefined1 **)0x422011;
        local_38 = local_58;
        local_50 = (undefined1 *)FUN_00410ea0();
        local_7c = &stack0xfffffeb0;
        local_48 = (undefined1 *)&local_154;
        local_8 = 0x28;
        local_158 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        puStack_15c = (undefined1 *)0x422048;
        FUN_006377c0();
        local_158 = (undefined1 **)0x422053;
        FUN_00637730();
        local_154 = (undefined1 **)0x422061;
        FUN_00637730();
        local_154 = (undefined1 **)0x42206a;
        FUN_00637d80();
        piVar11 = (int *)(local_e4 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x42208e;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_e8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4220b5;
            FID_conflict__free(piVar11);
          }
        }
        uVar13 = local_38;
        if ((local_38 & 0x800) != 0) {
          uVar13 = local_38 & 0xfffff7ff;
          piVar11 = (int *)(local_5c + -8);
          local_38 = uVar13;
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x4220ed;
              FID_conflict__free(piVar11);
              uVar13 = local_38;
            }
          }
        }
        local_8 = 0x25;
        if ((uVar13 & 0x400) != 0) {
          local_38 = uVar13 & 0xfffffbff;
          piVar11 = (int *)(local_4c + -8);
          if (piVar11 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              local_154 = (undefined1 **)0x42212c;
              FID_conflict__free(piVar11);
            }
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_ec + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422157;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)FUN_0040eaa0();
        local_158 = (undefined1 **)0x42216e;
        local_50 = (undefined1 *)FUN_00636d50();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x29);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x4221a0;
        FUN_006377c0();
        local_154 = (undefined1 **)0x4221ae;
        FUN_00637730();
        local_154 = (undefined1 **)0x4221b7;
        FUN_00637d80();
        piVar11 = (int *)(local_f0 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4221db;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_f4 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422206;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x422217;
        local_50 = (undefined1 *)FUN_0040eb00();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2a);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x422247;
        FUN_006377c0();
        local_154 = (undefined1 **)0x422255;
        FUN_00637730();
        local_154 = (undefined1 **)0x42225e;
        FUN_00637d80();
        piVar11 = (int *)(local_f8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422282;
            FID_conflict__free(piVar11);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,0x24);
        piVar11 = (int *)(local_11c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4222ad;
            FID_conflict__free(piVar11);
          }
        }
        if (puVar7[6] != 0) {
          FUN_006f56f0();
        }
        local_154 = (undefined1 **)0x4222e3;
        local_50 = (undefined1 *)FUN_00637cf0();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2b);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x422313;
        FUN_006377c0();
        local_154 = (undefined1 **)0x422321;
        FUN_00637730();
        local_154 = (undefined1 **)0x42232a;
        FUN_00637d80();
        piVar11 = (int *)(local_100 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x42234e;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_104 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422379;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x42238a;
        local_50 = (undefined1 *)FUN_00549490();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x4223ba;
        FUN_006377c0();
        local_154 = (undefined1 **)0x4223c8;
        FUN_00637730();
        local_154 = (undefined1 **)0x4223d1;
        FUN_00637d80();
        piVar11 = (int *)(local_108 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4223f5;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_10c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422420;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)puVar7[4];
        local_158 = (undefined1 **)0x422434;
        local_50 = (undefined1 *)FUN_00633ba0();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2d);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x422464;
        FUN_006377c0();
        local_154 = (undefined1 **)0x422472;
        FUN_00637730();
        local_154 = (undefined1 **)0x42247b;
        FUN_00637d80();
        piVar11 = (int *)(local_110 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x42249f;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_114 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4224ca;
            FID_conflict__free(piVar11);
          }
        }
        local_50 = (undefined1 *)FUN_005be060();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2e);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x42250b;
        FUN_006377c0();
        local_154 = (undefined1 **)0x422519;
        FUN_00637730();
        local_154 = (undefined1 **)0x422522;
        FUN_00637d80();
        piVar11 = (int *)(local_118 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422546;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_138 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422571;
            FID_conflict__free(piVar11);
          }
        }
        FUN_0040f230();
        local_50 = (undefined1 *)FUN_005bdf30();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x2f);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x4225b8;
        FUN_006377c0();
        local_154 = (undefined1 **)0x4225c6;
        FUN_00637730();
        local_154 = (undefined1 **)0x4225cf;
        FUN_00637d80();
        piVar11 = (int *)(local_120 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4225f3;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 0x24;
        piVar11 = (int *)(local_124 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x42261e;
            FID_conflict__free(piVar11);
          }
        }
        local_154 = (undefined1 **)0x42262c;
        local_50 = (undefined1 *)FUN_00637c90();
        local_48 = &stack0xfffffeb0;
        local_8 = CONCAT31(local_8._1_3_,0x30);
        local_154 = local_40;
        ppuVar16 = local_40 + -2;
        if (ppuVar16 != (undefined1 **)&DAT_00bfe124) {
          LOCK();
          *ppuVar16 = *ppuVar16 + 1;
          UNLOCK();
        }
        local_158 = (undefined1 **)0x42265c;
        FUN_006377c0();
        local_154 = (undefined1 **)0x42266a;
        FUN_00637730();
        local_154 = (undefined1 **)0x422673;
        FUN_00637d80();
        piVar11 = (int *)(local_ac + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x422697;
            FID_conflict__free(piVar11);
          }
        }
        piVar11 = (int *)(local_44 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_154 = (undefined1 **)0x4226bb;
            FID_conflict__free(piVar11);
          }
        }
        local_8._0_1_ = 2;
        LOCK();
        piVar11 = puVar7 + 1;
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        puVar14 = local_60;
        iVar9 = local_68;
        if (iVar2 == 1) {
          local_154 = (undefined1 **)0x4226d5;
          (**(code **)*puVar7)();
          puVar14 = local_60;
          iVar9 = local_68;
        }
      }
LAB_004226db:
      local_60 = puVar14 + 1;
      puVar17 = puVar18;
    } while ((int)local_60 < *(int *)(iVar9 + 0x5c));
  }
LAB_0042271b:
  local_40 = local_40 + -2;
  if (local_40 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    puVar3 = *local_40;
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (puVar3 == (undefined1 *)0x0) {
      local_154 = (undefined1 **)0x42273b;
      FID_conflict__free(local_40);
    }
  }
  if (local_90 != (undefined1 **)&DAT_00bfe124) {
    LOCK();
    puVar3 = *local_90;
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (puVar3 == (undefined1 *)0x0) {
      local_154 = (undefined1 **)0x422761;
      FID_conflict__free(local_90);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar11 = param_1 + 1;
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      local_154 = (undefined1 **)0x422779;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

