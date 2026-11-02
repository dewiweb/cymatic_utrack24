// rea decompile_all
// name: FUN_005a4ea0
// address: 0x5a4ea0
// body: available
// range: 0x5a4ea0-0x5a50b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a4ea0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined4 *puStack_48;
  int *piStack_44;
  undefined4 *puStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717414;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::ComboBox::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *in_ECX = ImportItemDetails::vftable;
  in_ECX[0x1c] = ImportItemDetails::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = param_1;
  puStack_40 = (undefined4 *)0x5a4f0b;
  param_1 = in_ECX + 0x1f;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x1f] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  param_1 = (int *)&DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_40 = &param_1;
  piStack_44 = (int *)0x5a4f46;
  FUN_006e8b40();
  piVar4 = (int *)((int)param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      puStack_40 = (undefined4 *)0x5a4f6d;
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 7;
  FUN_00535850();
  local_8._0_1_ = 8;
  *(undefined1 *)(in_ECX + 0x136) = 0;
  puStack_40 = (undefined4 *)0x5a4f9f;
  puVar3 = operator_new(0x28);
  local_8._0_1_ = 9;
  *puVar3 = juce::ReferenceCountedObject::vftable;
  puVar3[1] = 0;
  *puVar3 = juce::Font::SharedFontInternal::vftable;
  puVar3[2] = 0;
  piVar4 = (int *)FUN_00643f40();
  iVar2 = *piVar4;
  puVar3[3] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puStack_40 = (undefined4 *)0x5a4fea;
  FUN_0045c990();
  puVar3[5] = 0x41a00000;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  puVar1 = (undefined4 *)in_ECX[0x1f];
  in_ECX[0x1f] = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puStack_40 = (undefined4 *)0x5a503a;
      (**(code **)*puVar1)();
    }
  }
  puStack_40 = (undefined4 *)0x5a5045;
  FUN_006e4890();
  if (in_ECX[0x47] != 0x24) {
    in_ECX[0x47] = 0x24;
    FUN_006e6400(&puStack_48);
    FUN_006ce9f0(1);
  }
  puStack_40 = (undefined4 *)0x5a5075;
  (**(code **)(in_ECX[0x20] + 0x28))();
  puStack_40 = (undefined4 *)0xffffffff;
  puStack_48 = (undefined4 *)0x5a507f;
  piStack_44 = in_ECX + 0x20;
  FUN_006e5050();
  puStack_40 = (undefined4 *)0x1;
  piStack_44 = (int *)0x5a5092;
  (**(code **)(in_ECX[0x54] + 0x28))();
  piStack_44 = (int *)0xffffffff;
  puStack_48 = in_ECX + 0x54;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

