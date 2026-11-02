// rea decompile_all
// name: __resetstkoflw
// address: 0x100fca97
// body: available
// range: 0x100fca97-0x100fcb81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2010 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  LPVOID pvVar4;
  uint dwSize;
  int iVar5;
  LPVOID lpAddress;
  undefined4 uStack_68;
  _SYSTEM_INFO local_58;
  _MEMORY_BASIC_INFORMATION local_34;
  DWORD local_18;
  PVOID local_14;
  undefined1 *local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uStack_68 = 0x100fcab4;
  local_10 = (undefined1 *)&uStack_68;
  SVar1 = VirtualQuery(&uStack_68,&local_34,0x1c);
  if (SVar1 != 0) {
    local_14 = local_34.AllocationBase;
    GetSystemInfo(&local_58);
    iVar5 = 0;
    hModule = GetModuleHandleW(L"kernel32.dll");
    if ((hModule != (HMODULE)0x0) &&
       (pFVar2 = GetProcAddress(hModule,"SetThreadStackGuarantee"), pFVar2 != (FARPROC)0x0)) {
      local_c = 0;
      iVar3 = (*pFVar2)(&local_c);
      if ((iVar3 != 0) && (local_c != 0)) {
        iVar5 = local_c;
      }
    }
    dwSize = iVar5 + -1 + local_58.dwPageSize & ~(local_58.dwPageSize - 1);
    if (dwSize != 0) {
      dwSize = dwSize + local_58.dwPageSize;
    }
    if (dwSize < local_58.dwPageSize * 2) {
      dwSize = local_58.dwPageSize * 2;
    }
    lpAddress = (LPVOID)((~(local_58.dwPageSize - 1) & (uint)local_10) - dwSize);
    if (((LPVOID)(local_58.dwPageSize + (int)local_14) <= lpAddress) &&
       (pvVar4 = VirtualAlloc(lpAddress,dwSize,0x1000,4), pvVar4 != (LPVOID)0x0)) {
      VirtualProtect(lpAddress,dwSize,0x104,&local_18);
    }
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

