// rea decompile_all
// name: FUN_004c93f6
// address: 0x4c93f6
// body: available
// range: 0x4c93f6-0x4c94ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004c93f6(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *extraout_EDX;
  undefined8 uVar5;
  undefined1 local_68 [40];
  undefined1 local_40 [32];
  undefined1 local_20 [20];
  int local_c;
  uint local_8;
  
  local_8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = FUN_004c121d();
  while (local_c = local_c + -1, -1 < local_c) {
    uVar2 = FUN_004c1221(0,&juce::Component::RTTI_Type_Descriptor,
                         &juce::Drawable::RTTI_Type_Descriptor,0);
    iVar3 = FUN_005cdbcf(uVar2);
    if (iVar3 != 0) {
      cVar1 = FUN_004c0d86();
      if (cVar1 == '\0') {
        local_8 = local_8 | 4;
        (**(code **)(*extraout_EDX + 0xb8))(local_40);
      }
      else {
        local_8 = local_8 | 3;
        uVar5 = FUN_004c0d8f(local_68);
        uVar2 = (undefined4)uVar5;
        (**(code **)(*(int *)((ulonglong)uVar5 >> 0x20) + 0xb8))(local_20,uVar2);
        FUN_004a5079(uVar2);
      }
      puVar4 = (undefined4 *)FUN_004a4fa2();
      *param_1 = *puVar4;
      param_1[1] = puVar4[1];
      param_1[2] = puVar4[2];
      param_1[3] = puVar4[3];
      if ((local_8 & 4) != 0) {
        local_8 = local_8 & 0xfffffffb;
      }
      if ((local_8 & 2) != 0) {
        local_8 = local_8 & 0xfffffffd;
      }
      if ((local_8 & 1) != 0) {
        local_8 = local_8 & 0xfffffffe;
      }
    }
  }
  return param_1;
}

