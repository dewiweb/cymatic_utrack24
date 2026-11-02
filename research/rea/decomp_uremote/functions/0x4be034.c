// rea decompile_all
// name: FUN_004be034
// address: 0x4be034
// body: available
// range: 0x4be034-0x4be0da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be034(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  byte *_Dst;
  int iVar2;
  uint uVar3;
  int *in_EDX;
  int iVar4;
  
  iVar1 = *in_EDX;
  iVar4 = *(int *)(iVar1 + 0xc);
  _Dst = (byte *)(iVar4 * in_EAX + in_EDX[5]);
  iVar2 = in_EDX[2] * param_2 >> 8;
  if (iVar2 < 0xfe) {
    uVar3 = (iVar2 + 1) * 0xff;
    do {
      *_Dst = (char)((uint)*_Dst * (0x100 - (uVar3 >> 8)) >> 8) + (char)(uVar3 >> 8);
      _Dst = _Dst + iVar4;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  else {
    param_2 = param_1;
    iVar2 = *(int *)(in_EDX[1] + 0xc);
    if (iVar4 == iVar2) {
      if ((*(int *)(in_EDX[1] + 4) == 1) && (*(int *)(iVar1 + 4) == 1)) {
        _memcpy(_Dst,(void *)(iVar2 * (in_EAX - in_EDX[3]) + in_EDX[6]),iVar2 * param_1);
        return;
      }
      iVar4 = *(int *)(iVar1 + 0xc);
    }
    do {
      *_Dst = 0xff;
      _Dst = _Dst + iVar4;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

