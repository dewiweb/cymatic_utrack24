// rea decompile_all
// name: FUN_0063fe90
// address: 0x63fe90
// body: available
// range: 0x63fe90-0x640258 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063fe90(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *piVar7;
  int *in_EDX;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  char *local_4c;
  char *local_48;
  int *local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  ushort local_2c;
  ushort local_2a;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fb07;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = *in_ECX;
  local_3c = in_ECX[1] - local_38;
  if (param_1 - local_38 < in_ECX[1] - local_38) {
    local_3c = param_1 - local_38;
  }
  local_58 = in_EDX;
  local_50 = in_ECX;
  FUN_00467730(local_18);
  local_8 = 0;
  local_5c = 0;
  puVar3 = (undefined4 *)FUN_00458890();
  (**(code **)(*param_3 + 0x14))(param_3,*puVar3,&local_40,&local_5c);
  if (local_5c == 0) {
    local_40 = 0;
  }
  local_8._0_1_ = 1;
  local_44 = (int *)0x0;
  (**(code **)(*param_3 + 0x10))(param_3,local_40,&local_44);
  local_34 = (int *)0x0;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar4 = (**(code **)(*local_44 + 0x10))(local_44);
  piVar7 = local_44;
  do {
    iVar4 = iVar4 + -1;
    local_44 = piVar7;
    if (iVar4 < 0) break;
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
    }
    local_34 = (int *)0x0;
    (**(code **)(*piVar7 + 0x14))(piVar7,iVar4,&local_34);
    puVar3 = (undefined4 *)FUN_00640400();
    piVar7 = (int *)*puVar3;
    piVar2 = *(int **)(local_50[2] + 0x10);
    if (*(int **)(local_50[2] + 0x10) == (int *)*puVar3) {
      iVar8 = 0;
    }
    else {
      do {
        local_30 = piVar2;
        local_54 = piVar7;
        iVar5 = FUN_00443260();
        iVar8 = FUN_00443260();
        if ((iVar5 - iVar8 != 0) && (iVar8 = (iVar5 - iVar8 >> 0x1f & 0xfffffffeU) + 1, iVar8 != 0))
        goto LAB_0063ffd2;
        piVar7 = local_54;
        piVar2 = local_30;
      } while (iVar5 != 0);
      iVar8 = 0;
    }
LAB_0063ffd2:
    piVar7 = (int *)(local_48 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = local_44;
  } while (iVar8 != 0);
  if (*local_4c == '\0') {
    piVar7 = (int *)&DAT_00bfe234;
    pcVar9 = local_4c;
  }
  else {
    FUN_0045d6b0(local_4c);
    pcVar9 = local_4c + 1;
    pcVar10 = local_4c;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_00455850(local_4c);
    local_4c = local_48;
    piVar7 = (int *)(local_48 + ((uint)(pcVar10 + (4 - (int)pcVar9)) & 0xfffffffc));
    local_54 = piVar7;
    FUN_0045e410(local_48);
    pcVar9 = local_48;
  }
  piVar2 = local_58;
  (**(code **)(*local_58 + 0x7c))(local_58,piVar7,local_38,local_3c);
  iVar4 = *piVar2;
  uVar6 = (**(code **)(*local_34 + 0x10))(local_34,local_38,local_3c);
  (**(code **)(iVar4 + 0x80))(piVar2,uVar6);
  iVar4 = *piVar2;
  uVar6 = (**(code **)(*local_34 + 0x14))(local_34,local_38,local_3c);
  (**(code **)(iVar4 + 0x88))(piVar2,uVar6);
  iVar4 = *piVar2;
  uVar6 = (**(code **)(*local_34 + 0x18))(local_34,local_38,local_3c);
  (**(code **)(iVar4 + 0x84))(piVar2,uVar6);
  local_8._0_1_ = 3;
  local_30 = (int *)0x0;
  (**(code **)(*local_34 + 0x34))(local_34,&local_30);
  if (local_30 == (int *)0x0) {
    piVar7 = (int *)0x3f800000;
  }
  else {
    (**(code **)(*local_30 + 0x20))(local_30,&local_2c);
    local_58 = (int *)((float)local_2c / (float)(((uint)local_28 & 0xffff) + (uint)local_2a));
    local_8._0_1_ = 5;
    piVar7 = local_58;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
      piVar7 = local_58;
    }
  }
  iVar4 = local_3c;
  local_8._0_1_ = 2;
  (**(code **)(*piVar2 + 0x8c))
            (piVar2,*(float *)(local_50[2] + 0x14) * (float)piVar7,local_38,local_3c);
  local_8._0_1_ = 6;
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))(local_34);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 8))(local_44);
  }
  piVar7 = (int *)(pcVar9 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_40 = local_50[3];
  local_8 = 8;
  local_30 = (int *)0x0;
  local_1c = (float)(local_40 >> 0x18) / 255.0;
  local_20 = (float)(local_40 & 0xff) / 255.0;
  local_24 = (float)(local_40 >> 8 & 0xff) / 255.0;
  local_28 = (float)(local_40 >> 0x10 & 0xff) / 255.0;
  (**(code **)(*param_2 + 0x20))(param_2,&local_28,0,&local_30);
  (**(code **)(*piVar2 + 0x98))(piVar2,local_30,local_38,iVar4);
  local_8 = 9;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))(local_30);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

