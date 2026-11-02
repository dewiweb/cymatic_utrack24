// rea decompile_all
// name: FUN_005a2c30
// address: 0x5a2c30
// body: available
// range: 0x5a2c30-0x5a4d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2c30(undefined ***param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined ***pppuVar9;
  void **ppvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined4 *local_58;
  undefined4 *local_54;
  undefined1 local_50 [4];
  undefined1 *local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined **local_40;
  undefined **local_3c;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  void *local_2c;
  undefined **local_28;
  undefined1 *local_24;
  undefined1 local_20 [4];
  void *local_1c;
  undefined *local_18;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717385;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined *)0x0;
  local_24 = (void *)0x0;
  *(undefined ****)(in_ECX + 0x74) = param_1;
  param_1 = (undefined ***)(in_ECX + 0x80);
  local_48 = in_ECX;
  FUN_006e4900(&PTR_DAT_00c7ed68);
  piVar5 = (int *)(in_ECX + 0x150);
  FUN_006e6350();
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x160),*(undefined4 *)(in_ECX + 0x164),
               *(undefined4 *)(in_ECX + 0x168));
  FUN_005a1140();
  local_8 = 0;
  if (*(int *)(in_ECX + 0x74) == 0) goto LAB_005a4cf1;
  FUN_0040ec10();
  puVar8 = local_58;
  local_8._0_1_ = 1;
  if (local_58 == (undefined4 *)0x0) goto switchD_005a2cfd_caseD_0;
  switch(local_58[2]) {
  case 1:
    uVar4 = FUN_005537d0();
    local_8._0_1_ = 2;
    FUN_006e4900(uVar4);
    local_8._0_1_ = 1;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 3;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = (undefined *)0x1;
    FUN_0045c990();
    local_8 = 5;
    local_14 = (undefined *)0x3;
    FUN_00537fb0(&param_1,&local_28);
    local_8 = 7;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 1;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 8;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,9);
    local_14 = (undefined *)0x4;
    FUN_0045c990();
    FUN_004144b0();
    local_8 = 0xb;
    local_14 = (undefined *)0x1c;
    FUN_0062eed0(2);
    uVar4 = FUN_00637c90();
    local_8 = 0xc;
    local_14 = (undefined *)0x3c;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x10;
    FUN_00535770();
    FUN_00637c10();
    FUN_0040ea50();
    FUN_00637c10();
    local_8 = 1;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x11;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x12);
    local_14 = (undefined *)0x40;
    FUN_0045c990();
    FUN_004144b0();
    local_8 = 0x14;
    local_14 = (undefined *)0x1c0;
    FUN_0062eed0(1);
    uVar4 = FUN_00637c90();
    local_8 = 0x15;
    local_14 = (undefined *)0x3c0;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x19;
    FUN_00535770();
    FUN_00637c10();
    FUN_0040ea50();
    FUN_00637c10();
    local_8 = 1;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x1a;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    local_14 = (undefined *)0x400;
    uVar4 = FUN_0054f710();
    uVar4 = FUN_00636d50(uVar4);
    local_8 = 0x1c;
    local_14 = (undefined *)0xc00;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x1e;
    FUN_00535770();
    FUN_00637c10();
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_00637c10();
    break;
  case 2:
    FUN_0040ebb0();
    local_8._0_1_ = 0x1f;
    uVar4 = FUN_005537d0();
    local_8._0_1_ = 0x20;
    FUN_006e4900(uVar4);
    local_8._0_1_ = 0x1f;
    FUN_00637c10();
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x21;
    if (*(char *)(local_54 + 10) == '\0') {
      local_30 = PTR_DAT_00c7ed68;
      piVar3 = (int *)(PTR_DAT_00c7ed68 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      local_28 = &local_30;
      local_8 = 0x23;
      param_1 = (undefined ***)0x2000;
    }
    else {
      FUN_0045c990();
      local_28 = &local_18;
      local_8 = CONCAT31(local_8._1_3_,0x22);
      param_1 = (undefined ***)0x1000;
    }
    local_14 = (undefined *)param_1;
    FUN_0045c990();
    local_8 = 0x24;
    local_14 = (undefined *)((uint)local_14 | 0x4000);
    FUN_0045c990();
    local_8 = 0x25;
    param_1 = (undefined ***)((uint)param_1 | 0xc000);
    local_14 = (undefined *)param_1;
    FUN_00537fb0(&local_3c,&local_38);
    local_8 = 0x29;
    FUN_00535770();
    param_1 = (undefined ***)((uint)param_1 & 0xffff7fff);
    FUN_00637c10();
    param_1 = (undefined ***)((uint)param_1 & 0xffffbfff);
    FUN_00637c10();
    if (((uint)param_1 & 0x2000) != 0) {
      param_1 = (undefined ***)((uint)param_1 & 0xffffdfff);
      FUN_00637c10();
    }
    local_8 = 0x1f;
    if (((uint)param_1 & 0x1000) != 0) {
      param_1 = (undefined ***)((uint)param_1 & 0xffffefff);
      FUN_00637c10();
    }
    local_4c = (undefined1 *)param_1;
    if (*(char *)(puVar8 + 10) == '\0') {
      local_28 = operator_new(0x24c);
      local_8._0_1_ = 0x2f;
      local_4c = (undefined1 *)(local_48 + 0x70);
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x30);
      uVar4 = 0;
      param_1 = (undefined ***)((uint)param_1 | 0x40000);
      switch(puVar8[2] + -1) {
      case 1:
      case 3:
        uVar4 = puVar8[0xb];
      }
      uVar11 = 0;
      switch(puVar8[2] + -1) {
      default:
        goto switchD_005a3250_caseD_0;
      case 1:
        iVar2 = puVar8[0xc];
        break;
      case 3:
        iVar2 = puVar8[0xe];
      }
      uVar11 = *(undefined4 *)(iVar2 + 0x40);
switchD_005a3250_caseD_0:
      local_14 = (undefined *)param_1;
      FUN_005350d0(uVar11,uVar4,&local_18);
      local_8 = 0x31;
      FUN_00535770();
      param_1 = (undefined ***)((uint)param_1 & 0xfffbffff);
    }
    else {
      local_28 = operator_new(0xac);
      local_8._0_1_ = 0x2a;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x2b);
      local_14 = (undefined *)((uint)param_1 | 0x10000);
      switch(puVar8[2]) {
      case 2:
        break;
      case 4:
      }
      uVar4 = FUN_005bdda0();
      local_8 = 0x2c;
      param_1 = (undefined ***)((uint)local_4c | 0x30000);
      local_14 = (undefined *)param_1;
      FUN_00537fb0(&local_18,uVar4);
      local_8 = 0x2e;
      FUN_00535770();
      param_1 = (undefined ***)((uint)param_1 & 0xfffdffff);
      FUN_00637c10();
      param_1 = (undefined ***)((uint)param_1 & 0xfffeffff);
    }
    local_8 = 0x1f;
    FUN_00637c10();
    local_30 = (undefined1 *)param_1;
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x32;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x33);
    local_14 = (undefined *)((uint)param_1 | 0x80000);
    FUN_00410ec0();
    uVar4 = FUN_005be060();
    local_8 = 0x34;
    local_30 = (undefined1 *)((uint)local_30 | 0x180000);
    local_14 = local_30;
    FUN_00537fb0(&local_18,uVar4);
    local_8 = 0x36;
    FUN_00535770();
    local_30 = (undefined1 *)((uint)local_30 & 0xffefffff);
    FUN_00637c10();
    local_8 = 0x1f;
    local_30 = (undefined1 *)((uint)local_30 & 0xfff7ffff);
    FUN_00637c10();
    param_1 = (undefined ***)local_30;
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x37;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x38);
    local_14 = (undefined *)((uint)local_30 | 0x200000);
    FUN_0040eb60();
    uVar4 = FUN_005bdf30();
    local_8 = 0x39;
    param_1 = (undefined ***)((uint)param_1 | 0x600000);
    local_14 = (undefined *)param_1;
    FUN_00537fb0(&local_18,uVar4);
    local_8 = 0x3b;
    FUN_00535770();
    param_1 = (undefined ***)((uint)param_1 & 0xffbfffff);
    FUN_00637c10();
    local_8 = 0x1f;
    param_1 = (undefined ***)((uint)param_1 & 0xffdfffff);
    FUN_00637c10();
    local_30 = (undefined1 *)param_1;
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x3c;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x3d);
    local_14 = (undefined *)((uint)param_1 | 0x800000);
    uVar4 = FUN_00637c90();
    local_8 = 0x3e;
    local_30 = (undefined1 *)((uint)local_30 | 0x1800000);
    local_14 = local_30;
    FUN_00537fb0(&local_18,uVar4);
    local_8 = 0x40;
    FUN_00535770();
    local_30 = (undefined1 *)((uint)local_30 & 0xfeffffff);
    FUN_00637c10();
    local_8 = 0x1f;
    local_30 = (undefined1 *)((uint)local_30 & 0xff7fffff);
    FUN_00637c10();
    local_38 = local_30;
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x41;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x42);
    local_14 = (undefined *)((uint)local_30 | 0x2000000);
    uVar4 = FUN_00560110(&local_18);
    local_8 = 0x43;
    local_38 = (undefined1 *)((uint)local_38 | 0x6000000);
    local_14 = local_38;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x45;
    FUN_00535770();
    local_38 = (undefined1 *)((uint)local_38 & 0xfbffffff);
    FUN_00637c10();
    local_8 = 0x1f;
    local_38 = (undefined1 *)((uint)local_38 & 0xfdffffff);
    FUN_00637c10();
    param_1 = (undefined ***)local_38;
    local_4c = operator_new(0xac);
    local_8._0_1_ = 0x46;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x47);
    local_14 = (undefined *)((uint)local_38 | 0x8000000);
    uVar4 = FUN_0054f710();
    uVar4 = FUN_00636d50(uVar4);
    local_8 = 0x48;
    param_1 = (undefined ***)((uint)param_1 | 0x18000000);
    local_14 = (undefined *)param_1;
    FUN_00537fb0(&local_18,uVar4);
    local_8 = 0x4a;
    FUN_00535770();
    param_1 = (undefined ***)((uint)param_1 & 0xefffffff);
    FUN_00637c10();
    local_8 = 0x1f;
    param_1 = (undefined ***)((uint)param_1 & 0xf7ffffff);
    FUN_00637c10();
    local_4c = operator_new(0xac);
    local_8 = CONCAT31(local_8._1_3_,0x4b);
    FUN_0045c990();
    param_1 = (undefined ***)((uint)param_1 | 0x60000000);
    pppuVar9 = &local_28;
    uVar12 = 0;
    uVar11 = 1;
    uVar4 = 1;
    FUN_0040eb40(local_20);
    uVar4 = FUN_00636ad0(pppuVar9,uVar4,uVar11,uVar12);
    local_8 = 0x4d;
    local_14 = (undefined *)((uint)param_1 | 0x80000000);
    FUN_00537fb0(&local_18,uVar4);
    local_8 = 0x4f;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x1f;
    FUN_00637c10();
    if (*(char *)local_54[0x20] != '\0') {
      local_38 = operator_new(0xac);
      local_8._0_1_ = 0x50;
      FUN_00560080();
      local_8 = CONCAT31(local_8._1_3_,0x51);
      local_14 = (undefined *)0x1;
      cVar1 = FUN_00636aa0();
      if (cVar1 == '\0') {
        FUN_0045c990();
        param_1 = &local_28;
        local_8 = 0x53;
        local_4c = &DAT_00000005;
      }
      else {
        local_3c = (undefined **)PTR_DAT_00c7ed68;
        piVar3 = (int *)(PTR_DAT_00c7ed68 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        param_1 = &local_3c;
        local_8 = 0x52;
        local_4c = (undefined1 *)0x3;
      }
      local_24 = local_4c;
      local_14 = local_4c;
      FUN_0045c990();
      local_8 = 0x54;
      local_14 = (undefined *)((uint)local_14 | 8);
      FUN_00560080();
      local_8 = 0x55;
      local_14 = (undefined *)((uint)local_4c | 0x18);
      uVar4 = FUN_00636a10();
      local_8 = 0x56;
      local_24 = (undefined1 *)((uint)local_24 | 0x38);
      local_14 = local_24;
      FUN_00537fb0(&local_18,uVar4);
      local_8 = 0x5c;
      FUN_00535770();
      local_24 = (undefined1 *)((uint)local_24 & 0xffffffdf);
      FUN_00637c10();
      local_24 = (undefined1 *)((uint)local_24 & 0xffffffef);
      FUN_0040ea50();
      local_24 = (undefined1 *)((uint)local_24 & 0xfffffff7);
      FUN_00637c10();
      if (((uint)local_24 & 4) != 0) {
        local_24 = (undefined1 *)((uint)local_24 & 0xfffffffb);
        FUN_00637c10();
      }
      if (((uint)local_24 & 2) != 0) {
        local_24 = (undefined1 *)((uint)local_24 & 0xfffffffd);
        FUN_00637c10();
      }
      local_24 = (undefined1 *)((uint)local_24 & 0xfffffffe);
      local_8 = 0x1f;
      FUN_0040ea50();
    }
    if (local_54[0x1c] != 0) {
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0x5d;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x5e);
      local_24 = (undefined1 *)((uint)local_24 | 0x40);
      local_14 = local_24;
      FUN_00537fb0(&param_1,&PTR_DAT_00c7ed68);
      local_8 = 0x5f;
      FUN_00535770();
      local_8 = 0x1f;
      local_24 = (undefined1 *)((uint)local_24 & 0xffffffbf);
      FUN_00637c10();
      param_1 = (undefined ***)0x0;
      puVar7 = local_24;
      if (0 < (int)local_54[0x1c]) {
        do {
          local_2c = puVar7;
          local_1c = puVar7;
          local_4c = operator_new(0xac);
          pppuVar9 = param_1;
          local_8._0_1_ = 0x60;
          uVar4 = FUN_0055d730(&local_3c,param_1);
          local_8 = CONCAT31(local_8._1_3_,0x61);
          param_1 = (undefined ***)((int)pppuVar9 + 1);
          local_14 = (undefined *)((uint)local_24 | 0x80);
          uVar11 = FUN_00637c90(param_1);
          local_8 = 0x62;
          uVar6 = (uint)local_1c | 0x180;
          local_14 = (undefined *)uVar6;
          FUN_00637690(uVar11);
          uVar11 = FUN_006377c0(uVar6);
          local_8 = 99;
          local_24 = (undefined1 *)((uint)local_2c | 0x380);
          local_14 = local_24;
          FUN_00537fb0(uVar11,uVar4);
          local_8 = 0x66;
          FUN_00535770();
          puVar7 = local_24;
          FUN_00637c10();
          FUN_00637c10();
          local_8 = 0x1f;
          local_24 = (void *)((uint)puVar7 & 0xfffffc7f);
          FUN_00637c10();
          puVar8 = local_58;
          puVar7 = (void *)((uint)puVar7 & 0xfffffc7f);
        } while ((int)param_1 < (int)local_54[0x1c]);
      }
    }
    FUN_005356e0();
    param_1 = operator_new(0x80);
    local_8._0_1_ = 0x67;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x68);
    local_24 = (undefined1 *)((uint)local_24 | 0x400);
    local_14 = local_24;
    param_1 = (undefined ***)FUN_00534e00();
    local_8 = 0x1f;
    local_24 = (undefined1 *)((uint)local_24 & 0xfffffbff);
    FUN_00637c10();
    local_28 = (undefined **)&DAT_00bfe12c;
    uVar4 = FUN_005a1240();
    local_8._0_1_ = 0x6b;
    uVar11 = FUN_005a1010(uVar4);
    FUN_0054da30(&local_40,&local_34,uVar11,uVar4);
    local_8._0_1_ = 0x6d;
    FUN_0040ea50();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x6e;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x6f);
    local_24 = (undefined1 *)((uint)local_24 | 0x800);
    local_14 = local_24;
    FUN_00537fb0(&local_18,&PTR_DAT_00c7ed68);
    local_8 = 0x70;
    FUN_00534da0();
    local_8 = 0x6d;
    local_24 = (undefined1 *)((uint)local_24 & 0xfffff7ff);
    FUN_00637c10();
    local_3c = local_40;
    local_40 = local_40 + -2;
    if (local_40 != (undefined **)&DAT_00bfe124) {
      LOCK();
      *local_40 = *local_40 + 1;
      UNLOCK();
    }
    FUN_006846a0();
    local_2c = DAT_00c7ebbc;
    local_8._0_1_ = 0x73;
    local_1c = (void *)FUN_00633de0(&local_4c,local_34,0);
    local_8._0_1_ = 0x75;
    FUN_00636ec0();
    FUN_0044ec90();
    FUN_00644f50(0);
    local_8._0_1_ = 0x72;
    FUN_00637c10();
    local_1c = DAT_00c7ef8c;
    FUN_00636ec0();
    FUN_0044ec90();
    uVar4 = 0;
    FUN_00644f50(0);
    local_2c = DAT_00c7ebbc;
    local_8._0_1_ = 0x76;
    local_1c = (void *)FUN_00634090(&local_4c,local_34,uVar4);
    local_8._0_1_ = 0x78;
    FUN_00636ec0();
    FUN_0044ec90();
    FUN_00644f50(0);
    local_8._0_1_ = 0x72;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x79;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x7a);
    local_24 = (undefined1 *)((uint)local_24 | 0x1000);
    local_14 = local_24;
    FUN_00537d60(&local_18,local_98);
    local_8 = 0x7b;
    FUN_00534da0();
    local_8._0_1_ = 0x72;
    local_8._1_3_ = 0;
    local_24 = (undefined1 *)((uint)local_24 & 0xffffefff);
    FUN_00637c10();
    cVar1 = FUN_005a6d70();
    if (cVar1 != '\0') {
      local_30 = &DAT_00bfe12c;
      local_8._0_1_ = 0x7c;
      uVar11 = 1;
      uVar4 = FUN_005a1010(1);
      FUN_0054e180(&local_38,&local_34,uVar4,uVar11);
      local_8._0_1_ = 0x7d;
      local_1c = operator_new(0x78);
      local_8._0_1_ = 0x7e;
      FUN_00534a50();
      local_8._0_1_ = 0x7d;
      FUN_00534da0();
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0x7f;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x80);
      local_24 = (undefined1 *)((uint)local_24 | 0x2000);
      local_14 = local_24;
      FUN_00537fb0(&local_18,&PTR_DAT_00c7ed68);
      local_8 = 0x81;
      FUN_00534da0();
      local_8 = 0x7d;
      local_24 = (undefined1 *)((uint)local_24 & 0xffffdfff);
      FUN_00637c10();
      FUN_006846a0();
      local_8._0_1_ = 0x83;
      uVar4 = FUN_00633de0(&local_1c,local_34,0,0);
      local_8._0_1_ = 0x85;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 0x82;
      FUN_00637c10();
      uVar4 = 0x5a3d2b;
      FUN_006804f0(&local_34);
      local_8._0_1_ = 0x86;
      uVar4 = FUN_00634090(&local_1c,local_34,uVar4,0);
      local_8._0_1_ = 0x88;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 0x82;
      FUN_00637c10();
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0x89;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x8a);
      local_14 = (undefined *)((uint)local_24 | 0x4000);
      FUN_00537d60(&local_18,local_78);
      local_8 = 0x8b;
      FUN_00534da0();
      local_8 = 0x82;
      FUN_00637c10();
      FUN_00684660();
      FUN_00637c10();
      local_8._0_1_ = 0x72;
      FUN_00637c10();
    }
    if (param_1 != (undefined ***)0x0) {
      (**(code **)((int)*param_1 + 0x28))();
      FUN_006e5050(param_1);
    }
    FUN_00684660();
    FUN_00637c10();
    FUN_0040ea50();
    FUN_00637c10();
    LOCK();
    piVar3 = local_54 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    local_58 = puVar8;
    if (iVar2 == 1) {
      (**(code **)*local_54)();
    }
    break;
  case 3:
    FUN_0040ebd0();
    local_8._0_1_ = 0x8c;
    uVar4 = FUN_005537d0();
    local_8._0_1_ = 0x8d;
    FUN_006e4900(uVar4);
    local_8._0_1_ = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x8e;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x8f);
    local_14 = (undefined *)0x8000;
    FUN_0045c990();
    local_8 = 0x90;
    local_14 = (undefined *)0x18000;
    FUN_00537fb0(&param_1,&local_40);
    local_8 = 0x92;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x93;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x94);
    local_14 = (undefined *)0x20000;
    uVar4 = FUN_005be110();
    local_8 = 0x95;
    local_14 = (undefined *)0x60000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x97;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x98;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x99);
    local_14 = (undefined *)0x80000;
    uVar4 = FUN_005bdfb0();
    local_8 = 0x9a;
    local_14 = (undefined *)0x180000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0x9c;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0x9d;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x9e);
    local_14 = (undefined *)0x200000;
    uVar4 = FUN_00637c90();
    local_8 = 0x9f;
    local_14 = (undefined *)0x600000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xa1;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xa2;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xa3);
    local_14 = (undefined *)0x800000;
    uVar4 = FUN_00549490();
    local_8 = 0xa4;
    local_14 = (undefined *)0x1800000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xa6;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xa7;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xa8);
    local_14 = (undefined *)0x2000000;
    uVar4 = FUN_0054f710();
    uVar4 = FUN_00636d50(uVar4);
    local_8 = 0xa9;
    local_14 = (undefined *)0x6000000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xab;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0x8c;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8 = CONCAT31(local_8._1_3_,0xac);
    FUN_0045c990();
    FUN_00410ea0();
    uVar12 = 0;
    uVar11 = 1;
    uVar4 = 1;
    ppvVar10 = &local_2c;
    local_8 = 0xae;
    local_14 = (undefined *)0x38000000;
    FUN_00636970(local_44);
    uVar4 = FUN_00636ad0(ppvVar10,uVar4,uVar11,uVar12);
    local_8 = 0xaf;
    local_14 = (undefined *)0x78000000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xb2;
    FUN_00535770();
    FUN_00637c10();
    FUN_0040ea50();
    local_8 = 0x8c;
    FUN_00637c10();
    FUN_005356e0();
    param_1 = operator_new(0x80);
    local_8._0_1_ = 0xb3;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xb4);
    local_14 = (undefined *)0x80000000;
    param_1 = (undefined ***)FUN_00534e00();
    local_8 = 0x8c;
    FUN_00637c10();
    local_30 = &DAT_00bfe12c;
    uVar4 = FUN_005a1240();
    local_8._0_1_ = 0xb7;
    FUN_0054da30(&local_18,&local_34,0,uVar4);
    local_8._0_1_ = 0xb9;
    FUN_0040ea50();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xba;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xbb);
    local_14 = (undefined *)0x1;
    FUN_00537fb0(&local_40,&PTR_DAT_00c7ed68);
    local_8 = 0xbc;
    FUN_00534da0();
    local_8 = 0xb9;
    FUN_00637c10();
    FUN_004144b0();
    local_8._0_1_ = 0xbd;
    FUN_00636a10();
    local_8._0_1_ = 0xbe;
    FUN_00635a10(&local_1c);
    FUN_00637c50();
    FUN_0040ea50();
    FUN_00637c10();
    FUN_0040ea50();
    FUN_006846a0();
    local_8._0_1_ = 0xc3;
    uVar4 = FUN_00633de0(&local_1c,local_34,0,0);
    local_8._0_1_ = 0xc5;
    FUN_006804f0(uVar4);
    local_8._0_1_ = 0xc2;
    FUN_00637c10();
    uVar4 = 0x5a43f8;
    FUN_006804f0(&local_34);
    local_8._0_1_ = 0xc6;
    uVar4 = FUN_00634090(&local_1c,local_34,uVar4,0);
    local_8._0_1_ = 200;
    FUN_006804f0(uVar4);
    local_8._0_1_ = 0xc2;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xc9;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xca);
    local_14 = (undefined *)0x2;
    FUN_00537d60(&local_40,local_98);
    local_8 = 0xcb;
    FUN_00534da0();
    local_8._0_1_ = 0xc2;
    local_8._1_3_ = 0;
    FUN_00637c10();
    cVar1 = FUN_005a6d70();
    if (cVar1 != '\0') {
      local_3c = (undefined **)&DAT_00bfe12c;
      local_8._0_1_ = 0xcc;
      uVar11 = 1;
      uVar4 = FUN_005a1010(1);
      FUN_0054e180(&local_28,&local_34,uVar4,uVar11);
      local_8._0_1_ = 0xcd;
      local_1c = operator_new(0x78);
      local_8._0_1_ = 0xce;
      FUN_00534a50();
      local_8._0_1_ = 0xcd;
      FUN_00534da0();
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0xcf;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xd0);
      local_14 = (undefined *)0x4;
      FUN_00537fb0(&local_40,&PTR_DAT_00c7ed68);
      local_8 = 0xd1;
      FUN_00534da0();
      local_8 = 0xcd;
      FUN_00637c10();
      FUN_006846a0();
      local_8._0_1_ = 0xd3;
      uVar4 = FUN_00633de0(&local_1c,local_34,0,0);
      local_8._0_1_ = 0xd5;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 0xd2;
      FUN_00637c10();
      uVar4 = 0x5a45cd;
      FUN_006804f0(&local_34);
      local_8._0_1_ = 0xd6;
      uVar4 = FUN_00634090(&local_1c,local_34,uVar4,0);
      local_8._0_1_ = 0xd8;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 0xd2;
      FUN_00637c10();
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0xd9;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xda);
      local_14 = (undefined *)0x8;
      FUN_00537d60(&local_40,local_78);
      local_8 = 0xdb;
      FUN_00534da0();
      local_8 = 0xd2;
      FUN_00637c10();
      FUN_00684660();
      FUN_00637c10();
      local_8._0_1_ = 0xc2;
      FUN_00637c10();
    }
    FUN_00535770();
    FUN_00684660();
    FUN_00637c10();
    FUN_0040ea50();
    FUN_00637c10();
    FUN_004030d0();
    break;
  case 4:
    FUN_0040ebf0();
    local_8._0_1_ = 0xdc;
    uVar4 = FUN_005537d0();
    local_8._0_1_ = 0xdd;
    FUN_006e4900(uVar4);
    local_8._0_1_ = 0xdc;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xde;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xdf);
    local_14 = (undefined *)0x10;
    FUN_0045c990();
    local_8 = 0xe0;
    local_14 = (undefined *)0x30;
    FUN_00537fb0(&param_1,&local_40);
    local_8 = 0xe2;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0xdc;
    FUN_00637c10();
    if (*(char *)(local_58 + 10) == '\0') {
      local_2c = operator_new(0x24c);
      local_8._0_1_ = 0xe8;
      local_1c = (void *)(local_48 + 0x70);
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xe9);
      uVar4 = 0;
      local_14 = (undefined *)0x100;
      switch(local_58[2] + -1) {
      case 1:
      case 3:
        uVar4 = local_58[0xb];
      }
      uVar11 = 0;
      switch(local_58[2] + -1) {
      default:
        goto switchD_005a4872_caseD_0;
      case 1:
        iVar2 = local_58[0xc];
        break;
      case 3:
        iVar2 = local_58[0xe];
      }
      uVar11 = *(undefined4 *)(iVar2 + 0x40);
