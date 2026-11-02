// rea decompile_all
// name: FUN_10003100
// address: 0x10003100
// body: available
// range: 0x10003100-0x100031d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD __thiscall
FUN_10003100(void *this,DWORD param_1,LPVOID param_2,DWORD param_3,void *param_4,size_t param_5,
            DWORD *param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_8;
  
  local_8 = 0;
  if (param_6 != (DWORD *)0x0) {
    *param_6 = 0;
  }
  _memset(param_4,0,param_5);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x4c);
  EnterCriticalSection(lpCriticalSection);
  if (*(HANDLE *)((int)this + 0x20) == (HANDLE)0xffffffff) {
    LeaveCriticalSection(lpCriticalSection);
    return 0xe0000013;
  }
  BVar1 = DeviceIoControl(*(HANDLE *)((int)this + 0x20),param_1,param_2,param_3,param_4,param_5,
                          &local_8,(LPOVERLAPPED)((int)this + 0x38));
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      BVar1 = GetOverlappedResult(*(HANDLE *)((int)this + 0x20),(LPOVERLAPPED)((int)this + 0x38),
                                  &local_8,1);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
      }
      else {
        DVar2 = 0;
      }
    }
  }
  else {
    DVar2 = 0;
  }
  if (param_6 != (DWORD *)0x0) {
    *param_6 = local_8;
  }
  LeaveCriticalSection(lpCriticalSection);
  return DVar2;
}

