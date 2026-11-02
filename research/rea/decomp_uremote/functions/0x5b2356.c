// rea decompile_all
// name: __get_timezone
// address: 0x5b2356
// body: available
// range: 0x5b2356-0x5b238e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __get_timezone
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Timezone = DAT_00955c48;
    eVar2 = 0;
  }
  return eVar2;
}

