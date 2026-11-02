// rea decompile_all
// name: std::exception::what
// address: 0x514810
// body: available
// range: 0x514810-0x51483a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual char const * __thiscall std::exception::what(void)const 
   
   Library: Visual Studio */

char * __thiscall std::exception::what(exception *this)

{
  char *local_c;
  
  if (*(int *)(this + 4) == 0) {
    local_c = (char *)0x0;
  }
  else {
    local_c = *(char **)(this + 0x3c);
  }
  return local_c;
}

