// rea decompile_all
// name: FUN_004d1fa5
// address: 0x4d1fa5
// body: available
// range: 0x4d1fa5-0x4d20e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004d1fa5(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined *apuStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4d1fb1;
  apuStack_24[0] = &DAT_0095d718;
  FUN_004bfde7();
  local_8 = 0;
  param_1[0x1c] = juce::ComponentListener::vftable;
  param_1[0x1d] = juce::ScrollBar::Listener::vftable;
  *param_1 = juce::Viewport::vftable;
  param_1[0x1c] = juce::Viewport::vftable;
  param_1[0x1d] = juce::Viewport::vftable;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x10;
  param_1[0x25] = 0x10;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x99) = 1;
  *(undefined1 *)((int)param_1 + 0x9a) = 1;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  apuStack_24[0] = (undefined *)0x4d2041;
  FUN_004bfd7b();
  apuStack_24[0] = (undefined *)0x1;
  local_8._0_1_ = 4;
  FUN_004d0f3c(param_1 + 0x44);
  apuStack_24[0] = (undefined *)0x0;
  local_8._0_1_ = 5;
  FUN_004d0f3c(param_1 + 0x84);
  apuStack_24[0] = (undefined *)0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_004c103f();
  apuStack_24[0] = (undefined *)0x0;
  FUN_004c0e0e();
  apuStack_24[0] = (undefined *)0x4d2080;
  piVar1 = (int *)thunk_FUN_004c1d58();
  ppuVar3 = apuStack_24;
  apuStack_24[0] = (undefined *)0x4d2087;
  uVar2 = (**(code **)(*piVar1 + 0x18))();
  param_1[0x23] = uVar2;
  ppuVar3[-1] = (undefined *)(param_1 + 0x44);
  ppuVar3[-2] = (undefined *)0x4d209c;
  FUN_004c0fb8();
  ppuVar3[-1] = (undefined *)(param_1 + 0x84);
  ppuVar3[-2] = (undefined *)0x4d20ab;
  FUN_004c0fb8();
  ppuVar3[-1] = (undefined *)0x4d20bb;
  FUN_004d13c5();
  ppuVar3[-1] = (undefined *)0x4d20c8;
  FUN_004d13c5();
  ppuVar3[-1] = (undefined *)0x0;
  ppuVar3[-2] = (undefined *)0x4d20d2;
  FUN_004c0e0e();
  ppuVar3[-1] = (undefined *)0x4d20d9;
  FUN_004c2ddc();
  ppuVar3[-1] = (undefined *)0x4d20e0;
  return param_1;
}

