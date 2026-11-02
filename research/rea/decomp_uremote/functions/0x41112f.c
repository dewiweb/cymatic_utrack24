// rea decompile_all
// name: FUN_0041112f
// address: 0x41112f
// body: available
// range: 0x41112f-0x41117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_0041112f(void *param_1,uint param_2)

{
  uint uVar1;
  int *unaff_ESI;
  uint _Size;
  
  uVar1 = unaff_ESI[2];
  _Size = 0;
  if (uVar1 < (uint)unaff_ESI[1]) {
    if ((code *)unaff_ESI[5] == (code *)0x0) {
      _Size = unaff_ESI[1] - uVar1;
      if (param_2 < _Size) {
        _Size = param_2;
      }
      _memcpy(param_1,(void *)(*unaff_ESI + uVar1),_Size);
    }
    else {
      _Size = (*(code *)unaff_ESI[5])();
    }
    unaff_ESI[2] = unaff_ESI[2] + _Size;
  }
  return _Size;
}

