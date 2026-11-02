// rea decompile_all
// name: FUN_004aa6c0
// address: 0x4aa6c0
// body: available
// range: 0x4aa6c0-0x4aa77c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004aa6c0(undefined4 *param_1,HIMC param_2,DWORD param_3)

{
  uint uVar1;
  uint dwBufLen;
  void *lpBuf;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703ba8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dwBufLen = ImmGetCompositionStringW(param_2,param_3,(LPVOID)0x0,0);
  if (0 < (int)dwBufLen) {
    uVar2 = 0;
    local_8 = 0;
    FID_conflict__free((void *)0x0);
    lpBuf = (void *)FUN_004c5556((dwBufLen >> 1) + 1,2,uVar2,uVar1);
    ImmGetCompositionStringW(param_2,param_3,lpBuf,dwBufLen);
    FUN_0045cae0(lpBuf);
    FID_conflict__free(lpBuf);
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = &DAT_00bfe12c;
  ExceptionList = local_10;
  return param_1;
}

