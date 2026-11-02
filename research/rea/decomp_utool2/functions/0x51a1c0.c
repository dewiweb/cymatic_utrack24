// rea decompile_all
// name: FUN_0051a1c0
// address: 0x51a1c0
// body: available
// range: 0x51a1c0-0x51a478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a1c0(int *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *_Memory;
  byte bVar3;
  undefined4 uStack_38;
  TypeDescriptor *pTStack_34;
  TypeDescriptor *pTStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709b1a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  in_ECX[0x1d] = DragDropHelper_Source::vftable;
  in_ECX[0x1e] = in_ECX;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = juce::SettableTooltipClient::vftable;
  in_ECX[0x25] = &DAT_00bfe12c;
  in_ECX[0x26] = juce::Label::Listener::vftable;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  in_ECX[0x27] = param_2;
  *in_ECX = TVIBase::vftable;
  in_ECX[0x1c] = TVIBase::vftable;
  in_ECX[0x1d] = TVIBase::vftable;
  in_ECX[0x24] = TVIBase::vftable;
  in_ECX[0x26] = TVIBase::vftable;
  in_ECX[0x28] = param_1[1];
  pTStack_30 = (TypeDescriptor *)0x51a2a6;
  FUN_006df860();
  local_8._0_1_ = 5;
  FUN_004f7780();
  param_2 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,8);
  pTStack_30 = (TypeDescriptor *)&param_2;
  pTStack_34 = (TypeDescriptor *)0x51a2dc;
  FUN_006e8b40();
  _Memory = (int *)(param_2 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      pTStack_30 = (TypeDescriptor *)0x51a2fd;
      FID_conflict__free(_Memory);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0xb);
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  if ((param_1[0x10] & 0x1000U) == 0) goto LAB_0051a414;
  pTStack_30 = &ProjectExplorer::RTTI_Type_Descriptor;
  pTStack_34 = &juce::TreeView::RTTI_Type_Descriptor;
  uStack_38 = 0;
  iVar2 = FUN_006f6dd6(param_1[1]);
  if ((*(byte *)(iVar2 + 0x15c) & 8) == 0) goto LAB_0051a414;
  if (in_ECX != (undefined4 *)0xffffff90) {
    pTStack_30 = (TypeDescriptor *)0x51a372;
    FUN_004097d0();
  }
  pTStack_30 = (TypeDescriptor *)0x51a37b;
  (**(code **)(in_ECX[0x2a] + 0x28))();
  pTStack_34 = (TypeDescriptor *)0x51a385;
  pTStack_30 = (TypeDescriptor *)(in_ECX + 0x2a);
  FUN_006e5050();
  if ((param_1[0x10] == 0x1003) || (param_1[0x10] == 0x1006)) {
    if (param_1[0x1a] == 0) {
      pTStack_30 = (TypeDescriptor *)0x51a3aa;
      cVar1 = (**(code **)(*param_1 + 0x8c))();
      if (cVar1 != '\0') goto LAB_0051a3ae;
    }
    bVar3 = 0;
  }
  else {
LAB_0051a3ae:
    bVar3 = 1;
  }
  in_ECX[0x65] = param_1[0x18];
  FUN_006e6400(&uStack_38);
  FUN_006ce9f0(1);
  if ((*(byte *)((int)in_ECX + 0x111) >> 4 & 1) == bVar3) {
    iVar2 = in_ECX[0x2d];
    *(byte *)((int)in_ECX + 0x111) = (bVar3 ^ 1) << 4 | *(byte *)((int)in_ECX + 0x111) & 0xef;
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) goto LAB_0051a414;
      if (*(int *)(iVar2 + 0xc) != 0) {
        cVar1 = FUN_006e6320();
        if (cVar1 == '\0') goto LAB_0051a414;
      }
    }
    FUN_006cc240();
  }
LAB_0051a414:
  pTStack_30 = (TypeDescriptor *)0x1000281;
  pTStack_34 = (TypeDescriptor *)0x51a430;
  FUN_006e6170();
  if (in_ECX != (undefined4 *)0xffffff68) {
    pTStack_30 = (TypeDescriptor *)0x51a446;
    FUN_004097d0();
  }
  pTStack_30 = (TypeDescriptor *)0x51a44f;
  (**(code **)(in_ECX[0x67] + 0x28))();
  pTStack_30 = (TypeDescriptor *)0xffffffff;
  uStack_38 = 0x51a459;
  pTStack_34 = (TypeDescriptor *)(in_ECX + 0x67);
  FUN_006e5050();
  pTStack_30 = (TypeDescriptor *)0x1;
  uStack_38 = 0x51a463;
  FUN_006dfe90();
  ExceptionList = local_10;
  return;
}

