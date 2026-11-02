// rea decompile_all
// name: FUN_00437a9f
// address: 0x437a9f
// body: available
// range: 0x437a9f-0x437aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00437a9f(void)

{
  int *piVar1;
  size_t _Size;
  int *unaff_EBX;
  
  piVar1 = (int *)*unaff_EBX;
  if ((code *)piVar1[5] == (code *)0x0) {
    _Size = piVar1[1] - piVar1[2];
    if (0x1000 < _Size) {
      _Size = 0x1000;
    }
    if (_Size != 0) {
      _memcpy(unaff_EBX + 0x12,(void *)(*piVar1 + piVar1[2]),_Size);
      goto LAB_00437af1;
    }
  }
  else {
    _Size = (*(code *)piVar1[5])(piVar1,piVar1[2],unaff_EBX + 0x12,0x1000);
    if (_Size != 0) {
LAB_00437af1:
      piVar1[2] = piVar1[2] + _Size;
      unaff_EBX[3] = (int)(unaff_EBX + 0x12);
      unaff_EBX[4] = _Size;
      return 0;
    }
  }
  return 0x55;
}

