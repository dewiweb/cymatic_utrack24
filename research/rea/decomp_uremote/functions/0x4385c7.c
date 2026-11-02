// rea decompile_all
// name: FUN_004385c7
// address: 0x4385c7
// body: available
// range: 0x4385c7-0x438649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004385c7(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0095d658;
  if (DAT_0095d658 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005af82d(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = juce::ReferenceCountedObject::vftable;
      puVar1[1] = 0;
      *puVar1 = _anon_8DC14C2D::FreeTypeLibrary::vftable;
      FUN_00412ec1();
    }
    DAT_0095d658 = puVar1;
    *param_1 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      puVar1[1] = puVar1[1] + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = DAT_0095d658;
    LOCK();
    puVar1[1] = puVar1[1] + 1;
    UNLOCK();
  }
  return param_1;
}

