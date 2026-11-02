// rea decompile_all
// name: FUN_0051b180
// address: 0x51b180
// body: available
// range: 0x51b180-0x51b4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051b180(int param_1,char param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709c90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((in_ECX[0x10] == 0x1003) || (in_ECX[0x10] == 0x1006)) &&
     (cVar2 = (**(code **)(*in_ECX + 0x8c))(), cVar2 == '\0')) {
    in_ECX[0x18] = 0;
    local_8 = 0;
    if (in_ECX[0x1d] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(in_ECX[0x1d] + 8);
    }
    iVar3 = FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,
                         &TVIBase::RTTI_Type_Descriptor);
    local_8 = 0xffffffff;
    if (iVar3 != 0) {
      iVar3 = in_ECX[0x18];
      FUN_00413200(iVar3);
LAB_0051b297:
      FUN_00519b80(iVar3);
    }
  }
  else {
    in_ECX[0x18] = param_1;
    local_8 = 1;
    if (in_ECX[0x1d] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(in_ECX[0x1d] + 8);
    }
    iVar3 = FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,
                         &TVIBase::RTTI_Type_Descriptor);
    local_8 = 0xffffffff;
    if (iVar3 != 0) {
      local_8 = 2;
      if (in_ECX[0x1d] == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(in_ECX[0x1d] + 8);
      }
      FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor);
      local_8 = 0xffffffff;
      iVar3 = in_ECX[0x18];
      goto LAB_0051b297;
    }
  }
  if ((param_2 != '\0') && (iVar3 = in_ECX[5], 0 < iVar3)) {
    iVar5 = 0;
    uVar7 = 0;
    _param_2 = 0;
    if (0 < iVar3) {
      bVar9 = iVar3 != 0;
      do {
        if (bVar9) {
          iVar3 = *(int *)(in_ECX[3] + uVar7 * 4);
        }
        else {
          iVar3 = 0;
        }
        if (in_ECX[0x18] == 0) {
          uVar10 = 0;
LAB_0051b2e6:
          FUN_0051b180(uVar10,1);
        }
        else if (in_ECX[0x18] == 1) {
          uVar10 = 1;
          goto LAB_0051b2e6;
        }
        uVar7 = uVar7 + 1;
        iVar5 = _param_2 + 1;
        if (*(int *)(iVar3 + 0x60) != 1) {
          iVar5 = _param_2;
        }
        bVar9 = uVar7 < (uint)in_ECX[5];
        _param_2 = iVar5;
      } while ((int)uVar7 < in_ECX[5]);
    }
    iVar3 = 0;
    if (iVar5 == in_ECX[5]) {
      iVar3 = 1;
    }
    else if (0 < iVar5) {
      iVar3 = 2;
    }
    if (iVar3 != in_ECX[0x18]) {
      in_ECX[0x18] = iVar3;
      local_8 = 3;
      iVar3 = in_ECX[0x1d];
      if (iVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(iVar3 + 8);
      }
      iVar3 = FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,
                           &TVIBase::RTTI_Type_Descriptor);
      if (iVar3 != 0) {
        local_8 = 4;
        iVar3 = in_ECX[0x1d];
        if (iVar3 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(iVar3 + 8);
        }
        FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor)
        ;
        local_8 = 0xffffffff;
        FUN_00519b80(in_ECX[0x18]);
      }
    }
  }
  piVar8 = in_ECX + 0x1d;
  local_8 = 5;
  if (*piVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(*piVar8 + 8);
  }
  iVar3 = FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,
                       &TVIBase::RTTI_Type_Descriptor);
  local_8 = 0xffffffff;
  if (iVar3 == 0) goto LAB_0051b469;
  if (in_ECX[0x18] == 0) {
    piVar4 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 7;
    iVar3 = DAT_00c7ef94;
    if (*piVar8 == 0) goto LAB_0051b442;
    uVar10 = *(undefined4 *)(*piVar8 + 8);
  }
  else {
    piVar4 = (int *)(in_ECX[0x1c] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 6;
    iVar3 = in_ECX[0x1b];
    if (*piVar8 == 0) {
LAB_0051b442:
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(*piVar8 + 8);
    }
  }
  FUN_006f6dd6(uVar10,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor,0,
               iVar3);
  local_8 = 0xffffffff;
  FUN_00519ae0(iVar3);
LAB_0051b469:
  (**(code **)(*in_ECX + 0x78))();
  if (param_3 != '\0') {
    for (iVar3 = in_ECX[2]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      uVar1 = *(uint *)(iVar3 + 0x14);
      uVar7 = 0;
      uVar6 = 0;
      if ((int)uVar1 < 1) {
LAB_0051b4d0:
        uVar10 = 0;
      }
      else {
        do {
          if (uVar6 < uVar1) {
            iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + uVar6 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(int *)(iVar5 + 0x60) == 1) {
            uVar7 = uVar7 + 1;
          }
          else if (*(int *)(iVar5 + 0x60) == 2) {
            uVar7 = uVar1 + 1;
            uVar6 = uVar1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
        if (uVar7 == 0) goto LAB_0051b4d0;
        if (uVar7 == uVar1) {
          uVar10 = 1;
        }
        else {
          uVar10 = 2;
        }
      }
      FUN_0051b180(uVar10,0);
    }
  }
  ExceptionList = local_10;
  return;
}

