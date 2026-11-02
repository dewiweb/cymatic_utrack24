// rea decompile_all
// name: FUN_0052a550
// address: 0x52a550
// body: available
// range: 0x52a550-0x52a802 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a550(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined4 *puStack_4c;
  int *piStack_48;
  undefined1 **ppuStack_44;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c304;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  *in_ECX = ProjectInspector::vftable;
  in_ECX[0x1c] = ProjectInspector::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  ppuStack_44 = (undefined1 **)0x52a5f8;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x25] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_14 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,5);
  ppuStack_44 = &local_14;
  piStack_48 = (int *)0x52a633;
  FUN_006e8b40();
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_44 = (undefined1 **)0x52a65a;
      FID_conflict__free(piVar4);
    }
  }
  local_8._0_1_ = 8;
  FUN_00535850();
  in_ECX[0x13d] = 0;
  in_ECX[0x13e] = 0;
  in_ECX[0x13f] = 0;
  in_ECX[0x140] = 0;
  in_ECX[0x141] = 0;
  in_ECX[0x142] = 0;
  in_ECX[0x143] = 0;
  in_ECX[0x144] = 0;
  in_ECX[0x145] = 0;
  local_8._0_1_ = 0xc;
  in_ECX[0x13c] = 0;
  ppuStack_44 = (undefined1 **)0x52a6e9;
  puVar3 = operator_new(0x28);
  local_8._0_1_ = 0xd;
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
  ppuStack_44 = (undefined1 **)0x52a734;
  FUN_0045c990();
  puVar3[5] = 0x41a00000;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  puVar1 = (undefined4 *)in_ECX[0x25];
  in_ECX[0x25] = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ppuStack_44 = (undefined1 **)0x52a78a;
      (**(code **)*puVar1)();
    }
  }
  ppuStack_44 = (undefined1 **)0x52a798;
  FUN_006e4890();
  if (in_ECX[0x4d] != 0x24) {
    in_ECX[0x4d] = 0x24;
    FUN_006e6400(&puStack_4c);
    FUN_006ce9f0(1);
  }
  ppuStack_44 = (undefined1 **)0x52a7c8;
  (**(code **)(in_ECX[0x26] + 0x28))();
  ppuStack_44 = (undefined1 **)0xffffffff;
  puStack_4c = (undefined4 *)0x52a7d2;
  piStack_48 = in_ECX + 0x26;
  FUN_006e5050();
  ppuStack_44 = (undefined1 **)0x1;
  piStack_48 = (int *)0x52a7e5;
  (**(code **)(in_ECX[0x5a] + 0x28))();
  piStack_48 = (int *)0xffffffff;
  puStack_4c = in_ECX + 0x5a;
  FUN_006e5050();
  ExceptionList = local_10;
  return;
}

