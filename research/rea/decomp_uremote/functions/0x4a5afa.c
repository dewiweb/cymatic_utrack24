// rea decompile_all
// name: FUN_004a5afa
// address: 0x4a5afa
// body: available
// range: 0x4a5afa-0x4a5b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a5afa(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4a5b06;
  local_28 = (undefined4 *)0x14;
  local_2c = 0x4a5b0d;
  puVar1 = (undefined4 *)FUN_005af82d();
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    local_28 = puVar1 + 2;
    local_8 = 1;
    *puVar1 = juce::RenderingHelpers::
              ClipRegions<juce::RenderingHelpers::SoftwareRendererSavedState>::RectangleListRegion::
              vftable;
    local_2c = 0x4a5b32;
    local_14 = puVar1;
    FUN_004a70e8();
  }
  *unaff_EDI = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] + 1;
  }
  local_14 = &local_2c;
  local_2c = param_1;
  local_28 = (undefined4 *)param_2;
  FUN_00474f39();
  local_28 = (undefined4 *)0x4a5b61;
  FUN_00476c45();
  unaff_EDI[0x14] = 0x3f800000;
  unaff_EDI[0x13] = 1;
  return;
}

