// rea decompile_all
// name: FUN_0046ef48
// address: 0x46ef48
// body: available
// range: 0x46ef48-0x46efc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ef48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *_Format;
  int iVar1;
  undefined4 local_5c [3];
  char local_50 [68];
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)local_5c;
  local_5c[0] = param_1;
  _Format = (char *)FUN_0046f991(param_6,param_7,param_2,param_3);
  iVar1 = _sprintf_s(local_50,0x40,_Format);
  FUN_0046f9f6(local_5c[0],param_4,param_5,iVar1);
  __security_check_cookie(local_c ^ (uint)local_5c);
  return;
}

