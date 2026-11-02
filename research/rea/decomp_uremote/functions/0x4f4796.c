// rea decompile_all
// name: FUN_004f4796
// address: 0x4f4796
// body: available
// range: 0x4f4796-0x4f482f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004f4796(int *param_1,int *param_2,HIMC param_3,uint param_4)

{
  int iVar1;
  size_t _Size;
  void *lpBuf;
  int iVar2;
  
  iVar2 = 0;
  if (((param_4 & 0x10) != 0) &&
     (_Size = ImmGetCompositionStringW(param_3,0x10,(LPVOID)0x0,0), 0 < (int)_Size)) {
    lpBuf = _malloc(_Size);
    ImmGetCompositionStringW(param_3,0x10,lpBuf,_Size);
    iVar1 = iVar2;
    if (0 < (int)_Size) {
      do {
        iVar1 = iVar2;
        if ((*(char *)((int)lpBuf + iVar2) == '\x01') || (*(char *)((int)lpBuf + iVar2) == '\x03'))
        break;
        iVar2 = iVar2 + 1;
        iVar1 = iVar2;
      } while (iVar2 < (int)_Size);
    }
    for (; (iVar1 < (int)_Size &&
           ((*(char *)((int)lpBuf + iVar1) == '\x01' || (*(char *)((int)lpBuf + iVar1) == '\x03'))))
        ; iVar1 = iVar1 + 1) {
    }
    _free(lpBuf);
  }
  iVar1 = *param_1;
  FUN_00439b5a(iVar2);
  *param_2 = iVar1 + iVar2;
  iVar2 = FUN_00439b5a(iVar1 + iVar2);
  param_2[1] = iVar2;
  return param_2;
}

