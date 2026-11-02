// rea decompile_all
// name: FUN_10004380
// address: 0x10004380
// body: available
// range: 0x10004380-0x10004437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10004380(int *param_1)

{
  bool bVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  
  if (*param_1 != 0) {
    return 1;
  }
  hModule = LoadLibraryW(L"setupapi.dll");
  *param_1 = (int)hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"SetupDiGetClassDevsA");
    param_1[1] = (int)pFVar2;
    pFVar3 = GetProcAddress((HMODULE)*param_1,"SetupDiDestroyDeviceInfoList");
    param_1[2] = (int)pFVar3;
    pFVar4 = GetProcAddress((HMODULE)*param_1,"SetupDiEnumDeviceInterfaces");
    param_1[3] = (int)pFVar4;
    pFVar5 = GetProcAddress((HMODULE)*param_1,"SetupDiGetDeviceInterfaceDetailA");
    param_1[4] = (int)pFVar5;
    bVar1 = pFVar5 != (FARPROC)0x0 &&
            (pFVar4 != (FARPROC)0x0 && (pFVar3 != (FARPROC)0x0 && pFVar2 != (FARPROC)0x0));
    pFVar6 = GetProcAddress((HMODULE)*param_1,"SetupDiEnumDeviceInfo");
    param_1[5] = (int)pFVar6;
    if (pFVar6 == (FARPROC)0x0) {
      bVar1 = false;
    }
    else if (pFVar5 != (FARPROC)0x0 &&
             (pFVar4 != (FARPROC)0x0 && (pFVar3 != (FARPROC)0x0 && pFVar2 != (FARPROC)0x0))) {
      return bVar1;
    }
    if ((HMODULE)*param_1 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    return bVar1;
  }
  return 0;
}

