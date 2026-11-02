// rea decompile_all
// name: FUN_005003c1
// address: 0x5003c1
// body: available
// range: 0x5003c1-0x50040d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_005003c1(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int unaff_EBX;
  int unaff_EDI;
  
  *param_1 = juce::OpenGLFrameBufferImage::
             DataReleaser<juce::OpenGLFrameBufferImage::Dummy,juce::OpenGLFrameBufferImage::Writer>
             ::vftable;
  pvVar1 = _malloc(unaff_EBX * unaff_EDI * 4);
  param_1[1] = pvVar1;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = unaff_EBX;
  param_1[6] = unaff_EDI;
  return param_1;
}

