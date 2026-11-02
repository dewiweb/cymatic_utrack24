// rea decompile_all
// name: FUN_004783a2
// address: 0x4783a2
// body: available
// range: 0x4783a2-0x478404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004783a2(void)

{
  int *_Dst;
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int unaff_EBX;
  int *_Src;
  
  _Src = in_ECX + *in_ECX * 2 + -1;
  if (in_EAX < *_Src) {
    if (in_EAX <= in_ECX[1]) {
      *in_ECX = 0;
      return;
    }
    while (in_EAX < _Src[-2]) {
      *in_ECX = *in_ECX + -1;
      _Src = _Src + -2;
    }
    _Src[1] = 0;
    *_Src = in_EAX;
  }
  _Dst = in_ECX + 1;
  if (*_Dst < unaff_EBX) {
    for (; unaff_EBX < *_Src; _Src = _Src + -2) {
    }
    iVar1 = (int)_Src + (-4 - (int)in_ECX);
    iVar1 = (iVar1 >> 2) - (iVar1 >> 0x1f) >> 1;
    if (0 < iVar1) {
      *in_ECX = *in_ECX - iVar1;
      _memmove(_Dst,_Src,*in_ECX << 3);
    }
    *_Dst = unaff_EBX;
  }
  return;
}

