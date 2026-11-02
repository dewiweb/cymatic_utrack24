// rea decompile_all
// name: std::basic_streambuf<char,std::char_traits<char>_>::uflow
// address: 0x46e0dd
// body: available
// range: 0x46e0dd-0x46e101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::uflow(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x10))();
  if (iVar2 == -1) {
    return -1;
  }
  **(int **)(this + 0x30) = **(int **)(this + 0x30) + -1;
  pbVar1 = (byte *)**(int **)(this + 0x20);
  **(int **)(this + 0x20) = (int)(pbVar1 + 1);
  return (uint)*pbVar1;
}

