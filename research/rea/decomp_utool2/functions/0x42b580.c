// rea decompile_all
// name: FUN_0042b580
// address: 0x42b580
// body: available
// range: 0x42b580-0x42b919 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID *ppv;
  char cVar1;
  HRESULT HVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar4;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int *piVar5;
  uint uVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  uint local_48;
  undefined1 *local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 local_30 [4];
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdbe2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppv = (LPVOID *)(in_ECX + 100);
  local_54 = param_1;
  local_50 = param_2;
  local_60 = param_3;
  local_38 = param_4;
  if (*(int *)(in_ECX + 100) == 0) {
    piVar5 = *ppv;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5,local_14);
    }
    *ppv = (LPVOID)0x0;
    HVar2 = CoCreateInstance((IID *)&DAT_00c14598,(LPUNKNOWN)0x0,1,(IID *)&DAT_00c13e4c,ppv);
    if (HVar2 < 0) goto LAB_0042b8fd;
    local_4c = operator_new(0xc);
    local_4c[1] = 0;
    *local_4c = juce::WasapiClasses::WASAPIAudioIODeviceType::ChangeNotificationClient::vftable;
    local_4c[2] = in_ECX;
    FUN_00432cb0(local_4c);
    (**(code **)(*(int *)*ppv + 0x18))(*ppv,*(undefined4 *)(in_ECX + 0x68));
  }
  FUN_0042b490(0);
  local_8 = 0;
  FUN_0042b490(1);
  local_8._0_1_ = 2;
  local_48 = 0;
  local_40 = (int *)0x0;
  iVar3 = (**(code **)(*(int *)*ppv + 0xc))(*ppv,2,1,&local_40);
  if ((-1 < iVar3) && (iVar3 = (**(code **)(*local_40 + 0xc))(local_40,&local_48), -1 < iVar3)) {
    uVar6 = 0;
    uVar4 = extraout_ECX;
    if (local_48 != 0) {
      do {
        local_8._0_1_ = 4;
        local_2c = (int *)0x0;
        iVar3 = (**(code **)(*local_40 + 0x10))(local_40,uVar6,&local_2c);
        if (iVar3 < 0) {
          local_8 = CONCAT31(local_8._1_3_,5);
          uVar4 = extraout_ECX_00;
        }
        else {
          local_4c = (undefined4 *)0x0;
          iVar3 = (**(code **)(*local_2c + 0x18))(local_2c,&local_4c);
          if ((iVar3 < 0) || (local_4c != (undefined4 *)0x1)) {
            local_8 = CONCAT31(local_8._1_3_,6);
            uVar4 = extraout_ECX_01;
          }
          else {
            FUN_005c9810();
            local_34 = &DAT_00bfe12c;
            local_8._0_1_ = 9;
            local_3c = (int *)0x0;
            iVar3 = (**(code **)(*local_2c + 0x10))(local_2c,0,&local_3c);
            if (iVar3 < 0) {
              local_8._0_1_ = 10;
              if (local_3c != (int *)0x0) {
                (**(code **)(*local_3c + 8))(local_3c);
              }
              FUN_00637c10();
              FUN_00637c10();
              local_8 = CONCAT31(local_8._1_3_,0xb);
              uVar4 = extraout_ECX_02;
            }
            else {
              local_28 = 0xa45c254e;
              local_70 = 0;
              uStack_6c = 0;
              uStack_68 = 0;
              uStack_64 = 0;
              local_24 = 0x4efddf1c;
              local_20 = 0xd1672080;
              local_1c = 0xe050a846;
              local_18 = 0xe;
              iVar3 = (**(code **)(*local_3c + 0x14))(local_3c,&local_28,&local_70);
              if (-1 < iVar3) {
                FUN_0045cae0(uStack_68);
                local_34 = local_44;
                local_44 = &DAT_00bfe12c;
                FUN_00637c10();
              }
              PropVariantClear((PROPVARIANT *)&local_70);
              local_8._0_1_ = 0xc;
              if (local_3c != (int *)0x0) {
                (**(code **)(*local_3c + 8))(local_3c);
              }
              local_8 = CONCAT31(local_8._1_3_,8);
              iVar3 = FUN_005c9780();
              if (iVar3 == 0) {
                cVar1 = FUN_006356b0();
                iVar3 = (cVar1 != '\0') - 1;
                FUN_00459120(iVar3,local_30);
LAB_0042b829:
                FUN_00459120(iVar3,&local_34);
              }
              else if (iVar3 == 1) {
                cVar1 = FUN_006356b0();
                iVar3 = (cVar1 != '\0') - 1;
                FUN_00459120(iVar3,local_30);
                goto LAB_0042b829;
              }
              FUN_00637c10();
              FUN_00637c10();
              local_8 = CONCAT31(local_8._1_3_,0xd);
              uVar4 = extraout_ECX_03;
            }
          }
        }
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 8))(local_2c);
          uVar4 = extraout_ECX_04;
        }
        uVar6 = uVar6 + 1;
        local_8._0_1_ = 2;
      } while (uVar6 < local_48);
    }
    FUN_0062c0f0(uVar4,0,0,0);
    FUN_0062c0f0(extraout_ECX_05,0,0,0);
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
  }
  piVar5 = (int *)(local_58 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_5c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
LAB_0042b8fd:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

