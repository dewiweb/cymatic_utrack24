// rea decompile_all
// name: FUN_00457740
// address: 0x457740
// body: available
// range: 0x457740-0x457c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00457740(int *param_1,char *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,int param_8,int param_9,int *param_10)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *_Memory;
  int iVar5;
  DWORD DVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 *local_38;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int *local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00700553;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  local_18 = 0;
  local_8 = 0;
  *in_ECX = juce::WebInputStream::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  iVar5 = *param_1;
  in_ECX[4] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar5 = *param_6;
  in_ECX[5] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[6] = 0;
  iVar5 = param_3[1];
  in_ECX[7] = iVar5;
  local_38 = in_ECX;
  if (iVar5 != 0) {
    FID_conflict__free((void *)in_ECX[6]);
    uVar4 = FUN_004c554b(iVar5);
    in_ECX[6] = uVar4;
    FUN_004c2c30(uVar4,*param_3,in_ECX[7]);
  }
  *(undefined1 *)((int)in_ECX + 0x29) = param_2._0_1_;
  in_ECX[0xb] = param_7;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  iVar5 = *param_10;
  in_ECX[0xc] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if (-1 < param_9) {
    while( true ) {
      param_9 = param_9 + -1;
      FUN_00457eb0(param_4,param_5);
      if (in_ECX[3] == 0) break;
      param_3 = (undefined4 *)0x1000;
      local_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 1;
      _Memory = (void *)FUN_004c554b(0x1000,uVar2);
      local_20 = _Memory;
      iVar5 = HttpQueryInfoW(in_ECX[3],0x16,_Memory,&param_3,0);
      while (iVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 != 0x7a) {
          local_8._0_1_ = 5;
          FID_conflict__free(_Memory);
          goto LAB_00457a6f;
        }
        param_3 = param_3 + 0x400;
        FID_conflict__free(_Memory);
        _Memory = (void *)FUN_004c554b(param_3);
        local_20 = _Memory;
        iVar5 = HttpQueryInfoW(in_ECX[3],0x16,_Memory,&param_3,0);
      }
      local_30 = (void *)0x0;
      local_2c = 0;
      local_28 = 0;
      local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
      local_8._0_1_ = 7;
      FUN_0045cae0(_Memory);
      local_8._0_1_ = 8;
      FUN_0061fc70(param_10);
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_00637c10();
      local_14 = 0;
      if (0 < local_28) {
        iVar5 = 0;
        do {
          FUN_00637dd0(iVar5);
          uVar4 = 0;
          FUN_00633de0(&param_7,&DAT_00c129a4,0,0);
          local_8._0_1_ = 9;
          FUN_00634090(&param_6,&DAT_00c129a4,uVar4,0);
          uVar4 = FUN_00633170(param_7);
          FUN_00637c50(uVar4);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          if ((char)*param_1 == '\0') {
            local_1c = param_6;
            piVar3 = param_6 + -2;
            if (piVar3 != &DAT_00bfe124) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            ppiVar7 = &local_1c;
            uVar9 = uVar9 | 1;
          }
          else {
            uVar4 = extraout_ECX;
            uVar11 = extraout_ECX;
            FUN_00637c50(&param_1);
            FUN_006377c0(uVar4);
            ppiVar7 = (int **)FUN_00637730(uVar11);
            uVar9 = uVar9 | 2;
          }
          local_18 = uVar9;
          FUN_00631980(&param_7,ppiVar7);
          if ((uVar9 & 2) != 0) {
            uVar9 = uVar9 & 0xfffffffd;
            local_18 = uVar9;
            FUN_00637c10();
          }
          local_8 = 0xb;
          if ((uVar9 & 1) != 0) {
            uVar9 = uVar9 & 0xfffffffe;
            local_18 = uVar9;
            FUN_00637c10();
          }
          FUN_00637c10();
          FUN_00637c10();
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_00637c10();
          iVar5 = iVar5 + 1;
          _Memory = local_20;
          in_ECX = local_38;
        } while (iVar5 < local_28);
      }
      FUN_0040f7f0();
      FID_conflict__free(local_30);
      local_8._0_1_ = 5;
      FID_conflict__free(_Memory);
LAB_00457a6f:
      local_24 = 0;
      local_3c = 4;
      iVar5 = HttpQueryInfoW(in_ECX[3],0x20000013,&local_24,&local_3c,0);
      if (((iVar5 == 0) || (in_ECX[1] = local_24, param_9 < 0)) ||
         ((local_24 != 0x12d &&
          (((local_24 != 0x12e && (local_24 != 0x12f)) && (local_24 != 0x133)))))) {
LAB_00457c2a:
        if (param_8 != 0) {
          FUN_006301d0(&local_60);
        }
        FUN_00631a50();
        ExceptionList = local_10;
        return in_ECX;
      }
      uVar4 = FUN_00633170("Location");
      FUN_00637c50(uVar4);
      local_8._0_1_ = 0xd;
      cVar1 = FUN_00633e80("http://");
      pcVar10 = param_2;
      if (((cVar1 == '\0') && (cVar1 = FUN_00633e80("https://"), pcVar10 = param_2, cVar1 == '\0'))
         && (cVar1 = FUN_00633e80("ftp://"), pcVar10 = param_2, cVar1 == '\0')) {
        iVar5 = FUN_00426f70();
        if (iVar5 == 0x2f) {
          FUN_006365e0(in_ECX + 4);
          local_8._0_1_ = 0xe;
          FUN_00611080(local_90,&param_2);
          local_8._0_1_ = 0xf;
          puVar8 = (undefined4 *)FUN_00631e00(local_40,1);
          pcVar10 = (char *)*puVar8;
          *puVar8 = param_2;
          param_2 = pcVar10;
          FUN_00637c10();
          FUN_00636570();
          local_8._0_1_ = 0xd;
          FUN_00636570();
        }
        else {
          uVar4 = extraout_ECX_00;
          uVar11 = extraout_ECX_00;
          FUN_00637c50(in_ECX + 4);
          FUN_006377c0(uVar4);
          puVar8 = (undefined4 *)FUN_00637730(uVar11);
          pcVar10 = (char *)*puVar8;
          *puVar8 = param_2;
          param_2 = pcVar10;
          FUN_00637c10();
        }
      }
      if ((*pcVar10 == '\0') || (cVar1 = FUN_00637870(), cVar1 == '\0')) {
        FUN_00637c10();
        goto LAB_00457c2a;
      }
      FUN_00637b90(&param_2);
      FUN_00637c10();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00631a50();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

