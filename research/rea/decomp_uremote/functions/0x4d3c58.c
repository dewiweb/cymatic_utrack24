// rea decompile_all
// name: FUN_004d3c58
// address: 0x4d3c58
// body: available
// range: 0x4d3c58-0x4d3cda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004d3c58(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  float afStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4d3c64;
  afStack_24[0] = (float)*(int *)(param_1 + 0x1c) * 0.6;
  fVar2 = (float10)FUN_0043d2e1(0x41700000);
  afStack_24[0] = (float)fVar2;
  FUN_0049f51e();
  local_8 = 0;
  afStack_24[0] = *(float *)(param_1 + 0x1c);
  FUN_0049fa60(param_1 + 0x88);
  FUN_00440367(0x18);
  FUN_004c0be5();
  pfVar1 = afStack_24;
  afStack_24[0] = 7.093153e-39;
  FUN_004c4d7a();
  pfVar1[-1] = 7.09316e-39;
  return;
}

