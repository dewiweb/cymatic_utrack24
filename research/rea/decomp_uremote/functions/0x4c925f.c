// rea decompile_all
// name: FUN_004c925f
// address: 0x4c925f
// body: available
// range: 0x4c925f-0x4c9327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004c925f(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4c926b;
  FUN_004c8b7d(param_1);
  puVar6 = auStack_20;
  local_8 = 0;
  *param_1 = juce::DrawableComposite::vftable;
  FUN_004c9328();
  local_8._0_1_ = 1;
  FUN_004e28f7(param_1 + 0x24,param_2 + 0x90);
  local_8._0_1_ = 2;
  FUN_004e28f7(param_1 + 0x2a,param_2 + 0xa8);
  param_2 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined1 *)(param_1 + 0x30) = 0;
  iVar2 = FUN_004c121d();
  if (0 < iVar2) {
    do {
      *(undefined4 *)(puVar6 + -4) = 0;
      *(TypeDescriptor **)(puVar6 + -8) = &juce::Drawable::RTTI_Type_Descriptor;
      *(TypeDescriptor **)(puVar6 + -0xc) = &juce::Component::RTTI_Type_Descriptor;
      *(undefined4 *)(puVar6 + -0x10) = 0;
      *(undefined4 *)(puVar6 + -0x14) = 0x4c92ef;
      uVar3 = FUN_004c1221();
      *(undefined4 *)(puVar6 + -0x14) = uVar3;
      *(undefined4 *)(puVar6 + -0x18) = 0x4c92f5;
      piVar4 = (int *)FUN_005cdbcf();
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        *(undefined4 *)(puVar6 + -4) = 0xffffffff;
        pcVar1 = *(code **)(iVar2 + 0xb0);
        puVar5 = puVar6 + -8;
        *(undefined4 *)(puVar6 + -8) = 0x4c9308;
        (*pcVar1)();
        *(undefined4 *)(puVar5 + -4) = 0x4c930f;
        FUN_004c1064();
        puVar6 = puVar5 + 4;
      }
      param_2 = param_2 + 1;
      *(undefined4 *)(puVar6 + -4) = 0x4c9319;
      iVar2 = FUN_004c121d();
    } while (param_2 < iVar2);
  }
  *(undefined4 *)(puVar6 + -4) = 0x4c9325;
  return param_1;
}

