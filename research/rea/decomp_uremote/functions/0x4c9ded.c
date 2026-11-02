// rea decompile_all
// name: FUN_004c9ded
// address: 0x4c9ded
// body: available
// range: 0x4c9ded-0x4c9f22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004c9ded(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0;
  local_18 = 0;
  FUN_004721d6(&DAT_0095daf8);
  local_18 = 1;
  thunk_FUN_00472232();
  local_8 = 1;
  FUN_004c902b(local_28,in_ECX + 8);
  FUN_004c9b2f(in_ECX + 0x78);
  FUN_004c99f7(local_38);
  local_14 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar1 = FUN_004c121d();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_004c1221(0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::Drawable::RTTI_Type_Descriptor,0);
      piVar3 = (int *)FUN_005cdbcf(uVar2);
      uVar2 = (**(code **)(*piVar3 + 0xb4))(local_48,param_2);
      local_8._0_1_ = 3;
      FUN_00472528(uVar2);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004722b6();
      local_14 = local_14 + 1;
      iVar1 = FUN_004c121d();
    } while (local_14 < iVar1);
  }
  uVar2 = FUN_004c9c8a(local_28,local_48,1);
  local_8._0_1_ = 4;
  FUN_004e2ddd(uVar2,in_ECX + 0x90);
  local_8._0_1_ = 2;
  FUN_004722b6();
  uVar2 = FUN_004c9c8a(local_28,local_48,0);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_004e2ddd(uVar2,in_ECX + 0xa8);
  FUN_004722b6();
  FUN_004722b6();
  FUN_004722b6();
  return param_1;
}

