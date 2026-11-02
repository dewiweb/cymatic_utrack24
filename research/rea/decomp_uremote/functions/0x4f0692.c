// rea decompile_all
// name: FUN_004f0692
// address: 0x4f0692
// body: available
// range: 0x4f0692-0x4f06f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004f0692(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar1 = (undefined4 *)auStack_20;
  *param_1 = juce::DropShadower::vftable;
  local_8 = 2;
  if (param_1[1] != 0) {
    puStack_24 = param_1;
    puVar1 = &uStack_28;
    uStack_28 = 0x4f06bb;
    FUN_004c2119();
    param_1[1] = 0;
  }
  *(undefined4 *)((int)puVar1 + -4) = 0x4f06c4;
  FUN_004f071f();
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)((int)puVar1 + -4) = 0x4f06d2;
  FUN_004f682b();
  *(undefined4 *)((int)puVar1 + -4) = 0x4f06da;
  FUN_00474d0f();
  *(undefined4 **)((int)puVar1 + -4) = param_1 + 2;
  local_8 = local_8 & 0xffffff00;
  *(undefined4 *)((int)puVar1 + -8) = 0x4f06e4;
  FUN_004432c6();
  *param_1 = juce::ComponentListener::vftable;
  *(undefined4 *)((int)puVar1 + -4) = 0x4f06ef;
  return;
}

