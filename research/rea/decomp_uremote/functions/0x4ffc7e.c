// rea decompile_all
// name: FUN_004ffc7e
// address: 0x4ffc7e
// body: available
// range: 0x4ffc7e-0x4ffd40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ffc7e(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005da179;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*unaff_EBX != 0) {
    puVar2 = (undefined4 *)FUN_005af82d();
    local_c = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      piVar1 = (int *)*unaff_EBX;
      FUN_00474f97();
      uVar3 = (**(code **)(*piVar1 + 0x2c))();
      puVar2[1] = 0;
      local_c = CONCAT31(local_c._1_3_,1);
      *puVar2 = juce::RenderingHelpers::ClipRegions<juce::OpenGLRendering::SavedState>::
                EdgeTableRegion::vftable;
      FUN_004776af(puVar2 + 2,uVar3);
    }
    local_c = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = puVar2[1] + 1;
    }
    FUN_004fea07();
  }
  ExceptionList = local_14;
  return;
}

