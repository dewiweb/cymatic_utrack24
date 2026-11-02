// rea decompile_all
// name: FUN_00689810
// address: 0x689810
// body: available
// range: 0x689810-0x6899ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00689810(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007210e5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = DAT_00c8a678;
  if (DAT_00c8a678 == 0) {
    iVar3 = FUN_0068a130(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (iVar3 == 0) {
      cVar2 = FUN_00686f90();
      iVar4 = DAT_00c8a67c;
      if (cVar2 != '\0') {
        if (DAT_00c8a67c == 0) {
          operator_new(0xd0);
          local_8 = iVar4;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = 0xffffffff;
        }
        iVar4 = DAT_00c8a67c;
        uVar1 = *(uint *)(DAT_00c8a67c + 0x44);
joined_r0x006898f4:
        do {
          uVar1 = uVar1 - 1;
          if ((int)uVar1 < 0) break;
          if (uVar1 < *(uint *)(iVar4 + 0x44)) {
            iVar3 = *(int *)(*(int *)(iVar4 + 0x3c) + uVar1 * 4);
          }
          else {
            iVar3 = 0;
          }
          if ((*(byte *)(iVar3 + 0x68) & 1) == 0) {
            if (*(int *)(iVar3 + 0xc) == 0) goto joined_r0x006898f4;
            iVar3 = FUN_006d1d80();
          }
          else {
            iVar3 = FUN_0068db10();
          }
          if (iVar3 != 0) {
            iVar3 = FUN_0068cae0();
            iVar5 = FUN_006f6dd6(iVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::ApplicationCommandTarget::RTTI_Type_Descriptor,0);
            if (iVar5 != 0) {
              ExceptionList = local_10;
              return iVar5;
            }
            if ((iVar3 != 0) && (iVar3 = FUN_004b23f0(), iVar3 != 0)) {
              ExceptionList = local_10;
              return iVar3;
            }
          }
        } while( true );
      }
      goto LAB_0068999d;
    }
    if ((*(byte *)(iVar3 + 0x68) & 1) == 0) {
      if (*(int *)(iVar3 + 0xc) != 0) {
        FUN_006d1d80();
      }
    }
    else {
      FUN_0068db10();
    }
    iVar4 = FUN_0068cae0();
    if (iVar4 == 0) {
      iVar4 = iVar3;
    }
  }
  iVar3 = FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::ResizableWindow::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x80) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x80) + 8);
    }
    if (iVar3 != 0) {
      iVar4 = iVar3;
    }
  }
  iVar3 = FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::ApplicationCommandTarget::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    ExceptionList = local_10;
    return iVar3;
  }
  if ((iVar4 != 0) && (iVar4 = FUN_004b23f0(), iVar4 != 0)) {
    ExceptionList = local_10;
    return iVar4;
  }
LAB_0068999d:
  local_8 = 1;
  iVar4 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0);
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return iVar4 + 0x10;
}

