// rea decompile_all
// name: FUN_006e5a80
// address: 0x6e5a80
// body: available
// range: 0x6e5a80-0x6e5e24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e5a80(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int *piStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072881f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piStack_2c = (int *)0x6e5ab4;
  FUN_006cfeb0();
  local_8 = 0;
  in_ECX[0x1c] = (int)juce::TextInputTarget::vftable;
  in_ECX[0x1d] = (int)juce::SettableTooltipClient::vftable;
  in_ECX[0x1e] = (int)&DAT_00bfe12c;
  *in_ECX = (int)juce::TextEditor::vftable;
  in_ECX[0x1c] = (int)juce::TextEditor::vftable;
  in_ECX[0x1d] = (int)juce::TextEditor::vftable;
  in_ECX[0x1f] = 0;
  in_ECX[0x21] = 1;
  in_ECX[0x22] = 1;
  in_ECX[0x23] = 1;
  in_ECX[0x24] = 3;
  in_ECX[0x25] = 0x100;
  in_ECX[0x26] = 0x1000100;
  in_ECX[0x27] = 0x100;
  *(undefined2 *)(in_ECX + 0x28) = 0x100;
  *(undefined1 *)((int)in_ECX + 0xa2) = 0;
  uStack_30 = 0x6e5b4f;
  FUN_0063bca0();
  in_ECX[0x3c] = 0;
  local_8._0_1_ = 5;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 4;
  in_ECX[0x40] = 4;
  in_ECX[0x41] = 0;
  piStack_2c = (int *)0x6e5b9f;
  operator_new(0x28);
  piStack_2c = (int *)0x6e5bb3;
  iVar3 = FUN_00468a40();
  in_ECX[0x42] = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = (int)&DAT_00bfe12c;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = param_2;
  in_ECX[0x4b] = 0;
  *(undefined1 *)(in_ECX + 0x4c) = 0;
  local_8._0_1_ = 9;
  FUN_0063b600();
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  local_8._0_1_ = 0xc;
  bVar1 = *(byte *)(in_ECX + 0x1a);
  if ((bVar1 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar1 | 4;
    if ((bVar1 & 1) != 0) {
      iVar3 = FUN_0068db10();
      if (iVar3 != 0) {
        piStack_2c = *(int **)(iVar3 + 8);
        uStack_30 = 0x6e5ca9;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
  }
  piVar4 = (int *)FUN_00491210();
  local_8._0_1_ = 0xd;
  if ((int *)in_ECX[0xe] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)in_ECX[0xe];
  }
  if (piVar4 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  if (iVar3 != iVar5) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      piVar4[1] = piVar4[1] + 1;
      UNLOCK();
    }
    if (in_ECX[0xe] != 0) {
      FUN_004912c0();
    }
    in_ECX[0xe] = (int)piVar4;
    if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
      FUN_006cec20();
    }
  }
  local_8._0_1_ = 0xc;
  if (piVar4 != (int *)0x0) {
    FUN_004912c0();
  }
  piStack_2c = (int *)0x6e5d26;
  puVar6 = operator_new(0x328);
  local_8._0_1_ = 0xf;
  piStack_2c = (int *)0x6e5d44;
  FUN_006e4ec0();
  *puVar6 = juce::TextEditorViewport::vftable;
  puVar6[0x1c] = juce::TextEditorViewport::vftable;
  puVar6[0x1d] = juce::TextEditorViewport::vftable;
  puVar6[0xc6] = in_ECX;
  puVar6[199] = 0;
  *(undefined1 *)(puVar6 + 200) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  puVar2 = (undefined4 *)in_ECX[0x1f];
  if ((puVar2 != puVar6) && (in_ECX[0x1f] = (int)puVar6, puVar2 != (undefined4 *)0x0)) {
    piStack_2c = (int *)0x6e5d87;
    (**(code **)*puVar2)();
  }
  piVar4 = (int *)in_ECX[0x1f];
  if (piVar4 != (int *)0x0) {
    piStack_2c = (int *)0x6e5d97;
    (**(code **)(*piVar4 + 0x28))();
    uStack_30 = 0x6e5da1;
    piStack_2c = piVar4;
    FUN_006e5050();
  }
  piStack_2c = (int *)0x6e5dab;
  operator_new(0x8c);
  local_8._0_1_ = 0x10;
  piStack_2c = (int *)0x6e5dbd;
  piStack_2c = (int *)FUN_004a2160();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  in_ECX[0x20] = (int)piStack_2c;
  uStack_30 = 0x6e5dd2;
  FUN_006e4cd0();
  *(byte *)(in_ECX[0x1f] + 0x68) = *(byte *)(in_ECX[0x1f] + 0x68) & 0xdf;
  iVar3 = in_ECX[0x1f];
  *(undefined2 *)(iVar3 + 0x9c) = 0;
  if ((*(char *)(iVar3 + 0x99) != '\0') || (*(char *)(iVar3 + 0x98) != '\0')) {
    *(undefined2 *)(iVar3 + 0x98) = 0;
    FUN_006abba0();
  }
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  FUN_00696d40();
  ExceptionList = local_10;
  return;
}

