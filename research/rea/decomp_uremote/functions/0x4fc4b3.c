// rea decompile_all
// name: FUN_004fc4b3
// address: 0x4fc4b3
// body: available
// range: 0x4fc4b3-0x4fc57c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fc4b3(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  *param_1 = juce::OpenGLRendering::NonShaderContext::vftable;
  local_8 = 1;
  local_14 = FUN_004fa6a6();
  (**(code **)param_1[5])(0x84c0);
  glEnable(0xde1);
  FUN_004fa480();
  uVar2 = FUN_004e22ca();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004fcf68(uVar2);
  FUN_004fd051();
  FUN_004facef();
  local_2c = local_20;
  local_34 = 0;
  local_30 = 0;
  local_28 = local_1c;
  FUN_004fe459(&local_34,param_1[9],param_1[10],0);
  glBindTexture(0xde1,0);
  pcVar1 = *(code **)(param_1[5] + 0x34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0x8d40,local_14);
  }
  thunk_FUN_004fd02d();
  FUN_004c4d7a();
  FUN_0047dc11();
  return;
}

