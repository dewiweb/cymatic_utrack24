// rea decompile_all
// name: FUN_004325a0
// address: 0x4325a0
// body: available
// range: 0x4325a0-0x432734 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004325a0(void)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD dwIndex;
  DWORD local_c1c;
  HKEY local_c18;
  DWORD local_c14;
  HKEY local_c10;
  HKEY local_c0c;
  BYTE local_c08 [2048];
  WCHAR local_408 [512];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_c0c = (HKEY)0x0;
  LVar1 = RegOpenKeyW((HKEY)0x80000000,L"clsid",&local_c0c);
  if (LVar1 == 0) {
    dwIndex = 0;
    iVar2 = RegEnumKeyW(local_c0c,0,local_408,0x200);
    while (iVar2 == 0) {
      dwIndex = dwIndex + 1;
      iVar2 = FUN_0045df30(local_c10->unused,local_408);
      if (iVar2 == 0) {
        LVar1 = RegOpenKeyExW(local_c0c,local_408,0,0x20019,&local_c10);
        if (LVar1 == 0) {
          LVar1 = RegOpenKeyExW(local_c10,L"InprocServer32",0,0x20019,&local_c18);
          if (LVar1 == 0) {
            _memset(local_c08,0,0x800);
            local_c14 = 1;
            local_c1c = 0x800;
            RegQueryValueExW(local_c18,(LPCWSTR)0x0,(LPDWORD)0x0,&local_c14,local_c08,&local_c1c);
            RegCloseKey(local_c18);
          }
          RegCloseKey(local_c10);
        }
        break;
      }
      iVar2 = RegEnumKeyW(local_c0c,dwIndex,local_408,0x200);
    }
    RegCloseKey(local_c0c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

