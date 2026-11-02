// rea decompile_all
// name: FUN_00612a20
// address: 0x612a20
// body: available
// range: 0x612a20-0x612adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612a20(void)

{
  int iVar1;
  DWORD dwMessageId;
  int *_Memory;
  int in_ECX;
  DWORD dwLanguageId;
  WCHAR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  WCHAR local_208 [256];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  _memset(local_208,0,0x200);
  lpBuffer = local_208;
  Arguments = (va_list *)0x0;
  nSize = 0xff;
  dwLanguageId = 0x400;
  dwMessageId = GetLastError();
  FormatMessageW(0x1200,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  FUN_0045cae0(local_208);
  FUN_006240d0();
  _Memory = (int *)(in_ECX + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

