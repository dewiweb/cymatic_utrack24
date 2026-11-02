// rea decompile_all
// name: try_cor_exit_process
// address: 0x4c5838
// body: available
// range: 0x4c5838-0x4c58a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl try_cor_exit_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl try_cor_exit_process(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_c = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",&local_c);
  if ((BVar1 != 0) && (pFVar2 = GetProcAddress(local_c,"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    guard_check_icall(param_1);
    (*pFVar2)();
  }
  if (local_c != (HMODULE)0x0) {
    FreeLibrary(local_c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

