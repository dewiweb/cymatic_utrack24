// rea decompile_all
// name: FUN_006d2c10
// address: 0x6d2c10
// body: available
// range: 0x6d2c10-0x6d2dfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d2c10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_ECX;
  int iVar5;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00727022;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  FUN_006e3660(&local_14);
  *in_ECX = juce::HyperlinkButton::vftable;
  in_ECX[0x1c] = juce::HyperlinkButton::vftable;
  in_ECX[0x38] = &DAT_00bfe12c;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  local_8._0_1_ = 3;
  puVar2 = operator_new(0x28);
  local_8._0_1_ = 4;
  *puVar2 = juce::ReferenceCountedObject::vftable;
  puVar2[1] = 0;
  *puVar2 = juce::Font::SharedFontInternal::vftable;
  puVar2[2] = 0;
  piVar3 = (int *)FUN_00643f40(uVar1);
  iVar5 = *piVar3;
  puVar2[3] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  FUN_0045c990("Regular");
  puVar2[5] = 0x41600000;
  puVar2[6] = 0x3f800000;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 1;
  in_ECX[0x44] = puVar2;
  LOCK();
  puVar2[1] = puVar2[1] + 1;
  UNLOCK();
  local_8._0_1_ = 5;
  *(undefined1 *)(in_ECX + 0x45) = 1;
  in_ECX[0x46] = 0x24;
  piVar3 = (int *)FUN_00491210();
  local_8 = CONCAT31(local_8._1_3_,6);
  if ((int *)in_ECX[0xe] == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)in_ECX[0xe];
  }
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (iVar5 != iVar4) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      piVar3[1] = piVar3[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0xe] != 0) {
      FUN_004912c0();
    }
    in_ECX[0xe] = piVar3;
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      FUN_006cec20();
    }
  }
  if (piVar3 != (int *)0x0) {
    FUN_004912c0();
  }
  ExceptionList = local_10;
  return;
}

