// rea decompile_all
// name: FUN_004110cd
// address: 0x4110cd
// body: available
// range: 0x4110cd-0x41112e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004110cd(void *param_1,uint param_2)

{
  uint _Size;
  uint unaff_EBX;
  int *unaff_ESI;
  undefined4 local_8;
  
  local_8 = 0;
  if ((uint)unaff_ESI[1] <= unaff_EBX) {
    return 0x55;
  }
  if ((code *)unaff_ESI[5] == (code *)0x0) {
    _Size = unaff_ESI[1] - unaff_EBX;
    if (param_2 < _Size) {
      _Size = param_2;
    }
    _memcpy(param_1,(void *)(*unaff_ESI + unaff_EBX),_Size);
  }
  else {
    _Size = (*(code *)unaff_ESI[5])();
  }
  unaff_ESI[2] = _Size + unaff_EBX;
  if (_Size < param_2) {
    local_8 = 0x55;
  }
  return local_8;
}

