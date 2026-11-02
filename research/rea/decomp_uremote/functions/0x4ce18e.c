// rea decompile_all
// name: FUN_004ce18e
// address: 0x4ce18e
// body: available
// range: 0x4ce18e-0x4cea3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ce18e(uint param_1,undefined4 param_2)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  undefined4 extraout_ECX;
  int iVar5;
  float10 fVar6;
  undefined8 local_bc;
  uint uStack_b4;
  char local_9d;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  char *local_88;
  float local_84;
  float local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 local_64 [4];
  double local_60;
  int local_58;
  float local_54;
  float local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28 [8];
  double local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dcb01;
  local_14 = ExceptionList;
  uStack_b4 = DAT_00955fd4 ^ (uint)&stack0xffffff50;
  ExceptionList = &local_14;
  local_bc = (double)CONCAT44(0x4ce1d6,(undefined4)local_bc);
  FUN_00460973();
  local_58 = 0;
  local_54 = 0.0;
  local_50 = 0.0;
  local_9d = '\x01';
  local_94 = 0.0;
  bVar1 = true;
  local_90 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  do {
    if (*local_88 == '\0') break;
    iVar5 = 0;
    local_bc = (double)CONCAT44(0x4ce227,(undefined4)local_bc);
    cVar3 = FUN_00460791();
    local_bc = (double)CONCAT44(0x4d,(undefined4)local_bc);
    cVar4 = 'M';
    do {
      if (cVar4 == cVar3) goto LAB_004ce23e;
      cVar4 = (&DAT_0091b0ad)[iVar5];
      iVar5 = iVar5 + 1;
    } while (cVar4 != '\0');
    iVar5 = -1;
LAB_004ce23e:
    if (-1 < iVar5) {
      local_bc = (double)CONCAT44(0x4ce24b,(undefined4)local_bc);
      local_58 = FUN_0044eba8();
      local_bc = (double)CONCAT44(0x19,(undefined4)local_bc);
      local_9d = '\x01' - (0x19 < local_58 - 0x61U);
    }
    iVar5 = local_58;
    fVar2 = local_90;
    switch(local_58) {
    case 0x41:
    case 0x61:
      local_bc = (double)CONCAT44(param_1,0x4ce75c);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        local_bc = (double)CONCAT44(0x4ce76d,(undefined4)local_bc);
        FUN_004652cd();
        local_c = 0;
        local_bc = (double)CONCAT44(extraout_ECX,0x4ce77f);
        cVar4 = FUN_004cebff();
        if (cVar4 != '\0') {
          local_bc = (double)CONCAT44(0x4ce791,(undefined4)local_bc);
          fVar6 = (float10)FUN_00466960();
          local_bc = (double)CONCAT44((float)fVar6,0x4ce79a);
          fVar6 = (float10)FUN_004f8987();
          local_bc = (double)CONCAT44(local_64,0x4ce7a9);
          cVar4 = FUN_004cebff();
          if (cVar4 != '\0') {
            local_bc = (double)CONCAT44(0x4ce7bb,(undefined4)local_bc);
            iVar5 = FUN_0046694e();
            local_44 = CONCAT31(local_44._1_3_,iVar5 != 0);
            local_bc = (double)CONCAT44(local_64,0x4ce7ce);
            cVar4 = FUN_004cebff();
            if (cVar4 != '\0') {
              local_bc = (double)CONCAT44(0x4ce7e0,(undefined4)local_bc);
              iVar5 = FUN_0046694e();
              local_48 = CONCAT31(local_48._1_3_,iVar5 != 0);
              local_bc = (double)CONCAT44(param_1,0x4ce7f5);
              cVar4 = FUN_004ceb35();
              if (cVar4 != '\0') {
                if (local_9d != '\0') {
                  local_84 = local_84 + local_94;
                  local_80 = local_80 + local_90;
                }
                local_bc = (double)CONCAT44(local_80,local_84);
                cVar4 = FUN_004f5a31();
                if (cVar4 != '\0') {
                  local_40 = (double)local_9c;
                  local_60 = (double)local_98;
                  local_bc = (double)(float)fVar6;
                  FUN_004ced3c(local_44,local_48,&local_38,local_28,&local_20,(double)local_94,
                               (double)local_90);
                  local_bc = (double)CONCAT44((float)((float10)local_20 + (float10)local_30),
                                              (float)local_30);
                  FUN_0047967e(param_2,(float)local_38);
                  local_bc = (double)CONCAT44(local_80,local_84);
                  FUN_00478c1a();
                }
                local_74 = local_94;
                local_70 = local_90;
                local_94 = local_84;
                local_90 = local_80;
              }
            }
          }
        }
        local_c = 0xffffffff;
        local_bc = (double)CONCAT44(0x4ce990,(undefined4)local_bc);
        FUN_004652d6();
        fVar2 = local_90;
      }
      break;
    default:
      bVar1 = false;
      break;
    case 0x43:
    case 99:
      local_bc = (double)CONCAT44(param_1,0x4ce3fa);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        local_bc = (double)CONCAT44(param_1,0x4ce40e);
        cVar4 = FUN_004ceb35();
        if (cVar4 != '\0') {
          local_bc = (double)CONCAT44(param_1,0x4ce422);
          cVar4 = FUN_004ceb35();
          if (cVar4 != '\0') {
            if (local_9d != '\0') {
              local_9c = local_9c + local_94;
              local_98 = local_98 + local_90;
              local_84 = local_84 + local_94;
              local_80 = local_80 + local_90;
              local_6c = local_6c + local_94;
              local_68 = local_68 + local_90;
            }
            local_bc = (double)CONCAT44(local_68,local_6c);
            FUN_00478de7();
            local_74 = local_84;
            local_70 = local_80;
            goto LAB_004ce4cc;
          }
        }
      }
      break;
    case 0x48:
    case 0x68:
      local_bc = (double)CONCAT44(1,param_1);
      cVar4 = FUN_004ceaa0();
      if (cVar4 == '\0') {
LAB_004ce38d:
        local_bc = (double)CONCAT44(0x4ce396,(undefined4)local_bc);
        FUN_004607e3();
      }
      else {
        if (local_9d != '\0') {
          local_9c = local_9c + local_94;
        }
        local_bc = (double)CONCAT44(local_90,local_9c);
        FUN_00478ba1();
        local_74 = local_94;
        local_94 = local_9c;
      }
      break;
    case 0x4c:
    case 0x4d:
    case 0x6c:
    case 0x6d:
      local_bc = (double)CONCAT44(param_1,0x4ce28d);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        if (local_9d != '\0') {
          local_9c = local_9c + local_94;
          local_98 = local_98 + local_90;
        }
        if ((iVar5 == 0x4d) || (iVar5 == 0x6d)) {
          local_54 = local_9c;
          local_50 = local_98;
          local_bc = (double)CONCAT44(local_98,local_9c);
          FUN_00478b88();
          local_58 = 0x6c;
        }
        else {
          local_bc = (double)CONCAT44(local_98,local_9c);
          FUN_00478c1a();
        }
        local_74 = local_94;
