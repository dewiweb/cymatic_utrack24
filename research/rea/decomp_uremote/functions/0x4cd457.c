// rea decompile_all
// name: FUN_004cd457
// address: 0x4cd457
// body: available
// range: 0x4cd457-0x4cd4d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4cd4d1 to 0x4e3599 FUN_004e3599 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cd457(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  cVar1 = FUN_004e382e();
  if (((cVar1 == '\0') && (cVar1 = thunk_FUN_0046402e(), cVar1 == '\0')) &&
     (cVar1 = thunk_FUN_0046402e(), cVar1 == '\0')) {
    FUN_004c2032();
    FUN_004cd55e(unaff_ESI,0);
    return;
  }
  iVar2 = FUN_005af82d(0x30);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_004e347b();
    *puVar3 = juce::Drawable::Positioner<juce::DrawableText>::vftable;
    puVar3[2] = juce::Drawable::Positioner<juce::DrawableText>::vftable;
    puVar3[3] = juce::Drawable::Positioner<juce::DrawableText>::vftable;
    puVar3[0xb] = unaff_ESI;
  }
  FUN_004c2032();
  FUN_004e3599();
  return;
}

