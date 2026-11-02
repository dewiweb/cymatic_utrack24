// rea decompile_all
// name: FUN_004e8e50
// address: 0x4e8e50
// body: available
// range: 0x4e8e50-0x4e90d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e8e50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int iVar7;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined **ppuStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704ba8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::ComboBox::Listener::vftable;
  in_ECX[0x1d] = juce::ChangeListener::vftable;
  in_ECX[0x1e] = param_2;
  *in_ECX = MyAudioDeviceSelectorComponent::vftable;
  in_ECX[0x1c] = MyAudioDeviceSelectorComponent::vftable;
  in_ECX[0x1d] = MyAudioDeviceSelectorComponent::vftable;
  in_ECX[0x1f] = param_1;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = &DAT_00bfe12c;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  iVar2 = in_ECX[0x1e];
  in_ECX[0x24] = 0x18;
  in_ECX[0x25] = 2;
  in_ECX[0x26] = 2;
  *(undefined1 *)(in_ECX + 0x27) = 0;
  if (*(char *)(iVar2 + 0xf8) != '\0') {
    *(undefined1 *)(iVar2 + 0xf8) = 0;
    FUN_005cdce0();
    iVar7 = *(int *)(iVar2 + 0x24);
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      (**(code **)**(undefined4 **)(*(int *)(iVar2 + 0x1c) + iVar7 * 4))();
    }
  }
  if (1 < *(int *)(iVar2 + 0x24)) {
    ppuStack_30 = (undefined **)0x4e8f54;
    pvVar4 = operator_new(0xcc);
    local_8._0_1_ = 7;
    ppuStack_30 = (undefined **)0x4e8f6a;
    puVar5 = (undefined4 *)FUN_006e8840();
    local_8 = CONCAT31(local_8._1_3_,6);
    puVar3 = (undefined4 *)in_ECX[0x20];
    if ((puVar3 != puVar5) && (in_ECX[0x20] = puVar5, puVar3 != (undefined4 *)0x0)) {
      ppuStack_30 = (undefined **)0x4e8f88;
      (**(code **)*puVar3)();
    }
    iVar7 = 0;
    if (0 < *(int *)(iVar2 + 0x24)) {
      do {
        iVar1 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        ppuStack_30 = (undefined **)(*(int *)(*(int *)(iVar2 + 0x1c) + iVar1) + 4);
        uStack_34 = 0x4e8fa7;
        FUN_006e8760();
      } while (iVar7 < *(int *)(iVar2 + 0x24));
    }
    piVar6 = (int *)in_ECX[0x20];
    if (piVar6 != (int *)0x0) {
      ppuStack_30 = (undefined **)0x4e8fbf;
      (**(code **)(*piVar6 + 0x28))();
      uStack_34 = 0x4e8fc9;
      ppuStack_30 = (undefined **)piVar6;
      FUN_006e5050();
    }
    if (in_ECX != (undefined4 *)0xffffff90) {
      ppuStack_30 = (undefined **)0x4e8fe2;
      FUN_004097d0();
    }
    ppuStack_30 = (undefined **)0x4e8fec;
    operator_new(0xd0);
    local_8._0_1_ = 8;
    FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,9);
    ppuStack_30 = &PTR_DAT_00c7ed68;
    uStack_34 = 0x4e901d;
    puVar5 = (undefined4 *)FUN_006e8b40();
    puVar3 = (undefined4 *)in_ECX[0x21];
    if ((puVar3 != puVar5) && (in_ECX[0x21] = puVar5, puVar3 != (undefined4 *)0x0)) {
      ppuStack_30 = (undefined **)0x4e9037;
      (**(code **)*puVar3)();
    }
    local_8._0_1_ = 6;
    local_8._1_3_ = 0;
    piVar6 = (int *)((int)pvVar4 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        ppuStack_30 = (undefined **)0x4e905f;
        FID_conflict__free(piVar6);
      }
    }
    if (*(int *)(in_ECX[0x21] + 0x9c) != 0x22) {
      *(undefined4 *)(in_ECX[0x21] + 0x9c) = 0x22;
      FUN_006e6400(auStack_38);
      FUN_006ce9f0(1);
    }
    ppuStack_30 = (undefined **)in_ECX[0x20];
    uStack_34 = 0x4e90a1;
    FUN_006e89c0();
  }
  if (in_ECX != (undefined4 *)0xffffff8c) {
    ppuStack_30 = (undefined **)0x4e90b4;
    FUN_004097d0();
  }
  FUN_004e89b0();
  ExceptionList = local_10;
  return;
}

