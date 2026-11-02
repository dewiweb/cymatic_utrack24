// rea decompile_all
// name: FUN_00612250
// address: 0x612250
// body: available
// range: 0x612250-0x612360 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00612250(DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4,DWORD param_5,
                 DWORD param_6)

{
  undefined4 *puVar1;
  HANDLE hFile;
  FILETIME *lpCreationTime;
  BOOL BVar2;
  FILETIME *lpLastAccessTime;
  FILETIME *lpLastWriteTime;
  
  puVar1 = (undefined4 *)FUN_00458890();
  hFile = CreateFileW((LPCWSTR)*puVar1,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    if (((int)param_2 < 1) && (((int)param_2 < 0 || (param_1 == 0)))) {
      lpLastWriteTime = (FILETIME *)0x0;
    }
    else {
      _param_1 = (FILETIME)
                 __allmul(param_1 + 0x30b66800,param_2 + 0xa97 + (uint)(0xcf4997ff < param_1),10000,
                          0);
      lpLastWriteTime = (FILETIME *)&param_1;
    }
    if (((int)param_4 < 1) && (((int)param_4 < 0 || (param_3 == 0)))) {
      lpLastAccessTime = (FILETIME *)0x0;
    }
    else {
      _param_3 = (FILETIME)
                 __allmul(param_3 + 0x30b66800,param_4 + 0xa97 + (uint)(0xcf4997ff < param_3),10000,
                          0);
      lpLastAccessTime = (FILETIME *)&param_3;
    }
    if (((int)param_6 < 1) && (((int)param_6 < 0 || (param_5 == 0)))) {
      lpCreationTime = (FILETIME *)0x0;
    }
    else {
      _param_5 = (FILETIME)
                 __allmul(param_5 + 0x30b66800,param_6 + 0xa97 + (uint)(0xcf4997ff < param_5),10000,
                          0);
      lpCreationTime = (FILETIME *)&param_5;
    }
    BVar2 = SetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
    CloseHandle(hFile);
    return BVar2 != 0;
  }
  return false;
}

