// rea decompile_all
// name: FUN_0044a59c
// address: 0x44a59c
// body: available
// range: 0x44a59c-0x44a5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0044a59c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  *param_1 = RemoteDisplay::MyView::vftable;
  local_8 = 1;
  auStack_24[0] = 0x44a5bd;
  FUN_004c11fc();
  puVar1 = auStack_24;
  auStack_24[0] = 0x44a5c5;
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  puVar1[-1] = 0x44a5d0;
  FUN_004bfe57();
  puVar1[-1] = 0x44a5d5;
  return;
}

