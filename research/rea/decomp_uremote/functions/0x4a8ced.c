// rea decompile_all
// name: FUN_004a8ced
// address: 0x4a8ced
// body: available
// range: 0x4a8ced-0x4a8d40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8ced(void)

{
  void *pvVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *unaff_EDI;
  
  if (((int)unaff_EDI[1] < in_ECX) &&
     (uVar2 = in_ECX / 2 + 8 + in_ECX & 0xfffffff8, unaff_EDI[1] != uVar2)) {
    if ((int)uVar2 < 1) {
      _free((void *)*unaff_EDI);
      *unaff_EDI = 0;
    }
    else {
      if ((void *)*unaff_EDI == (void *)0x0) {
        pvVar1 = _malloc(uVar2 * 0xc);
      }
      else {
        pvVar1 = _realloc((void *)*unaff_EDI,uVar2 * 0xc);
      }
      *unaff_EDI = pvVar1;
    }
    unaff_EDI[1] = uVar2;
  }
  return;
}

