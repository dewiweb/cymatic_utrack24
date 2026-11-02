// rea decompile_all
// name: FUN_004c4c37
// address: 0x4c4c37
// body: available
// range: 0x4c4c37-0x4c4d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004c4c37(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  FUN_00473961(param_1);
  FUN_00474777();
  FUN_00474272(param_1 + 6);
  *param_1 = juce::Desktop::vftable;
  param_1[1] = juce::Desktop::vftable;
  param_1[6] = juce::Desktop::vftable;
  iVar2 = FUN_005af82d(0x2c);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c4a8e(iVar2);
  }
  param_1[8] = uVar3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
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
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0xf;
  fVar4 = (float10)FUN_004f0c38();
  param_1[0x23] = (float)fVar4;
  FUN_004cf623();
  iVar2 = FUN_005af82d(0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004c53ab(iVar2,param_1);
  }
  iVar1 = param_1[0x15];
  if ((iVar1 != iVar2) && (param_1[0x15] = iVar2, iVar1 != 0)) {
    FUN_004f7994();
    FUN_005af7b6(iVar1);
  }
  return param_1;
}

