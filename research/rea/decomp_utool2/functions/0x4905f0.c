// rea decompile_all
// name: FUN_004905f0
// address: 0x4905f0
// body: available
// range: 0x4905f0-0x4908eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004905f0(char param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  uint local_58;
  int local_54;
  undefined1 local_4c [4];
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38 [2];
  undefined1 local_30 [8];
  undefined4 *local_28;
  int local_24;
  int local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701f76;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38[0] = (int *)in_ECX[0x22];
  (**(code **)(*local_38[0] + 0x58))(local_30,in_ECX + 0x24,local_18);
  local_28 = (undefined4 *)in_ECX[0x26];
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    local_28[1] = local_28[1] + 1;
    UNLOCK();
  }
  local_24 = in_ECX[0x27];
  local_20 = in_ECX[0x28];
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_00490d00(param_2,param_3);
  piVar5 = (int *)FUN_00490b70(&local_24,&local_40,param_2,param_3);
  if (((piVar5 == (int *)0x0) || (*(code **)(*piVar5 + 0x18) == FUN_006e19d0)) ||
     (cVar3 = (**(code **)(*piVar5 + 0x18))(), uVar4 = 0, cVar3 != '\0')) {
    uVar4 = 1;
  }
  (**(code **)(*in_ECX + 0x28))(uVar4);
  iVar7 = local_40;
  if (in_ECX[0x2d] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(in_ECX[0x2d] + 8);
  }
  if (local_40 != iVar6) {
    local_8._0_1_ = 1;
    if (in_ECX[0x2d] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(in_ECX[0x2d] + 8);
    }
    local_3c = (int *)FUN_006f6dd6(uVar8,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::DragAndDropTarget::RTTI_Type_Descriptor,0);
    local_8._0_1_ = 0;
    if (((local_3c != (int *)0x0) && (local_28 != (undefined4 *)0x0)) &&
       ((iVar7 = local_40, local_28[2] != 0 &&
        (cVar3 = (**(code **)(*local_3c + 4))(local_38), iVar7 = local_40, cVar3 != '\0')))) {
      (**(code **)(*local_3c + 0x10))(local_38);
      iVar7 = local_40;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0040de70(iVar7);
    }
    if (in_ECX[0x2d] != iVar7) {
      if (iVar7 != 0) {
        LOCK();
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        UNLOCK();
      }
      puVar2 = (undefined4 *)in_ECX[0x2d];
      in_ECX[0x2d] = iVar7;
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar2 + 1;
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 4))(local_38), cVar3 != '\0')) {
      (**(code **)(*piVar5 + 8))(local_38);
    }
  }
  FUN_00490d60(local_38);
  if (param_1 != '\0') {
    FUN_00633420();
    local_8._0_1_ = 2;
    if (in_ECX[0x2d] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(in_ECX[0x2d] + 8);
    }
    iVar7 = FUN_006f6dd6(uVar8,0,&juce::Component::RTTI_Type_Descriptor,
                         &juce::DragAndDropTarget::RTTI_Type_Descriptor,0);
    local_8._0_1_ = 0;
    if (iVar7 == 0) {
      FUN_0061e1c0();
      FUN_0061d4e0(in_ECX[0x32],in_ECX[0x33]);
      if ((local_54 <= local_44) && ((local_54 < local_44 || (local_58 < local_48)))) {
        FUN_00490e00(local_38,param_2,param_3);
      }
    }
    else {
      in_ECX[0x32] = local_48;
      in_ECX[0x33] = local_44;
    }
  }
  if (DAT_00c8a67c == 0) {
    local_3c = operator_new(0xd0);
    local_8._0_1_ = 3;
    DAT_00c8a67c = FUN_006cb960();
    local_8._0_1_ = 0;
  }
  FUN_006cb390(local_4c);
  FUN_0048f720(1);
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_28 + 1;
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_28)(1);
    }
  }
  (**(code **)(*local_38[0] + 0x54))(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

