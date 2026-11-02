// rea decompile_all
// name: FUN_00450280
// address: 0x450280
// body: available
// range: 0x450280-0x4504b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450280(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  undefined **local_4c;
  int local_48;
  void **local_44;
  void *local_40 [2];
  void *local_38;
  void *local_30;
  int *local_28;
  int *local_24;
  undefined1 local_20 [4];
  byte local_1c;
  undefined1 local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ffbfe;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_2;
  local_8 = 0;
  iVar3 = FUN_006f6dd6(*param_1,0,&juce::ReferenceCountedObject::RTTI_Type_Descriptor,
                       &juce::var::VariantType_Array::RefCountedArray::RTTI_Type_Descriptor,0,
                       local_14);
  if (iVar3 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(iVar3 + 8);
  }
  local_8 = 0xffffffff;
  local_24 = piVar6;
  if (piVar6 != (int *)0x0) {
    FUN_0062cb00(0x200);
    local_8 = 1;
    uVar7 = piVar6[2];
    iVar3 = 0;
    for (uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f); uVar4 != 0; uVar4 = uVar4 >> 8
        ) {
      local_1b[iVar3] = (char)uVar4;
      iVar3 = iVar3 + 1;
    }
    local_1c = (byte)iVar3;
    if ((int)uVar7 < 0) {
      local_1c = local_1c | 0x80;
    }
    (*(code *)local_4c[4])(&local_1c,iVar3 + 1);
    if (0 < (int)uVar7) {
      iVar3 = 0;
      do {
        (**(code **)(**(int **)(*local_24 + iVar3) + 0x60))
                  ((undefined4 *)(*local_24 + iVar3) + 2,&local_4c);
        iVar3 = iVar3 + 0x10;
        uVar7 = uVar7 - 1;
        param_2 = local_28;
      } while (uVar7 != 0);
    }
    iVar3 = *param_2;
    uVar7 = (int)local_30 + 1;
    pcVar1 = *(code **)(iVar3 + 0x48);
    if (pcVar1 == FUN_006205c0) {
      iVar2 = 0;
      for (uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f); uVar4 != 0;
          uVar4 = uVar4 >> 8) {
        local_1b[iVar2] = (char)uVar4;
        iVar2 = iVar2 + 1;
      }
      local_1c = (byte)iVar2;
      if ((int)uVar7 < 0) {
        local_1c = local_1c | 0x80;
      }
      (**(code **)(iVar3 + 0x10))(&local_1c,iVar2 + 1);
    }
    else {
      (*pcVar1)(uVar7);
    }
    pcVar1 = *(code **)(*param_2 + 0x14);
    if (pcVar1 == FUN_0062c8e0) {
      local_20[0] = 7;
      (**(code **)(*param_2 + 0x10))(local_20,1);
    }
    else {
      (*pcVar1)(7);
    }
    pvVar8 = local_30;
    if (local_30 != (void *)0x0) {
      if (local_44 != (void **)0x0) {
        if (local_30 < local_44[1]) {
          *(undefined1 *)((int)local_30 + (int)*local_44) = 0;
        }
        local_38 = *local_44;
      }
      (**(code **)(*param_2 + 0x10))(local_38,local_30);
      pvVar8 = local_30;
    }
    local_4c = juce::MemoryOutputStream::vftable;
    if (((local_44 != local_40) && (local_44 != (void **)0x0)) && (local_44[1] != pvVar8)) {
      if (pvVar8 == (void *)0x0) {
        FID_conflict__free(*local_44);
        *local_44 = (void *)0x0;
        local_44[1] = (void *)0x0;
      }
      else {
        if (*local_44 == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          pvVar5 = (void *)FUN_004c554b(pvVar8);
        }
        else {
          pvVar5 = (void *)FUN_004c553b(*local_44,pvVar8);
        }
        *local_44 = pvVar5;
        local_44[1] = pvVar8;
      }
    }
    FID_conflict__free(local_40[0]);
    piVar6 = (int *)(local_48 + -8);
    local_4c = juce::OutputStream::vftable;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

