// rea decompile_all
// name: FUN_004a8720
// address: 0x4a8720
// body: available
// range: 0x4a8720-0x4a8762 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_004a8720(int param_1)

{
  undefined1 *puVar1;
  
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x10c),4,0x100,FUN_0041f3a2);
  puVar1 = &stack0xffffffdc;
  FUN_004c4d7a();
  *(int *)(puVar1 + -4) = param_1;
  *(undefined4 *)(puVar1 + -8) = 0x4a8758;
  FUN_005af7b6();
  *(undefined4 *)(puVar1 + -4) = 0x4a8760;
  return param_1;
}

