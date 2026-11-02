// rea decompile_all
// name: FUN_004be0db
// address: 0x4be0db
// body: available
// range: 0x4be0db-0x4be17a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be0db(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  uint uVar3;
  int in_EDX;
  byte *_Dst;
  int local_8;
  
  iVar1 = *(int *)(*in_EAX + 0xc);
  _Dst = (byte *)(iVar1 * in_EDX + in_EAX[5]);
  if (in_EAX[2] < 0xfe) {
    do {
      uVar3 = (in_EAX[2] + 1) * 0xff;
      *_Dst = (char)((0x100 - (uVar3 >> 8)) * (uint)*_Dst >> 8) + (char)(uVar3 >> 8);
      _Dst = _Dst + iVar1;
      param_1 = param_1 + -1;
    } while (0 < param_1);
  }
  else {
    local_8 = param_1;
    iVar2 = *(int *)(in_EAX[1] + 0xc);
    if (((iVar1 == iVar2) && (*(int *)(in_EAX[1] + 4) == 1)) && (*(int *)(*in_EAX + 4) == 1)) {
      _memcpy(_Dst,(void *)(iVar2 * (in_EDX - in_EAX[3]) + in_EAX[6]),iVar2 * param_1);
    }
    else {
      do {
        *_Dst = 0xff;
        _Dst = _Dst + iVar1;
        local_8 = local_8 + -1;
      } while (0 < local_8);
    }
  }
  return;
}

