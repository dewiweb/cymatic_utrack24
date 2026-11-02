// rea decompile_all
// name: FUN_004ff2f1
// address: 0x4ff2f1
// body: available
// range: 0x4ff2f1-0x4ff379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ff2f1(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *in_ECX;
  
  puVar4 = (undefined4 *)FUN_005af82d(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar1 = in_ECX[5];
    iVar2 = in_ECX[4];
    *puVar4 = juce::OpenGLFrameBufferImage::
              DataReleaser<juce::OpenGLFrameBufferImage::Reader,juce::OpenGLFrameBufferImage::Dummy>
              ::vftable;
    pvVar5 = _malloc(iVar2 * iVar1 * 4);
    puVar4[1] = pvVar5;
  }
  puVar3 = (undefined4 *)in_ECX[6];
  if ((puVar3 != puVar4) && (in_ECX[6] = puVar4, puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  *in_ECX = puVar4[1];
  in_ECX[2] = in_ECX[4] * in_ECX[3] + 3 & 0xfffffffc;
  FUN_004fc893(param_3);
  return;
}

