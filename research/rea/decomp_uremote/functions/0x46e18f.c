// rea decompile_all
// name: std::basic_streambuf<char,std::char_traits<char>_>::xsputn
// address: 0x46e18f
// body: available
// range: 0x46e18f-0x46e20b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::xsputn(char const *,int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsputn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if (param_2 < 1) {
        return local_8;
      }
      if (**(int **)(this + 0x24) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = **(int **)(this + 0x34);
      }
      if (iVar1 < 1) break;
      iVar2 = iVar1;
      if (param_2 < iVar1) {
        iVar2 = param_2;
      }
      Copy_s(**(int **)(this + 0x24),iVar1,param_1,iVar2);
      **(int **)(this + 0x34) = **(int **)(this + 0x34) - iVar2;
      local_8 = local_8 + iVar2;
      param_2 = param_2 - iVar2;
      param_1 = param_1 + iVar2;
      **(int **)(this + 0x24) = **(int **)(this + 0x24) + iVar2;
    }
    iVar1 = (**(code **)(*(int *)this + 4))(*param_1);
    if (iVar1 == -1) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = param_2 + -1;
  }
  return local_8;
}

