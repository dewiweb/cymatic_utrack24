// rea decompile_all
// name: FUN_004a40a4
// address: 0x4a40a4
// body: available
// range: 0x4a40a4-0x4a4117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004a40a4(undefined4 *param_1)

{
  HDC pHVar1;
  undefined4 *puVar2;
  undefined4 uStackY_28;
  
  FUN_0049f74a();
  uStackY_28 = 0x4a40c4;
  uStackY_28 = FUN_0049f744();
  FUN_0049dff4();
  *param_1 = juce::WindowsTypeface::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar2 = &uStackY_28;
  uStackY_28 = 0x4a40e2;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  param_1[0x20] = 0xffffffff;
  param_1[0x1e] = 0x3f800000;
  param_1[0xd] = pHVar1;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar2[-1] = 0x4a410e;
  FUN_004a44e5();
  puVar2[-1] = 0x4a4115;
  return param_1;
}

