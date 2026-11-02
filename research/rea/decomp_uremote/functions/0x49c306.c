// rea decompile_all
// name: FUN_0049c306
// address: 0x49c306
// body: available
// range: 0x49c306-0x49c39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c306(undefined4 param_1,undefined1 param_2,char *param_3)

{
  uint uVar1;
  size_t sVar2;
  size_t _Size;
  char *in_ECX;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_46 [62];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  sVar2 = _strlen(param_3);
  _Size = _strlen(in_ECX);
  uVar1 = _Size + 2 + sVar2;
  if (uVar1 < 0x41) {
    local_48 = param_2;
    _memcpy(&local_47,param_3,sVar2 + 1);
    _memcpy(auStack_46 + sVar2,in_ECX,_Size);
    FUN_0049adf3(&local_48,uVar1);
  }
  else {
    FUN_00491216();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

