// rea decompile_all
// name: FUN_005001ac
// address: 0x5001ac
// body: available
// range: 0x5001ac-0x50027d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_005001ac(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  undefined4 *local_14;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (*(int *)(in_ECX + 8) < param_1 + iVar1) {
    iVar1 = FUN_004f8197();
  }
  while( true ) {
    param_1 = param_1 + -1;
    if (param_1 < 0) break;
    local_14 = (undefined4 *)FUN_005af82d(0x1c);
    if (local_14 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      *local_14 = juce::ReferenceCountedObject::vftable;
      local_14[1] = 0;
      *local_14 = juce::RenderingHelpers::CachedGlyphEdgeTable<juce::OpenGLRendering::SavedState>::
                  vftable;
      FUN_0049f4b3();
      local_14[3] = 0;
      local_14[4] = 0;
      local_14[5] = 0;
    }
    if (*(int *)(in_ECX + 8) < *(int *)(in_ECX + 0xc) + 1) {
      FUN_004f8197();
    }
    iVar1 = *(int *)(in_ECX + 0xc);
    *(int *)(in_ECX + 0xc) = iVar1 + 1;
    *(undefined4 **)(*(int *)(in_ECX + 4) + iVar1 * 4) = local_14;
    if (local_14 != (undefined4 *)0x0) {
      piVar2 = local_14 + 1;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return iVar1;
}

