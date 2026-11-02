// rea decompile_all
// name: __set_error_mode
// address: 0x5c6a09
// body: available
// range: 0x5c6a09-0x5c6a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_0095ca3c;
      DAT_0095ca3c = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_0095ca3c;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}

