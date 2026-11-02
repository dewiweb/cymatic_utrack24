// rea decompile_all
// name: FUN_0047180a
// address: 0x47180a
// body: available
// range: 0x47180a-0x471875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047180a(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  
  puVar1 = (undefined4 *)FUN_005af82d(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00471632(puVar1);
    *puVar1 = juce::SimpleValueSource::vftable;
    puVar1[2] = juce::SimpleValueSource::vftable;
    FUN_00461605();
  }
  *unaff_EBX = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    puVar1[1] = puVar1[1] + 1;
    UNLOCK();
  }
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  return;
}

