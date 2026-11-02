// rea decompile_all
// name: FUN_00515140
// address: 0x515140
// body: available
// range: 0x515140-0x5151d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00515140(LPCWSTR param_1,LPCWSTR param_2,byte param_3)

{
  int iVar1;
  uint local_1c;
  HKEY local_18;
  LSTATUS local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0x20006;
  iVar1 = FUN_00514f80();
  if (iVar1 != 0) {
    local_10 = local_10 | 0x100;
  }
  local_14 = RegCreateKeyExW((HKEY)0x80000002,param_1,0,(LPWSTR)0x0,0,local_10,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_18,(LPDWORD)0x0);
  if (local_14 == 0) {
    local_c = 4;
    local_8 = 4;
    local_1c = (uint)param_3;
    local_14 = RegSetValueExW(local_18,param_2,0,4,(BYTE *)&local_1c,4);
    RegCloseKey(local_18);
  }
  return local_14 == 0;
}