LAB_004ce31d:
        local_94 = local_9c;
        fVar2 = local_98;
        local_70 = local_90;
      }
      break;
    case 0x51:
    case 0x71:
      local_bc = (double)CONCAT44(param_1,0x4ce5ec);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        local_bc = (double)CONCAT44(param_1,0x4ce600);
        cVar4 = FUN_004ceb35();
        if (cVar4 != '\0') {
          if (local_9d != '\0') {
            local_9c = local_9c + local_94;
            local_98 = local_98 + local_90;
            local_84 = local_84 + local_94;
            local_80 = local_80 + local_90;
          }
          local_bc = (double)CONCAT44(local_80,local_84);
          FUN_00478cdd();
          local_74 = local_9c;
          local_70 = local_98;
          local_94 = local_84;
          fVar2 = local_80;
        }
      }
      break;
    case 0x53:
    case 0x73:
      local_bc = (double)CONCAT44(param_1,0x4ce4f1);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        local_bc = (double)CONCAT44(param_1,0x4ce505);
        cVar4 = FUN_004ceb35();
        if (cVar4 != '\0') {
          if (local_9d != '\0') {
            local_9c = local_9c + local_94;
            local_98 = local_98 + local_90;
            local_6c = local_6c + local_94;
            local_68 = local_68 + local_90;
          }
          local_84 = (local_94 - local_74) + local_94;
          local_80 = (local_90 - local_70) + local_90;
          local_60 = (double)CONCAT44(local_60._4_4_,local_80);
          local_bc = (double)CONCAT44(local_68,local_6c);
          FUN_00478de7();
          local_74 = local_9c;
          local_70 = local_98;
LAB_004ce4cc:
          local_94 = local_6c;
          fVar2 = local_68;
        }
      }
      break;
    case 0x54:
    case 0x74:
      local_bc = (double)CONCAT44(param_1,0x4ce6a2);
      cVar4 = FUN_004ceb35();
      if (cVar4 != '\0') {
        if (local_9d != '\0') {
          local_9c = local_9c + local_94;
          local_98 = local_98 + local_90;
        }
        local_84 = (local_94 - local_74) + local_94;
        local_60 = (double)CONCAT44(local_60._4_4_,local_84);
        local_90 = (local_90 - local_70) + local_90;
        local_bc = (double)CONCAT44(local_98,local_9c);
        FUN_00478cdd();
        local_74 = local_60._0_4_;
        local_80 = local_90;
        goto LAB_004ce31d;
      }
      break;
    case 0x56:
    case 0x76:
      local_bc = (double)(ulonglong)param_1;
      cVar4 = FUN_004ceaa0();
      if (cVar4 == '\0') goto LAB_004ce38d;
      if (local_9d != '\0') {
        local_98 = local_98 + local_90;
      }
      local_bc = (double)CONCAT44(local_98,local_94);
      FUN_00478ba1();
      local_70 = local_90;
      fVar2 = local_98;
      break;
    case 0x5a:
    case 0x7a:
      local_bc = (double)CONCAT44(0x4ce99a,(undefined4)local_bc);
      FUN_00478e1f();
      local_74 = local_54;
      local_70 = local_50;
      local_94 = local_54;
      local_90 = local_50;
      local_bc = (double)CONCAT44(0x4ce9c7,(undefined4)local_bc);
      FUN_00460973();
      local_88 = local_4c;
      local_58 = 0x4d;
      fVar2 = local_90;
    }
    local_90 = fVar2;
  } while (bVar1);
  local_4c = (char *)&local_bc;
  local_bc = (double)CONCAT44(local_50,local_54);
  FUN_00478e57();
  cVar4 = FUN_004a4a0f();
  if (cVar4 != '\0') {
    local_bc = (double)CONCAT44(0x4cea24,(undefined4)local_bc);
    FUN_00478e1f();
  }
  ExceptionList = local_14;
  return;
}

