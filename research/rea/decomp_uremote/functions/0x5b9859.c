// rea decompile_all
// name: __errcode
// address: 0x5b9859
// body: available
// range: 0x5b9859-0x5b988c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2008 Release */

char __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}

