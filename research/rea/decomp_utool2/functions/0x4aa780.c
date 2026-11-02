// rea decompile_all
// name: FUN_004aa780
// address: 0x4aa780
// body: available
// range: 0x4aa780-0x4aa828 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa780(int *param_1,HIMC param_2,uint param_3)

{
  DWORD dwBufLen;
  void *lpBuf;
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (((param_3 & 0x10) != 0) &&
     (dwBufLen = ImmGetCompositionStringW(param_2,0x10,(LPVOID)0x0,0), 0 < (int)dwBufLen)) {
    lpBuf = (void *)FUN_004c554b(dwBufLen);
    ImmGetCompositionStringW(param_2,0x10,lpBuf,dwBufLen);
    iVar2 = iVar3;
    if (0 < (int)dwBufLen) {
      do {
        iVar2 = iVar3;
        if ((*(char *)((int)lpBuf + iVar3) == '\x01') || (*(char *)((int)lpBuf + iVar3) == '\x03'))
        break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar3;
      } while (iVar3 < (int)dwBufLen);
    }
    for (; (iVar2 < (int)dwBufLen &&
           ((*(char *)((int)lpBuf + iVar2) == '\x01' || (*(char *)((int)lpBuf + iVar2) == '\x03'))))
        ; iVar2 = iVar2 + 1) {
    }
    FID_conflict__free(lpBuf);
  }
  iVar1 = iVar3;
  if (iVar3 < iVar2) {
    iVar1 = iVar2;
  }
  iVar1 = iVar1 + *in_ECX;
  iVar3 = *in_ECX + iVar3;
  *param_1 = iVar3;
  if (iVar3 < iVar1) {
    iVar3 = iVar1;
  }
  param_1[1] = iVar3;
  return;
}