switchD_005a4872_caseD_0:
      FUN_005350d0(uVar11,uVar4,&param_1);
      local_8 = 0xea;
      FUN_00535770();
    }
    else {
      local_2c = operator_new(0xac);
      local_8._0_1_ = 0xe3;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xe4);
      local_14 = (undefined *)0x40;
      switch(local_58[2]) {
      case 2:
        break;
      case 4:
      }
      uVar4 = FUN_005bdda0();
      local_8 = 0xe5;
      local_14 = (undefined *)0xc0;
      FUN_00537fb0(&param_1,uVar4);
      local_8 = 0xe7;
      FUN_00535770();
      FUN_00637c10();
    }
    local_8 = 0xdc;
    FUN_00637c10();
    param_1 = operator_new(0x204);
    local_8._0_1_ = 0xeb;
    FUN_00536e90();
    local_8._0_1_ = 0xdc;
    FUN_00535770();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xec;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xed);
    local_14 = (undefined *)0x200;
    uVar4 = FUN_00558ae0();
    local_8 = 0xee;
    local_14 = (undefined *)0x600;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xf0;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0xdc;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8._0_1_ = 0xf1;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0xf2);
    local_14 = (undefined *)0x800;
    uVar4 = FUN_0054f710();
    uVar4 = FUN_00636d50(uVar4);
    local_8 = 0xf3;
    local_14 = (undefined *)0x1800;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xf5;
    FUN_00535770();
    FUN_00637c10();
    local_8 = 0xdc;
    FUN_00637c10();
    local_1c = operator_new(0xac);
    local_8 = CONCAT31(local_8._1_3_,0xf6);
    FUN_0045c990();
    uVar12 = 0;
    uVar11 = 1;
    uVar4 = 1;
    ppvVar10 = &local_2c;
    FUN_0040eb40(local_50);
    uVar4 = FUN_00636ad0(ppvVar10,uVar4,uVar11,uVar12);
    local_8 = 0xf8;
    local_14 = (undefined *)0xe000;
    FUN_00537fb0(&param_1,uVar4);
    local_8 = 0xfa;
    FUN_00535770();
    FUN_00637c10();
    local_8._0_1_ = 0xdc;
    local_8._1_3_ = 0;
    FUN_00637c10();
    cVar1 = FUN_005a6d70();
    if (cVar1 != '\0') {
      FUN_005356e0();
      local_1c = operator_new(0x80);
      local_8._0_1_ = 0xfb;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xfc);
      local_14 = (undefined *)0x10000;
      local_18 = (undefined *)FUN_00534e00();
      local_8 = 0xdc;
      FUN_00637c10();
      local_28 = (undefined **)&DAT_00bfe12c;
      local_8._0_1_ = 0xfe;
      uVar11 = 1;
      uVar4 = FUN_005a1010(1);
      FUN_0054e180(&param_1,&local_34,uVar4,uVar11);
      local_8 = CONCAT31(local_8._1_3_,0xff);
      local_1c = operator_new(0x78);
      local_8 = 0x100;
      FUN_00534a50();
      local_8 = 0xff;
      FUN_00534da0();
      local_1c = operator_new(0xac);
      local_8 = 0x101;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = (undefined *)0x20000;
      FUN_00537fb0(&local_40,&PTR_DAT_00c7ed68);
      local_8 = 0x103;
      FUN_00534da0();
      FUN_00637c10();
      FUN_006846a0();
      local_8._0_1_ = 5;
      local_8._1_3_ = 1;
      uVar4 = FUN_00633de0(&local_1c,local_34,0,0);
      local_8._0_1_ = 7;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 4;
      FUN_00637c10();
      uVar4 = 0x5a4c00;
      FUN_006804f0(&local_34);
      local_8._0_1_ = 8;
      uVar4 = FUN_00634090(&local_1c,local_34,uVar4,0);
      local_8._0_1_ = 10;
      FUN_006804f0(uVar4);
      local_8._0_1_ = 4;
      FUN_00637c10();
      local_1c = operator_new(0xac);
      local_8._0_1_ = 0xb;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_14 = (undefined *)0x40000;
      FUN_00537d60(&local_40,local_78);
      local_8 = 0x10d;
      FUN_00534da0();
      local_8 = 0x104;
      FUN_00637c10();
      FUN_00535770();
      local_8._0_1_ = 0xff;
      local_8._1_3_ = 0;
      FUN_00684660();
      FUN_00637c10();
      FUN_00637c10();
    }
    FUN_004030d0();
  }
switchD_005a2cfd_caseD_0:
  local_8 = (uint)local_8._1_3_ << 8;
  in_ECX = local_48;
  if (local_58 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_58 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_58)();
      in_ECX = local_48;
    }
  }
LAB_005a4cf1:
  FUN_006e9790(0,10,*(undefined4 *)(in_ECX + 0x18));
  FUN_006e9790(0,0x28,*(undefined4 *)(in_ECX + 0x18));
  (**(code **)(*piVar5 + 0x84))();
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
  ExceptionList = local_10;
  return;
}

