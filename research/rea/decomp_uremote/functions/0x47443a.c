// rea decompile_all
// name: FUN_0047443a
// address: 0x47443a
// body: available
// range: 0x47443a-0x4744b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0047443a(undefined4 *param_1)

{
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x474446;
  FUN_0046537e(local_14);
  FUN_004676e9(local_14);
  local_8 = 0;
  FUN_004652d6();
  FUN_00473961(param_1 + 0xf);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00474272(param_1 + 0x10);
  *param_1 = juce::Timer::TimerThread::vftable;
  param_1[0xf] = juce::Timer::TimerThread::vftable;
  param_1[0x10] = juce::Timer::TimerThread::vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_0047433f();
  return param_1;
}

