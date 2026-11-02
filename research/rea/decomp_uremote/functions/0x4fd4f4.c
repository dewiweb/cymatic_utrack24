// rea decompile_all
// name: FUN_004fd4f4
// address: 0x4fd4f4
// body: available
// range: 0x4fd4f4-0x4fd636 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_004fd4f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  *param_1 = juce::CachedComponentImage::vftable;
  local_8 = 0;
  FUN_0046537e(local_18);
  FUN_004676e9(local_18);
  FUN_004652d6();
  *param_1 = juce::OpenGLContext::CachedImage::vftable;
  param_1[1] = juce::OpenGLContext::CachedImage::vftable;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = param_3;
  FUN_004fa582();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  FUN_0040954d();
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_0046d4ed();
  FUN_0046d4ed();
  local_8._0_1_ = 8;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  param_1[0x2b] = 1;
  param_1[0x2c] = 0;
  iVar2 = FUN_005af82d(0x20);
  local_8._0_1_ = 9;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004fd05f(iVar2,param_1[0x12],param_4,param_5);
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  iVar1 = param_1[0x10];
  if ((iVar1 != iVar2) && (param_1[0x10] = iVar2, iVar1 != 0)) {
    FUN_005009c3(iVar1);
  }
  iVar2 = param_1[0x10];
  if (*(int *)(iVar2 + 8) == 0) {
    if (iVar2 != 0) {
      param_1[0x10] = 0;
      FUN_005009c3(iVar2);
    }
  }
  else {
    *(int *)(param_1[0x11] + 0xc0) = iVar2;
  }
  return param_1;
}

