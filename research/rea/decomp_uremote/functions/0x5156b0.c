// rea decompile_all
// name: FUN_005156b0
// address: 0x5156b0
// body: available
// range: 0x5156b0-0x515725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005156b0(LPCWSTR param_1,LPCWSTR param_2,LPBYTE param_3,LPDWORD param_4)

{
  int iVar1;
  HKEY local_14;
  LSTATUS local_10;
  uint local_c;
  DWORD local_8;
  
  local_c = 0x20019;
  iVar1 = FUN_00514f80();
  if (iVar1 != 0) {
    local_c = local_c | 0x100;
  }
  local_10 = RegOpenKeyExW((HKEY)0x80000002,param_1,0,local_c,&local_14);
  if (local_10 == 0) {
    local_8 = 3;
    local_10 = RegQueryValueExW(local_14,param_2,(LPDWORD)0x0,&local_8,param_3,param_4);
  }
  return local_10 == 0;
}

