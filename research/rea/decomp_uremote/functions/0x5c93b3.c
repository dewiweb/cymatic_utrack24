// rea decompile_all
// name: _TestDefaultLanguage
// address: 0x5c93b3
// body: available
// range: 0x5c93b3-0x5c9426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2008 Release */

void _TestDefaultLanguage(uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(), param_1 != uVar2)) && (param_2 != 0)) {
    _Str = (char *)*in_ECX;
    _GetPrimaryLen();
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

