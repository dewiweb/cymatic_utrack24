// rea decompile_all
// name: FUN_00451cdc
// address: 0x451cdc
// body: available
// range: 0x451cdc-0x451dbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00451cdc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *apuStack_38 [5];
  undefined4 local_24 [4];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x451ce8;
  local_14 = (undefined1 *)apuStack_38;
  FUN_0046537e(apuStack_38);
  FUN_0045658e(param_1);
  param_1[0x1f] = juce::TextEditor::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  apuStack_38[0] = (undefined4 *)0x0;
  *param_1 = DeviceName::vftable;
  param_1[0x1f] = DeviceName::vftable;
  param_1[0x20] = param_2;
  FUN_004e9394(param_1 + 0x22,&DAT_0095d718);
  param_1[0x22] = DeviceName::MyTextEditor::vftable;
  param_1[0x3e] = DeviceName::MyTextEditor::vftable;
  param_1[0x3f] = DeviceName::MyTextEditor::vftable;
  local_8._0_1_ = 2;
  apuStack_38[0] = (undefined4 *)0x451d5c;
  FUN_004e9cfe();
  apuStack_38[0] = (undefined4 *)0x451d67;
  FUN_00461619();
  apuStack_38[0] = &param_2;
  local_8._0_1_ = 3;
  FUN_00465075();
  apuStack_38[0] = local_24;
  local_8._0_1_ = 4;
  FUN_00460bc4(param_1 + 0x38,&param_2);
  apuStack_38[0] = (undefined4 *)0x451d99;
  thunk_FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,2);
  apuStack_38[0] = (undefined4 *)0x451da5;
  FUN_004615f7();
  apuStack_38[0] = (undefined4 *)0xffffffff;
  FUN_004c103f();
  apuStack_38[0] = (undefined4 *)0x451db5;
  FUN_004c2ddc();
  return param_1;
}

