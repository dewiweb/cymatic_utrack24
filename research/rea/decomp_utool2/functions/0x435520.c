// rea decompile_all
// name: FUN_00435520
// address: 0x435520
// body: available
// range: 0x435520-0x4357ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00435520(int *param_1,int *param_2,undefined4 param_3,int *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int *in_ECX;
  undefined4 ****in_stack_ffffffb0;
  undefined4 ***local_30;
  undefined4 ***local_2c [2];
  undefined8 local_24;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe298;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)*param_1 == -0x10) {
    in_ECX[4] = 0;
    *(undefined8 *)(in_ECX + 2) = param_5;
  }
  ppppuVar4 = (undefined4 ****)(*param_2 + in_ECX[4]);
  if ((undefined4 ****)in_ECX[1] < ppppuVar4) {
    local_30 = ppppuVar4;
    if (ppppuVar4 == (undefined4 ****)0x0) {
      in_stack_ffffffb0 = (undefined4 ****)*in_ECX;
      FID_conflict__free(in_stack_ffffffb0);
      *in_ECX = 0;
      in_ECX[1] = 0;
    }
    else {
      if (*in_ECX == 0) {
        in_stack_ffffffb0 = (undefined4 ****)0x0;
        FID_conflict__free((void *)0x0);
        iVar5 = FUN_004c554b(local_30);
      }
      else {
        iVar5 = FUN_004c553b(*in_ECX,ppppuVar4,local_14);
        in_stack_ffffffb0 = ppppuVar4;
      }
      *in_ECX = iVar5;
      in_ECX[1] = (int)local_30;
    }
  }
  iVar5 = *in_ECX;
  local_30 = (undefined4 ***)(in_ECX[4] + iVar5);
  do {
    if ((in_ECX[4] < 1) || (bVar2 = *(byte *)*param_1, bVar2 < 0x80)) {
      *(undefined1 *)local_30 = *(undefined1 *)*param_1;
      local_30 = (undefined4 ***)((int)local_30 + 1);
      *param_1 = *param_1 + 1;
      in_ECX[4] = in_ECX[4] + 1;
    }
    else {
      if (bVar2 == 0xf7) {
        *(undefined1 *)local_30 = *(undefined1 *)*param_1;
        *param_1 = *param_1 + 1;
        in_ECX[4] = in_ECX[4] + 1;
        *param_2 = *param_2 + -1;
        goto LAB_00435715;
      }
      if ((bVar2 < 0xfa) && (bVar2 != 0xf8)) {
        in_ECX[4] = 0;
        local_30 = (undefined4 ***)0x0;
        FUN_005c54f0(*param_1,*param_2,&local_30,0,(int)param_5,(int)((ulonglong)param_5 >> 0x20),
                     in_stack_ffffffb0);
        local_8 = 1;
        if (0 < (int)local_30) {
          if ((undefined **)*param_4 == juce::AudioDeviceManager::CallbackHandler::vftable) {
            FUN_005cb3c0(param_3,local_2c);
          }
          else {
            (*(code *)((undefined **)*param_4)[1])(param_3,local_2c);
          }
          *param_2 = *param_2 - (int)local_30;
          *param_1 = (int)((int)local_30 + *param_1);
        }
        local_8 = 0xffffffff;
        if (4 < local_1c) {
          FID_conflict__free(local_2c[0]);
        }
        goto LAB_00435715;
      }
      local_24 = param_5;
      local_1c = 1;
      local_2c[0] = (undefined4 ***)CONCAT31(local_2c[0]._1_3_,bVar2);
      local_8 = 0;
      in_stack_ffffffb0 = local_2c;
      if ((undefined **)*param_4 == juce::AudioDeviceManager::CallbackHandler::vftable) {
        FUN_005cb3c0(param_3,in_stack_ffffffb0);
      }
      else {
        (*(code *)((undefined **)*param_4)[1])(param_3);
      }
      local_8 = 0xffffffff;
      if (4 < local_1c) {
        in_stack_ffffffb0 = (undefined4 ****)local_2c[0];
        FID_conflict__free(local_2c[0]);
      }
      *param_1 = *param_1 + 1;
    }
    *param_2 = *param_2 + -1;
    if (*param_2 < 1) {
LAB_00435715:
      iVar3 = in_ECX[4];
      if (0 < iVar3) {
        uVar1 = *(undefined8 *)(in_ECX + 2);
        if (*(char *)(iVar3 + -1 + iVar5) == -9) {
          local_24 = uVar1;
          local_1c = iVar3;
          if (iVar3 < 5) {
            ppppuVar4 = local_2c;
          }
          else {
            ppppuVar4 = (undefined4 ****)FUN_004c554b(iVar3);
            local_2c[0] = ppppuVar4;
          }
          FUN_004c2c30(ppppuVar4,iVar5,iVar3);
          local_8 = 2;
          if ((undefined **)*param_4 == juce::AudioDeviceManager::CallbackHandler::vftable) {
            FUN_005cb3c0(param_3,local_2c);
          }
          else {
            (*(code *)((undefined **)*param_4)[1])(param_3,local_2c);
          }
          if (4 < local_1c) {
            FID_conflict__free(local_2c[0]);
          }
          in_ECX[4] = 0;
        }
        else {
          (**(code **)(*param_4 + 8))
                    (param_3,iVar5,iVar3,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

