// rea decompile_all
// name: FUN_10002000
// address: 0x10002000
// body: available
// range: 0x10002000-0x10002139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_10002000(void *this,ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  DWORD DVar2;
  LPOLESTR local_274;
  IID local_270;
  WCHAR local_260 [300];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x1c) == 0) {
    local_270._4_4_ = param_2;
    local_270.Data4._0_4_ = param_3;
    local_270.Data1 = param_1;
    local_270.Data4._4_4_ = param_4;
    StringFromCLSID(&local_270,&local_274);
    wsprintfW(local_260,L"\\\\.\\%s",local_274);
    pvVar1 = CreateFileW(local_260,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    *(HANDLE *)((int)this + 0x1c) = pvVar1;
    if (pvVar1 == (HANDLE)0xffffffff) {
      *(undefined4 *)((int)this + 0x1c) = 0;
      GetLastError();
    }
    else {
      DVar2 = FUN_10001240(this,&local_270.Data2);
      if (DVar2 == 0) {
        if ((char)local_270.Data2 != '\x03') {
          FUN_10001090((int)this);
        }
      }
      else {
        EnterCriticalSection(lpCriticalSection);
        if (*(HANDLE *)((int)this + 0x1c) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((int)this + 0x1c));
          *(undefined4 *)((int)this + 0x1c) = 0;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  LeaveCriticalSection(lpCriticalSection);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

