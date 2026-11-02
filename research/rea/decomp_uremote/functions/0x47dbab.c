// rea decompile_all
// name: FUN_0047dbab
// address: 0x47dbab
// body: available
// range: 0x47dbab-0x47dc10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047dbab(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 *unaff_ESI;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x47dbb7;
  local_2c = 0x5c;
  local_30 = 0x47dbbe;
  local_14 = FUN_005af82d();
  local_8 = 0;
  if (local_14 != 0) {
    local_18 = (undefined1 *)&local_30;
    local_30 = param_2;
    local_2c = param_3;
    FUN_004756ce(local_14,param_1);
  }
  local_2c = 0x47dbf4;
  FUN_0047cc5d();
  unaff_ESI[1] = extraout_ECX;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  *unaff_ESI = juce::LowLevelGraphicsSoftwareRenderer::vftable;
  return;
}

