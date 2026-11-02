// rea decompile_all
// name: FUN_00468fd6
// address: 0x468fd6
// body: available
// range: 0x468fd6-0x469037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_00468fd6(void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  uint _Size;
  
  uVar1 = unaff_ESI[1];
  _Size = uVar1;
  if (param_2 < uVar1) {
    _Size = param_2;
  }
  if (_Size == 0) {
    return 0;
  }
  unaff_ESI[1] = uVar1 - _Size;
  if (*(int *)(unaff_ESI[7] + 0x18) == 1) {
    iVar2 = FUN_0046807d(_Size);
  }
  else {
    if (*(int *)(unaff_ESI[7] + 0x18) != 2) goto LAB_00469020;
    iVar2 = FUN_00468297(unaff_ESI[0xc],_Size);
  }
  unaff_ESI[0xc] = iVar2;
LAB_00469020:
  _memcpy(param_1,(void *)*unaff_ESI,_Size);
  *unaff_ESI = *unaff_ESI + _Size;
  unaff_ESI[2] = unaff_ESI[2] + _Size;
  return _Size;
}

