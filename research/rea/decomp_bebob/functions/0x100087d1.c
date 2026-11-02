// rea decompile_all
// name: COleException::GetErrorMessage
// address: 0x100087d1
// body: available
// range: 0x100087d1-0x1000882f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleException::GetErrorMessage(wchar_t *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
COleException::GetErrorMessage(COleException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  DWORD DVar1;
  errno_t eVar2;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  DVar1 = FormatMessageW(0x1100,(LPCVOID)0x0,*(DWORD *)(this + 8),0x800,(LPWSTR)&param_3,0,
                         (va_list *)0x0);
  if (DVar1 != 0) {
    eVar2 = _wcsncpy_s(param_1,param_2,(wchar_t *)param_3,0xffffffff);
    FUN_10004c40(eVar2);
    LocalFree(param_3);
  }
  else {
    *param_1 = L'\0';
  }
  return (uint)(DVar1 != 0);
}

