// rea decompile_all
// name: FUN_004a489f
// address: 0x4a489f
// body: available
// range: 0x4a489f-0x4a48ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a489f(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = juce::WindowsTypeface::vftable;
  SelectObject((HDC)in_ECX[0xd],(HGDIOBJ)in_ECX[0xc]);
  DeleteDC((HDC)in_ECX[0xd]);
  if ((HGDIOBJ)in_ECX[0xb] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)in_ECX[0xb]);
  }
  if ((HANDLE)in_ECX[0x1d] != (HANDLE)0x0) {
    RemoveFontMemResourceEx((HANDLE)in_ECX[0x1d]);
  }
  _free((void *)in_ECX[0x22]);
  FUN_0049e04d();
  if ((param_1 & 1) != 0) {
    FUN_005af7b6();
  }
  return;
}

