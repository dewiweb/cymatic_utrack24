// rea decompile_all
// name: FUN_004e6f92
// address: 0x4e6f92
// body: available
// range: 0x4e6f92-0x4e7088 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004e6f92(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_004bfde7(&DAT_0095d718);
  param_1[0x1c] = juce::SettableTooltipClient::vftable;
  FUN_004652cd();
  *param_1 = juce::ListBox::vftable;
  param_1[0x1c] = juce::ListBox::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0x16;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  iVar2 = FUN_005af82d(0x330);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_004e6a74(iVar2,param_1);
  }
  puVar1 = (undefined4 *)param_1[0x1f];
  if ((puVar1 != puVar3) && (param_1[0x1f] = puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_004c1064(0xffffffff);
  FUN_004c2ddc();
  FUN_004e79e1();
  return param_1;
}

