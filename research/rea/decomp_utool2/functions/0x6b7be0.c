// rea decompile_all
// name: FUN_006b7be0
// address: 0x6b7be0
// body: available
// range: 0x6b7be0-0x6b7d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724261;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0068bdb0(param_1,param_5,1);
  puVar1 = in_ECX + 0x38;
  *puVar1 = juce::Button::Listener::vftable;
  in_ECX[0x39] = juce::FileBrowserListener::vftable;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *in_ECX = juce::FileChooserDialogBox::vftable;
  *puVar1 = juce::FileChooserDialogBox::vftable;
  in_ECX[0x39] = juce::FileChooserDialogBox::vftable;
  *(undefined1 *)(in_ECX + 0x3b) = param_4;
  operator_new(0x330);
  local_8._0_1_ = 3;
  uVar2 = FUN_004932a0(param_1,param_2,param_3);
  local_8._0_1_ = 2;
  in_ECX[0x3a] = uVar2;
  FUN_0068bad0(uVar2,1,0);
  FUN_006d4090(1,1);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (in_ECX[0x36] == 0) {
    FUN_0068b640(in_ECX + 0x2a);
  }
  in_ECX[0x2c] = 300;
  in_ECX[0x2e] = 300;
  in_ECX[0x2d] = 0x4b0;
  in_ECX[0x2f] = 1000;
  if (in_ECX[0x36] == 0) {
    FUN_006e9790(in_ECX[4],in_ECX[5],in_ECX[6],in_ECX[7]);
  }
  else {
    FUN_006d14d0(in_ECX,in_ECX + 4,0,0,0,0);
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_004097d0(puVar1);
      }
    }
  }
  if (in_ECX + 0x39 != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x39);
  }
  FUN_006b79a0();
  ExceptionList = local_10;
  return;
}

