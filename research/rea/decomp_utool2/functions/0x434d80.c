// rea decompile_all
// name: FUN_00434d80
// address: 0x434d80
// body: available
// range: 0x434d80-0x434fae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00434d80(byte *param_1,int param_2,undefined4 param_3,int *param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void **ppvVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *******in_stack_ffffffa0;
  undefined4 *******pppppppuVar11;
  int local_44;
  int *local_40;
  byte *local_3c;
  int local_38;
  undefined4 local_34;
  byte local_30 [4];
  undefined4 *******local_2c [2];
  undefined8 local_24;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar3 = param_5;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe250;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = uVar5;
  ppvVar4 = &local_10;
  local_38 = in_ECX;
  local_10 = ExceptionList;
  local_34 = param_3;
  local_40 = param_4;
  local_3c = param_1;
  iVar9 = param_2;
joined_r0x00434dd1:
  do {
    ExceptionList = ppvVar4;
    if (iVar9 < 1) {
LAB_00434f91:
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    pppppppuVar11 = (undefined4 *******)((ulonglong)uVar3 >> 0x20);
    if ((*(int *)(in_ECX + 0x10) < 1) && (*param_1 != 0xf0)) {
      iVar10 = 0;
      piVar6 = local_40;
      while (pbVar7 = param_1, iVar8 = iVar9, 0 < iVar9) {
        bVar1 = *param_1;
        if ((bVar1 < 0xf8) || (bVar1 == 0xff)) {
          if ((iVar10 == 0) && ((bVar1 < 0x80 && (0x7f < *(byte *)(in_ECX + 0x14))))) {
            iVar10 = 1;
            local_30[0] = *(byte *)(in_ECX + 0x14);
          }
          iVar8 = iVar9 + -1;
          local_30[iVar10] = *param_1;
          pbVar7 = param_1 + 1;
          iVar10 = iVar10 + 1;
          param_2 = iVar8;
          local_3c = pbVar7;
          if ((local_30[0] < 0x80) || (local_30[0] == 0xf7)) {
            iVar10 = 0;
            break;
          }
          if ((char)(&DAT_00c13b10)[local_30[0] & 0x7f] <= iVar10) break;
        }
        else {
          local_3c = param_1 + 1;
          local_1c = 1;
          uVar2 = (uint)local_2c[0] >> 8;
          local_2c[0] = (undefined4 *******)CONCAT31((int3)uVar2,bVar1);
          local_8 = 0;
          in_stack_ffffffa0 = local_2c;
          local_24 = uVar3;
          if ((undefined **)*piVar6 == juce::AudioDeviceManager::CallbackHandler::vftable) {
            FUN_005cb3c0(local_34,in_stack_ffffffa0);
          }
          else {
            (*(code *)((undefined **)*piVar6)[1])(local_34,in_stack_ffffffa0,uVar5);
          }
          local_8 = 0xffffffff;
          piVar6 = local_40;
          in_ECX = local_38;
          if (4 < local_1c) {
            in_stack_ffffffa0 = local_2c[0];
            FID_conflict__free(local_2c[0]);
            piVar6 = local_40;
            in_ECX = local_38;
          }
        }
        param_1 = param_1 + 1;
        iVar9 = iVar9 + -1;
        param_2 = iVar9;
      }
      ppvVar4 = ExceptionList;
      iVar9 = iVar8;
      param_1 = pbVar7;
      if (0 < iVar10) {
        local_44 = 0;
        FUN_005c54f0(local_30,iVar10,&local_44,0,(int)uVar3,pppppppuVar11,in_stack_ffffffa0);
        local_8 = 1;
        if (local_44 < 1) {
          if (4 < local_1c) {
            FID_conflict__free(local_2c[0]);
          }
          goto LAB_00434f91;
        }
        in_stack_ffffffa0 = local_2c;
        if ((undefined **)*local_40 == juce::AudioDeviceManager::CallbackHandler::vftable) {
          FUN_005cb3c0(local_34,in_stack_ffffffa0);
        }
        else {
          (*(code *)((undefined **)*local_40)[1])(local_34);
        }
        local_8 = 0xffffffff;
        *(byte *)(local_38 + 0x14) = local_30[0];
        ppvVar4 = ExceptionList;
        in_ECX = local_38;
        if (4 < local_1c) {
          in_stack_ffffffa0 = local_2c[0];
          FID_conflict__free(local_2c[0]);
          ppvVar4 = ExceptionList;
          in_ECX = local_38;
        }
      }
      goto joined_r0x00434dd1;
    }
    FUN_00435520(&local_3c,&param_2,local_34,local_40,(int)uVar3,pppppppuVar11);
    *(undefined1 *)(local_38 + 0x14) = 0;
    ppvVar4 = ExceptionList;
    in_ECX = local_38;
    iVar9 = param_2;
    param_1 = local_3c;
    in_stack_ffffffa0 = pppppppuVar11;
  } while( true );
}

